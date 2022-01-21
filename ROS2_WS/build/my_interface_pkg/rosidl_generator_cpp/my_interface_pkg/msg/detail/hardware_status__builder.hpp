// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from my_interface_pkg:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE_PKG__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
#define MY_INTERFACE_PKG__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_

#include "my_interface_pkg/msg/detail/hardware_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace my_interface_pkg
{

namespace msg
{

namespace builder
{

class Init_HardwareStatus_debug_message
{
public:
  explicit Init_HardwareStatus_debug_message(::my_interface_pkg::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  ::my_interface_pkg::msg::HardwareStatus debug_message(::my_interface_pkg::msg::HardwareStatus::_debug_message_type arg)
  {
    msg_.debug_message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::my_interface_pkg::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_are_motors_ready
{
public:
  explicit Init_HardwareStatus_are_motors_ready(::my_interface_pkg::msg::HardwareStatus & msg)
  : msg_(msg)
  {}
  Init_HardwareStatus_debug_message are_motors_ready(::my_interface_pkg::msg::HardwareStatus::_are_motors_ready_type arg)
  {
    msg_.are_motors_ready = std::move(arg);
    return Init_HardwareStatus_debug_message(msg_);
  }

private:
  ::my_interface_pkg::msg::HardwareStatus msg_;
};

class Init_HardwareStatus_temperature
{
public:
  Init_HardwareStatus_temperature()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HardwareStatus_are_motors_ready temperature(::my_interface_pkg::msg::HardwareStatus::_temperature_type arg)
  {
    msg_.temperature = std::move(arg);
    return Init_HardwareStatus_are_motors_ready(msg_);
  }

private:
  ::my_interface_pkg::msg::HardwareStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::my_interface_pkg::msg::HardwareStatus>()
{
  return my_interface_pkg::msg::builder::Init_HardwareStatus_temperature();
}

}  // namespace my_interface_pkg

#endif  // MY_INTERFACE_PKG__MSG__DETAIL__HARDWARE_STATUS__BUILDER_HPP_
