// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from my_interface_pkg:srv/ComputeRectangleArea.idl
// generated code does not contain a copyright notice

#ifndef MY_INTERFACE_PKG__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__STRUCT_H_
#define MY_INTERFACE_PKG__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in srv/ComputeRectangleArea in the package my_interface_pkg.
typedef struct my_interface_pkg__srv__ComputeRectangleArea_Request
{
  double length;
  double width;
} my_interface_pkg__srv__ComputeRectangleArea_Request;

// Struct for a sequence of my_interface_pkg__srv__ComputeRectangleArea_Request.
typedef struct my_interface_pkg__srv__ComputeRectangleArea_Request__Sequence
{
  my_interface_pkg__srv__ComputeRectangleArea_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interface_pkg__srv__ComputeRectangleArea_Request__Sequence;


// Constants defined in the message

// Struct defined in srv/ComputeRectangleArea in the package my_interface_pkg.
typedef struct my_interface_pkg__srv__ComputeRectangleArea_Response
{
  double area;
} my_interface_pkg__srv__ComputeRectangleArea_Response;

// Struct for a sequence of my_interface_pkg__srv__ComputeRectangleArea_Response.
typedef struct my_interface_pkg__srv__ComputeRectangleArea_Response__Sequence
{
  my_interface_pkg__srv__ComputeRectangleArea_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} my_interface_pkg__srv__ComputeRectangleArea_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MY_INTERFACE_PKG__SRV__DETAIL__COMPUTE_RECTANGLE_AREA__STRUCT_H_
