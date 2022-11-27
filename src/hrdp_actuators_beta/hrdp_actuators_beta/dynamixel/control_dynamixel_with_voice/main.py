#!/usr/bin/python3.8

import rclpy
from .control_dynamixel_with_voice import ControlDynamixelWithVoice
    

def main():
    rclpy.init(args = None)

    control_dynamixel_with_voice = ControlDynamixelWithVoice()

    rclpy.spin(control_dynamixel_with_voice)

    control_dynamixel_with_voice.destroy_node()
    rclpy.shutdown()

    
if __name__ == '__main__':
    main()