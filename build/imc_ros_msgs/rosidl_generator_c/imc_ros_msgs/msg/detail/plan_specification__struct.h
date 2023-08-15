// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/PlanSpecification.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_SPECIFICATION__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_SPECIFICATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'plan_id'
// Member 'description'
// Member 'vnamespace'
// Member 'start_man_id'
#include "rosidl_runtime_c/string.h"
// Member 'maneuvers'
#include "imc_ros_msgs/msg/detail/plan_maneuver__struct.h"

/// Struct defined in msg/PlanSpecification in the package imc_ros_msgs.
typedef struct imc_ros_msgs__msg__PlanSpecification
{
  rosidl_runtime_c__String plan_id;
  rosidl_runtime_c__String description;
  rosidl_runtime_c__String vnamespace;
  rosidl_runtime_c__String start_man_id;
  /// This is a MessageList<PlanManeuver> in IMC Spec.
  imc_ros_msgs__msg__PlanManeuver__Sequence maneuvers;
} imc_ros_msgs__msg__PlanSpecification;

// Struct for a sequence of imc_ros_msgs__msg__PlanSpecification.
typedef struct imc_ros_msgs__msg__PlanSpecification__Sequence
{
  imc_ros_msgs__msg__PlanSpecification * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__PlanSpecification__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_SPECIFICATION__STRUCT_H_
