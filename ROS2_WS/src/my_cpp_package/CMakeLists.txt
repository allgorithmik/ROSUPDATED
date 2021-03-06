cmake_minimum_required(VERSION 3.5)
project(my_cpp_package)

# Default to C++14
if(NOT CMAKE_CXX_STANDARD)
  set(CMAKE_CXX_STANDARD 14)
endif()

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(example_interfaces REQUIRED)
find_package(my_interface_pkg REQUIRED)

add_executable(cpp_node src/my_first_cpp_node.cpp)
ament_target_dependencies(cpp_node rclcpp)

add_executable(publisher src/publisher.cpp)
ament_target_dependencies(publisher rclcpp example_interfaces)

add_executable(subscriber src/subscriber.cpp)
ament_target_dependencies(subscriber rclcpp example_interfaces)

add_executable(add_two_ints_server src/add_two_ints_server.cpp)
ament_target_dependencies(add_two_ints_server rclcpp example_interfaces)

add_executable(add_two_ints_client_no_oop src/add_two_ints_client_no_oop.cpp)
ament_target_dependencies(add_two_ints_client_no_oop rclcpp example_interfaces)

add_executable(add_two_ints_client_oop src/add_two_ints_client_oop.cpp)
ament_target_dependencies(add_two_ints_client_oop rclcpp example_interfaces)

add_executable(hw_status_check_cpp src/hw_status_check_cpp.cpp)
ament_target_dependencies(hw_status_check_cpp rclcpp my_interface_pkg)

add_executable(number_publisher src/number_publisher.cpp)
ament_target_dependencies(number_publisher rclcpp example_interfaces)

install(TARGETS
cpp_node
publisher
subscriber
add_two_ints_server
add_two_ints_client_no_oop
add_two_ints_client_oop
hw_status_check_cpp
number_publisher
DESTINATION lib/${PROJECT_NAME}
)

ament_package()
