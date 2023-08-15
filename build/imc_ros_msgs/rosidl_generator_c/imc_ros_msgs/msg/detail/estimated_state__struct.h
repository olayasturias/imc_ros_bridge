// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/EstimatedState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__ESTIMATED_STATE__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__ESTIMATED_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EstimatedState in the package imc_ros_msgs.
/**
  * Latitude (WGS-84).
 */
typedef struct imc_ros_msgs__msg__EstimatedState
{
  double lat;
  /// Longitude (WGS-84).
  double lon;
  /// Height (WGS-84).
  float height;
  /// Offset north.
  float x;
  /// Offset east.
  float y;
  /// Offset down.
  float z;
  /// Rotation over x axis.
  float phi;
  /// Rotation over y axis.
  float theta;
  /// Rotation over z axis.
  float psi;
  /// Body-Fixed xx Velocity.
  float u;
  /// Body-Fixed yy Velocity.
  float v;
  /// Body-Fixed zz Velocity.
  float w;
  /// Ground Velocity X (North).
  float vx;
  /// Ground Velocity Y (East).
  float vy;
  /// Ground Velocity Z (Down).
  float vz;
  /// Angular Velocity in x.
  float p;
  /// Angular Velocity in y.
  float q;
  /// Angular Velocity in z.
  float r;
  /// Depth.
  float depth;
  /// Altitude.
  float alt;
} imc_ros_msgs__msg__EstimatedState;

// Struct for a sequence of imc_ros_msgs__msg__EstimatedState.
typedef struct imc_ros_msgs__msg__EstimatedState__Sequence
{
  imc_ros_msgs__msg__EstimatedState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__EstimatedState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__ESTIMATED_STATE__STRUCT_H_
