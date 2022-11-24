#!/usr/bin/python3.8
import rclpy
from rclpy.qos import QoSProfile

def main():
    rclpy.init(args = None)

    node = rclpy.create_node('control_dynamixel_with_voice')

    
