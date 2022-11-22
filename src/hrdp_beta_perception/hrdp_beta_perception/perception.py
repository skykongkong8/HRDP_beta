import rclpy
from vision.gesture_detection import GestureDetector
from vision.object_detection import *

class PerceptionManager:
    def __init__(self):
        self.gesture_detection = GestureDetector