import rclpy
from rclpy.node import Node

from example_interfaces.srv import AddTwoInts

# class serviceClientNode(Node):
#     def __init__(self):
#         super().__init__("ClientNode")



def main(args=None):
    rclpy.init(args = args)
    node = Node("add_two_ints_no_oop")
    client = node.create_client(AddTwoInts, "add_two_ints")
    while not client.wait_for_service(1.0):
        node.get_logger().warn("waiting for server")
    
    request = AddTwoInts.Request()
    request.a = 5
    request.b = 5

    future = client.call_async(request)
    rclpy.spin_until_future_complete(node, future)
    try:
        response = future.result()
        node.get_logger().info(str(request.a) + " + " + str(request.b) + " = " + str(response.sum))
    except Exception as e:
        node.get_logger().error("Something happend %r" % (e, ))
    rclpy.shutdown()

if __name__ == "__main__":
    main()