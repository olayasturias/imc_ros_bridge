// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/PlanControlState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL_STATE__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BLOCKED'.
/**
  * state enums
 */
enum
{
  imc_ros_msgs__msg__PlanControlState__BLOCKED = 0
};

/// Constant 'READY'.
enum
{
  imc_ros_msgs__msg__PlanControlState__READY = 1
};

/// Constant 'INITIALIZING'.
enum
{
  imc_ros_msgs__msg__PlanControlState__INITIALIZING = 2
};

/// Constant 'EXECUTING'.
enum
{
  imc_ros_msgs__msg__PlanControlState__EXECUTING = 3
};

/// Constant 'NONE'.
/**
  * last outcome enums
 */
enum
{
  imc_ros_msgs__msg__PlanControlState__NONE = 0
};

/// Constant 'SUCCESS'.
enum
{
  imc_ros_msgs__msg__PlanControlState__SUCCESS = 1
};

/// Constant 'FAILURE'.
enum
{
  imc_ros_msgs__msg__PlanControlState__FAILURE = 2
};

// Include directives for member types
// Member 'plan_id'
// Member 'man_id'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/PlanControlState in the package imc_ros_msgs.
/**
  * IMC PlanControlState message in ROS form.
 */
typedef struct imc_ros_msgs__msg__PlanControlState
{
  uint8_t state;
  rosidl_runtime_c__String plan_id;
  int32_t plan_eta;
  /// percent
  float plan_progress;
  rosidl_runtime_c__String man_id;
  uint16_t man_type;
  int32_t man_eta;
  uint8_t last_outcome;
} imc_ros_msgs__msg__PlanControlState;

// Struct for a sequence of imc_ros_msgs__msg__PlanControlState.
typedef struct imc_ros_msgs__msg__PlanControlState__Sequence
{
  imc_ros_msgs__msg__PlanControlState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__PlanControlState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_CONTROL_STATE__STRUCT_H_
