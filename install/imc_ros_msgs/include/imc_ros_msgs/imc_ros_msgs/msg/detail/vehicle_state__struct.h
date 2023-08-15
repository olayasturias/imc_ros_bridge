// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SERVICE'.
/**
  * enums
  *  op mode
 */
enum
{
  imc_ros_msgs__msg__VehicleState__SERVICE = 0
};

/// Constant 'CALIBRATION'.
enum
{
  imc_ros_msgs__msg__VehicleState__CALIBRATION = 1
};

/// Constant 'ERROR'.
enum
{
  imc_ros_msgs__msg__VehicleState__ERROR = 2
};

/// Constant 'MANEUVER'.
enum
{
  imc_ros_msgs__msg__VehicleState__MANEUVER = 3
};

/// Constant 'EXTERNAL'.
enum
{
  imc_ros_msgs__msg__VehicleState__EXTERNAL = 4
};

/// Constant 'BOOT'.
enum
{
  imc_ros_msgs__msg__VehicleState__BOOT = 5
};

// Include directives for member types
// Member 'error_ents'
// Member 'last_error'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VehicleState in the package imc_ros_msgs.
/**
  * IMC VehicleState message in ROS form.
 */
typedef struct imc_ros_msgs__msg__VehicleState
{
  /// fields
  /// Operation Mode.
  uint8_t op_mode;
  /// Errors   -- Count.
  uint8_t error_count;
  /// Errors   -- Entities.
  rosidl_runtime_c__String error_ents;
  /// Maneuver -- Type.
  uint16_t maneuver_type;
  /// Maneuver -- Start Time.
  double maneuver_stime;
  /// Maneuver -- ETA.
  uint16_t maneuver_eta;
  /// Control Loops.
  uint32_t control_loops;
  /// Flags.
  uint8_t flags;
  /// Last Error -- Description.
  rosidl_runtime_c__String last_error;
  /// Last Error -- Time.
  double last_error_time;
} imc_ros_msgs__msg__VehicleState;

// Struct for a sequence of imc_ros_msgs__msg__VehicleState.
typedef struct imc_ros_msgs__msg__VehicleState__Sequence
{
  imc_ros_msgs__msg__VehicleState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__VehicleState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__VEHICLE_STATE__STRUCT_H_
