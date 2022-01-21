// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interface_pkg:msg/HardwareStatus.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE_PKG__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
#define MY_INTERFACE_PKG__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_

#include "my_interface_pkg/msg/detail/hardware_status__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interface_pkg::msg::HardwareStatus>()
{
  return "my_interface_pkg::msg::HardwareStatus";
}

template<>
inline const char * name<my_interface_pkg::msg::HardwareStatus>()
{
  return "my_interface_pkg/msg/HardwareStatus";
}

template<>
struct has_fixed_size<my_interface_pkg::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<my_interface_pkg::msg::HardwareStatus>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<my_interface_pkg::msg::HardwareStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACE_PKG__MSG__DETAIL__HARDWARE_STATUS__TRAITS_HPP_
