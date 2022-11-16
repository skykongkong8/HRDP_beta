import rclpy
from camera.camera_action_server import CameraActionServer
from lidar import *


class SensorManager:
    """
    SensorManager
    =============
    1. Manages all the sensors. WTF@~#$!
    """
    def __init__(self):
        self.camera_action_server = CameraActionServer()
        self.lidar_action_server = None

    def run(self):
        self.camera_action_server.run()
        # self.lidar_action_server.run()

    def terminate(self):
        self.camera_action_server.terminate()
        # self.lidar_action_server.terminate()
        