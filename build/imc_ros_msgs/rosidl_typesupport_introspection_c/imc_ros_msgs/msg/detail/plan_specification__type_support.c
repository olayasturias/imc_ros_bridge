// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from imc_ros_msgs:msg/PlanSpecification.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "imc_ros_msgs/msg/detail/plan_specification__rosidl_typesupport_introspection_c.h"
#include "imc_ros_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "imc_ros_msgs/msg/detail/plan_specification__functions.h"
#include "imc_ros_msgs/msg/detail/plan_specification__struct.h"


// Include directives for member types
// Member `plan_id`
// Member `description`
// Member `vnamespace`
// Member `start_man_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `maneuvers`
#include "imc_ros_msgs/msg/plan_maneuver.h"
// Member `maneuvers`
#include "imc_ros_msgs/msg/detail/plan_maneuver__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__PlanSpecification_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  imc_ros_msgs__msg__PlanSpecification__init(message_memory);
}

void imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__PlanSpecification_fini_function(void * message_memory)
{
  imc_ros_msgs__msg__PlanSpecification__fini(message_memory);
}

size_t imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__size_function__PlanSpecification__maneuvers(
  const void * untyped_member)
{
  const imc_ros_msgs__msg__PlanManeuver__Sequence * member =
    (const imc_ros_msgs__msg__PlanManeuver__Sequence *)(untyped_member);
  return member->size;
}

const void * imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__get_const_function__PlanSpecification__maneuvers(
  const void * untyped_member, size_t index)
{
  const imc_ros_msgs__msg__PlanManeuver__Sequence * member =
    (const imc_ros_msgs__msg__PlanManeuver__Sequence *)(untyped_member);
  return &member->data[index];
}

void * imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__get_function__PlanSpecification__maneuvers(
  void * untyped_member, size_t index)
{
  imc_ros_msgs__msg__PlanManeuver__Sequence * member =
    (imc_ros_msgs__msg__PlanManeuver__Sequence *)(untyped_member);
  return &member->data[index];
}

void imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__fetch_function__PlanSpecification__maneuvers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const imc_ros_msgs__msg__PlanManeuver * item =
    ((const imc_ros_msgs__msg__PlanManeuver *)
    imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__get_const_function__PlanSpecification__maneuvers(untyped_member, index));
  imc_ros_msgs__msg__PlanManeuver * value =
    (imc_ros_msgs__msg__PlanManeuver *)(untyped_value);
  *value = *item;
}

void imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__assign_function__PlanSpecification__maneuvers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  imc_ros_msgs__msg__PlanManeuver * item =
    ((imc_ros_msgs__msg__PlanManeuver *)
    imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__get_function__PlanSpecification__maneuvers(untyped_member, index));
  const imc_ros_msgs__msg__PlanManeuver * value =
    (const imc_ros_msgs__msg__PlanManeuver *)(untyped_value);
  *item = *value;
}

bool imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__resize_function__PlanSpecification__maneuvers(
  void * untyped_member, size_t size)
{
  imc_ros_msgs__msg__PlanManeuver__Sequence * member =
    (imc_ros_msgs__msg__PlanManeuver__Sequence *)(untyped_member);
  imc_ros_msgs__msg__PlanManeuver__Sequence__fini(member);
  return imc_ros_msgs__msg__PlanManeuver__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__PlanSpecification_message_member_array[5] = {
  {
    "plan_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__PlanSpecification, plan_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__PlanSpecification, description),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "vnamespace",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__PlanSpecification, vnamespace),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "start_man_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__PlanSpecification, start_man_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "maneuvers",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs__msg__PlanSpecification, maneuvers),  // bytes offset in struct
    NULL,  // default value
    imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__size_function__PlanSpecification__maneuvers,  // size() function pointer
    imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__get_const_function__PlanSpecification__maneuvers,  // get_const(index) function pointer
    imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__get_function__PlanSpecification__maneuvers,  // get(index) function pointer
    imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__fetch_function__PlanSpecification__maneuvers,  // fetch(index, &value) function pointer
    imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__assign_function__PlanSpecification__maneuvers,  // assign(index, value) function pointer
    imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__resize_function__PlanSpecification__maneuvers  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__PlanSpecification_message_members = {
  "imc_ros_msgs__msg",  // message namespace
  "PlanSpecification",  // message name
  5,  // number of fields
  sizeof(imc_ros_msgs__msg__PlanSpecification),
  imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__PlanSpecification_message_member_array,  // message members
  imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__PlanSpecification_init_function,  // function to initialize message memory (memory has to be allocated)
  imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__PlanSpecification_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__PlanSpecification_message_type_support_handle = {
  0,
  &imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__PlanSpecification_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_imc_ros_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imc_ros_msgs, msg, PlanSpecification)() {
  imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__PlanSpecification_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, imc_ros_msgs, msg, PlanManeuver)();
  if (!imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__PlanSpecification_message_type_support_handle.typesupport_identifier) {
    imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__PlanSpecification_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &imc_ros_msgs__msg__PlanSpecification__rosidl_typesupport_introspection_c__PlanSpecification_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
