// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from my_interface_pkg:srv/ComputeRectangleArea.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE_PKG__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__TRAITS_HPP_
#define MY_INTERFACE_PKG__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__TRAITS_HPP_

#include "my_interface_pkg/srv/detail/compute_rectangle_area__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interface_pkg::srv::ComputeRectangleArea_Request>()
{
  return "my_interface_pkg::srv::ComputeRectangleArea_Request";
}

template<>
inline const char * name<my_interface_pkg::srv::ComputeRectangleArea_Request>()
{
  return "my_interface_pkg/srv/ComputeRectangleArea_Request";
}

template<>
struct has_fixed_size<my_interface_pkg::srv::ComputeRectangleArea_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_interface_pkg::srv::ComputeRectangleArea_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_interface_pkg::srv::ComputeRectangleArea_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interface_pkg::srv::ComputeRectangleArea_Response>()
{
  return "my_interface_pkg::srv::ComputeRectangleArea_Response";
}

template<>
inline const char * name<my_interface_pkg::srv::ComputeRectangleArea_Response>()
{
  return "my_interface_pkg/srv/ComputeRectangleArea_Response";
}

template<>
struct has_fixed_size<my_interface_pkg::srv::ComputeRectangleArea_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<my_interface_pkg::srv::ComputeRectangleArea_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<my_interface_pkg::srv::ComputeRectangleArea_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<my_interface_pkg::srv::ComputeRectangleArea>()
{
  return "my_interface_pkg::srv::ComputeRectangleArea";
}

template<>
inline const char * name<my_interface_pkg::srv::ComputeRectangleArea>()
{
  return "my_interface_pkg/srv/ComputeRectangleArea";
}

template<>
struct has_fixed_size<my_interface_pkg::srv::ComputeRectangleArea>
  : std::integral_constant<
    bool,
    has_fixed_size<my_interface_pkg::srv::ComputeRectangleArea_Request>::value &&
    has_fixed_size<my_interface_pkg::srv::ComputeRectangleArea_Response>::value
  >
{
};

template<>
struct has_bounded_size<my_interface_pkg::srv::ComputeRectangleArea>
  : std::integral_constant<
    bool,
    has_bounded_size<my_interface_pkg::srv::ComputeRectangleArea_Request>::value &&
    has_bounded_size<my_interface_pkg::srv::ComputeRectangleArea_Response>::value
  >
{
};

template<>
struct is_service<my_interface_pkg::srv::ComputeRectangleArea>
  : std::true_type
{
};

template<>
struct is_service_request<my_interface_pkg::srv::ComputeRectangleArea_Request>
  : std::true_type
{
};

template<>
struct is_service_response<my_interface_pkg::srv::ComputeRectangleArea_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MY_INTERFACE_PKG__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__TRAITS_HPP_
