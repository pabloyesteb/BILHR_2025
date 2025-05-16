import rclpy
from rclpy.node import Node

from std_msgs.msg import Int16


class KeyboardPublisher(Node):

    def __init__(self):
        super().__init__('keyboard_publisher')
        self.publisher_ = self.create_publisher(Int16, 'keyboard_input', 10)
        self.command = 0

    def get_keyboard_input(self):
        self.get_logger().info("Command 1: left arm to a home position.")
        self.get_logger().info("Command 2: wave with left arm")
        self.get_logger().info("Command 3: Mirror with right hand")
        self.get_logger().info("Command 4: Unlock all joints")
        self.command = int(input("Enter a command (1 to 4) : "))
        if self.command in range(1,5):
            msg = Int16()
            msg.data = self.command 
            self.publisher_.publish(msg)
            self.get_logger().info('Publishing: "%s"' % msg.data)
        else:
            self.get_logger().info("Invalid Input")


def main(args=None):
    rclpy.init(args=args)

    keyboard_pub = KeyboardPublisher()

    while True:
        # Get keyboard input
        keyboard_pub.get_keyboard_input()

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    keyboard_pub.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()