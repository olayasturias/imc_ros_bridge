// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/PlanDBState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_STATE__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'change_sname'
#include "rosidl_runtime_c/string.h"
// Member 'md5'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'plans_info'
#include "imc_ros_msgs/msg/detail/plan_db_information__struct.h"

/// Struct defined in msg/PlanDBState in the package imc_ros_msgs.
typedef struct imc_ros_msgs__msg__PlanDBState
{
  uint16_t plan_count;
  uint32_t plan_size;
  double change_time;
  uint16_t change_sid;
  rosidl_runtime_c__String change_sname;
  rosidl_runtime_c__uint8__Sequence md5;
  imc_ros_msgs__msg__PlanDBInformation__Sequence plans_info;
} imc_ros_msgs__msg__PlanDBState;

// Struct for a sequence of imc_ros_msgs__msg__PlanDBState.
typedef struct imc_ros_msgs__msg__PlanDBState__Sequence
{
  imc_ros_msgs__msg__PlanDBState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__PlanDBState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB_STATE__STRUCT_H_
