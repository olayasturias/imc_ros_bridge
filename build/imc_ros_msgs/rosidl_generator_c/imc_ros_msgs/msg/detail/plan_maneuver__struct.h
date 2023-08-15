// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/PlanManeuver.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_MANEUVER__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_MANEUVER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'maneuver_id'
#include "rosidl_runtime_c/string.h"
// Member 'maneuver'
#include "imc_ros_msgs/msg/detail/maneuver__struct.h"

/// Struct defined in msg/PlanManeuver in the package imc_ros_msgs.
typedef struct imc_ros_msgs__msg__PlanManeuver
{
  rosidl_runtime_c__String maneuver_id;
  /// Originally InlineMessage<Maneuver>
  imc_ros_msgs__msg__Maneuver maneuver;
} imc_ros_msgs__msg__PlanManeuver;

// Struct for a sequence of imc_ros_msgs__msg__PlanManeuver.
typedef struct imc_ros_msgs__msg__PlanManeuver__Sequence
{
  imc_ros_msgs__msg__PlanManeuver * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__PlanManeuver__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_MANEUVER__STRUCT_H_
