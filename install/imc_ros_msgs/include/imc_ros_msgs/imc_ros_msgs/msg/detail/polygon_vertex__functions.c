// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imc_ros_msgs:msg/PolygonVertex.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/polygon_vertex__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
imc_ros_msgs__msg__PolygonVertex__init(imc_ros_msgs__msg__PolygonVertex * msg)
{
  if (!msg) {
    return false;
  }
  // lat
  // lon
  return true;
}

void
imc_ros_msgs__msg__PolygonVertex__fini(imc_ros_msgs__msg__PolygonVertex * msg)
{
  if (!msg) {
    return;
  }
  // lat
  // lon
}

bool
imc_ros_msgs__msg__PolygonVertex__are_equal(const imc_ros_msgs__msg__PolygonVertex * lhs, const imc_ros_msgs__msg__PolygonVertex * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // lat
  if (lhs->lat != rhs->lat) {
    return false;
  }
  // lon
  if (lhs->lon != rhs->lon) {
    return false;
  }
  return true;
}

bool
imc_ros_msgs__msg__PolygonVertex__copy(
  const imc_ros_msgs__msg__PolygonVertex * input,
  imc_ros_msgs__msg__PolygonVertex * output)
{
  if (!input || !output) {
    return false;
  }
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  return true;
}

imc_ros_msgs__msg__PolygonVertex *
imc_ros_msgs__msg__PolygonVertex__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PolygonVertex * msg = (imc_ros_msgs__msg__PolygonVertex *)allocator.allocate(sizeof(imc_ros_msgs__msg__PolygonVertex), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imc_ros_msgs__msg__PolygonVertex));
  bool success = imc_ros_msgs__msg__PolygonVertex__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imc_ros_msgs__msg__PolygonVertex__destroy(imc_ros_msgs__msg__PolygonVertex * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imc_ros_msgs__msg__PolygonVertex__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imc_ros_msgs__msg__PolygonVertex__Sequence__init(imc_ros_msgs__msg__PolygonVertex__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PolygonVertex * data = NULL;

  if (size) {
    data = (imc_ros_msgs__msg__PolygonVertex *)allocator.zero_allocate(size, sizeof(imc_ros_msgs__msg__PolygonVertex), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imc_ros_msgs__msg__PolygonVertex__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imc_ros_msgs__msg__PolygonVertex__fini(&data[i - 1]);
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
imc_ros_msgs__msg__PolygonVertex__Sequence__fini(imc_ros_msgs__msg__PolygonVertex__Sequence * array)
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
      imc_ros_msgs__msg__PolygonVertex__fini(&array->data[i]);
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

imc_ros_msgs__msg__PolygonVertex__Sequence *
imc_ros_msgs__msg__PolygonVertex__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PolygonVertex__Sequence * array = (imc_ros_msgs__msg__PolygonVertex__Sequence *)allocator.allocate(sizeof(imc_ros_msgs__msg__PolygonVertex__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imc_ros_msgs__msg__PolygonVertex__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imc_ros_msgs__msg__PolygonVertex__Sequence__destroy(imc_ros_msgs__msg__PolygonVertex__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imc_ros_msgs__msg__PolygonVertex__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imc_ros_msgs__msg__PolygonVertex__Sequence__are_equal(const imc_ros_msgs__msg__PolygonVertex__Sequence * lhs, const imc_ros_msgs__msg__PolygonVertex__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imc_ros_msgs__msg__PolygonVertex__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imc_ros_msgs__msg__PolygonVertex__Sequence__copy(
  const imc_ros_msgs__msg__PolygonVertex__Sequence * input,
  imc_ros_msgs__msg__PolygonVertex__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imc_ros_msgs__msg__PolygonVertex);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imc_ros_msgs__msg__PolygonVertex * data =
      (imc_ros_msgs__msg__PolygonVertex *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imc_ros_msgs__msg__PolygonVertex__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imc_ros_msgs__msg__PolygonVertex__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imc_ros_msgs__msg__PolygonVertex__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
