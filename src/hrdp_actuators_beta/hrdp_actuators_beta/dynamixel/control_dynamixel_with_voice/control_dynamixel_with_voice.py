import rclpy
from rclpy.qos import QoSProfile
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist
from ..dynamixel_constants import *
from time import sleep



class ControlDynamixelWithVoice(Node):
    """
    ControlDynamixelWithVoice
    =========================
    1. Subscribed to '/hrdp_human_interface_beta/user_voice'
    2. Interpret the user's intention with a simple logic
    3. Obey the user command by publishing to predetermined topics 
    """


    def __init__(self):
        super().__init__('control_dynamixel_with_voice')

        self.linear_velocity = 0.0
        self.angular_velocity = 0.0

        self.listening_state = False
        
        self.user_words = ''
        
        self.mode = NEUTRAL

        qos_policy = QoSProfile(
            depth = 10
        )

        self.cmd_vel_publisher = self.create_publisher(
            Twist,
            'cmd_vel',
            qos_policy
        )

        self.user_voice_subscriber = self.create_subscription(
            String,
            '/hrdp_human_interface_beta/user_voice',
            self.user_voice_callback,
            qos_policy
        )

        self.update_timer = self.create_timer(
            0.010,
            self.timer_callback
        )

        self.get_logger().info("Control Dynamixel With Voice Node has been initialized.")


    def user_voice_callback(self, msg):
        self.user_words = msg.data
        self.get_logger().info(f"Got user words : {msg.data}")
        
        self.listening_state = True

    
    def timer_callback(self):
        if self.listening_state:
            self.obey_user_voice()


    def split_string(self, string : str) -> str:
        return string.lower().split(' ') 


    def check_item(self, my_list, word) -> bool:
        flag = False

        for token in my_list:
            if word in token:
                flag = True
                break
        
        return flag

    
    def user_words_interpreting_logic(self):
        # You can create more complex language interpreting algorithms here!
        if self.user_words:
            segmented_user_words = self.split_string(self.user_words)
            if self.check_item(segmented_user_words, 'go'):
                if self.check_item(segmented_user_words, 'front'):
                    self.mode = FRONT
                elif self.check_item(segmented_user_words, 'back'):
                    self.mode = BACK

            elif self.check_item(segmented_user_words, 'turn') or self.check_item(segmented_user_words, 'rotate'):
                if self.check_item(segmented_user_words, 'left'):
                    self.mode = ROTATE_CCW
                elif self.check_item(segmented_user_words, 'right'):
                    self.mode = ROTATE_CW

            elif self.check_item(segmented_user_words, '가'):
                if self.check_item(segmented_user_words, '앞'):
                    self.mode = FRONT
                elif self.check_item(segmented_user_words, '뒤'):
                    self.mode = BACK

            elif self.check_item(segmented_user_words, '회전') or self.check_item(segmented_user_words, '돌아'):
                if self.check_item(segmented_user_words, '좌회전'):
                    self.mode = ROTATE_CCW
                elif self.check_item(segmented_user_words, '우회전'):
                    self.mode = ROTATE_CW
                else:
                    self.mode = ROTATE_CCW

            else:
                self.mode = NEUTRAL

        else:
            self.mode = NEUTRAL


    def formulate_velocities(self):
        # You can create more complex velocity profile controlling algorithms here!
        if self.mode == NEUTRAL:
            self.linear_velocity = 0.0
            self.angular_velocity = 0.0

        elif self.mode == FRONT:
            self.linear_velocity = MAX_LIN_VEL / 2.0
            self.angular_velocity = 0.0

        elif self.mode == BACK:
            self.linear_velocity = (-1) * MAX_LIN_VEL / 2.0
            self.angular_velocuty = 0.0

        elif self.mode == ROTATE_CCW:
            self.linear_velocity = 0.0
            self.angular_velocity = MAX_ANG_VEL / 2.0
        
        elif self.mode == ROTATE_CW:
            self.linear_velocity = 0.0
            self.angular_vlocity = (-1) * MAX_ANG_VEL / 2.0

        
    def formulate_twist(self):
        twist = Twist()
        
        twist.linear.x = self.linear_velocity
        twist.linear.y = 0.0
        twist.linear.z = 0.0

        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = self.angular_velocity

        return twist
            
            
    def obey_user_voice(self):
        self.user_words_interpreting_logic()
        self.get_logger().info(f'Changing mode to : {mode_hasher[self.mode]}')

        self.formulate_velocities()

        twist = self.formulate_twist()

        self.cmd_vel_publisher.publish(twist)
        self.get_logger().info(f'Publishing twist with : \n{twist}')

        if self.mode != NEUTRAL:
            sleep(3)
            self.mode = NEUTRAL
            self.user_words = ''


    def zero_initialize(self):
        twist = Twist()

        twist.linear.x = 0.0
        twist.linear.y = 0.0
        twist.linear.z = 0.0

        twist.angular.x = 0.0
        twist.angular.y = 0.0
        twist.angular.z = 0.0

        self.cmd_vel_publisher.publish(twist)
