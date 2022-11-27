import rclpy
from rclpy.node import Node
from rclpy.qos import QoSProfile
from std_msgs.msg import String
from hrdp_human_interface_beta.organs.ears import Ears
from hrdp_human_interface_beta.organs.mouth import universal_talk
from .constant_variables import *

LANGUAGE : int = KOREAN

class UserVoiceListener(Node):
    """
    UserVoiceListener
    ===============
    1. Language setting
    2. Speak and recognize
    3. Publish to topic: '/hrdp_human_interface_beta/user_voice'
    """


    def __init__(self):
        super().__init__("user_voice_listener")
        
        qos_policy = QoSProfile(
            depth = 10
        )

        self.publisher = self.create_publisher(
            String,
            '/hrdp_human_interface_beta/user_voice',
            qos_policy
        )

        self.ears = Ears()
        self.user_words = String()

        self.get_logger().info('User voice listener node initialized!')


    def listen_and_repeat(self):
        what_you_said : str = self.ears.listen(LANGUAGE)
        
        if what_you_said:
            self.get_logger().info(f"You said : {what_you_said}")
            self.user_words.data = what_you_said
            return True

        else:
            self.get_logger().info("User voice listener could not understand what you said. Please try again...")
            return False
        

    def do_publishing(self):
        self.publisher.publish(self.user_words)

        
    def run(self):
        flag = self.listen_and_repeat()
        if flag:
            self.do_publishing()
            self.get_logger().info(f"Successfully published your words : {self.user_words.data}")
