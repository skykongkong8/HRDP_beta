import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, CompressedImage
import numpy as np
import cv2


class RGBCameraSubscriber(Node):
    """
    RGBCameraSubscriber
    ===================
    1. Get raw image data from subscription
    2. Save it do received_data without reshaping
    """
    def __init__(self):
        super().__init__('rgb_camera_subscriber')

        self.image = None

        qos_policy = rclpy.qos.QoSProfile(reliability=rclpy.qos.ReliabilityPolicy.BEST_EFFORT,
                                        history=rclpy.qos.HistoryPolicy.KEEP_LAST,
                                        depth=1)

        self.last_image = np.random.random((720,1280,3)).astype(np.uint8)

        # 'IMAGE' SUBSCRIBER (WHEN RUNNING ON THE ROBOT)
        self.subscriber = self.create_subscription(
            Image,
            "/sensor/rgbd_camera/rgb_frame",
            self.callback,
            qos_policy,
        )

        # 'COMPRESSED IMAGE' SUBSCRIBER (WHEN RUNNING REMOTELY FROM PC WITH SAME ROS DOMAIN ID)
        # self.subscriber = self.create_subscription(
        #     CompressedImage,
        #     "/sensor/rgbd_camera/rgb_frame",
        #     self.callback_for_compressed_image,
        #     qos_policy,
        # )

        self.get_logger().info(f"RGB Camera Subscriber initialized!")
        
    def get_image(self):
        return self.image

    def callback(self, msg):
        self.image = np.asarray(msg.data)
        self.get_logger().info(f"Camera subscriber received : ({msg.height}, {msg.width})\nstep: {msg.step}")

    def callback_for_compressed_image(self, msg):
        as_array = np.asarray(msg.data)
        received_data = cv2.imdecode(as_array, cv2.IMREAD_COLOR)
        self.image = received_data
        self.get_logger().info(f"Camera subscriber received : {received_data.shape}")

    def upsample_image(self, image):
        scale_percent = 200 # 200%
        width = int(image.shape[1] * scale_percent / 100) 
        height = int(image.shape[0] * scale_percent / 100)
        dim = (width, height)

        resized_image = cv2.resize(image, dim ,interpolation=cv2.INTER_AREA)
        return resized_image

    def run(self):
        rclpy.spin_once(self, timeout_sec= 1)

    def terminate(self):
        self.destroy_node()


if __name__ == "__main__":
    rclpy.init(args = None)
    rgb_camera_subscriber = RGBCameraSubscriber()

    while True:
        try:
            rgb_camera_subscriber.run()
            # print(rgb_camera_subscriber.image)
        
        except KeyboardInterrupt:
            break
    rgb_camera_subscriber.terminate()
    rclpy.shutdown()





# # WHEN RUNNING WITH DIRECT CAMERA CONNECTION WITH REMOTE PC (HIGHER RESOLUTION AND FPS)

# import pyrealsense2.pyrealsense2 as rs

# class VanillaRealsenseCamera():
#     def __init__(self):
#         self.pipeline = rs.pipeline()
#         config = rs.config()
#         config.enable_stream(rs.stream.color, 1280, 720, rs.format.bgr8, 30)
#         self.pipeline.start(config)

#     def run(self):
#         frames = self.pipeline.wait_for_frames()
#         rgb_frame = frames.get_color_frame()
#         self.received_data = np.asanyarray(rgb_frame.get_data())


# if __name__ == "__main__":
#     rgb_realsense_camera = VanillaRealsenseCamera()

#     while True:
#         rgb_realsense_camera.run()
#         print(rgb_realsense_camera.received_data)
