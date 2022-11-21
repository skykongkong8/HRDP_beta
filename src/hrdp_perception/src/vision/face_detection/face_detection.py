import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from hrdp_beta_actions.action import FaceDetection
from face_detector import FaceDetector
from sensor_msgs.msg import Image, CompressedImage
import numpy as np
import cv2

class FaceDetection(Node):
    def __init__(self):
        super().__init__('face_detection_node')

        self.initialize_subscriber()
        self.face_detector = FaceDetector()
        self.face_num = 0
        self.initialize_action_server()


    def initialize_subscriber(self):
        self.image = None

        qos_policy = rclpy.qos.QoSProfile(reliability=rclpy.qos.ReliabilityPolicy.BEST_EFFORT,
                                        history=rclpy.qos.HistoryPolicy.KEEP_LAST,
                                        depth=1)

        self.last_image = np.random.random((480,640,3)).astype(np.uint8)

        # 'IMAGE' SUBSCRIBER (WHEN RUNNING ON THE ROBOT)
        self.subscriber = self.create_subscription(
            Image,
            "/sensor/rgb_camera/rgb_frame",
            self.subscriber_callback,
            qos_policy,
        )

        # 'COMPRESSED IMAGE' SUBSCRIBER (WHEN RUNNING REMOTELY FROM PC WITH SAME ROS DOMAIN ID)
        # self.subscriber = self.create_subscription(
        #     CompressedImage,
        #     "/sensor/rgb_camera/rgb_frame",
        #     self.callback_for_compressed_image,
        #     qos_policy,
        # )
         
        self.get_logger().info(f"RGB Camera Subscriber initialized!")


    def subscriber_callback(self, msg):
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


    def face_detection(self):
        self.face_num = self.face_detector.detect(self.image)


    def initialize_action_server(self):
        self._action_server = ActionServer(
            self,
            FaceDetection,
            "hrdp_perception/face_detection",
            self.execute_callback     
        )


    def execute_callback(self, goal_handle):
        self.get_logger().info("Executing face detection action server...")
        
        feedback_msg = FaceDetection.Feedback()

        self.face_detection()

        feedback_msg.total_face_num = self.face_num
        self.get_logger().info(f"Detected face num : {feedback_msg.total_face_num}")
        goal_handle.publish_feedback(feedback_msg)

        criterion = goal_handle.request.input
        output = 0
        if self.face_num >= criterion:
            output = 1

        goal_handle.succeed()
        result = FaceDetection.Result()
        result.output = output

        return result

        
    def run(self):
        rclpy.spin_once(self, timeout_sec = 1)
    

    def terminate(self):
        self.destroy_node()



if __name__ == "__main__":
    rclpy.init(args=None)
    face_detection_node = FaceDetection()
    while True:
        try:
            face_detection_node.run()
        except KeyboardInterrupt:
            break
    face_detection_node.terminate()
    rclpy.shutdown()
