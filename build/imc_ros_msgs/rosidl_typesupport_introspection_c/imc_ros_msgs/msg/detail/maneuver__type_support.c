// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from imc_ros_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "imc_ros_msgs/msg/detail/maneuver__rosidl_typesupport_introspection_c.h"
#include "imc_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "imc_ros_msgs/msg/detail/maneuver__functions.h"
#include "imc_ros_msgs/msg/detail/maneuver__struct.h"


// Include directives for member types
// Member `maneuver_name`
// Member `custom_string`
#include "rosidl_runtime_c/string_functions.h"
// Member `polygon`
#include "imc_ros_msgs/msg/polygon_vertex.h"
// Member `polygon`
#include "imc_ros_msgs/msg/detail/polygon_vertex__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__Maneuver_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  imc_ros_msgs__msg__Maneuver__init(message_memory);
}

void imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__Maneuver_fini_function(void * message_memory)
{
  imc_ros_msgs__msg__Maneuver__fini(message_memory);
}

size_t imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__size_function__Maneuver__polygon(
  const void * untyped_member)
{
  const imc_ros_msgs__msg__PolygonVertex__Sequence * member =
    (const imc_ros_msgs__msg__PolygonVertex__Sequence *)(untyped_member);
  return member->size;
}

const void * imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__get_const_function__Maneuver__polygon(
  const void * untyped_member, size_t index)
{
  const imc_ros_msgs__msg__PolygonVertex__Sequence * member =
    (const imc_ros_msgs__msg__PolygonVertex__Sequence *)(untyped_member);
  return &member->data[index];
}

void * imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__get_function__Maneuver__polygon(
  void * untyped_member, size_t index)
{
  imc_ros_msgs__msg__PolygonVertex__Sequence * member =
    (imc_ros_msgs__msg__PolygonVertex__Sequence *)(untyped_member);
  return &member->data[index];
}

void imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__fetch_function__Maneuver__polygon(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const imc_ros_msgs__msg__PolygonVertex * item =
    ((const imc_ros_msgs__msg__PolygonVertex *)
    imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__get_const_function__Maneuver__polygon(untyped_member, index));
  imc_ros_msgs__msg__PolygonVertex * value =
    (imc_ros_msgs__msg__PolygonVertex *)(untyped_value);
  *value = *item;
}

void imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__assign_function__Maneuver__polygon(
  void * untyped_member, size_t index, const void * untyped_value)
{
  imc_ros_msgs__msg__PolygonVertex * item =
    ((imc_ros_msgs__msg__PolygonVertex *)
    imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__get_function__Maneuver__polygon(untyped_member, index));
  const imc_ros_msgs__msg__PolygonVertex * value =
    (const imc_ros_msgs__msg__PolygonVertex *)(untyped_value);
  *item = *value;
}

bool imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__resize_function__Maneuver__polygon(
  void * untyped_member, size_t size)
{
  imc_ros_msgs__msg__PolygonVertex__Sequence * member =
    (imc_ros_msgs__msg__PolygonVertex__Sequence *)(untyped_member);
  imc_ros_msgs__msg__PolygonVertex__Sequence__fini(member);
  return imc_ros_msgs__msg__PolygonVertex__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_member_array[17] = {
  {
    "maneuver_name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, maneuver_name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuver_imc_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, maneuver_imc_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lat",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, lat),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "lon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, lon),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, z),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z_units",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, z_units),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, speed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "speed_units",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, speed_units),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "roll",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, roll),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pitch",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, pitch),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timeout",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, timeout),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "custom_string",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, custom_string),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "syringe0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, syringe0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "syringe1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, syringe1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "syringe2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, syringe2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "polygon",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__Maneuver, polygon),  // bytes offset in struct
    NULL,  // default value
    imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__size_function__Maneuver__polygon,  // size() function pointer
    imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__get_const_function__Maneuver__polygon,  // get_const(index) function pointer
    imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__get_function__Maneuver__polygon,  // get(index) function pointer
    imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__fetch_function__Maneuver__polygon,  // fetch(index, &value) function pointer
    imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__assign_function__Maneuver__polygon,  // assign(index, value) function pointer
    imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__resize_function__Maneuver__polygon  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_members = {
  "imc_ros_msgs__msg",  // message namespace
  "Maneuver",  // message name
  17,  // number of fields
  sizeof(imc_ros_msgs__msg__Maneuver),
  imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_member_array,  // message members
  imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__Maneuver_init_function,  // function to initialize message memory (memory has to be allocated)
  imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__Maneuver_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_type_support_handle = {
  0,
  &imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_imc_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imc_ros_msgs, msg, Maneuver)() {
  imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_member_array[16].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imc_ros_msgs, msg, PolygonVertex)();
  if (!imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_type_support_handle.typesupport_identifier) {
    imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &imc_ros_msgs__msg__Maneuver__rosidl_typesupport_introspection_c__Maneuver_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
