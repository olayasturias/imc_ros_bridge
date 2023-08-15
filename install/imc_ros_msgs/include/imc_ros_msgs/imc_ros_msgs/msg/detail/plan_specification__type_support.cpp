// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from imc_ros_msgs:msg/PlanSpecification.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "imc_ros_msgs/msg/detail/plan_specification__struct.hpp"
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

void PlanSpecification_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) imc_ros_msgs::msg::PlanSpecification(_init);
}

void PlanSpecification_fini_function(void * message_memory)
{
  auto typed_message = static_cast<imc_ros_msgs::msg::PlanSpecification *>(message_memory);
  typed_message->~PlanSpecification();
}

size_t size_function__PlanSpecification__maneuvers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<imc_ros_msgs::msg::PlanManeuver> *>(untyped_member);
  return member->size();
}

const void * get_const_function__PlanSpecification__maneuvers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<imc_ros_msgs::msg::PlanManeuver> *>(untyped_member);
  return &member[index];
}

void * get_function__PlanSpecification__maneuvers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<imc_ros_msgs::msg::PlanManeuver> *>(untyped_member);
  return &member[index];
}

void fetch_function__PlanSpecification__maneuvers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const imc_ros_msgs::msg::PlanManeuver *>(
    get_const_function__PlanSpecification__maneuvers(untyped_member, index));
  auto & value = *reinterpret_cast<imc_ros_msgs::msg::PlanManeuver *>(untyped_value);
  value = item;
}

void assign_function__PlanSpecification__maneuvers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<imc_ros_msgs::msg::PlanManeuver *>(
    get_function__PlanSpecification__maneuvers(untyped_member, index));
  const auto & value = *reinterpret_cast<const imc_ros_msgs::msg::PlanManeuver *>(untyped_value);
  item = value;
}

void resize_function__PlanSpecification__maneuvers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<imc_ros_msgs::msg::PlanManeuver> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember PlanSpecification_message_member_array[5] = {
  {
    "plan_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs::msg::PlanSpecification, plan_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "description",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs::msg::PlanSpecification, description),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vnamespace",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs::msg::PlanSpecification, vnamespace),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "start_man_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs::msg::PlanSpecification, start_man_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "maneuvers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<imc_ros_msgs::msg::PlanManeuver>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(imc_ros_msgs::msg::PlanSpecification, maneuvers),  // bytes offset in struct
    nullptr,  // default value
    size_function__PlanSpecification__maneuvers,  // size() function pointer
    get_const_function__PlanSpecification__maneuvers,  // get_const(index) function pointer
    get_function__PlanSpecification__maneuvers,  // get(index) function pointer
    fetch_function__PlanSpecification__maneuvers,  // fetch(index, &value) function pointer
    assign_function__PlanSpecification__maneuvers,  // assign(index, value) function pointer
    resize_function__PlanSpecification__maneuvers  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers PlanSpecification_message_members = {
  "imc_ros_msgs::msg",  // message namespace
  "PlanSpecification",  // message name
  5,  // number of fields
  sizeof(imc_ros_msgs::msg::PlanSpecification),
  PlanSpecification_message_member_array,  // message members
  PlanSpecification_init_function,  // function to initialize message memory (memory has to be allocated)
  PlanSpecification_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t PlanSpecification_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &PlanSpecification_message_members,
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
get_message_type_support_handle<imc_ros_msgs::msg::PlanSpecification>()
{
  return &::imc_ros_msgs::msg::rosidl_typesupport_introspection_cpp::PlanSpecification_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, imc_ros_msgs, msg, PlanSpecification)() {
  return &::imc_ros_msgs::msg::rosidl_typesupport_introspection_cpp::PlanSpecification_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
