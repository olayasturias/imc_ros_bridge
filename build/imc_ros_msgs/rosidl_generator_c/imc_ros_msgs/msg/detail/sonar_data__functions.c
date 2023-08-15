// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imc_ros_msgs:msg/SonarData.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/sonar_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
imc_ros_msgs__msg__SonarData__init(imc_ros_msgs__msg__SonarData * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // frequency
  // min_range
  // max_range
  // bits_per_point
  // scale_factor
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    imc_ros_msgs__msg__SonarData__fini(msg);
    return false;
  }
  return true;
}

void
imc_ros_msgs__msg__SonarData__fini(imc_ros_msgs__msg__SonarData * msg)
{
  if (!msg) {
    return;
  }
  // type
  // frequency
  // min_range
  // max_range
  // bits_per_point
  // scale_factor
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
}

bool
imc_ros_msgs__msg__SonarData__are_equal(const imc_ros_msgs__msg__SonarData * lhs, const imc_ros_msgs__msg__SonarData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // frequency
  if (lhs->frequency != rhs->frequency) {
    return false;
  }
  // min_range
  if (lhs->min_range != rhs->min_range) {
    return false;
  }
  // max_range
  if (lhs->max_range != rhs->max_range) {
    return false;
  }
  // bits_per_point
  if (lhs->bits_per_point != rhs->bits_per_point) {
    return false;
  }
  // scale_factor
  if (lhs->scale_factor != rhs->scale_factor) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
imc_ros_msgs__msg__SonarData__copy(
  const imc_ros_msgs__msg__SonarData * input,
  imc_ros_msgs__msg__SonarData * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // frequency
  output->frequency = input->frequency;
  // min_range
  output->min_range = input->min_range;
  // max_range
  output->max_range = input->max_range;
  // bits_per_point
  output->bits_per_point = input->bits_per_point;
  // scale_factor
  output->scale_factor = input->scale_factor;
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

imc_ros_msgs__msg__SonarData *
imc_ros_msgs__msg__SonarData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__SonarData * msg = (imc_ros_msgs__msg__SonarData *)allocator.allocate(sizeof(imc_ros_msgs__msg__SonarData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imc_ros_msgs__msg__SonarData));
  bool success = imc_ros_msgs__msg__SonarData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imc_ros_msgs__msg__SonarData__destroy(imc_ros_msgs__msg__SonarData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imc_ros_msgs__msg__SonarData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imc_ros_msgs__msg__SonarData__Sequence__init(imc_ros_msgs__msg__SonarData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__SonarData * data = NULL;

  if (size) {
    data = (imc_ros_msgs__msg__SonarData *)allocator.zero_allocate(size, sizeof(imc_ros_msgs__msg__SonarData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imc_ros_msgs__msg__SonarData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imc_ros_msgs__msg__SonarData__fini(&data[i - 1]);
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
imc_ros_msgs__msg__SonarData__Sequence__fini(imc_ros_msgs__msg__SonarData__Sequence * array)
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
      imc_ros_msgs__msg__SonarData__fini(&array->data[i]);
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

imc_ros_msgs__msg__SonarData__Sequence *
imc_ros_msgs__msg__SonarData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__SonarData__Sequence * array = (imc_ros_msgs__msg__SonarData__Sequence *)allocator.allocate(sizeof(imc_ros_msgs__msg__SonarData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imc_ros_msgs__msg__SonarData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imc_ros_msgs__msg__SonarData__Sequence__destroy(imc_ros_msgs__msg__SonarData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imc_ros_msgs__msg__SonarData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imc_ros_msgs__msg__SonarData__Sequence__are_equal(const imc_ros_msgs__msg__SonarData__Sequence * lhs, const imc_ros_msgs__msg__SonarData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imc_ros_msgs__msg__SonarData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imc_ros_msgs__msg__SonarData__Sequence__copy(
  const imc_ros_msgs__msg__SonarData__Sequence * input,
  imc_ros_msgs__msg__SonarData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imc_ros_msgs__msg__SonarData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imc_ros_msgs__msg__SonarData * data =
      (imc_ros_msgs__msg__SonarData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imc_ros_msgs__msg__SonarData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imc_ros_msgs__msg__SonarData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imc_ros_msgs__msg__SonarData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
