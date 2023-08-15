// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/PolygonVertex.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__POLYGON_VERTEX__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__POLYGON_VERTEX__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PolygonVertex in the package imc_ros_msgs.
typedef struct imc_ros_msgs__msg__PolygonVertex
{
  double lat;
  double lon;
} imc_ros_msgs__msg__PolygonVertex;

// Struct for a sequence of imc_ros_msgs__msg__PolygonVertex.
typedef struct imc_ros_msgs__msg__PolygonVertex__Sequence
{
  imc_ros_msgs__msg__PolygonVertex * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__PolygonVertex__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__POLYGON_VERTEX__STRUCT_H_
