// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imc_ros_msgs:msg/PlanSpecification.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/plan_specification__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `plan_id`
// Member `description`
// Member `vnamespace`
// Member `start_man_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `maneuvers`
#include "imc_ros_msgs/msg/detail/plan_maneuver__functions.h"

bool
imc_ros_msgs__msg__PlanSpecification__init(imc_ros_msgs__msg__PlanSpecification * msg)
{
  if (!msg) {
    return false;
  }
  // plan_id
  if (!rosidl_runtime_c__String__init(&msg->plan_id)) {
    imc_ros_msgs__msg__PlanSpecification__fini(msg);
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__init(&msg->description)) {
    imc_ros_msgs__msg__PlanSpecification__fini(msg);
    return false;
  }
  // vnamespace
  if (!rosidl_runtime_c__String__init(&msg->vnamespace)) {
    imc_ros_msgs__msg__PlanSpecification__fini(msg);
    return false;
  }
  // start_man_id
  if (!rosidl_runtime_c__String__init(&msg->start_man_id)) {
    imc_ros_msgs__msg__PlanSpecification__fini(msg);
    return false;
  }
  // maneuvers
  if (!imc_ros_msgs__msg__PlanManeuver__Sequence__init(&msg->maneuvers, 0)) {
    imc_ros_msgs__msg__PlanSpecification__fini(msg);
    return false;
  }
  return true;
}

void
imc_ros_msgs__msg__PlanSpecification__fini(imc_ros_msgs__msg__PlanSpecification * msg)
{
  if (!msg) {
    return;
  }
  // plan_id
  rosidl_runtime_c__String__fini(&msg->plan_id);
  // description
  rosidl_runtime_c__String__fini(&msg->description);
  // vnamespace
  rosidl_runtime_c__String__fini(&msg->vnamespace);
  // start_man_id
  rosidl_runtime_c__String__fini(&msg->start_man_id);
  // maneuvers
  imc_ros_msgs__msg__PlanManeuver__Sequence__fini(&msg->maneuvers);
}

bool
imc_ros_msgs__msg__PlanSpecification__are_equal(const imc_ros_msgs__msg__PlanSpecification * lhs, const imc_ros_msgs__msg__PlanSpecification * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // plan_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->plan_id), &(rhs->plan_id)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->description), &(rhs->description)))
  {
    return false;
  }
  // vnamespace
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->vnamespace), &(rhs->vnamespace)))
  {
    return false;
  }
  // start_man_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->start_man_id), &(rhs->start_man_id)))
  {
    return false;
  }
  // maneuvers
  if (!imc_ros_msgs__msg__PlanManeuver__Sequence__are_equal(
      &(lhs->maneuvers), &(rhs->maneuvers)))
  {
    return false;
  }
  return true;
}

bool
imc_ros_msgs__msg__PlanSpecification__copy(
  const imc_ros_msgs__msg__PlanSpecification * input,
  imc_ros_msgs__msg__PlanSpecification * output)
{
  if (!input || !output) {
    return false;
  }
  // plan_id
  if (!rosidl_runtime_c__String__copy(
      &(input->plan_id), &(output->plan_id)))
  {
    return false;
  }
  // description
  if (!rosidl_runtime_c__String__copy(
      &(input->description), &(output->description)))
  {
    return false;
  }
  // vnamespace
  if (!rosidl_runtime_c__String__copy(
      &(input->vnamespace), &(output->vnamespace)))
  {
    return false;
  }
  // start_man_id
  if (!rosidl_runtime_c__String__copy(
      &(input->start_man_id), &(output->start_man_id)))
  {
    return false;
  }
  // maneuvers
  if (!imc_ros_msgs__msg__PlanManeuver__Sequence__copy(
      &(input->maneuvers), &(output->maneuvers)))
  {
    return false;
  }
  return true;
}

imc_ros_msgs__msg__PlanSpecification *
imc_ros_msgs__msg__PlanSpecification__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanSpecification * msg = (imc_ros_msgs__msg__PlanSpecification *)allocator.allocate(sizeof(imc_ros_msgs__msg__PlanSpecification), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imc_ros_msgs__msg__PlanSpecification));
  bool success = imc_ros_msgs__msg__PlanSpecification__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imc_ros_msgs__msg__PlanSpecification__destroy(imc_ros_msgs__msg__PlanSpecification * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imc_ros_msgs__msg__PlanSpecification__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imc_ros_msgs__msg__PlanSpecification__Sequence__init(imc_ros_msgs__msg__PlanSpecification__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanSpecification * data = NULL;

  if (size) {
    data = (imc_ros_msgs__msg__PlanSpecification *)allocator.zero_allocate(size, sizeof(imc_ros_msgs__msg__PlanSpecification), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imc_ros_msgs__msg__PlanSpecification__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imc_ros_msgs__msg__PlanSpecification__fini(&data[i - 1]);
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
imc_ros_msgs__msg__PlanSpecification__Sequence__fini(imc_ros_msgs__msg__PlanSpecification__Sequence * array)
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
      imc_ros_msgs__msg__PlanSpecification__fini(&array->data[i]);
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

imc_ros_msgs__msg__PlanSpecification__Sequence *
imc_ros_msgs__msg__PlanSpecification__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanSpecification__Sequence * array = (imc_ros_msgs__msg__PlanSpecification__Sequence *)allocator.allocate(sizeof(imc_ros_msgs__msg__PlanSpecification__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imc_ros_msgs__msg__PlanSpecification__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imc_ros_msgs__msg__PlanSpecification__Sequence__destroy(imc_ros_msgs__msg__PlanSpecification__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imc_ros_msgs__msg__PlanSpecification__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imc_ros_msgs__msg__PlanSpecification__Sequence__are_equal(const imc_ros_msgs__msg__PlanSpecification__Sequence * lhs, const imc_ros_msgs__msg__PlanSpecification__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imc_ros_msgs__msg__PlanSpecification__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imc_ros_msgs__msg__PlanSpecification__Sequence__copy(
  const imc_ros_msgs__msg__PlanSpecification__Sequence * input,
  imc_ros_msgs__msg__PlanSpecification__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imc_ros_msgs__msg__PlanSpecification);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imc_ros_msgs__msg__PlanSpecification * data =
      (imc_ros_msgs__msg__PlanSpecification *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imc_ros_msgs__msg__PlanSpecification__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imc_ros_msgs__msg__PlanSpecification__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imc_ros_msgs__msg__PlanSpecification__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
