from ainex_motion.joint_controller import JointController
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int16
import time

class KeyboardMotionController(Node):
    def __init__(self):
        super().__init__('joint_state_publisher')
        # instaintiate the JointController with the current node
        self.joint_controller = JointController(self)
        self.create_subscription(Int16, "keyboard_input", self.keyboard_callback, 1)

    def keyboard_callback(self, msg):
        command = msg.data
        if command == 1:
            self.joint_controller.setPosture('crouch', 0.8)
            time.sleep(2)
            joint_names = ['l_sho_roll', 'l_sho_pitch', "l_el_yaw", "l_el_pitch"]
            self.joint_controller.setJointPositions(joint_names, [-1.7, 0.8, -1.5, 0], 1, unit='rad')
            time.sleep(2)

def main(args=None):
    rclpy.init(args=args)

    # node = rclpy.create_node('ainex_motion_node')
    ainex_motion = KeyboardMotionController()
    rclpy.spin(ainex_motion)