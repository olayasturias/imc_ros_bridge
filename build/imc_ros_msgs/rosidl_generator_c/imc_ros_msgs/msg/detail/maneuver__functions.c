// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imc_ros_msgs:msg/Maneuver.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/maneuver__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `maneuver_name`
// Member `custom_string`
#include "rosidl_runtime_c/string_functions.h"
// Member `polygon`
#include "imc_ros_msgs/msg/detail/polygon_vertex__functions.h"

bool
imc_ros_msgs__msg__Maneuver__init(imc_ros_msgs__msg__Maneuver * msg)
{
  if (!msg) {
    return false;
  }
  // maneuver_name
  if (!rosidl_runtime_c__String__init(&msg->maneuver_name)) {
    imc_ros_msgs__msg__Maneuver__fini(msg);
    return false;
  }
  // maneuver_imc_id
  // lat
  // lon
  // z
  // z_units
  // speed
  // speed_units
  // roll
  // pitch
  // yaw
  // timeout
  // custom_string
  if (!rosidl_runtime_c__String__init(&msg->custom_string)) {
    imc_ros_msgs__msg__Maneuver__fini(msg);
    return false;
  }
  // syringe0
  // syringe1
  // syringe2
  // polygon
  if (!imc_ros_msgs__msg__PolygonVertex__Sequence__init(&msg->polygon, 0)) {
    imc_ros_msgs__msg__Maneuver__fini(msg);
    return false;
  }
  return true;
}

void
imc_ros_msgs__msg__Maneuver__fini(imc_ros_msgs__msg__Maneuver * msg)
{
  if (!msg) {
    return;
  }
  // maneuver_name
  rosidl_runtime_c__String__fini(&msg->maneuver_name);
  // maneuver_imc_id
  // lat
  // lon
  // z
  // z_units
  // speed
  // speed_units
  // roll
  // pitch
  // yaw
  // timeout
  // custom_string
  rosidl_runtime_c__String__fini(&msg->custom_string);
  // syringe0
  // syringe1
  // syringe2
  // polygon
  imc_ros_msgs__msg__PolygonVertex__Sequence__fini(&msg->polygon);
}

bool
imc_ros_msgs__msg__Maneuver__are_equal(const imc_ros_msgs__msg__Maneuver * lhs, const imc_ros_msgs__msg__Maneuver * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // maneuver_name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->maneuver_name), &(rhs->maneuver_name)))
  {
    return false;
  }
  // maneuver_imc_id
  if (lhs->maneuver_imc_id != rhs->maneuver_imc_id) {
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
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  // z_units
  if (lhs->z_units != rhs->z_units) {
    return false;
  }
  // speed
  if (lhs->speed != rhs->speed) {
    return false;
  }
  // speed_units
  if (lhs->speed_units != rhs->speed_units) {
    return false;
  }
  // roll
  if (lhs->roll != rhs->roll) {
    return false;
  }
  // pitch
  if (lhs->pitch != rhs->pitch) {
    return false;
  }
  // yaw
  if (lhs->yaw != rhs->yaw) {
    return false;
  }
  // timeout
  if (lhs->timeout != rhs->timeout) {
    return false;
  }
  // custom_string
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->custom_string), &(rhs->custom_string)))
  {
    return false;
  }
  // syringe0
  if (lhs->syringe0 != rhs->syringe0) {
    return false;
  }
  // syringe1
  if (lhs->syringe1 != rhs->syringe1) {
    return false;
  }
  // syringe2
  if (lhs->syringe2 != rhs->syringe2) {
    return false;
  }
  // polygon
  if (!imc_ros_msgs__msg__PolygonVertex__Sequence__are_equal(
      &(lhs->polygon), &(rhs->polygon)))
  {
    return false;
  }
  return true;
}

bool
imc_ros_msgs__msg__Maneuver__copy(
  const imc_ros_msgs__msg__Maneuver * input,
  imc_ros_msgs__msg__Maneuver * output)
{
  if (!input || !output) {
    return false;
  }
  // maneuver_name
  if (!rosidl_runtime_c__String__copy(
      &(input->maneuver_name), &(output->maneuver_name)))
  {
    return false;
  }
  // maneuver_imc_id
  output->maneuver_imc_id = input->maneuver_imc_id;
  // lat
  output->lat = input->lat;
  // lon
  output->lon = input->lon;
  // z
  output->z = input->z;
  // z_units
  output->z_units = input->z_units;
  // speed
  output->speed = input->speed;
  // speed_units
  output->speed_units = input->speed_units;
  // roll
  output->roll = input->roll;
  // pitch
  output->pitch = input->pitch;
  // yaw
  output->yaw = input->yaw;
  // timeout
  output->timeout = input->timeout;
  // custom_string
  if (!rosidl_runtime_c__String__copy(
      &(input->custom_string), &(output->custom_string)))
  {
    return false;
  }
  // syringe0
  output->syringe0 = input->syringe0;
  // syringe1
  output->syringe1 = input->syringe1;
  // syringe2
  output->syringe2 = input->syringe2;
  // polygon
  if (!imc_ros_msgs__msg__PolygonVertex__Sequence__copy(
      &(input->polygon), &(output->polygon)))
  {
    return false;
  }
  return true;
}

imc_ros_msgs__msg__Maneuver *
imc_ros_msgs__msg__Maneuver__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__Maneuver * msg = (imc_ros_msgs__msg__Maneuver *)allocator.allocate(sizeof(imc_ros_msgs__msg__Maneuver), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imc_ros_msgs__msg__Maneuver));
  bool success = imc_ros_msgs__msg__Maneuver__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imc_ros_msgs__msg__Maneuver__destroy(imc_ros_msgs__msg__Maneuver * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imc_ros_msgs__msg__Maneuver__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imc_ros_msgs__msg__Maneuver__Sequence__init(imc_ros_msgs__msg__Maneuver__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__Maneuver * data = NULL;

  if (size) {
    data = (imc_ros_msgs__msg__Maneuver *)allocator.zero_allocate(size, sizeof(imc_ros_msgs__msg__Maneuver), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imc_ros_msgs__msg__Maneuver__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imc_ros_msgs__msg__Maneuver__fini(&data[i - 1]);
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
imc_ros_msgs__msg__Maneuver__Sequence__fini(imc_ros_msgs__msg__Maneuver__Sequence * array)
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
      imc_ros_msgs__msg__Maneuver__fini(&array->data[i]);
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

imc_ros_msgs__msg__Maneuver__Sequence *
imc_ros_msgs__msg__Maneuver__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__Maneuver__Sequence * array = (imc_ros_msgs__msg__Maneuver__Sequence *)allocator.allocate(sizeof(imc_ros_msgs__msg__Maneuver__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imc_ros_msgs__msg__Maneuver__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imc_ros_msgs__msg__Maneuver__Sequence__destroy(imc_ros_msgs__msg__Maneuver__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imc_ros_msgs__msg__Maneuver__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imc_ros_msgs__msg__Maneuver__Sequence__are_equal(const imc_ros_msgs__msg__Maneuver__Sequence * lhs, const imc_ros_msgs__msg__Maneuver__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imc_ros_msgs__msg__Maneuver__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imc_ros_msgs__msg__Maneuver__Sequence__copy(
  const imc_ros_msgs__msg__Maneuver__Sequence * input,
  imc_ros_msgs__msg__Maneuver__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imc_ros_msgs__msg__Maneuver);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imc_ros_msgs__msg__Maneuver * data =
      (imc_ros_msgs__msg__Maneuver *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imc_ros_msgs__msg__Maneuver__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imc_ros_msgs__msg__Maneuver__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imc_ros_msgs__msg__Maneuver__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
