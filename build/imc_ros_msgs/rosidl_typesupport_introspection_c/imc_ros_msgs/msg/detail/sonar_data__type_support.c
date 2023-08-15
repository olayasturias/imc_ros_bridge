// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from imc_ros_msgs:msg/SonarData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "imc_ros_msgs/msg/detail/sonar_data__rosidl_typesupport_introspection_c.h"
#include "imc_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "imc_ros_msgs/msg/detail/sonar_data__functions.h"
#include "imc_ros_msgs/msg/detail/sonar_data__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__SonarData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  imc_ros_msgs__msg__SonarData__init(message_memory);
}

void imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__SonarData_fini_function(void * message_memory)
{
  imc_ros_msgs__msg__SonarData__fini(message_memory);
}

size_t imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__size_function__SonarData__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__get_const_function__SonarData__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__get_function__SonarData__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__fetch_function__SonarData__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__get_const_function__SonarData__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__assign_function__SonarData__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__get_function__SonarData__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__resize_function__SonarData__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__SonarData_message_member_array[7] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__SonarData, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frequency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__SonarData, frequency),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "min_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__SonarData, min_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "max_range",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__SonarData, max_range),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bits_per_point",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__SonarData, bits_per_point),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale_factor",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__SonarData, scale_factor),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__SonarData, data),  // bytes offset in struct
    NULL,  // default value
    imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__size_function__SonarData__data,  // size() function pointer
    imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__get_const_function__SonarData__data,  // get_const(index) function pointer
    imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__get_function__SonarData__data,  // get(index) function pointer
    imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__fetch_function__SonarData__data,  // fetch(index, &value) function pointer
    imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__assign_function__SonarData__data,  // assign(index, value) function pointer
    imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__resize_function__SonarData__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__SonarData_message_members = {
  "imc_ros_msgs__msg",  // message namespace
  "SonarData",  // message name
  7,  // number of fields
  sizeof(imc_ros_msgs__msg__SonarData),
  imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__SonarData_message_member_array,  // message members
  imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__SonarData_init_function,  // function to initialize message memory (memory has to be allocated)
  imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__SonarData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__SonarData_message_type_support_handle = {
  0,
  &imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__SonarData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_imc_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imc_ros_msgs, msg, SonarData)() {
  if (!imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__SonarData_message_type_support_handle.typesupport_identifier) {
    imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__SonarData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &imc_ros_msgs__msg__SonarData__rosidl_typesupport_introspection_c__SonarData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
