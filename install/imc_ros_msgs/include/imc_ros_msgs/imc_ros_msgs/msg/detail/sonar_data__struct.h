// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/SonarData.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__SONAR_DATA__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__SONAR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ST_SIDESCAN'.
/**
  * Sidescan.
 */
enum
{
  imc_ros_msgs__msg__SonarData__ST_SIDESCAN = 0
};

/// Constant 'ST_ECHOSOUNDER'.
/**
  * Echo Sounder.
 */
enum
{
  imc_ros_msgs__msg__SonarData__ST_ECHOSOUNDER = 1
};

/// Constant 'ST_MULTIBEAM'.
/**
  * Multibeam.
 */
enum
{
  imc_ros_msgs__msg__SonarData__ST_MULTIBEAM = 2
};

// Include directives for member types
// Member 'data'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/SonarData in the package imc_ros_msgs.
/**
  * IMC SonarData message in ROS form.
 */
typedef struct imc_ros_msgs__msg__SonarData
{
  /// Type.
  uint8_t type;
  /// Frequency.
  uint32_t frequency;
  /// Minimum Range.
  uint16_t min_range;
  /// Maximum Range.
  uint16_t max_range;
  /// Bits Per Data Point.
  uint8_t bits_per_point;
  /// Scaling Factor.
  float scale_factor;
  /// TODO add beamconfig
  /// Data. first half of vector is left side, other half is right side of side scan
  rosidl_runtime_c__uint8__Sequence data;
} imc_ros_msgs__msg__SonarData;

// Struct for a sequence of imc_ros_msgs__msg__SonarData.
typedef struct imc_ros_msgs__msg__SonarData__Sequence
{
  imc_ros_msgs__msg__SonarData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__SonarData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__SONAR_DATA__STRUCT_H_
