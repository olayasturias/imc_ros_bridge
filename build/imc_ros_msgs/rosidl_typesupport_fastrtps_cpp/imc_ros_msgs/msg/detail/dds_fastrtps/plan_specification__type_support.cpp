// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from imc_ros_msgs:msg/PlanSpecification.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/plan_specification__rosidl_typesupport_fastrtps_cpp.hpp"
#include "imc_ros_msgs/msg/detail/plan_specification__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace imc_ros_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const imc_ros_msgs::msg::PlanManeuver &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  imc_ros_msgs::msg::PlanManeuver &);
size_t get_serialized_size(
  const imc_ros_msgs::msg::PlanManeuver &,
  size_t current_alignment);
size_t
max_serialized_size_PlanManeuver(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace imc_ros_msgs


namespace imc_ros_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imc_ros_msgs
cdr_serialize(
  const imc_ros_msgs::msg::PlanSpecification & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: plan_id
  cdr << ros_message.plan_id;
  // Member: description
  cdr << ros_message.description;
  // Member: vnamespace
  cdr << ros_message.vnamespace;
  // Member: start_man_id
  cdr << ros_message.start_man_id;
  // Member: maneuvers
  {
    size_t size = ros_message.maneuvers.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      imc_ros_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.maneuvers[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imc_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  imc_ros_msgs::msg::PlanSpecification & ros_message)
{
  // Member: plan_id
  cdr >> ros_message.plan_id;

  // Member: description
  cdr >> ros_message.description;

  // Member: vnamespace
  cdr >> ros_message.vnamespace;

  // Member: start_man_id
  cdr >> ros_message.start_man_id;

  // Member: maneuvers
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.maneuvers.resize(size);
    for (size_t i = 0; i < size; i++) {
      imc_ros_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.maneuvers[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imc_ros_msgs
get_serialized_size(
  const imc_ros_msgs::msg::PlanSpecification & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: plan_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.plan_id.size() + 1);
  // Member: description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.description.size() + 1);
  // Member: vnamespace
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.vnamespace.size() + 1);
  // Member: start_man_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.start_man_id.size() + 1);
  // Member: maneuvers
  {
    size_t array_size = ros_message.maneuvers.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        imc_ros_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.maneuvers[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imc_ros_msgs
max_serialized_size_PlanSpecification(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: plan_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: description
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: vnamespace
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: start_man_id
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: maneuvers
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      current_alignment +=
        imc_ros_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PlanManeuver(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PlanSpecification__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const imc_ros_msgs::msg::PlanSpecification *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlanSpecification__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<imc_ros_msgs::msg::PlanSpecification *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlanSpecification__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const imc_ros_msgs::msg::PlanSpecification *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlanSpecification__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PlanSpecification(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PlanSpecification__callbacks = {
  "imc_ros_msgs::msg",
  "PlanSpecification",
  _PlanSpecification__cdr_serialize,
  _PlanSpecification__cdr_deserialize,
  _PlanSpecification__get_serialized_size,
  _PlanSpecification__max_serialized_size
};

static rosidl_message_type_support_t _PlanSpecification__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlanSpecification__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace imc_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_imc_ros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<imc_ros_msgs::msg::PlanSpecification>()
{
  return &imc_ros_msgs::msg::typesupport_fastrtps_cpp::_PlanSpecification__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, imc_ros_msgs, msg, PlanSpecification)() {
  return &imc_ros_msgs::msg::typesupport_fastrtps_cpp::_PlanSpecification__handle;
}

#ifdef __cplusplus
}
#endif
