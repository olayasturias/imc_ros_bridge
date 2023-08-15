// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imc_ros_msgs:msg/PlanManeuver.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/plan_maneuver__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `maneuver_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `maneuver`
#include "imc_ros_msgs/msg/detail/maneuver__functions.h"

bool
imc_ros_msgs__msg__PlanManeuver__init(imc_ros_msgs__msg__PlanManeuver * msg)
{
  if (!msg) {
    return false;
  }
  // maneuver_id
  if (!rosidl_runtime_c__String__init(&msg->maneuver_id)) {
    imc_ros_msgs__msg__PlanManeuver__fini(msg);
    return false;
  }
  // maneuver
  if (!imc_ros_msgs__msg__Maneuver__init(&msg->maneuver)) {
    imc_ros_msgs__msg__PlanManeuver__fini(msg);
    return false;
  }
  return true;
}

void
imc_ros_msgs__msg__PlanManeuver__fini(imc_ros_msgs__msg__PlanManeuver * msg)
{
  if (!msg) {
    return;
  }
  // maneuver_id
  rosidl_runtime_c__String__fini(&msg->maneuver_id);
  // maneuver
  imc_ros_msgs__msg__Maneuver__fini(&msg->maneuver);
}

bool
imc_ros_msgs__msg__PlanManeuver__are_equal(const imc_ros_msgs__msg__PlanManeuver * lhs, const imc_ros_msgs__msg__PlanManeuver * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // maneuver_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->maneuver_id), &(rhs->maneuver_id)))
  {
    return false;
  }
  // maneuver
  if (!imc_ros_msgs__msg__Maneuver__are_equal(
      &(lhs->maneuver), &(rhs->maneuver)))
  {
    return false;
  }
  return true;
}

bool
imc_ros_msgs__msg__PlanManeuver__copy(
  const imc_ros_msgs__msg__PlanManeuver * input,
  imc_ros_msgs__msg__PlanManeuver * output)
{
  if (!input || !output) {
    return false;
  }
  // maneuver_id
  if (!rosidl_runtime_c__String__copy(
      &(input->maneuver_id), &(output->maneuver_id)))
  {
    return false;
  }
  // maneuver
  if (!imc_ros_msgs__msg__Maneuver__copy(
      &(input->maneuver), &(output->maneuver)))
  {
    return false;
  }
  return true;
}

imc_ros_msgs__msg__PlanManeuver *
imc_ros_msgs__msg__PlanManeuver__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanManeuver * msg = (imc_ros_msgs__msg__PlanManeuver *)allocator.allocate(sizeof(imc_ros_msgs__msg__PlanManeuver), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imc_ros_msgs__msg__PlanManeuver));
  bool success = imc_ros_msgs__msg__PlanManeuver__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imc_ros_msgs__msg__PlanManeuver__destroy(imc_ros_msgs__msg__PlanManeuver * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imc_ros_msgs__msg__PlanManeuver__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imc_ros_msgs__msg__PlanManeuver__Sequence__init(imc_ros_msgs__msg__PlanManeuver__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanManeuver * data = NULL;

  if (size) {
    data = (imc_ros_msgs__msg__PlanManeuver *)allocator.zero_allocate(size, sizeof(imc_ros_msgs__msg__PlanManeuver), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imc_ros_msgs__msg__PlanManeuver__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imc_ros_msgs__msg__PlanManeuver__fini(&data[i - 1]);
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
imc_ros_msgs__msg__PlanManeuver__Sequence__fini(imc_ros_msgs__msg__PlanManeuver__Sequence * array)
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
      imc_ros_msgs__msg__PlanManeuver__fini(&array->data[i]);
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

imc_ros_msgs__msg__PlanManeuver__Sequence *
imc_ros_msgs__msg__PlanManeuver__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanManeuver__Sequence * array = (imc_ros_msgs__msg__PlanManeuver__Sequence *)allocator.allocate(sizeof(imc_ros_msgs__msg__PlanManeuver__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imc_ros_msgs__msg__PlanManeuver__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imc_ros_msgs__msg__PlanManeuver__Sequence__destroy(imc_ros_msgs__msg__PlanManeuver__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imc_ros_msgs__msg__PlanManeuver__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imc_ros_msgs__msg__PlanManeuver__Sequence__are_equal(const imc_ros_msgs__msg__PlanManeuver__Sequence * lhs, const imc_ros_msgs__msg__PlanManeuver__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imc_ros_msgs__msg__PlanManeuver__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imc_ros_msgs__msg__PlanManeuver__Sequence__copy(
  const imc_ros_msgs__msg__PlanManeuver__Sequence * input,
  imc_ros_msgs__msg__PlanManeuver__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imc_ros_msgs__msg__PlanManeuver);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imc_ros_msgs__msg__PlanManeuver * data =
      (imc_ros_msgs__msg__PlanManeuver *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imc_ros_msgs__msg__PlanManeuver__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imc_ros_msgs__msg__PlanManeuver__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imc_ros_msgs__msg__PlanManeuver__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
