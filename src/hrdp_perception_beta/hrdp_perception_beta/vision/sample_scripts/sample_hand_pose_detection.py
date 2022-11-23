import cv2
import mediapipe as mp
import pyrealsense2.pyrealsense2 as rs
import numpy as np
import os


mp_drawing = mp.solutions.drawing_utils
mp_drawing_styles = mp.solutions.drawing_styles
mp_hands = mp.solutions.hands

class VainllaRealsenseCamera:
    def __init__(self):
        self.pipeline = rs.pipeline()
        config = rs.config()
        config.enable_stream(rs.stream.color, 1280, 720, rs.format.bgr8, 30)
        self.pipeline.start(config)
    
    def __str__(self):
        return "Interface for Realsense Camera RGB frame streaming"
    
    def get_frame_stream(self):
        frames = self.pipeline.wait_for_frames()
        rgb_frame = frames.get_color_frame()

        rgb_image = np.asanyarray(rgb_frame.get_data())

        return True, rgb_image

    def release(self):
        self.pipline.stop()
        
camera = VainllaRealsenseCamera()

class HandPoseDetector:
    def __init__(self):
        pass
        



# For webcam input:
with mp_hands.Hands(
    model_complexity=0,
    min_detection_confidence=0.5,
    min_tracking_confidence=0.5) as hands:
  while True:
    try:
        success, image = camera.get_frame_stream()
        if not success:
            print("Ignoring empty camera frame.")
            # If loading a video, use 'break' instead of 'continue'.
            continue

        # To improve performance, optionally mark the image as not writeable to
        # pass by reference.
        image.flags.writeable = False
        image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
        results = hands.process(image)

        # Draw the hand annotations on the image.
        image.flags.writeable = True
        image = cv2.cvtColor(image, cv2.COLOR_RGB2BGR)
        if results.multi_hand_landmarks:
            for hand_landmarks in results.multi_hand_landmarks:
                mp_drawing.draw_landmarks(
                    image,
                    hand_landmarks,
                    mp_hands.HAND_CONNECTIONS,
                    mp_drawing_styles.get_default_hand_landmarks_style(),
                    mp_drawing_styles.get_default_hand_connections_style())
        # Flip the image horizontally for a selfie-view display.
        cv2.imshow('MediaPipe Hands', cv2.flip(image, 1))
        if cv2.waitKey(5) & 0xFF == 27:
            break
    except KeyboardInterrupt:
        break
