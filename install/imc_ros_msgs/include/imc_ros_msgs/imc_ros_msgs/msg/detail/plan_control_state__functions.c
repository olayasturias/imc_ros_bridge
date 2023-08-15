// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imc_ros_msgs:msg/PlanControlState.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/plan_control_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `plan_id`
// Member `man_id`
#include "rosidl_runtime_c/string_functions.h"

bool
imc_ros_msgs__msg__PlanControlState__init(imc_ros_msgs__msg__PlanControlState * msg)
{
  if (!msg) {
    return false;
  }
  // state
  // plan_id
  if (!rosidl_runtime_c__String__init(&msg->plan_id)) {
    imc_ros_msgs__msg__PlanControlState__fini(msg);
    return false;
  }
  // plan_eta
  // plan_progress
  // man_id
  if (!rosidl_runtime_c__String__init(&msg->man_id)) {
    imc_ros_msgs__msg__PlanControlState__fini(msg);
    return false;
  }
  // man_type
  // man_eta
  // last_outcome
  return true;
}

void
imc_ros_msgs__msg__PlanControlState__fini(imc_ros_msgs__msg__PlanControlState * msg)
{
  if (!msg) {
    return;
  }
  // state
  // plan_id
  rosidl_runtime_c__String__fini(&msg->plan_id);
  // plan_eta
  // plan_progress
  // man_id
  rosidl_runtime_c__String__fini(&msg->man_id);
  // man_type
  // man_eta
  // last_outcome
}

bool
imc_ros_msgs__msg__PlanControlState__are_equal(const imc_ros_msgs__msg__PlanControlState * lhs, const imc_ros_msgs__msg__PlanControlState * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // state
  if (lhs->state != rhs->state) {
    return false;
  }
  // plan_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->plan_id), &(rhs->plan_id)))
  {
    return false;
  }
  // plan_eta
  if (lhs->plan_eta != rhs->plan_eta) {
    return false;
  }
  // plan_progress
  if (lhs->plan_progress != rhs->plan_progress) {
    return false;
  }
  // man_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->man_id), &(rhs->man_id)))
  {
    return false;
  }
  // man_type
  if (lhs->man_type != rhs->man_type) {
    return false;
  }
  // man_eta
  if (lhs->man_eta != rhs->man_eta) {
    return false;
  }
  // last_outcome
  if (lhs->last_outcome != rhs->last_outcome) {
    return false;
  }
  return true;
}

bool
imc_ros_msgs__msg__PlanControlState__copy(
  const imc_ros_msgs__msg__PlanControlState * input,
  imc_ros_msgs__msg__PlanControlState * output)
{
  if (!input || !output) {
    return false;
  }
  // state
  output->state = input->state;
  // plan_id
  if (!rosidl_runtime_c__String__copy(
      &(input->plan_id), &(output->plan_id)))
  {
    return false;
  }
  // plan_eta
  output->plan_eta = input->plan_eta;
  // plan_progress
  output->plan_progress = input->plan_progress;
  // man_id
  if (!rosidl_runtime_c__String__copy(
      &(input->man_id), &(output->man_id)))
  {
    return false;
  }
  // man_type
  output->man_type = input->man_type;
  // man_eta
  output->man_eta = input->man_eta;
  // last_outcome
  output->last_outcome = input->last_outcome;
  return true;
}

imc_ros_msgs__msg__PlanControlState *
imc_ros_msgs__msg__PlanControlState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanControlState * msg = (imc_ros_msgs__msg__PlanControlState *)allocator.allocate(sizeof(imc_ros_msgs__msg__PlanControlState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imc_ros_msgs__msg__PlanControlState));
  bool success = imc_ros_msgs__msg__PlanControlState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imc_ros_msgs__msg__PlanControlState__destroy(imc_ros_msgs__msg__PlanControlState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imc_ros_msgs__msg__PlanControlState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imc_ros_msgs__msg__PlanControlState__Sequence__init(imc_ros_msgs__msg__PlanControlState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanControlState * data = NULL;

  if (size) {
    data = (imc_ros_msgs__msg__PlanControlState *)allocator.zero_allocate(size, sizeof(imc_ros_msgs__msg__PlanControlState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imc_ros_msgs__msg__PlanControlState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imc_ros_msgs__msg__PlanControlState__fini(&data[i - 1]);
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
imc_ros_msgs__msg__PlanControlState__Sequence__fini(imc_ros_msgs__msg__PlanControlState__Sequence * array)
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
      imc_ros_msgs__msg__PlanControlState__fini(&array->data[i]);
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

imc_ros_msgs__msg__PlanControlState__Sequence *
imc_ros_msgs__msg__PlanControlState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanControlState__Sequence * array = (imc_ros_msgs__msg__PlanControlState__Sequence *)allocator.allocate(sizeof(imc_ros_msgs__msg__PlanControlState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imc_ros_msgs__msg__PlanControlState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imc_ros_msgs__msg__PlanControlState__Sequence__destroy(imc_ros_msgs__msg__PlanControlState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imc_ros_msgs__msg__PlanControlState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imc_ros_msgs__msg__PlanControlState__Sequence__are_equal(const imc_ros_msgs__msg__PlanControlState__Sequence * lhs, const imc_ros_msgs__msg__PlanControlState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imc_ros_msgs__msg__PlanControlState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imc_ros_msgs__msg__PlanControlState__Sequence__copy(
  const imc_ros_msgs__msg__PlanControlState__Sequence * input,
  imc_ros_msgs__msg__PlanControlState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imc_ros_msgs__msg__PlanControlState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imc_ros_msgs__msg__PlanControlState * data =
      (imc_ros_msgs__msg__PlanControlState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imc_ros_msgs__msg__PlanControlState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imc_ros_msgs__msg__PlanControlState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imc_ros_msgs__msg__PlanControlState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
