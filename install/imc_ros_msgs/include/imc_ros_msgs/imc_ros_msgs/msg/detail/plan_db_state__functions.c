// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imc_ros_msgs:msg/PlanDBState.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/plan_db_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `change_sname`
#include "rosidl_runtime_c/string_functions.h"
// Member `md5`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `plans_info`
#include "imc_ros_msgs/msg/detail/plan_db_information__functions.h"

bool
imc_ros_msgs__msg__PlanDBState__init(imc_ros_msgs__msg__PlanDBState * msg)
{
  if (!msg) {
    return false;
  }
  // plan_count
  // plan_size
  // change_time
  // change_sid
  // change_sname
  if (!rosidl_runtime_c__String__init(&msg->change_sname)) {
    imc_ros_msgs__msg__PlanDBState__fini(msg);
    return false;
  }
  // md5
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->md5, 0)) {
    imc_ros_msgs__msg__PlanDBState__fini(msg);
    return false;
  }
  // plans_info
  if (!imc_ros_msgs__msg__PlanDBInformation__Sequence__init(&msg->plans_info, 0)) {
    imc_ros_msgs__msg__PlanDBState__fini(msg);
    return false;
  }
  return true;
}

void
imc_ros_msgs__msg__PlanDBState__fini(imc_ros_msgs__msg__PlanDBState * msg)
{
  if (!msg) {
    return;
  }
  // plan_count
  // plan_size
  // change_time
  // change_sid
  // change_sname
  rosidl_runtime_c__String__fini(&msg->change_sname);
  // md5
  rosidl_runtime_c__uint8__Sequence__fini(&msg->md5);
  // plans_info
  imc_ros_msgs__msg__PlanDBInformation__Sequence__fini(&msg->plans_info);
}

bool
imc_ros_msgs__msg__PlanDBState__are_equal(const imc_ros_msgs__msg__PlanDBState * lhs, const imc_ros_msgs__msg__PlanDBState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // plan_count
  if (lhs->plan_count != rhs->plan_count) {
    return false;
  }
  // plan_size
  if (lhs->plan_size != rhs->plan_size) {
    return false;
  }
  // change_time
  if (lhs->change_time != rhs->change_time) {
    return false;
  }
  // change_sid
  if (lhs->change_sid != rhs->change_sid) {
    return false;
  }
  // change_sname
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->change_sname), &(rhs->change_sname)))
  {
    return false;
  }
  // md5
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->md5), &(rhs->md5)))
  {
    return false;
  }
  // plans_info
  if (!imc_ros_msgs__msg__PlanDBInformation__Sequence__are_equal(
      &(lhs->plans_info), &(rhs->plans_info)))
  {
    return false;
  }
  return true;
}

bool
imc_ros_msgs__msg__PlanDBState__copy(
  const imc_ros_msgs__msg__PlanDBState * input,
  imc_ros_msgs__msg__PlanDBState * output)
{
  if (!input || !output) {
    return false;
  }
  // plan_count
  output->plan_count = input->plan_count;
  // plan_size
  output->plan_size = input->plan_size;
  // change_time
  output->change_time = input->change_time;
  // change_sid
  output->change_sid = input->change_sid;
  // change_sname
  if (!rosidl_runtime_c__String__copy(
      &(input->change_sname), &(output->change_sname)))
  {
    return false;
  }
  // md5
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->md5), &(output->md5)))
  {
    return false;
  }
  // plans_info
  if (!imc_ros_msgs__msg__PlanDBInformation__Sequence__copy(
      &(input->plans_info), &(output->plans_info)))
  {
    return false;
  }
  return true;
}

imc_ros_msgs__msg__PlanDBState *
imc_ros_msgs__msg__PlanDBState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanDBState * msg = (imc_ros_msgs__msg__PlanDBState *)allocator.allocate(sizeof(imc_ros_msgs__msg__PlanDBState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imc_ros_msgs__msg__PlanDBState));
  bool success = imc_ros_msgs__msg__PlanDBState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imc_ros_msgs__msg__PlanDBState__destroy(imc_ros_msgs__msg__PlanDBState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imc_ros_msgs__msg__PlanDBState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imc_ros_msgs__msg__PlanDBState__Sequence__init(imc_ros_msgs__msg__PlanDBState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanDBState * data = NULL;

  if (size) {
    data = (imc_ros_msgs__msg__PlanDBState *)allocator.zero_allocate(size, sizeof(imc_ros_msgs__msg__PlanDBState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imc_ros_msgs__msg__PlanDBState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imc_ros_msgs__msg__PlanDBState__fini(&data[i - 1]);
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
imc_ros_msgs__msg__PlanDBState__Sequence__fini(imc_ros_msgs__msg__PlanDBState__Sequence * array)
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
      imc_ros_msgs__msg__PlanDBState__fini(&array->data[i]);
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

imc_ros_msgs__msg__PlanDBState__Sequence *
imc_ros_msgs__msg__PlanDBState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanDBState__Sequence * array = (imc_ros_msgs__msg__PlanDBState__Sequence *)allocator.allocate(sizeof(imc_ros_msgs__msg__PlanDBState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imc_ros_msgs__msg__PlanDBState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imc_ros_msgs__msg__PlanDBState__Sequence__destroy(imc_ros_msgs__msg__PlanDBState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imc_ros_msgs__msg__PlanDBState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imc_ros_msgs__msg__PlanDBState__Sequence__are_equal(const imc_ros_msgs__msg__PlanDBState__Sequence * lhs, const imc_ros_msgs__msg__PlanDBState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imc_ros_msgs__msg__PlanDBState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imc_ros_msgs__msg__PlanDBState__Sequence__copy(
  const imc_ros_msgs__msg__PlanDBState__Sequence * input,
  imc_ros_msgs__msg__PlanDBState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imc_ros_msgs__msg__PlanDBState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imc_ros_msgs__msg__PlanDBState * data =
      (imc_ros_msgs__msg__PlanDBState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imc_ros_msgs__msg__PlanDBState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imc_ros_msgs__msg__PlanDBState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imc_ros_msgs__msg__PlanDBState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
