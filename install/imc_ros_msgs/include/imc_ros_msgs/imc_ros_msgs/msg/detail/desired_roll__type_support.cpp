// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from imc_ros_msgs:msg/DesiredRoll.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "imc_ros_msgs/msg/detail/desired_roll__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace imc_ros_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void DesiredRoll_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) imc_ros_msgs::msg::DesiredRoll(_init);
}

void DesiredRoll_fini_function(void * message_memory)
{
  auto typed_message = static_cast<imc_ros_msgs::msg::DesiredRoll *>(message_memory);
  typed_message->~DesiredRoll();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember DesiredRoll_message_member_array[1] = {
  {
    "value",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs::msg::DesiredRoll, value),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers DesiredRoll_message_members = {
  "imc_ros_msgs::msg",  // message namespace
  "DesiredRoll",  // message name
  1,  // number of fields
  sizeof(imc_ros_msgs::msg::DesiredRoll),
  DesiredRoll_message_member_array,  // message members
  DesiredRoll_init_function,  // function to initialize message memory (memory has to be allocated)
  DesiredRoll_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t DesiredRoll_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &DesiredRoll_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace imc_ros_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<imc_ros_msgs::msg::DesiredRoll>()
{
  return &::imc_ros_msgs::msg::rosidl_typesupport_introspection_cpp::DesiredRoll_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, imc_ros_msgs, msg, DesiredRoll)() {
  return &::imc_ros_msgs::msg::rosidl_typesupport_introspection_cpp::DesiredRoll_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
