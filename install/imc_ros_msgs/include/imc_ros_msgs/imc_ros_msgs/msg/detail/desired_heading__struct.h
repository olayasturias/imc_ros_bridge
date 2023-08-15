// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/DesiredHeading.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__DESIRED_HEADING__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__DESIRED_HEADING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DesiredHeading in the package imc_ros_msgs.
typedef struct imc_ros_msgs__msg__DesiredHeading
{
  double value;
} imc_ros_msgs__msg__DesiredHeading;

// Struct for a sequence of imc_ros_msgs__msg__DesiredHeading.
typedef struct imc_ros_msgs__msg__DesiredHeading__Sequence
{
  imc_ros_msgs__msg__DesiredHeading * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__DesiredHeading__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__DESIRED_HEADING__STRUCT_H_
