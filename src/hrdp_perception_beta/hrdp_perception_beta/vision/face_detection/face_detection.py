#!/usr/bin/python3.8

import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, CompressedImage
from example_interfaces.srv import SetBool
from cv_bridge import CvBridge
import mediapipe as mp
import numpy as np
import cv2


class FaceDetector:
    """
    FaceDetector
    ============
    face detection using mediapipe solutions.

    How to use:

    face_detector = FaceDetector()

    num_faces = face_detector.detect(image : np.array()) # both video streaming & image
    """


    def __init__(self):
        self.face_counts = 0
        self.mp_face_detection = mp.solutions.face_detection

        
    def detect(self, image):
        with self.mp_face_detection.FaceDetection(
            model_selection=1, min_detection_confidence=0.5) as face_detection:

            image.flags.writeable = False
            # image = cv2.cvtColor(image, cv2.COLOR_BGR2RGB)

            results = face_detection.process(image)

            if results.detections:
                self.face_counts = len(results.detections)
            # cv2.imwrite(f'{os.getcwd()}/processed_raw_image'+ '.png', image)

        return self.face_counts


class FaceDetection(Node):
    """
    FaceDetection
    =============
    * Overall progress would be like:
    1. Subscribed to '/hrdp_sensors_beta/rgbd_camera/rgb_frame' 
    2. Decode Image sensor message to numpy array format.
    3. Apply face detection and compute total face in the camera streaming image
    4. Create face detection service and wait for the client service call : '/hrdp_perception_beta/face_detection'

    TIP : Open a new terminal after running this node and insert:
    ros2 service call /hrdp_perception_beta/face_detection example_interfaces/srv/SetBool "{data: True}"
    
    """


    def __init__(self):
        super().__init__('face_detection_node')

        self.qos_policy = rclpy.qos.QoSProfile(reliability=rclpy.qos.ReliabilityPolicy.BEST_EFFORT,
                                        history=rclpy.qos.HistoryPolicy.KEEP_LAST,
                                        depth=1)    

        self.initialize_subscriber()
        self.face_detector = FaceDetector()
        self.face_num = 0

        self.initialize_service()

        self.get_logger().info('Face detection node initialized!')


    def initialize_subscriber(self):
        self.br = CvBridge()

        # 'IMAGE' SUBSCRIBER (WHEN RUNNING ON THE ROBOT)
        self.subscriber = self.create_subscription(
            Image,
            "/hrdp_sensors_beta/rgbd_camera/rgb_frame",
            self.subscriber_callback,
            self.qos_policy,
        )

        # 'COMPRESSED IMAGE' SUBSCRIBER (WHEN RUNNING REMOTELY FROM PC WITH SAME ROS DOMAIN ID)
        # self.subscriber = self.create_subscription(
        #     CompressedImage,
        #     "/hrdp_sensors/rgbd_camera/rgb_frame",
        #     self.callback_for_compressed_image,
        #     qos_policy,
        # )
         

    def subscriber_callback(self, msg):
        self.image = self.br.imgmsg_to_cv2(msg)

        # self.get_logger().info(f"Camera subscriber receiving : {self.image.shape}")


    def callback_for_compressed_image(self, msg):
        """
        Just in case for CompressedImage situation : decoding process is needed...
        """
        msg = self.br.imgmsg_to_cv2(msg)

        as_array = np.asarray(msg)
        received_data = cv2.imdecode(as_array, cv2.IMREAD_COLOR)

        self.image = received_data
        
        # self.get_logger().info(f"Camera subscriber received : {received_data.shape}")


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


    def face_detection(self):
        self.get_logger().info(f'Detecting current {self.image.shape} image...')

        self.face_num = self.face_detector.detect(self.image)


    def initialize_service(self):
        self.srv = self.create_service(
            SetBool,
            "/hrdp_perception_beta/face_detection",
            self.execute_callback,
        )


    def execute_callback(self, request, response):
        # request.data : bool
        # response.success : bool, response.message : string
        response.success = False

        if request.data:
            self.get_logger().info('Face detection service processing service call request...')

            self.face_detection()

            response.message = str(self.face_num)
            response.success = True
            
        return response

        
    def run(self):
        rclpy.spin_once(self, timeout_sec = 1)
        self.face_detector.face_counts = 0
    

def main(args=None):
    rclpy.init(args=None)

    face_detection_node = FaceDetection()

    while True:
        try:
            face_detection_node.run()

        except KeyboardInterrupt:
            break
    
    face_detection_node.destroy_node()
    rclpy.shutdown()

    

if __name__ == "__main__":
    main()
    
