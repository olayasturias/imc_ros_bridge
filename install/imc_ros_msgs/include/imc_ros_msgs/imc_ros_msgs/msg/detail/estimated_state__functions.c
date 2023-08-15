// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imc_ros_msgs:msg/EstimatedState.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/estimated_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
imc_ros_msgs__msg__EstimatedState__init(imc_ros_msgs__msg__EstimatedState * msg)
{
  if (!msg) {
    return false;
  }
  // lat
  // lon
  // height
  // x
  // y
  // z
  // phi
  // theta
  // psi
  // u
  // v
  // w
  // vx
  // vy
  // vz
  // p
  // q
  // r
  // depth
  // alt
  return true;
}

void
imc_ros_msgs__msg__EstimatedState__fini(imc_ros_msgs__msg__EstimatedState * msg)
{
  if (!msg) {
    return;
  }
  // lat
  // lon
  // height
  // x
  // y
  // z
  // phi
  // theta
  // psi
  // u
  // v
  // w
  // vx
  // vy
  // vz
  // p
  // q
  // r
  // depth
  // alt
}

bool
imc_ros_msgs__msg__EstimatedState__are_equal(const imc_ros_msgs__msg__EstimatedState * lhs, const imc_ros_msgs__msg__EstimatedState * rhs)
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
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // y
  if (lhs->y != rhs->y) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // phi
  if (lhs->phi != rhs->phi) {
    return false;
  }
  // theta
  if (lhs->theta != rhs->theta) {
    return false;
  }
  // psi
  if (lhs->psi != rhs->psi) {
    return false;
  }
  // u
  if (lhs->u != rhs->u) {
    return false;
  }
  // v
  if (lhs->v != rhs->v) {
    return false;
  }
  // w
  if (lhs->w != rhs->w) {
    return false;
  }
  // vx
  if (lhs->vx != rhs->vx) {
    return false;
  }
  // vy
  if (lhs->vy != rhs->vy) {
    return false;
  }
  // vz
  if (lhs->vz != rhs->vz) {
    return false;
  }
  // p
  if (lhs->p != rhs->p) {
    return false;
  }
  // q
  if (lhs->q != rhs->q) {
    return false;
  }
  // r
  if (lhs->r != rhs->r) {
    return false;
  }
  // depth
  if (lhs->depth != rhs->depth) {
    return false;
  }
  // alt
  if (lhs->alt != rhs->alt) {
    return false;
  }
  return true;
}

bool
imc_ros_msgs__msg__EstimatedState__copy(
  const imc_ros_msgs__msg__EstimatedState * input,
  imc_ros_msgs__msg__EstimatedState * output)
{
  if (!input || !output) {
    return false;
  }
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // height
  output->height = input->height;
  // x
  output->x = input->x;
  // y
  output->y = input->y;
  // z
  output->z = input->z;
  // phi
  output->phi = input->phi;
  // theta
  output->theta = input->theta;
  // psi
  output->psi = input->psi;
  // u
  output->u = input->u;
  // v
  output->v = input->v;
  // w
  output->w = input->w;
  // vx
  output->vx = input->vx;
  // vy
  output->vy = input->vy;
  // vz
  output->vz = input->vz;
  // p
  output->p = input->p;
  // q
  output->q = input->q;
  // r
  output->r = input->r;
  // depth
  output->depth = input->depth;
  // alt
  output->alt = input->alt;
  return true;
}

imc_ros_msgs__msg__EstimatedState *
imc_ros_msgs__msg__EstimatedState__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__EstimatedState * msg = (imc_ros_msgs__msg__EstimatedState *)allocator.allocate(sizeof(imc_ros_msgs__msg__EstimatedState), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imc_ros_msgs__msg__EstimatedState));
  bool success = imc_ros_msgs__msg__EstimatedState__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imc_ros_msgs__msg__EstimatedState__destroy(imc_ros_msgs__msg__EstimatedState * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imc_ros_msgs__msg__EstimatedState__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imc_ros_msgs__msg__EstimatedState__Sequence__init(imc_ros_msgs__msg__EstimatedState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__EstimatedState * data = NULL;

  if (size) {
    data = (imc_ros_msgs__msg__EstimatedState *)allocator.zero_allocate(size, sizeof(imc_ros_msgs__msg__EstimatedState), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imc_ros_msgs__msg__EstimatedState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imc_ros_msgs__msg__EstimatedState__fini(&data[i - 1]);
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
imc_ros_msgs__msg__EstimatedState__Sequence__fini(imc_ros_msgs__msg__EstimatedState__Sequence * array)
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
      imc_ros_msgs__msg__EstimatedState__fini(&array->data[i]);
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

imc_ros_msgs__msg__EstimatedState__Sequence *
imc_ros_msgs__msg__EstimatedState__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__EstimatedState__Sequence * array = (imc_ros_msgs__msg__EstimatedState__Sequence *)allocator.allocate(sizeof(imc_ros_msgs__msg__EstimatedState__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imc_ros_msgs__msg__EstimatedState__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imc_ros_msgs__msg__EstimatedState__Sequence__destroy(imc_ros_msgs__msg__EstimatedState__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imc_ros_msgs__msg__EstimatedState__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imc_ros_msgs__msg__EstimatedState__Sequence__are_equal(const imc_ros_msgs__msg__EstimatedState__Sequence * lhs, const imc_ros_msgs__msg__EstimatedState__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imc_ros_msgs__msg__EstimatedState__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imc_ros_msgs__msg__EstimatedState__Sequence__copy(
  const imc_ros_msgs__msg__EstimatedState__Sequence * input,
  imc_ros_msgs__msg__EstimatedState__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imc_ros_msgs__msg__EstimatedState);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imc_ros_msgs__msg__EstimatedState * data =
      (imc_ros_msgs__msg__EstimatedState *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imc_ros_msgs__msg__EstimatedState__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imc_ros_msgs__msg__EstimatedState__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imc_ros_msgs__msg__EstimatedState__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
