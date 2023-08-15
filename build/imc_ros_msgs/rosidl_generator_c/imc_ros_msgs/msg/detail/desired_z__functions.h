// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from imc_ros_msgs:msg/DesiredZ.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__DESIRED_Z__FUNCTIONS_H_
#define IMC_ROS_MSGS__MSG__DETAIL__DESIRED_Z__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "imc_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "imc_ros_msgs/msg/detail/desired_z__struct.h"

/// Initialize msg/DesiredZ message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * imc_ros_msgs__msg__DesiredZ
 * )) before or use
 * imc_ros_msgs__msg__DesiredZ__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
bool
imc_ros_msgs__msg__DesiredZ__init(imc_ros_msgs__msg__DesiredZ * msg);

/// Finalize msg/DesiredZ message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
void
imc_ros_msgs__msg__DesiredZ__fini(imc_ros_msgs__msg__DesiredZ * msg);

/// Create msg/DesiredZ message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * imc_ros_msgs__msg__DesiredZ__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
imc_ros_msgs__msg__DesiredZ *
imc_ros_msgs__msg__DesiredZ__create();

/// Destroy msg/DesiredZ message.
/**
 * It calls
 * imc_ros_msgs__msg__DesiredZ__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
void
imc_ros_msgs__msg__DesiredZ__destroy(imc_ros_msgs__msg__DesiredZ * msg);

/// Check for msg/DesiredZ message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
bool
imc_ros_msgs__msg__DesiredZ__are_equal(const imc_ros_msgs__msg__DesiredZ * lhs, const imc_ros_msgs__msg__DesiredZ * rhs);

/// Copy a msg/DesiredZ message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
bool
imc_ros_msgs__msg__DesiredZ__copy(
  const imc_ros_msgs__msg__DesiredZ * input,
  imc_ros_msgs__msg__DesiredZ * output);

/// Initialize array of msg/DesiredZ messages.
/**
 * It allocates the memory for the number of elements and calls
 * imc_ros_msgs__msg__DesiredZ__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
bool
imc_ros_msgs__msg__DesiredZ__Sequence__init(imc_ros_msgs__msg__DesiredZ__Sequence * array, size_t size);

/// Finalize array of msg/DesiredZ messages.
/**
 * It calls
 * imc_ros_msgs__msg__DesiredZ__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
void
imc_ros_msgs__msg__DesiredZ__Sequence__fini(imc_ros_msgs__msg__DesiredZ__Sequence * array);

/// Create array of msg/DesiredZ messages.
/**
 * It allocates the memory for the array and calls
 * imc_ros_msgs__msg__DesiredZ__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
imc_ros_msgs__msg__DesiredZ__Sequence *
imc_ros_msgs__msg__DesiredZ__Sequence__create(size_t size);

/// Destroy array of msg/DesiredZ messages.
/**
 * It calls
 * imc_ros_msgs__msg__DesiredZ__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
void
imc_ros_msgs__msg__DesiredZ__Sequence__destroy(imc_ros_msgs__msg__DesiredZ__Sequence * array);

/// Check for msg/DesiredZ message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
bool
imc_ros_msgs__msg__DesiredZ__Sequence__are_equal(const imc_ros_msgs__msg__DesiredZ__Sequence * lhs, const imc_ros_msgs__msg__DesiredZ__Sequence * rhs);

/// Copy an array of msg/DesiredZ messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
bool
imc_ros_msgs__msg__DesiredZ__Sequence__copy(
  const imc_ros_msgs__msg__DesiredZ__Sequence * input,
  imc_ros_msgs__msg__DesiredZ__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__DESIRED_Z__FUNCTIONS_H_
