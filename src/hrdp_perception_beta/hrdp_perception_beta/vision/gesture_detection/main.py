#!/usr/bin/python3.8

import rclpy
from .gesture_detection import GestureDetection


def main():
    rclpy.init(args = None)

    gesture_detection = GestureDetection()

    rclpy.spin(gesture_detection)

    gesture_detection.terminate()
    rclpy.shutdown()


if __name__ == "__main__":
    main()
    





