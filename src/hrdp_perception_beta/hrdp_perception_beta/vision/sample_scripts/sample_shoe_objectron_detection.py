import cv2
import mediapipe as mp
import pyrealsense2.pyrealsense2 as rs
import numpy as np
mp_drawing = mp.solutions.drawing_utils
mp_objectron = mp.solutions.objectron

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

with mp_objectron.Objectron(static_image_mode=False,
                            max_num_objects=5,
                            min_detection_confidence=0.5,
                            min_tracking_confidence=0.99,
                            model_name='Shoe') as objectron:
  while True:
    success, image = camera.get_frame_stream()
    if not success:
      print("Ignoring empty camera frame.")
      # If loading a video, use 'break' instead of 'continue'.
      continue

    # To improve performance, optionally mark the image as not writeable to
    # pass by reference.
    image.flags.writeable = False
    image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
    results = objectron.process(image)

    # Draw the box landmarks on the image.
    image.flags.writeable = True
    image = cv2.cvtColor(image, cv2.COLOR_RGB2BGR)
    if results.detected_objects:
        for detected_object in results.detected_objects:
            mp_drawing.draw_landmarks(
              image, detected_object.landmarks_2d, mp_objectron.BOX_CONNECTIONS)
            mp_drawing.draw_axis(image, detected_object.rotation,
                                 detected_object.translation)
    # Flip the image horizontally for a selfie-view display.
    cv2.imshow('MediaPipe Objectron', cv2.flip(image, 1))
    if cv2.waitKey(5) & 0xFF == 27:
      break
