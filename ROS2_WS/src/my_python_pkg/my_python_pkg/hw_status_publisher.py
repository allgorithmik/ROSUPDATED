#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

from my_interface_pkg.msg import HardwareStatus

class HardwareStatusCheckNode(Node):
    def __init__(self):
        super().__init__("hardware_status_check")
        self.hw_status_publisher_ = self.create_publisher(HardwareStatus, "hardware_status", 10)
        self.timer_ = self.create_timer(1.0, self.timerFunction)
        self.get_logger().info("HW status publisher is started!")

    def timerFunction(self):
        msg = HardwareStatus()
        msg.temperature = 50
        msg.are_motors_ready = True
        msg.debug_message = "No messages still"
        self.hw_status_publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = HardwareStatusCheckNode()
    rclpy.spin(node)
    rclpy.shutdown()


if __name__ == "__main__":
    main()