import cv2
import mediapipe as mp
import numpy as np
import rclpy
from rclpy.node import Node
from cv_bridge import CvBridge
from sensor_msgs.msg import Image
from std_msgs.msg import Float64MultiArray


# maximum number of shoes to apply 3D detection
MAX_SHOE_NUM = 1



class Sneakers3dDetecor:
    """
    Sneakers3dDetector
    ==================
    How to use:

    sneakers_3d_detector = Sneakers3dDetector()

    sneakers_3d_detector.detect( image : np.array )

    detected_results = sneakers_3d_detector.objectron_result

    """


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
                        # detected_object.landmarks_2d,
                        detected_object.rotation,
                        detected_object.translation
                    ]


                    
class SneakersObjectron(Node):
    """
    SneakersObjectron
    =================
    1. Subscribed to RGB image topic : "/sensor/rgb_camera/rgb_frame"
    2. Detects 3D objectron of a sneaker and compute its translation (1x3) and rotation (3x3) values
    3. Publishes both physical values via :
        * '/hrdp_perception_beta/shoe_3d_detection/translation'
        * '/hrdp_perception_beta/shoe_3d_detection/rotation'
    """


    def __init__(self):
        super().__init__('sneakers_objectron_node')

        self.image = None
        self.image_streaming_state = False

        self.qos_policy = rclpy.qos.QoSProfile(reliability=rclpy.qos.ReliabilityPolicy.BEST_EFFORT,
                                        history=rclpy.qos.HistoryPolicy.KEEP_LAST,
                                        depth=1)
        
        self.initialize_subscriber()
        
        self.sneakers_3d_detector = Sneakers3dDetecor()

        self.rotation_publisher = self.create_publisher(
            Float64MultiArray,
            '/hrdp_perception_beta/shoe_3d_detection/rotation'
        )

        self.translation_publisher = self.create_publisher(
            Float64MultiArray,
            '/hrdp_perception_beta/shoe_3d_detection/translation'
        )

        self.update_timer = self.create_timer(
            0.0010,
            self.timer_callback
        )

        self.get_logger().info('Sneakers objectron node initialized!')
        

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
        self.get_logger().info(f"Camera subscriber received : {self.image.shape}")

        self.image_streaming_state = True


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


    def set_publisher_messages(self):
        rotation = Float64MultiArray()
        translation = Float64MultiArray()

        detection_result = self.sneakers_3d_detector.objectron_result
        
        rotation.data = detection_result.rotation
        translation.data = detection_result.translation

        return rotation, translation

    
    def do_publishing(self):
        rotation, translation = self.set_publisher_messages()

        self.rotation_publisher.publish(rotation)
        self.translation_publisher.publish(translation)

    
    def timer_callback(self):
        if self.image_streaming_state:
            self.do_publishing()


    



        
        





                
                    