// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from imc_ros_msgs:msg/PlanDBState.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/plan_db_state__rosidl_typesupport_fastrtps_cpp.hpp"
#include "imc_ros_msgs/msg/detail/plan_db_state__struct.hpp"

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
  const imc_ros_msgs::msg::PlanDBInformation &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  imc_ros_msgs::msg::PlanDBInformation &);
size_t get_serialized_size(
  const imc_ros_msgs::msg::PlanDBInformation &,
  size_t current_alignment);
size_t
max_serialized_size_PlanDBInformation(
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
  const imc_ros_msgs::msg::PlanDBState & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: plan_count
  cdr << ros_message.plan_count;
  // Member: plan_size
  cdr << ros_message.plan_size;
  // Member: change_time
  cdr << ros_message.change_time;
  // Member: change_sid
  cdr << ros_message.change_sid;
  // Member: change_sname
  cdr << ros_message.change_sname;
  // Member: md5
  {
    cdr << ros_message.md5;
  }
  // Member: plans_info
  {
    size_t size = ros_message.plans_info.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      imc_ros_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.plans_info[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imc_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  imc_ros_msgs::msg::PlanDBState & ros_message)
{
  // Member: plan_count
  cdr >> ros_message.plan_count;

  // Member: plan_size
  cdr >> ros_message.plan_size;

  // Member: change_time
  cdr >> ros_message.change_time;

  // Member: change_sid
  cdr >> ros_message.change_sid;

  // Member: change_sname
  cdr >> ros_message.change_sname;

  // Member: md5
  {
    cdr >> ros_message.md5;
  }

  // Member: plans_info
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.plans_info.resize(size);
    for (size_t i = 0; i < size; i++) {
      imc_ros_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.plans_info[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imc_ros_msgs
get_serialized_size(
  const imc_ros_msgs::msg::PlanDBState & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: plan_count
  {
    size_t item_size = sizeof(ros_message.plan_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plan_size
  {
    size_t item_size = sizeof(ros_message.plan_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: change_time
  {
    size_t item_size = sizeof(ros_message.change_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: change_sid
  {
    size_t item_size = sizeof(ros_message.change_sid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: change_sname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.change_sname.size() + 1);
  // Member: md5
  {
    size_t array_size = ros_message.md5.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.md5[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: plans_info
  {
    size_t array_size = ros_message.plans_info.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        imc_ros_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.plans_info[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_imc_ros_msgs
max_serialized_size_PlanDBState(
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


  // Member: plan_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: plan_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: change_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: change_sid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: change_sname
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

  // Member: md5
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: plans_info
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
        imc_ros_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_PlanDBInformation(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PlanDBState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const imc_ros_msgs::msg::PlanDBState *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PlanDBState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<imc_ros_msgs::msg::PlanDBState *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PlanDBState__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const imc_ros_msgs::msg::PlanDBState *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PlanDBState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_PlanDBState(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _PlanDBState__callbacks = {
  "imc_ros_msgs::msg",
  "PlanDBState",
  _PlanDBState__cdr_serialize,
  _PlanDBState__cdr_deserialize,
  _PlanDBState__get_serialized_size,
  _PlanDBState__max_serialized_size
};

static rosidl_message_type_support_t _PlanDBState__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PlanDBState__callbacks,
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
get_message_type_support_handle<imc_ros_msgs::msg::PlanDBState>()
{
  return &imc_ros_msgs::msg::typesupport_fastrtps_cpp::_PlanDBState__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, imc_ros_msgs, msg, PlanDBState)() {
  return &imc_ros_msgs::msg::typesupport_fastrtps_cpp::_PlanDBState__handle;
}

#ifdef __cplusplus
}
#endif
