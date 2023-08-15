// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from imc_ros_msgs:msg/PlanDBInformation.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/plan_db_information__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "imc_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "imc_ros_msgs/msg/detail/plan_db_information__struct.h"
#include "imc_ros_msgs/msg/detail/plan_db_information__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // md5
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // md5
#include "rosidl_runtime_c/string.h"  // change_sname, plan_id
#include "rosidl_runtime_c/string_functions.h"  // change_sname, plan_id

// forward declare type support functions


using _PlanDBInformation__ros_msg_type = imc_ros_msgs__msg__PlanDBInformation;

static bool _PlanDBInformation__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanDBInformation__ros_msg_type * ros_message = static_cast<const _PlanDBInformation__ros_msg_type *>(untyped_ros_message);
  // Field name: plan_id
  {
    const rosidl_runtime_c__String * str = &ros_message->plan_id;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: plan_size
  {
    cdr << ros_message->plan_size;
  }

  // Field name: change_time
  {
    cdr << ros_message->change_time;
  }

  // Field name: change_sid
  {
    cdr << ros_message->change_sid;
  }

  // Field name: change_sname
  {
    const rosidl_runtime_c__String * str = &ros_message->change_sname;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: md5
  {
    size_t size = ros_message->md5.size;
    auto array_ptr = ros_message->md5.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _PlanDBInformation__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanDBInformation__ros_msg_type * ros_message = static_cast<_PlanDBInformation__ros_msg_type *>(untyped_ros_message);
  // Field name: plan_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->plan_id.data) {
      rosidl_runtime_c__String__init(&ros_message->plan_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->plan_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'plan_id'\n");
      return false;
    }
  }

  // Field name: plan_size
  {
    cdr >> ros_message->plan_size;
  }

  // Field name: change_time
  {
    cdr >> ros_message->change_time;
  }

  // Field name: change_sid
  {
    cdr >> ros_message->change_sid;
  }

  // Field name: change_sname
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->change_sname.data) {
      rosidl_runtime_c__String__init(&ros_message->change_sname);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->change_sname,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'change_sname'\n");
      return false;
    }
  }

  // Field name: md5
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->md5.data) {
      rosidl_runtime_c__uint8__Sequence__fini(&ros_message->md5);
    }
    if (!rosidl_runtime_c__uint8__Sequence__init(&ros_message->md5, size)) {
      fprintf(stderr, "failed to create array for field 'md5'");
      return false;
    }
    auto array_ptr = ros_message->md5.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imc_ros_msgs
size_t get_serialized_size_imc_ros_msgs__msg__PlanDBInformation(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanDBInformation__ros_msg_type * ros_message = static_cast<const _PlanDBInformation__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name plan_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->plan_id.size + 1);
  // field.name plan_size
  {
    size_t item_size = sizeof(ros_message->plan_size);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name change_time
  {
    size_t item_size = sizeof(ros_message->change_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name change_sid
  {
    size_t item_size = sizeof(ros_message->change_sid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name change_sname
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->change_sname.size + 1);
  // field.name md5
  {
    size_t array_size = ros_message->md5.size;
    auto array_ptr = ros_message->md5.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlanDBInformation__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_imc_ros_msgs__msg__PlanDBInformation(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imc_ros_msgs
size_t max_serialized_size_imc_ros_msgs__msg__PlanDBInformation(
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

  // member: plan_id
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
  // member: plan_size
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: change_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: change_sid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: change_sname
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
  // member: md5
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PlanDBInformation__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_imc_ros_msgs__msg__PlanDBInformation(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlanDBInformation = {
  "imc_ros_msgs::msg",
  "PlanDBInformation",
  _PlanDBInformation__cdr_serialize,
  _PlanDBInformation__cdr_deserialize,
  _PlanDBInformation__get_serialized_size,
  _PlanDBInformation__max_serialized_size
};

static rosidl_message_type_support_t _PlanDBInformation__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanDBInformation,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, imc_ros_msgs, msg, PlanDBInformation)() {
  return &_PlanDBInformation__type_support;
}

#if defined(__cplusplus)
}
#endif
