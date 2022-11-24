#!/usr/bin/python3.8

import os
import select
import sys
import rclpy
from rclpy.qos import QoSProfile
from geometry_msgs.msg import Twist
from .dynamixel_constants import *
import termios
import tty

guide_message = """
        Keyboard Controlling Interface
        ------------------------------
        Moving around:
            w
        a   s    d
            x
        
        
        w/x : increase/decrease linear velocity
        a/d : increase/decrease angular velocity

        space key, s : emergency stop

        PRESS CTRL-C for quitting
    """


def getKey(settings = None):
    tty.setraw(sys.stdin.fileno())
    keylist, _, _ = select.select([sys.stdin], [], [], 0.1)
    if keylist:
        key = sys.stdin.read(1)
    else:
        key = ''

    termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)
    return key


def make_smooth_profile(output, input, slope):
    if input > output:
        output = min(input, output + slope)
    elif input < output:
        output = max(input, output - slope)
    else:
        output = input

    return output


def bound(input, lower_bound, higher_bound):
    if input < lower_bound:
        input = lower_bound
    elif input > higher_bound:
        input = higher_bound
    else:
        input = input

    return input


def check_linear_velocity_limit(velocity):
    return bound(velocity, -MAX_LIN_VEL, MAX_LIN_VEL)
    

def check_angular_velocity_limit(velocity):
    return bound(velocity, -MAX_ANG_VEL, MAX_ANG_VEL)


def print_velocities(target_linear_velocity, target_angular_velocity):
    print(f'currently:\tlinear velocity {target_linear_velocity}\t angular velocity {target_angular_velocity}')


def main():
    if os.name != 'nt':
        settings = termios.tcgetattr(sys.stdin)

    rclpy.init(args = None)

    qos_policy = QoSProfile(depth=10)
    
    node = rclpy.create_node('control_dynamixel_with_keyboard_node')

    _publisher = node.create_publisher(
        Twist,
        'cmd_vel',
        qos_policy
    )

    status = 0
    objective_linear_velocity = 0.0
    objective_angular_velocity = 0.0
    control_linear_velocity = 0.0
    control_angular_velocity = 0.0

    try:
        print(guide_message)
        while(1):
            key = getKey(settings)
            if key == 'w':
                objective_linear_velocity =\
                    check_linear_velocity_limit(objective_linear_velocity + LINEAR_VEL_STEP_SIZE)
                status = status + 1
                print_velocities(objective_linear_velocity, objective_angular_velocity)
            elif key == 'x':
                objective_linear_velocity =\
                    check_linear_velocity_limit(objective_linear_velocity - LINEAR_VEL_STEP_SIZE)
                status = status + 1
                print_velocities(objective_linear_velocity, objective_angular_velocity)
            elif key == 'a':
                objective_angular_velocity =\
                    check_angular_velocity_limit(objective_angular_velocity + ANGULAR_VEL_STEP_SIZE)
                status = status + 1
                print_velocities(objective_linear_velocity, objective_angular_velocity)
            elif key == 'd':
                objective_angular_velocity =\
                    check_angular_velocity_limit(objective_angular_velocity - ANGULAR_VEL_STEP_SIZE)
                status = status + 1
                print_velocities(objective_linear_velocity, objective_angular_velocity)
            elif key == ' ' or key == 's':
                objective_linear_velocity = 0.0
                control_linear_velocity = 0.0
                objective_angular_velocity = 0.0
                control_angular_velocity = 0.0
                print_velocities(objective_linear_velocity, objective_angular_velocity)
            else:
                if (key == '\x03'):
                    break

            if status == 30:
                print(guide_message)
                status = 0

            twist = Twist()

            control_angular_velocity = make_smooth_profile(
                control_angular_velocity,
                objective_angular_velocity,
                (ANGULAR_VEL_STEP_SIZE / 2.0))

            twist.angular.x = 0.0
            twist.angular.y = 0.0
            twist.angular.z = control_angular_velocity

            control_linear_velocity = make_smooth_profile(
                control_linear_velocity,
                objective_linear_velocity,
                (LINEAR_VEL_STEP_SIZE / 2.0))

            twist.linear.x = control_linear_velocity
            twist.linear.y = 0.0
            twist.linear.z = 0.0

            _publisher.publish(twist)

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

        _publisher.publish(twist)

        if os.name != 'nt':
            termios.tcsetattr(sys.stdin, termios.TCSADRAIN, settings)


if __name__ == '__main__':
    main()