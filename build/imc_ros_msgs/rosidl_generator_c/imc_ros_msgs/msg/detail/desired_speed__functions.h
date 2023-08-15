// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from imc_ros_msgs:msg/DesiredSpeed.idl
// generated code does not contain a copyright notice

#ifndef IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__FUNCTIONS_H_
#define IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "imc_ros_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "imc_ros_msgs/msg/detail/desired_speed__struct.h"

/// Initialize msg/DesiredSpeed message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * imc_ros_msgs__msg__DesiredSpeed
 * )) before or use
 * imc_ros_msgs__msg__DesiredSpeed__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
bool
imc_ros_msgs__msg__DesiredSpeed__init(imc_ros_msgs__msg__DesiredSpeed * msg);

/// Finalize msg/DesiredSpeed message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
void
imc_ros_msgs__msg__DesiredSpeed__fini(imc_ros_msgs__msg__DesiredSpeed * msg);

/// Create msg/DesiredSpeed message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * imc_ros_msgs__msg__DesiredSpeed__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
imc_ros_msgs__msg__DesiredSpeed *
imc_ros_msgs__msg__DesiredSpeed__create();

/// Destroy msg/DesiredSpeed message.
/**
 * It calls
 * imc_ros_msgs__msg__DesiredSpeed__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
void
imc_ros_msgs__msg__DesiredSpeed__destroy(imc_ros_msgs__msg__DesiredSpeed * msg);

/// Check for msg/DesiredSpeed message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
bool
imc_ros_msgs__msg__DesiredSpeed__are_equal(const imc_ros_msgs__msg__DesiredSpeed * lhs, const imc_ros_msgs__msg__DesiredSpeed * rhs);

/// Copy a msg/DesiredSpeed message.
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
imc_ros_msgs__msg__DesiredSpeed__copy(
  const imc_ros_msgs__msg__DesiredSpeed * input,
  imc_ros_msgs__msg__DesiredSpeed * output);

/// Initialize array of msg/DesiredSpeed messages.
/**
 * It allocates the memory for the number of elements and calls
 * imc_ros_msgs__msg__DesiredSpeed__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
bool
imc_ros_msgs__msg__DesiredSpeed__Sequence__init(imc_ros_msgs__msg__DesiredSpeed__Sequence * array, size_t size);

/// Finalize array of msg/DesiredSpeed messages.
/**
 * It calls
 * imc_ros_msgs__msg__DesiredSpeed__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
void
imc_ros_msgs__msg__DesiredSpeed__Sequence__fini(imc_ros_msgs__msg__DesiredSpeed__Sequence * array);

/// Create array of msg/DesiredSpeed messages.
/**
 * It allocates the memory for the array and calls
 * imc_ros_msgs__msg__DesiredSpeed__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
imc_ros_msgs__msg__DesiredSpeed__Sequence *
imc_ros_msgs__msg__DesiredSpeed__Sequence__create(size_t size);

/// Destroy array of msg/DesiredSpeed messages.
/**
 * It calls
 * imc_ros_msgs__msg__DesiredSpeed__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
void
imc_ros_msgs__msg__DesiredSpeed__Sequence__destroy(imc_ros_msgs__msg__DesiredSpeed__Sequence * array);

/// Check for msg/DesiredSpeed message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_imc_ros_msgs
bool
imc_ros_msgs__msg__DesiredSpeed__Sequence__are_equal(const imc_ros_msgs__msg__DesiredSpeed__Sequence * lhs, const imc_ros_msgs__msg__DesiredSpeed__Sequence * rhs);

/// Copy an array of msg/DesiredSpeed messages.
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
imc_ros_msgs__msg__DesiredSpeed__Sequence__copy(
  const imc_ros_msgs__msg__DesiredSpeed__Sequence * input,
  imc_ros_msgs__msg__DesiredSpeed__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // IMC_ROS_MSGS__MSG__DETAIL__DESIRED_SPEED__FUNCTIONS_H_
