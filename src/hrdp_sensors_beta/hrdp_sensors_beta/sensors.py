import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
# from .camera.rgb_camera import RGBRealsenseCamera
# from .camera.d_camera import DRealsenseCamera
from .camera.rgbd_camera import RGBDRealsenseCamera
from cv_bridge import CvBridge
from .lidar.lidar import *
from .supersonic.supersonic import *


class Sensors(Node):
    """
    Sensors
    =======
    ####  In charge of all the sensors of current system.

    1. Publishes RGB sensor data to '/hrdp_sensors_beta/rgbd_camera/rgb_frame'
    2. Publishes Depth sensor data to '/hrdp_sensors_beta/rgbd_camera/d_frame'
    3. Please add-on other sensors like : lidar, supersonic, imu ... etc
    4. Check QoS Policy for sensor signal latencies
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
        self.rgb_camera_publisher = self.create_publisher(
            Image,
            '/hrdp_sensors_beta/rgbd_camera/rgb_frame',
            self.qos_policy 
        )


        self.d_camera_publisher = self.create_publisher(
            Image,
            '/hrdp_sensors_beta/rgbd_camera/d_frame',
            self.qos_policy
        )

        # self.rgb_camera = RGBRealsenseCamera()
        # self.d_camera = DRealsenseCamera()
        self.rgbd_camera = RGBDRealsenseCamera()

        self.br = CvBridge()

        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.camera_callback)

        self.get_logger().info("Camera Publishers initialized!")


    def camera_callback(self):
        success, rgb_img, depth_img = self.rgbd_camera.get_frame_stream()

        if success:
            self.rgb_camera_publisher.publish(
                self.br.cv2_to_imgmsg(rgb_img)
            )

            self.get_logger().info(f"RGB Camera Publisher publishing state is : {success}, {rgb_img.shape}")

            self.d_camera_publisher.publish(
                self.br.cv2_to_imgmsg(depth_img)
            )

            self.get_logger().info(f"Depth Camera Publisher publishing state is : {success}, {depth_img.shape}")

        else:
            self.get_logger().info(f"RGB Camera Publisher publishing state is : {success}")
            self.get_logger().info(f"Depth Camera Publisher publishing state is : {success}")


    # CALLBACK FOR ONLY RGB FRAME
    # def camera_callback(self):
    #     success_rgb, raw_data_rgb = self.rgb_camera.get_frame_stream()

    #     if success_rgb:
    #         self.rgb_camera_publisher.publish(
    #             self.br.cv2_to_imgmsg(raw_data_rgb)
    #         )

    #         self.get_logger().info(f"RGB Camera Publisher publishing state is : {success_rgb}, {raw_data_rgb.shape}")
    #     else:
    #         self.get_logger().info(f"RGB Camera Publisher publishing state is : {success_rgb}")

            
    # CALLBACK FOR ONLY DEPTH FRAME    
    # def camera_callback(self):
    #     success_d, raw_data_d = self.d_camera.get_frame_stream()

    #     if success_d:
    #         self.d_camera_publisher.publish(
    #             self.br.cv2_to_imgmsg(raw_data_d)
    #         )

    #         self.get_logger().info(f"Depth Camera Publisher publishing state is : {success_d}, {raw_data_d.shape}")
    #     else:
    #         self.get_logger().info(f"Depth Camera Publisher publishing state is : {success_d}")


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