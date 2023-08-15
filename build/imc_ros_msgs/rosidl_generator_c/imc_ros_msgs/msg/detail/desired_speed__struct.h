// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/DesiredSpeed.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SUNITS_METERS_PS'.
enum
{
  imc_ros_msgs__msg__DesiredSpeed__SUNITS_METERS_PS = 0
};

/// Constant 'SUNITS_RPM'.
/**
  * RPM.
 */
enum
{
  imc_ros_msgs__msg__DesiredSpeed__SUNITS_RPM = 1
};

/// Constant 'SUNITS_PERCENTAGE'.
/**
  * Percentage.
 */
enum
{
  imc_ros_msgs__msg__DesiredSpeed__SUNITS_PERCENTAGE = 2
};

/// Struct defined in msg/DesiredSpeed in the package imc_ros_msgs.
/**
  * Speed Units.
  * Meters per second.
 */
typedef struct imc_ros_msgs__msg__DesiredSpeed
{
  double value;
  uint8_t speed_units;
} imc_ros_msgs__msg__DesiredSpeed;

// Struct for a sequence of imc_ros_msgs__msg__DesiredSpeed.
typedef struct imc_ros_msgs__msg__DesiredSpeed__Sequence
{
  imc_ros_msgs__msg__DesiredSpeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__DesiredSpeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__STRUCT_H_
