#!/usr/bin/python3.8

import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from sensor_msgs.msg import Image, CompressedImage
from std_msgs.msg import String
from .gesture_transformer import GestureTransformer
import numpy as np
import cv2


class GestureDetection(Node):
    """
    GestureDetection
    ===================
    1. Subscribed to RGB image topic : "/hrdp_sensors_beta/rgbd_camera/rgb_frame"
    2. Apply transformer and detect gesture on behalf of hand pose detection from mediapipe
    3. Publish to perception topic : "/hrdp_perception_beta/gesture_detection"
    """


    def __init__(self):
        super().__init__('gesture_detection_node')

        self.image = None
        self.image_streaming_state = False

        self.this_gesture = None

        self.br = CvBridge()

        qos_policy = rclpy.qos.QoSProfile(reliability=rclpy.qos.ReliabilityPolicy.BEST_EFFORT,
                                        history=rclpy.qos.HistoryPolicy.KEEP_LAST,
                                        depth=1)

        self.publisher = self.create_publisher(
            String,
            "/hrdp_perception_beta/gesture_detection",
            qos_policy
        )

        self.subscriber = self.create_subscription(
            Image,
            "/hrdp_sensors_beta/rgbd_camera/rgb_frame",
            self.subscriber_callback,
            qos_policy,
        )

        self.gesture_detector = GestureTransformer()

        self.update_timer = self.create_timer(
            0.010,
            self.timer_callback
        )

        self.get_logger().info(f"Gesture detection node initialized!")
        

    def subscriber_callback(self, msg):
        self.image = self.br.imgmsg_to_cv2(msg)
        self.get_logger().info(f"Camera subscriber receiving : {self.image.shape}")

        self.image_streaming_state = True


    def timer_callback(self):
        if self.image_streaming_state:
            self.publish_gesture()

    
    def publish_gesture(self):
        if self.image:
            self.this_gesture = self.gesture_detector.detect(self.image)

            msg = String()
            msg.data = self.this_gesture

            self.publisher.publish(msg)

    
    def run(self):
        rclpy.spin_once(self, timeout_sec= 1)

        
    def terminate(self):
        self.destroy_node()


 

# # WHEN RUNNING WITH DIRECT CAMERA CONNECTION WITH REMOTE PC (HIGHER RESOLUTION AND FPS)

# import pyrealsense2.pyrealsense2 as rs

# class VanillaRealsenseCamera():
#     def __init__(self):
#         self.pipeline = rs.pipeline()
#         config = rs.config()
#         config.enable_stream(rs.stream.color, 1280, 720, rs.format.bgr8, 30)
#         self.pipeline.start(config)

#     def run(self):
#         frames = self.pipeline.wait_for_frames()
#         rgb_frame = frames.get_color_frame()
#         self.received_data = np.asanyarray(rgb_frame.get_data())


# if __name__ == "__main__":
#     rgb_realsense_camera = VanillaRealsenseCamera()

#     while True:
#         rgb_realsense_camera.run()
#         print(rgb_realsense_camera.received_data)
