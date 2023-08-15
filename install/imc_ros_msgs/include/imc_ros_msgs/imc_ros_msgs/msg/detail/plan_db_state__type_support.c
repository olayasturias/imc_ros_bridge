// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from imc_ros_msgs:msg/PlanDBState.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "imc_ros_msgs/msg/detail/plan_db_state__rosidl_typesupport_introspection_c.h"
#include "imc_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "imc_ros_msgs/msg/detail/plan_db_state__functions.h"
#include "imc_ros_msgs/msg/detail/plan_db_state__struct.h"


// Include directives for member types
// Member `change_sname`
#include "rosidl_runtime_c/string_functions.h"
// Member `md5`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `plans_info`
#include "imc_ros_msgs/msg/plan_db_information.h"
// Member `plans_info`
#include "imc_ros_msgs/msg/detail/plan_db_information__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__PlanDBState_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  imc_ros_msgs__msg__PlanDBState__init(message_memory);
}

void imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__PlanDBState_fini_function(void * message_memory)
{
  imc_ros_msgs__msg__PlanDBState__fini(message_memory);
}

size_t imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__size_function__PlanDBState__md5(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__get_const_function__PlanDBState__md5(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__get_function__PlanDBState__md5(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__fetch_function__PlanDBState__md5(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__get_const_function__PlanDBState__md5(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__assign_function__PlanDBState__md5(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__get_function__PlanDBState__md5(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__resize_function__PlanDBState__md5(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__size_function__PlanDBState__plans_info(
  const void * untyped_member)
{
  const imc_ros_msgs__msg__PlanDBInformation__Sequence * member =
    (const imc_ros_msgs__msg__PlanDBInformation__Sequence *)(untyped_member);
  return member->size;
}

const void * imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__get_const_function__PlanDBState__plans_info(
  const void * untyped_member, size_t index)
{
  const imc_ros_msgs__msg__PlanDBInformation__Sequence * member =
    (const imc_ros_msgs__msg__PlanDBInformation__Sequence *)(untyped_member);
  return &member->data[index];
}

void * imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__get_function__PlanDBState__plans_info(
  void * untyped_member, size_t index)
{
  imc_ros_msgs__msg__PlanDBInformation__Sequence * member =
    (imc_ros_msgs__msg__PlanDBInformation__Sequence *)(untyped_member);
  return &member->data[index];
}

void imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__fetch_function__PlanDBState__plans_info(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const imc_ros_msgs__msg__PlanDBInformation * item =
    ((const imc_ros_msgs__msg__PlanDBInformation *)
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__get_const_function__PlanDBState__plans_info(untyped_member, index));
  imc_ros_msgs__msg__PlanDBInformation * value =
    (imc_ros_msgs__msg__PlanDBInformation *)(untyped_value);
  *value = *item;
}

void imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__assign_function__PlanDBState__plans_info(
  void * untyped_member, size_t index, const void * untyped_value)
{
  imc_ros_msgs__msg__PlanDBInformation * item =
    ((imc_ros_msgs__msg__PlanDBInformation *)
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__get_function__PlanDBState__plans_info(untyped_member, index));
  const imc_ros_msgs__msg__PlanDBInformation * value =
    (const imc_ros_msgs__msg__PlanDBInformation *)(untyped_value);
  *item = *value;
}

bool imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__resize_function__PlanDBState__plans_info(
  void * untyped_member, size_t size)
{
  imc_ros_msgs__msg__PlanDBInformation__Sequence * member =
    (imc_ros_msgs__msg__PlanDBInformation__Sequence *)(untyped_member);
  imc_ros_msgs__msg__PlanDBInformation__Sequence__fini(member);
  return imc_ros_msgs__msg__PlanDBInformation__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__PlanDBState_message_member_array[7] = {
  {
    "plan_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__PlanDBState, plan_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "plan_size",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__PlanDBState, plan_size),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "change_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__PlanDBState, change_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "change_sid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__PlanDBState, change_sid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "change_sname",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__PlanDBState, change_sname),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "md5",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__PlanDBState, md5),  // bytes offset in struct
    NULL,  // default value
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__size_function__PlanDBState__md5,  // size() function pointer
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__get_const_function__PlanDBState__md5,  // get_const(index) function pointer
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__get_function__PlanDBState__md5,  // get(index) function pointer
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__fetch_function__PlanDBState__md5,  // fetch(index, &value) function pointer
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__assign_function__PlanDBState__md5,  // assign(index, value) function pointer
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__resize_function__PlanDBState__md5  // resize(index) function pointer
  },
  {
    "plans_info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__PlanDBState, plans_info),  // bytes offset in struct
    NULL,  // default value
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__size_function__PlanDBState__plans_info,  // size() function pointer
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__get_const_function__PlanDBState__plans_info,  // get_const(index) function pointer
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__get_function__PlanDBState__plans_info,  // get(index) function pointer
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__fetch_function__PlanDBState__plans_info,  // fetch(index, &value) function pointer
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__assign_function__PlanDBState__plans_info,  // assign(index, value) function pointer
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__resize_function__PlanDBState__plans_info  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__PlanDBState_message_members = {
  "imc_ros_msgs__msg",  // message namespace
  "PlanDBState",  // message name
  7,  // number of fields
  sizeof(imc_ros_msgs__msg__PlanDBState),
  imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__PlanDBState_message_member_array,  // message members
  imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__PlanDBState_init_function,  // function to initialize message memory (memory has to be allocated)
  imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__PlanDBState_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__PlanDBState_message_type_support_handle = {
  0,
  &imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__PlanDBState_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_imc_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imc_ros_msgs, msg, PlanDBState)() {
  imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__PlanDBState_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imc_ros_msgs, msg, PlanDBInformation)();
  if (!imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__PlanDBState_message_type_support_handle.typesupport_identifier) {
    imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__PlanDBState_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &imc_ros_msgs__msg__PlanDBState__rosidl_typesupport_introspection_c__PlanDBState_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
