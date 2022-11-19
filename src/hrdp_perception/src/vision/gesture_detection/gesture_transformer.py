import numpy as np
import sys
import time
import os
from gesture_detection_constants import *

# DEPENDENCIES #

import cv2
import mediapipe as mp
import tensorflow as tf # (or somehow, tensorflowlite)

class GestureTransformer():
    """
    GestureTransformer
    ==================
    1. Pretrained transformer.tflite model 
    2. Gets RGB image streaming as input and detected gesture labels as ouput.
    3. dependencies : numpy, sys, time, os, opencv 4.*, mediapipe, tensorflowlite
    """
    def __init__(self):
        self.seq_length = seq_length
        self.MODEL_PATH = MODEL_PATH

        self.min_detection_confidence = min_detection_confidence
        self.min_tracking_confidence = min_tracking_confidence
        self.max_num_hands = max_num_hands

        self.upper_thres = upper_thres
        self.lower_thres = lower_thres

        self.seq = []
        self.action_seq = []
        self.last_action = None

        self.actions = [
            'come',
            'go',
            'stop',
            'one',
            'two',
            'three',
            'four',
            'good',
            'nothing',
            'five'
        ]

        self.model = None # tf.load_model(self.MODEL_PATH) # get .tflite model here

        
    def get_hand_model(self):
        self.mp_hands = mp.solutions.hands
        self.mp_drawing = mp.solutions.drawing_utils
        self.hands = self.mp_hands.Hands(
            max_num_hands=1,
            min_detection_confidence=0.8,
            min_tracking_confidence=0.6
        )

    def get_detection_model(self):
        self.model = tf.lite.Interpreter(model_path=self.MODEL_PATH)
        self.input_details = self.model.get_input_details()
        self.output_details = self.model.get_output_details()

    def get_ready(self):
        self.get_hand_model()
        self.get_detection_model()
        print(f"[INFO] Gesture Transformer initialized!")
    
    def detect(self, img, last_action = 'nothing'):
        this_action = 'nothing'
        # cv2.imshow('img', img)

        img = cv2.flip(img, 1)
        img = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
        result = self.hands.process(img)
        img = cv2.cvtColor(img, cv2.COLOR_RGB2BGR)


        if result.multi_hand_landmarks is not None:
            for res in result.multi_hand_landmarks:
                joint = np.zeros((21, 4))
                for j, lm in enumerate(res.landmark):
                    joint[j] = [lm.x, lm.y, lm.z, lm.visibility]

                # Compute angles between joints
                v1 = joint[[0,1,2,3,0,5,6,7,0,9,10,11,0,13,14,15,0,17,18,19], :3] # Parent joint
                v2 = joint[[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20], :3] # Child joint
                v = v2 - v1 # [20, 3]

                # Normalize v
                v = v / np.linalg.norm(v, axis=1)[:, np.newaxis]

                # Get angle using arcos of dot product
                angle = np.arccos(np.einsum('nt,nt->n',
                    v[[0,1,2,4,5,6,8,9,10,12,13,14,16,17,18],:], 
                    v[[1,2,3,5,6,7,9,10,11,13,14,15,17,18,19],:])) # [15,]

                angle = np.degrees(angle) # Convert radian to degree

                d = np.concatenate([joint.flatten(), angle])

                self.seq.append(d)

                self.mp_drawing.draw_landmarks(img, res, self.mp_hands.HAND_CONNECTIONS)

                if len(self.seq) < seq_length:
                    continue

                input_data = np.expand_dims(np.array(self.seq[-seq_length:], dtype=np.float32), axis=0)
                
                self.model.allocate_tensors()
                self.model.set_tensor(self.input_details[0]['index'], input_data)
                self.model.invoke()
                y_pred = self.model.get_tensor(self.output_details[0]['index']).squeeze()

                i_pred = int(np.argmax(y_pred))
                conf = y_pred[i_pred]

                if conf > self.upper_thres: 
                
                    action = self.actions[i_pred]
                    self.action_seq.append(action)

                    if len(self.action_seq) >= 5: # ONLY when the last 5 gesture seq is identical, it would be considered as a valid gesture! Else, show "?" sign
                        this_action = '?'
                        if self.action_seq[-1] == self.action_seq[-2] == self.action_seq[-3] == self.action_seq[-4] == self.action_seq[-5]: # ONLY when the last 3 gesture seq is identical, it would be considered as a valid gesture! Else, show "?" sign
                            this_action = action


                elif conf < self.lower_thres:
                    this_action = '?'

                if self.last_action == None:
                    self.this_second = time.time()
                    self.last_action = this_action
                
                if self.last_action != this_action:
                    self.this_second = time.time()
                    self.last_action = this_action

                elif self.last_action == this_action:
                    time_past = time.time() - self.this_second

                    if time_past >= CONTINUOUS_LABEL_TIME:
                        print(f"[INFO] Same action for {time_past} seconds! Detected Gesture is: {this_action.upper()}")


        return this_action