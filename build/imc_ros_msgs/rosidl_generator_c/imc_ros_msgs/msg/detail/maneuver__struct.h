// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__MANEUVER__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__MANEUVER__STRUCT_H_

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
  imc_ros_msgs__msg__Maneuver__Z_NONE = 0
};

/// Constant 'Z_DEPTH'.
/**
  * Depth.
 */
enum
{
  imc_ros_msgs__msg__Maneuver__Z_DEPTH = 1
};

/// Constant 'Z_ALTITUDE'.
/**
  * Altitude.
 */
enum
{
  imc_ros_msgs__msg__Maneuver__Z_ALTITUDE = 2
};

/// Constant 'Z_HEIGHT'.
/**
  * Height.
 */
enum
{
  imc_ros_msgs__msg__Maneuver__Z_HEIGHT = 3
};

/// Constant 'SUNITS_METERS_PS'.
/**
  * Speed Units.
  * Meters per second.
 */
enum
{
  imc_ros_msgs__msg__Maneuver__SUNITS_METERS_PS = 0
};

/// Constant 'SUNITS_RPM'.
/**
  * RPM.
 */
enum
{
  imc_ros_msgs__msg__Maneuver__SUNITS_RPM = 1
};

/// Constant 'SUNITS_PERCENTAGE'.
/**
  * Percentage.
 */
enum
{
  imc_ros_msgs__msg__Maneuver__SUNITS_PERCENTAGE = 2
};

// Include directives for member types
// Member 'maneuver_name'
// Member 'custom_string'
#include "rosidl_runtime_c/string.h"
// Member 'polygon'
#include "imc_ros_msgs/msg/detail/polygon_vertex__struct.h"

/// Struct defined in msg/Maneuver in the package imc_ros_msgs.
/**
  * Z Units.
  * None.
 */
typedef struct imc_ros_msgs__msg__Maneuver
{
  /// many IMC maneuvers should fit in this message
  /// and we should just decide what to do with the data
  /// depending on the maneuver name or id
  /// i will take the IMC/Spec/Goto maneuver as my basis
  rosidl_runtime_c__String maneuver_name;
  uint16_t maneuver_imc_id;
  /// 450 GOTO
  double lat;
  double lon;
  float z;
  uint8_t z_units;
  float speed;
  uint8_t speed_units;
  float roll;
  float pitch;
  float yaw;
  uint16_t timeout;
  rosidl_runtime_c__String custom_string;
  /// 489 SAMPLE that are not in GOTO
  uint8_t syringe0;
  uint8_t syringe1;
  uint8_t syringe2;
  /// 473 COVER_AREA that are not in GOTO
  imc_ros_msgs__msg__PolygonVertex__Sequence polygon;
} imc_ros_msgs__msg__Maneuver;

// Struct for a sequence of imc_ros_msgs__msg__Maneuver.
typedef struct imc_ros_msgs__msg__Maneuver__Sequence
{
  imc_ros_msgs__msg__Maneuver * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__Maneuver__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__MANEUVER__STRUCT_H_
