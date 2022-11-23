import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from .camera.rgb_camera import RGBRealsenseCamera
# from .camera.rgb_camera import RGBDRealsenseCamera
from cv_bridge import CvBridge
import cv2
from .lidar.lidar import *
from .supersonic.supersonic import *

class Sensors(Node):
    """
    Sensors
    =======
    1. CameraPublisher
    """
    def __init__(self):
        super().__init__("sensors")
        self.qos_policy = rclpy.qos.QoSProfile(
            reliability = rclpy.qos.ReliabilityPolicy.BEST_EFFORT,
            history = rclpy.qos.HistoryPolicy.KEEP_LAST,
            depth = 1
        )
        self.initialize_camera()
        

    def initialize_camera(self):
        self.camera_publisher = self.create_publisher(
            Image,
            '/sensor/rgb_camera/rgb_frame',
            self.qos_policy 
        )

        self.rgb_camera = RGBRealsenseCamera()
        self.br = CvBridge()

        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.camera_callback)

        self.get_logger().info("Camera Publisher initialized!")


    def camera_callback(self):
        success, raw_data = self.rgb_camera.get_frame_stream()
        if success:
            # cv2.imshow('hrdp_sensors_beta_camera_streaming', cv2.flip(raw_data, 1))
            print("Frame Streaming:")
            print(raw_data)
            
            self.camera_publisher.publish(
                self.br.cv2_to_imgmsg(raw_data)
            )
            self.get_logger().info(f"Camera Publisher publishing state is : {success}, {raw_data.shape}")
        self.get_logger().info(f"Camera Publisher publishing state is : {success}")


    def run(self):
        rclpy.spin_once(self, timeout_sec = 0.1)

    def terminate(self):
        self.destroy_node()

def main():
    rclpy.init(args = None)
    sensors_node = Sensors()

    while True:
        try:
            sensors_node.run()
        except KeyboardInterrupt:
            break
    sensors_node.terminate()
    rclpy.shutdown()

if __name__ == "__main__":
    main()