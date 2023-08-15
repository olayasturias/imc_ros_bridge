// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from imc_ros_msgs:msg/PlanSpecification.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/plan_specification__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "imc_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "imc_ros_msgs/msg/detail/plan_specification__struct.h"
#include "imc_ros_msgs/msg/detail/plan_specification__functions.h"
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

#include "imc_ros_msgs/msg/detail/plan_maneuver__functions.h"  // maneuvers
#include "rosidl_runtime_c/string.h"  // description, plan_id, start_man_id, vnamespace
#include "rosidl_runtime_c/string_functions.h"  // description, plan_id, start_man_id, vnamespace

// forward declare type support functions
size_t get_serialized_size_imc_ros_msgs__msg__PlanManeuver(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_imc_ros_msgs__msg__PlanManeuver(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, imc_ros_msgs, msg, PlanManeuver)();


using _PlanSpecification__ros_msg_type = imc_ros_msgs__msg__PlanSpecification;

static bool _PlanSpecification__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PlanSpecification__ros_msg_type * ros_message = static_cast<const _PlanSpecification__ros_msg_type *>(untyped_ros_message);
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

  // Field name: description
  {
    const rosidl_runtime_c__String * str = &ros_message->description;
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

  // Field name: vnamespace
  {
    const rosidl_runtime_c__String * str = &ros_message->vnamespace;
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

  // Field name: start_man_id
  {
    const rosidl_runtime_c__String * str = &ros_message->start_man_id;
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

  // Field name: maneuvers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, imc_ros_msgs, msg, PlanManeuver
      )()->data);
    size_t size = ros_message->maneuvers.size;
    auto array_ptr = ros_message->maneuvers.data;
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  return true;
}

static bool _PlanSpecification__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PlanSpecification__ros_msg_type * ros_message = static_cast<_PlanSpecification__ros_msg_type *>(untyped_ros_message);
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

  // Field name: description
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->description.data) {
      rosidl_runtime_c__String__init(&ros_message->description);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->description,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'description'\n");
      return false;
    }
  }

  // Field name: vnamespace
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->vnamespace.data) {
      rosidl_runtime_c__String__init(&ros_message->vnamespace);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->vnamespace,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'vnamespace'\n");
      return false;
    }
  }

  // Field name: start_man_id
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->start_man_id.data) {
      rosidl_runtime_c__String__init(&ros_message->start_man_id);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->start_man_id,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'start_man_id'\n");
      return false;
    }
  }

  // Field name: maneuvers
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, imc_ros_msgs, msg, PlanManeuver
      )()->data);
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->maneuvers.data) {
      imc_ros_msgs__msg__PlanManeuver__Sequence__fini(&ros_message->maneuvers);
    }
    if (!imc_ros_msgs__msg__PlanManeuver__Sequence__init(&ros_message->maneuvers, size)) {
      fprintf(stderr, "failed to create array for field 'maneuvers'");
      return false;
    }
    auto array_ptr = ros_message->maneuvers.data;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imc_ros_msgs
size_t get_serialized_size_imc_ros_msgs__msg__PlanSpecification(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PlanSpecification__ros_msg_type * ros_message = static_cast<const _PlanSpecification__ros_msg_type *>(untyped_ros_message);
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
  // field.name description
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->description.size + 1);
  // field.name vnamespace
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->vnamespace.size + 1);
  // field.name start_man_id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->start_man_id.size + 1);
  // field.name maneuvers
  {
    size_t array_size = ros_message->maneuvers.size;
    auto array_ptr = ros_message->maneuvers.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_imc_ros_msgs__msg__PlanManeuver(
        &array_ptr[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PlanSpecification__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_imc_ros_msgs__msg__PlanSpecification(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imc_ros_msgs
size_t max_serialized_size_imc_ros_msgs__msg__PlanSpecification(
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
  // member: description
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
  // member: vnamespace
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
  // member: start_man_id
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
  // member: maneuvers
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
        max_serialized_size_imc_ros_msgs__msg__PlanManeuver(
        inner_full_bounded, inner_is_plain, current_alignment);
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _PlanSpecification__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_imc_ros_msgs__msg__PlanSpecification(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_PlanSpecification = {
  "imc_ros_msgs::msg",
  "PlanSpecification",
  _PlanSpecification__cdr_serialize,
  _PlanSpecification__cdr_deserialize,
  _PlanSpecification__get_serialized_size,
  _PlanSpecification__max_serialized_size
};

static rosidl_message_type_support_t _PlanSpecification__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PlanSpecification,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, imc_ros_msgs, msg, PlanSpecification)() {
  return &_PlanSpecification__type_support;
}

#if defined(__cplusplus)
}
#endif
