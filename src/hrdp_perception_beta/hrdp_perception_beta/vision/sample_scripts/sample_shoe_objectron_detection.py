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
      continue

    image.flags.writeable = False
    image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
    results = objectron.process(image)

    image.flags.writeable = True
    image = cv2.cvtColor(image, cv2.COLOR_RGB2BGR)
    if results.detected_objects:
        for detected_object in results.detected_objects:
            mp_drawing.draw_landmarks(
              image, detected_object.landmarks_2d, mp_objectron.BOX_CONNECTIONS)
            mp_drawing.draw_axis(image, detected_object.rotation,
                                 detected_object.translation)
            # print(f"detected_object.landmarks_2d : {detected_object.landmarks_2d}")
            # print(f"detected_object.rotation : {detected_object.rotation}")
            # print(f"detected_object.translation : {detected_object.translation}")
            
    cv2.imshow('Sample Objectron Display', cv2.flip(image, 1))
    if cv2.waitKey(5) & 0xFF == 27:
      break

# earned data shape is as follows:
# """
#             detected_object.landmarks_2d : landmark {
#               x: 0.5101729035377502
#               y: 0.6404306888580322
#             }
#             landmark {
#               x: 0.6115990877151489
#               y: 0.6913644671440125
#             }
#             landmark {
#               x: 0.4373060464859009
#               y: 0.613743782043457
#             }
#             landmark {
#               x: 0.597723662853241
#               y: 0.6387505531311035
#             }
#             landmark {
#               x: 0.41731971502304077
#               y: 0.5615760087966919
#             }
#             landmark {
#               x: 0.5977671146392822
#               y: 0.7361617088317871
#             }
#             landmark {
#               x: 0.4039123058319092
#               y: 0.6660838723182678
#             }
#             landmark {
#               x: 0.582684338092804
#               y: 0.6748308539390564
#             }
#             landmark {
#               x: 0.37889596819877625
#               y: 0.5933163166046143
#             }

#             detected_object.rotation : [[-0.39624611 -0.28607664 -0.84410852]
#             [-0.41951647  0.95490348  0.4358438 ]
#             [ 0.81669772  0.07949647  0.31228349]]
#             detected_object.translation : [ 0.01053309 -0.14738743 -0.49543691]

#             """