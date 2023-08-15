// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from imc_ros_msgs:msg/PlanDB.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB__STRUCT_H_
#define IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'REQUEST'.
enum
{
  imc_ros_msgs__msg__PlanDB__REQUEST = 0
};

/// Constant 'SUCCESS'.
enum
{
  imc_ros_msgs__msg__PlanDB__SUCCESS = 1
};

/// Constant 'FAILURE'.
enum
{
  imc_ros_msgs__msg__PlanDB__FAILURE = 2
};

/// Constant 'IN_PROGESS'.
enum
{
  imc_ros_msgs__msg__PlanDB__IN_PROGESS = 3
};

/// Constant 'SET'.
/**
  * Operation enums
 */
enum
{
  imc_ros_msgs__msg__PlanDB__SET = 0
};

/// Constant 'DEL'.
enum
{
  imc_ros_msgs__msg__PlanDB__DEL = 1
};

/// Constant 'GET'.
enum
{
  imc_ros_msgs__msg__PlanDB__GET = 2
};

/// Constant 'GET_INFO'.
enum
{
  imc_ros_msgs__msg__PlanDB__GET_INFO = 3
};

/// Constant 'CLEAR'.
enum
{
  imc_ros_msgs__msg__PlanDB__CLEAR = 4
};

/// Constant 'GET_STATE'.
enum
{
  imc_ros_msgs__msg__PlanDB__GET_STATE = 5
};

/// Constant 'GET_DSTATE'.
enum
{
  imc_ros_msgs__msg__PlanDB__GET_DSTATE = 6
};

/// Constant 'BOOT'.
enum
{
  imc_ros_msgs__msg__PlanDB__BOOT = 7
};

// Include directives for member types
// Member 'plan_id'
#include "rosidl_runtime_c/string.h"
// Member 'plan_spec'
#include "imc_ros_msgs/msg/detail/plan_specification__struct.h"
// Member 'plan_spec_md5'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'plandb_information'
#include "imc_ros_msgs/msg/detail/plan_db_information__struct.h"
// Member 'plandb_state'
#include "imc_ros_msgs/msg/detail/plan_db_state__struct.h"

/// Struct defined in msg/PlanDB in the package imc_ros_msgs.
/**
  * Type enums
 */
typedef struct imc_ros_msgs__msg__PlanDB
{
  uint8_t type;
  uint8_t op;
  uint16_t request_id;
  rosidl_runtime_c__String plan_id;
  /// this part is special made for just waypoint type plan_dbs. ill handle other types later.
  /// this is the Message arg in the original
  imc_ros_msgs__msg__PlanSpecification plan_spec;
  rosidl_runtime_c__uint8__Sequence plan_spec_md5;
  /// might be other types of fields that come into 'arg'. In IMC, this arg is  a "message" type, so who knows what it can become...
  /// Apparently, arg can also be a PlanDBInformation message.
  imc_ros_msgs__msg__PlanDBInformation plandb_information;
  imc_ros_msgs__msg__PlanDBState plandb_state;
} imc_ros_msgs__msg__PlanDB;

// Struct for a sequence of imc_ros_msgs__msg__PlanDB.
typedef struct imc_ros_msgs__msg__PlanDB__Sequence
{
  imc_ros_msgs__msg__PlanDB * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} imc_ros_msgs__msg__PlanDB__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__PLAN_DB__STRUCT_H_
