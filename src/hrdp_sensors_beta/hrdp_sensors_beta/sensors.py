import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from camera.rgb_camera import RGBRealsenseCamera
# from camera.rgb_camera import RGBDRealsenseCamera
from lidar.lidar import *
from supersonic.supersonic import *

class Sensors(Node):
    """
    Sensors
    =======
    1. CameraPublisher
    """
    def __init__(self):
        super().__init__("sensors")
        self.qos_policy = rclpy.qos.QosProfile(
            reliability = rclpy.qos.Reliability.BEST_EFFORT,
            history = rclpy.qos.HistoryPolicy.KEEP_LAST,
            depth = 1
        )
        self.initialize_camera()
        

    def initialize_camera(self):
        self.camera_publisher = self.create_publisher(
            Image,
            'sensor/rgb_camera/rgb_frame',
            self.qos_policy 
        )

        self.rgb_camera = RGBRealsenseCamera()

        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.camera_callback)

        self.get_logger().info("Camera Publisher initialized!")


    def camera_callback(self):
        msg = Image()
        success, msg.data = self.rgb_camera.get_frame_stream()

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
    sensors_node.termiante()
    rclpy.shutdown()

if __name__ == "__main__":
    main()