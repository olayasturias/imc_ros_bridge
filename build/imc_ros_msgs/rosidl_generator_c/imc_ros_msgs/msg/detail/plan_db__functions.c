// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from imc_ros_msgs:msg/PlanDB.idl
// generated code does not contain a copyright notice
#include "imc_ros_msgs/msg/detail/plan_db__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `plan_id`
#include "rosidl_runtime_c/string_functions.h"
// Member `plan_spec`
#include "imc_ros_msgs/msg/detail/plan_specification__functions.h"
// Member `plan_spec_md5`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `plandb_information`
#include "imc_ros_msgs/msg/detail/plan_db_information__functions.h"
// Member `plandb_state`
#include "imc_ros_msgs/msg/detail/plan_db_state__functions.h"

bool
imc_ros_msgs__msg__PlanDB__init(imc_ros_msgs__msg__PlanDB * msg)
{
  if (!msg) {
    return false;
  }
  // type
  // op
  // request_id
  // plan_id
  if (!rosidl_runtime_c__String__init(&msg->plan_id)) {
    imc_ros_msgs__msg__PlanDB__fini(msg);
    return false;
  }
  // plan_spec
  if (!imc_ros_msgs__msg__PlanSpecification__init(&msg->plan_spec)) {
    imc_ros_msgs__msg__PlanDB__fini(msg);
    return false;
  }
  // plan_spec_md5
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->plan_spec_md5, 0)) {
    imc_ros_msgs__msg__PlanDB__fini(msg);
    return false;
  }
  // plandb_information
  if (!imc_ros_msgs__msg__PlanDBInformation__init(&msg->plandb_information)) {
    imc_ros_msgs__msg__PlanDB__fini(msg);
    return false;
  }
  // plandb_state
  if (!imc_ros_msgs__msg__PlanDBState__init(&msg->plandb_state)) {
    imc_ros_msgs__msg__PlanDB__fini(msg);
    return false;
  }
  return true;
}

void
imc_ros_msgs__msg__PlanDB__fini(imc_ros_msgs__msg__PlanDB * msg)
{
  if (!msg) {
    return;
  }
  // type
  // op
  // request_id
  // plan_id
  rosidl_runtime_c__String__fini(&msg->plan_id);
  // plan_spec
  imc_ros_msgs__msg__PlanSpecification__fini(&msg->plan_spec);
  // plan_spec_md5
  rosidl_runtime_c__uint8__Sequence__fini(&msg->plan_spec_md5);
  // plandb_information
  imc_ros_msgs__msg__PlanDBInformation__fini(&msg->plandb_information);
  // plandb_state
  imc_ros_msgs__msg__PlanDBState__fini(&msg->plandb_state);
}

bool
imc_ros_msgs__msg__PlanDB__are_equal(const imc_ros_msgs__msg__PlanDB * lhs, const imc_ros_msgs__msg__PlanDB * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // type
  if (lhs->type != rhs->type) {
    return false;
  }
  // op
  if (lhs->op != rhs->op) {
    return false;
  }
  // request_id
  if (lhs->request_id != rhs->request_id) {
    return false;
  }
  // plan_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->plan_id), &(rhs->plan_id)))
  {
    return false;
  }
  // plan_spec
  if (!imc_ros_msgs__msg__PlanSpecification__are_equal(
      &(lhs->plan_spec), &(rhs->plan_spec)))
  {
    return false;
  }
  // plan_spec_md5
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->plan_spec_md5), &(rhs->plan_spec_md5)))
  {
    return false;
  }
  // plandb_information
  if (!imc_ros_msgs__msg__PlanDBInformation__are_equal(
      &(lhs->plandb_information), &(rhs->plandb_information)))
  {
    return false;
  }
  // plandb_state
  if (!imc_ros_msgs__msg__PlanDBState__are_equal(
      &(lhs->plandb_state), &(rhs->plandb_state)))
  {
    return false;
  }
  return true;
}

bool
imc_ros_msgs__msg__PlanDB__copy(
  const imc_ros_msgs__msg__PlanDB * input,
  imc_ros_msgs__msg__PlanDB * output)
{
  if (!input || !output) {
    return false;
  }
  // type
  output->type = input->type;
  // op
  output->op = input->op;
  // request_id
  output->request_id = input->request_id;
  // plan_id
  if (!rosidl_runtime_c__String__copy(
      &(input->plan_id), &(output->plan_id)))
  {
    return false;
  }
  // plan_spec
  if (!imc_ros_msgs__msg__PlanSpecification__copy(
      &(input->plan_spec), &(output->plan_spec)))
  {
    return false;
  }
  // plan_spec_md5
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->plan_spec_md5), &(output->plan_spec_md5)))
  {
    return false;
  }
  // plandb_information
  if (!imc_ros_msgs__msg__PlanDBInformation__copy(
      &(input->plandb_information), &(output->plandb_information)))
  {
    return false;
  }
  // plandb_state
  if (!imc_ros_msgs__msg__PlanDBState__copy(
      &(input->plandb_state), &(output->plandb_state)))
  {
    return false;
  }
  return true;
}

imc_ros_msgs__msg__PlanDB *
imc_ros_msgs__msg__PlanDB__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanDB * msg = (imc_ros_msgs__msg__PlanDB *)allocator.allocate(sizeof(imc_ros_msgs__msg__PlanDB), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(imc_ros_msgs__msg__PlanDB));
  bool success = imc_ros_msgs__msg__PlanDB__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
imc_ros_msgs__msg__PlanDB__destroy(imc_ros_msgs__msg__PlanDB * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    imc_ros_msgs__msg__PlanDB__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
imc_ros_msgs__msg__PlanDB__Sequence__init(imc_ros_msgs__msg__PlanDB__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanDB * data = NULL;

  if (size) {
    data = (imc_ros_msgs__msg__PlanDB *)allocator.zero_allocate(size, sizeof(imc_ros_msgs__msg__PlanDB), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = imc_ros_msgs__msg__PlanDB__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        imc_ros_msgs__msg__PlanDB__fini(&data[i - 1]);
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
imc_ros_msgs__msg__PlanDB__Sequence__fini(imc_ros_msgs__msg__PlanDB__Sequence * array)
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
      imc_ros_msgs__msg__PlanDB__fini(&array->data[i]);
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

imc_ros_msgs__msg__PlanDB__Sequence *
imc_ros_msgs__msg__PlanDB__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  imc_ros_msgs__msg__PlanDB__Sequence * array = (imc_ros_msgs__msg__PlanDB__Sequence *)allocator.allocate(sizeof(imc_ros_msgs__msg__PlanDB__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = imc_ros_msgs__msg__PlanDB__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
imc_ros_msgs__msg__PlanDB__Sequence__destroy(imc_ros_msgs__msg__PlanDB__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    imc_ros_msgs__msg__PlanDB__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
imc_ros_msgs__msg__PlanDB__Sequence__are_equal(const imc_ros_msgs__msg__PlanDB__Sequence * lhs, const imc_ros_msgs__msg__PlanDB__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!imc_ros_msgs__msg__PlanDB__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
imc_ros_msgs__msg__PlanDB__Sequence__copy(
  const imc_ros_msgs__msg__PlanDB__Sequence * input,
  imc_ros_msgs__msg__PlanDB__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(imc_ros_msgs__msg__PlanDB);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    imc_ros_msgs__msg__PlanDB * data =
      (imc_ros_msgs__msg__PlanDB *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!imc_ros_msgs__msg__PlanDB__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          imc_ros_msgs__msg__PlanDB__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!imc_ros_msgs__msg__PlanDB__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
