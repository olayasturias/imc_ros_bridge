// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/DesiredZ.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__DESIRED_Z__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__DESIRED_Z__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'Z_NONE'.
enum
{
  imc_ros_msgs__msg__DesiredZ__Z_NONE = 0
};

/// Constant 'Z_DEPTH'.
/**
  * Depth.
 */
enum
{
  imc_ros_msgs__msg__DesiredZ__Z_DEPTH = 1
};

/// Constant 'Z_ALTITUDE'.
/**
  * Altitude.
 */
enum
{
  imc_ros_msgs__msg__DesiredZ__Z_ALTITUDE = 2
};

/// Constant 'Z_HEIGHT'.
/**
  * Height.
 */
enum
{
  imc_ros_msgs__msg__DesiredZ__Z_HEIGHT = 3
};

/// Struct defined in msg/DesiredZ in the package imc_ros_msgs.
/**
  * Z Units.
  * None.
 */
typedef struct imc_ros_msgs__msg__DesiredZ
{
  double value;
  uint8_t z_units;
} imc_ros_msgs__msg__DesiredZ;

// Struct for a sequence of imc_ros_msgs__msg__DesiredZ.
typedef struct imc_ros_msgs__msg__DesiredZ__Sequence
{
  imc_ros_msgs__msg__DesiredZ * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__DesiredZ__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__DESIRED_Z__STRUCT_H_
