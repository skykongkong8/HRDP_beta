import cv2
import mediapipe as mp
import numpy as np
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from geometry_msgs.msg import Twist
from sensor_msgs.msg import Image

MAX_SHOE_NUM = 1

class Sneakers3dDetecor:


    def __init__(self):
        self.objectron_result = None
        self.mp_objectron = mp.solutions.objectron

        
    def detect(self, image):
        with self.mp_objectron.Objectron(static_image_mode=False,
            max_num_objects=MAX_SHOE_NUM,
            min_detection_confidence=0.5,
            min_tracking_confidence=0.99,
            model_name='Shoe') as objectron:
        
            image.flags.writeable = False
            image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)
            results = objectron.process(image)

            image.flags.writeable = True
            image = cv2.cvtColor(image, cv2.COLOR_RGB2BGR)
            if results.detected_objects:
                for detected_object in results.detected_objects:
                    self.objectron_result = [
                        detected_object.landmarks_2d,
                        detected_object.rotation,
                        detected_object.translation
                    ]


                    
class SneakersObjectron(Node):
    def __init__(self):
        super().__init__('sneakers_objectron_node')
        self.qos_policy = rclpy.qos.QoSProfile(reliability=rclpy.qos.ReliabilityPolicy.BEST_EFFORT,
                                        history=rclpy.qos.HistoryPolicy.KEEP_LAST,
                                        depth=1)
        self.initialize_subscriber()
        
        self.sneakers_3d_detector = Sneakers3dDetecor()

        self.initialize_publisher()
        

    def initialize_subscriber(self):
        self.br = CvBridge()

        # 'IMAGE' SUBSCRIBER (WHEN RUNNING ON THE ROBOT)
        self.subscriber = self.create_subscription(
            Image,
            "/sensor/rgb_camera/rgb_frame",
            self.subscriber_callback,
            self.qos_policy,
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
        self.image = self.br.imgmsg_to_cv2(msg)
        # self.get_logger().info(f"Camera subscriber received : {self.image.shape}")
        self.get_logger().info(f"Received camera frame : {self.image}")

    def callback_for_compressed_image(self, msg):
        """
        Just in case for CompressedImage situation : decoding process is needed...
        """
        as_array = np.asarray(msg.data)
        received_data = cv2.imdecode(as_array, cv2.IMREAD_COLOR)
        self.image = received_data
        self.get_logger().info(f"Camera subscriber received : {received_data.shape}")


    def upsample_image(self, image):
        """
        Just in case for CompressedImage situation : upsampling process is needed...
        """
        scale_percent = 200 # 200%
        width = int(image.shape[1] * scale_percent / 100) 
        height = int(image.shape[0] * scale_percent / 100)
        dim = (width, height)

        resized_image = cv2.resize(image, dim ,interpolation=cv2.INTER_AREA)
        return resized_image

    
    def sneakers_objectron(self):
        flag = False
        self.get_logger().info(f'Detecting sneakers and estimating its position and rotation...')
        self.sneakers_3d_detector.detect()

        if self.sneakers_3d_detector.objectron_result:
            flag = True

        return flag


    def initialize_publisher(self):
        self.publisher = self.create_publisher(

        )

        
        





                
                    