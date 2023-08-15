// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from imc_ros_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/vehicle_state__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "imc_ros_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "imc_ros_msgs/msg/detail/vehicle_state__struct.h"
#include "imc_ros_msgs/msg/detail/vehicle_state__functions.h"
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

#include "rosidl_runtime_c/string.h"  // error_ents, last_error
#include "rosidl_runtime_c/string_functions.h"  // error_ents, last_error

// forward declare type support functions


using _VehicleState__ros_msg_type = imc_ros_msgs__msg__VehicleState;

static bool _VehicleState__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleState__ros_msg_type * ros_message = static_cast<const _VehicleState__ros_msg_type *>(untyped_ros_message);
  // Field name: op_mode
  {
    cdr << ros_message->op_mode;
  }

  // Field name: error_count
  {
    cdr << ros_message->error_count;
  }

  // Field name: error_ents
  {
    const rosidl_runtime_c__String * str = &ros_message->error_ents;
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

  // Field name: maneuver_type
  {
    cdr << ros_message->maneuver_type;
  }

  // Field name: maneuver_stime
  {
    cdr << ros_message->maneuver_stime;
  }

  // Field name: maneuver_eta
  {
    cdr << ros_message->maneuver_eta;
  }

  // Field name: control_loops
  {
    cdr << ros_message->control_loops;
  }

  // Field name: flags
  {
    cdr << ros_message->flags;
  }

  // Field name: last_error
  {
    const rosidl_runtime_c__String * str = &ros_message->last_error;
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

  // Field name: last_error_time
  {
    cdr << ros_message->last_error_time;
  }

  return true;
}

static bool _VehicleState__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleState__ros_msg_type * ros_message = static_cast<_VehicleState__ros_msg_type *>(untyped_ros_message);
  // Field name: op_mode
  {
    cdr >> ros_message->op_mode;
  }

  // Field name: error_count
  {
    cdr >> ros_message->error_count;
  }

  // Field name: error_ents
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->error_ents.data) {
      rosidl_runtime_c__String__init(&ros_message->error_ents);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->error_ents,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'error_ents'\n");
      return false;
    }
  }

  // Field name: maneuver_type
  {
    cdr >> ros_message->maneuver_type;
  }

  // Field name: maneuver_stime
  {
    cdr >> ros_message->maneuver_stime;
  }

  // Field name: maneuver_eta
  {
    cdr >> ros_message->maneuver_eta;
  }

  // Field name: control_loops
  {
    cdr >> ros_message->control_loops;
  }

  // Field name: flags
  {
    cdr >> ros_message->flags;
  }

  // Field name: last_error
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->last_error.data) {
      rosidl_runtime_c__String__init(&ros_message->last_error);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->last_error,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'last_error'\n");
      return false;
    }
  }

  // Field name: last_error_time
  {
    cdr >> ros_message->last_error_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imc_ros_msgs
size_t get_serialized_size_imc_ros_msgs__msg__VehicleState(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleState__ros_msg_type * ros_message = static_cast<const _VehicleState__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name op_mode
  {
    size_t item_size = sizeof(ros_message->op_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_count
  {
    size_t item_size = sizeof(ros_message->error_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name error_ents
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->error_ents.size + 1);
  // field.name maneuver_type
  {
    size_t item_size = sizeof(ros_message->maneuver_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maneuver_stime
  {
    size_t item_size = sizeof(ros_message->maneuver_stime);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maneuver_eta
  {
    size_t item_size = sizeof(ros_message->maneuver_eta);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name control_loops
  {
    size_t item_size = sizeof(ros_message->control_loops);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flags
  {
    size_t item_size = sizeof(ros_message->flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name last_error
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->last_error.size + 1);
  // field.name last_error_time
  {
    size_t item_size = sizeof(ros_message->last_error_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleState__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_imc_ros_msgs__msg__VehicleState(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_imc_ros_msgs
size_t max_serialized_size_imc_ros_msgs__msg__VehicleState(
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

  // member: op_mode
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_count
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: error_ents
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
  // member: maneuver_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: maneuver_stime
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: maneuver_eta
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: control_loops
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: flags
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: last_error
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
  // member: last_error_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleState__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_imc_ros_msgs__msg__VehicleState(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleState = {
  "imc_ros_msgs::msg",
  "VehicleState",
  _VehicleState__cdr_serialize,
  _VehicleState__cdr_deserialize,
  _VehicleState__get_serialized_size,
  _VehicleState__max_serialized_size
};

static rosidl_message_type_support_t _VehicleState__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleState,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, imc_ros_msgs, msg, VehicleState)() {
  return &_VehicleState__type_support;
}

#if defined(__cplusplus)
}
#endif
