import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from hrdp_beta_actions.action import RGBFrame

class CameraActionServer(Node):
    def __init__(self):
        super().__init__('camera_action_server')
        self.action_server = ActionServer(
            self,
            RGBFrame,
            'rgbframe',
            self.execute_callback
        )
    
    def execute_callback(self, goal_handle):
        self.get_logger().info("Executing camera action server")
        result = RGBFrame.Result()
        return result

    def terminate(self):
        self.destroy_node()
