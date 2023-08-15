// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/PlanControl.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL__STRUCT_H_

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
// Member 'info'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PlanControl in the package imc_ros_msgs.
/**
  * IMC PlanControl message in ROS form.
 */
typedef struct imc_ros_msgs__msg__PlanControl
{
  ///  enums
  /// 0,1,2,3 -> request, success, failure, in progress
  uint8_t type;
  /// 0,1,2,3 -> start, stop, load, get
  uint8_t op;
  /// fields
  uint16_t request_id;
  rosidl_runtime_c__String plan_id;
  uint16_t flags;
  rosidl_runtime_c__String info;
} imc_ros_msgs__msg__PlanControl;

// Struct for a sequence of imc_ros_msgs__msg__PlanControl.
typedef struct imc_ros_msgs__msg__PlanControl__Sequence
{
  imc_ros_msgs__msg__PlanControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__PlanControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL__STRUCT_H_
