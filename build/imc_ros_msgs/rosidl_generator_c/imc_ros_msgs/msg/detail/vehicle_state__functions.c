// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imc_ros_msgs:msg/VehicleState.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/vehicle_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `error_ents`
// Member `last_error`
#include "rosidl_runtime_c/string_functions.h"

bool
imc_ros_msgs__msg__VehicleState__init(imc_ros_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return false;
  }
  // op_mode
  // error_count
  // error_ents
  if (!rosidl_runtime_c__String__init(&msg->error_ents)) {
    imc_ros_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // maneuver_type
  // maneuver_stime
  // maneuver_eta
  // control_loops
  // flags
  // last_error
  if (!rosidl_runtime_c__String__init(&msg->last_error)) {
    imc_ros_msgs__msg__VehicleState__fini(msg);
    return false;
  }
  // last_error_time
  return true;
}

void
imc_ros_msgs__msg__VehicleState__fini(imc_ros_msgs__msg__VehicleState * msg)
{
  if (!msg) {
    return;
  }
  // op_mode
  // error_count
  // error_ents
  rosidl_runtime_c__String__fini(&msg->error_ents);
  // maneuver_type
  // maneuver_stime
  // maneuver_eta
  // control_loops
  // flags
  // last_error
  rosidl_runtime_c__String__fini(&msg->last_error);
  // last_error_time
}

bool
imc_ros_msgs__msg__VehicleState__are_equal(const imc_ros_msgs__msg__VehicleState * lhs, const imc_ros_msgs__msg__VehicleState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // op_mode
  if (lhs->op_mode != rhs->op_mode) {
    return false;
  }
  // error_count
  if (lhs->error_count != rhs->error_count) {
    return false;
  }
  // error_ents
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->error_ents), &(rhs->error_ents)))
  {
    return false;
  }
  // maneuver_type
  if (lhs->maneuver_type != rhs->maneuver_type) {
    return false;
  }
  // maneuver_stime
  if (lhs->maneuver_stime != rhs->maneuver_stime) {
    return false;
  }
  // maneuver_eta
  if (lhs->maneuver_eta != rhs->maneuver_eta) {
    return false;
  }
  // control_loops
  if (lhs->control_loops != rhs->control_loops) {
    return false;
  }
  // flags
  if (lhs->flags != rhs->flags) {
    return false;
  }
  // last_error
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->last_error), &(rhs->last_error)))
  {
    return false;
  }
  // last_error_time
  if (lhs->last_error_time != rhs->last_error_time) {
    return false;
  }
  return true;
}

bool
imc_ros_msgs__msg__VehicleState__copy(
  const imc_ros_msgs__msg__VehicleState * input,
  imc_ros_msgs__msg__VehicleState * output)
{
  if (!input || !output) {
    return false;
  }
  // op_mode
  output->op_mode = input->op_mode;
  // error_count
  output->error_count = input->error_count;
  // error_ents
  if (!rosidl_runtime_c__String__copy(
      &(input->error_ents), &(output->error_ents)))
  {
    return false;
  }
  // maneuver_type
  output->maneuver_type = input->maneuver_type;
  // maneuver_stime
  output->maneuver_stime = input->maneuver_stime;
  // maneuver_eta
  output->maneuver_eta = input->maneuver_eta;
  // control_loops
  output->control_loops = input->control_loops;
  // flags
  output->flags = input->flags;
  // last_error
  if (!rosidl_runtime_c__String__copy(
      &(input->last_error), &(output->last_error)))
  {
    return false;
  }
  // last_error_time
  output->last_error_time = input->last_error_time;
  return true;
}

imc_ros_msgs__msg__VehicleState *
imc_ros_msgs__msg__VehicleState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__VehicleState * msg = (imc_ros_msgs__msg__VehicleState *)allocator.allocate(sizeof(imc_ros_msgs__msg__VehicleState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imc_ros_msgs__msg__VehicleState));
  bool success = imc_ros_msgs__msg__VehicleState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imc_ros_msgs__msg__VehicleState__destroy(imc_ros_msgs__msg__VehicleState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imc_ros_msgs__msg__VehicleState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imc_ros_msgs__msg__VehicleState__Sequence__init(imc_ros_msgs__msg__VehicleState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__VehicleState * data = NULL;

  if (size) {
    data = (imc_ros_msgs__msg__VehicleState *)allocator.zero_allocate(size, sizeof(imc_ros_msgs__msg__VehicleState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imc_ros_msgs__msg__VehicleState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imc_ros_msgs__msg__VehicleState__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
imc_ros_msgs__msg__VehicleState__Sequence__fini(imc_ros_msgs__msg__VehicleState__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      imc_ros_msgs__msg__VehicleState__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

imc_ros_msgs__msg__VehicleState__Sequence *
imc_ros_msgs__msg__VehicleState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__VehicleState__Sequence * array = (imc_ros_msgs__msg__VehicleState__Sequence *)allocator.allocate(sizeof(imc_ros_msgs__msg__VehicleState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imc_ros_msgs__msg__VehicleState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imc_ros_msgs__msg__VehicleState__Sequence__destroy(imc_ros_msgs__msg__VehicleState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imc_ros_msgs__msg__VehicleState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imc_ros_msgs__msg__VehicleState__Sequence__are_equal(const imc_ros_msgs__msg__VehicleState__Sequence * lhs, const imc_ros_msgs__msg__VehicleState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imc_ros_msgs__msg__VehicleState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imc_ros_msgs__msg__VehicleState__Sequence__copy(
  const imc_ros_msgs__msg__VehicleState__Sequence * input,
  imc_ros_msgs__msg__VehicleState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imc_ros_msgs__msg__VehicleState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imc_ros_msgs__msg__VehicleState * data =
      (imc_ros_msgs__msg__VehicleState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imc_ros_msgs__msg__VehicleState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imc_ros_msgs__msg__VehicleState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imc_ros_msgs__msg__VehicleState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
