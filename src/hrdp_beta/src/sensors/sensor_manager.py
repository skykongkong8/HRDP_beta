import rclpy
from camera.camera_publisher import CameraPublisher
from lidar import *


class SensorManager:
    """
    SensorManager
    =============
    1. Manages all the sensors. WTF@~#$!
    """
    def __init__(self):
        self.camera_publisher = CameraPublisher()
        self.lidar_action_server = None

    def run(self):
        self.camera_publisher.run()
        # self.lidar_action_server.run()

    def terminate(self):
        self.camera_publisher.terminate()
        # self.lidar_action_server.terminate()
        