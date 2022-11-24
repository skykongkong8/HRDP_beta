#!/usr/bin/python3.8

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from dynamixel_constants import *
import os
import select
import sys

if os.name == 'nt':
    import msvcrt
else:
    import termios
    import tty

class ControlDynamixelWithKeyboard(Node):
    def __init__(self):
        super().__init__('control_dynamixel_with_keyboard_node')

        self.qos_policy = rclpy.qos.QoSProfile(
            reliability = rclpy.qos.ReliabilityPolicy.BEST_EFFORT,
            history = rclpy.qos.HistoryPolicy.KEEP_LAST,
            depth = 1
        )

        self.guide_message = """
        Keyboard Controlling Interface
        ---------------------------
        Moving around:
            w
        a   s    d
            x
        
        
        w/x : increase/decrease linear velocity
        a/d : increase/decrease angular velocity

        space key, s : force stop

        CTRL-C to quit
        """
        self.initialize_publisher()

    def get_key(self, settings):
        if os.name == 'nt':
            return msvcrt.getch().decode('utf-8')
        tty.setraw(sys.stdin.fileno())
        rlist, _, _ = select.select([sys.stdin], [], [], 0.1)
        if rlist:
            key = sys.stdin.read(1)
        else:
            key = ''

        termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
        return key

    
    def print_vels(self, target_linear_velocity, target_angular_velocity):
        print('currently:\tlinear velocity {0}\t angular velocity {1} '.format(
            target_linear_velocity,
            target_angular_velocity))


    def make_simple_profile(self, output, input, slop):
        if input > output:
            output = min(input, output + slop)
        elif input < output:
            output = max(input, output - slop)
        else:
            output = input

        return output


    def constrain(self, input_vel, low_bound, high_bound):
        if input_vel < low_bound:
            input_vel = low_bound
        elif input_vel > high_bound:
            input_vel = high_bound
        else:
            input_vel = input_vel

        return input_vel


    def check_linear_limit_velocity(self, velocity):
            return self.constrain(velocity, -MAX_LIN_VEL, MAX_LIN_VEL)


    def check_angular_limit_velocity(self, velocity):
            return self.constrain(velocity, -MAX_ANG_VEL, MAX_ANG_VEL)


    def initialize_publisher(self):
        self.publisher = self.create_publisher(
            Twist,
            '/cmd_vel',
            self.qos_policy
        )

        self.settings = None
        if os.name != 'nt':
            self.settings = termios.tcgetattr(sys.stdin)
        
        self.target_linear_velocity = 0.
        self.target_angular_velocity = 0.
        self.control_linear_velocity = 0.
        self.control_angular_velocity = 0.
        self.status = 0


    def keyboard_velocity_profile_control(self):

        print(self.guide_message)

        try:
            key = self.get_key(self.settings)
            if key == 'w':
                target_linear_velocity =\
                    self.check_linear_limit_velocity(target_linear_velocity + LIN_VEL_STEP_SIZE)
                self.status = self.status + 1
                self.print_vels(target_linear_velocity, target_angular_velocity)
            elif key == 'x':
                target_linear_velocity =\
                    self.check_linear_limit_velocity(target_linear_velocity - LIN_VEL_STEP_SIZE)
                self.status = self.status + 1
                self.print_vels(target_linear_velocity, target_angular_velocity)
            elif key == 'a':
                target_angular_velocity =\
                    self.check_angular_limit_velocity(target_angular_velocity + ANG_VEL_STEP_SIZE)
                self.status = self.status + 1
                self.print_vels(target_linear_velocity, target_angular_velocity)
            elif key == 'd':
                target_angular_velocity =\
                    self.check_angular_limit_velocity(target_angular_velocity - ANG_VEL_STEP_SIZE)
                self.status = self.status + 1
                self.print_vels(target_linear_velocity, target_angular_velocity)
            elif key == ' ' or key == 's':
                target_linear_velocity = 0.
                control_linear_velocity = 0.
                target_angular_velocity = 0.
                control_angular_velocity = 0.
                self.print_vels(target_linear_velocity, target_angular_velocity)
            else:
                if (key == '\x03'):
                    raise KeyboardInterrupt

            if self.status == 20:
                print(self.guide_message)
                self.status = 0

            twist = Twist()

            control_linear_velocity = self.make_simple_profile(
                control_linear_velocity,
                target_linear_velocity,
                (LIN_VEL_STEP_SIZE / 2.0))

            twist.linear.x = control_linear_velocity
            twist.linear.y = 0.0
            twist.linear.z = 0.0

            control_angular_velocity = self.make_simple_profile(
                control_angular_velocity,
                target_angular_velocity,
                (ANG_VEL_STEP_SIZE / 2.0))

            twist.angular.x = 0.0
            twist.angular.y = 0.0
            twist.angular.z = control_angular_velocity

            self.publisher.publish(twist)

        except Exception as e:
            print(e)

        finally:
            twist = Twist()
            twist.linear.x = 0.0
            twist.linear.y = 0.0
            twist.linear.z = 0.0

            twist.angular.x = 0.0
            twist.angular.y = 0.0
            twist.angular.z = 0.0

            self.publisher.publish(twist)

            if os.name != 'nt':
                termios.tcsetattr(sys.stdin, termios.TCSADRAIN, self.settings)


    def run(self):
        self.keyboard_velocity_profile_control()

        
    def terminate(self):
        rclpy.shutdown()

    
def main():
        rclpy.init(args = None)

        velocity_control = ControlDynamixelWithKeyboard()

        while True:
            try:
                velocity_control.run()

            except KeyboardInterrupt:
                break

            finally:
                velocity_control.terminate()

            
if __name__ == "__main__":
    main()
        