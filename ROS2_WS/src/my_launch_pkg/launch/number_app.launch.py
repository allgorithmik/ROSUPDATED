from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    publisher_node = Node(
        package = "my_python_pkg",
        executable = "publisher"
    )

    subscriber_node = Node(
        package = "my_cpp_package",
        executable = "subscriber"
    )
    ld.add_action(publisher_node)
    ld.add_action(subscriber_node)
    return ld