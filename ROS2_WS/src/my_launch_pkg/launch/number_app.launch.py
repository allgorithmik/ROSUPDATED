from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    remappings_ = ("publisher_node", "publisher_new")

    publisher_node = Node(
        package = "my_cpp_package",
        executable = "number_publisher",
        name = "renamed_publisher",
        remappings = [
            remappings_
        ],
        parameters = [
            {"number_to_publish" : 5},
            {"publish_frequency" : 10.0}
        ]
    )

    subscriber_node = Node(
        package = "my_cpp_package",
        executable = "subscriber",
        name = "renamed_subscriber",
        remappings = [
            remappings_
        ]
    )
    ld.add_action(publisher_node)
    ld.add_action(subscriber_node)
    return ld