import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
# from rgbd_camera import RGBDRealsenseCamera
from rgb_camera import RGBRealsenseCamera

class CameraPublisher(Node):
    """
    CameraPublisher
    ===============
    1. Get camera data using Intel Realsense SDK (Python 3)
    2. Publish RGB frame to designated topic
    """
    def __init__(self):

        super().__init__('camera_publisher')
        qos_policy = rclpy.qos.QosProfile(
            reliability = rclpy.qos.Reliability.BEST_EFFORT,
            history = rclpy.qos.HistoryPolicy.KEEP_LAST,
            depth = 1
        )
        self.publisher = self.create_publisher(
            Image,
            'sensor/rgbd_camera/rgb_frame',
            qos_policy 
        )

        self.rgb_camera = RGBRealsenseCamera()

        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.timer_callback)

        self.get_logger().info("Camera Publisher initialized!")
    
    def timer_callback(self):
        msg = Image()
        success, msg.data = self.rgb_camera.get_frame_stream()

        self.get_logger().info(f"Camera Publisher publishing state is : {success}")

    def run(self):
        rclpy.spin_once(self, timeout_sec = 0.1)

    def terminate(self):
        self.destroy_node()
