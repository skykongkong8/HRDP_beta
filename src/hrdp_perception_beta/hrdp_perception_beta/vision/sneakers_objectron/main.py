#!/usr/bin/python3.8

import rclpy
from .sneakers_objectron import SneakersObjectron


def main():
    rclpy.init(args = None) 

    sneakers_objectron = SneakersObjectron()

    rclpy.spin(sneakers_objectron)

    sneakers_objectron.destroy_node()
    rclpy.shutdown()
    

if __name__ == "__main__":
    main()