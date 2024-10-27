// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gazebo_msgs:msg/PerformanceMetrics.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__FUNCTIONS_H_
#define GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gazebo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "gazebo_msgs/msg/detail/performance_metrics__struct.h"

/// Initialize msg/PerformanceMetrics message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gazebo_msgs__msg__PerformanceMetrics
 * )) before or use
 * gazebo_msgs__msg__PerformanceMetrics__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__PerformanceMetrics__init(gazebo_msgs__msg__PerformanceMetrics * msg);

/// Finalize msg/PerformanceMetrics message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__PerformanceMetrics__fini(gazebo_msgs__msg__PerformanceMetrics * msg);

/// Create msg/PerformanceMetrics message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gazebo_msgs__msg__PerformanceMetrics__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__msg__PerformanceMetrics *
gazebo_msgs__msg__PerformanceMetrics__create();

/// Destroy msg/PerformanceMetrics message.
/**
 * It calls
 * gazebo_msgs__msg__PerformanceMetrics__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__PerformanceMetrics__destroy(gazebo_msgs__msg__PerformanceMetrics * msg);

/// Check for msg/PerformanceMetrics message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__PerformanceMetrics__are_equal(const gazebo_msgs__msg__PerformanceMetrics * lhs, const gazebo_msgs__msg__PerformanceMetrics * rhs);

/// Copy a msg/PerformanceMetrics message.
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
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__PerformanceMetrics__copy(
  const gazebo_msgs__msg__PerformanceMetrics * input,
  gazebo_msgs__msg__PerformanceMetrics * output);

/// Initialize array of msg/PerformanceMetrics messages.
/**
 * It allocates the memory for the number of elements and calls
 * gazebo_msgs__msg__PerformanceMetrics__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__PerformanceMetrics__Sequence__init(gazebo_msgs__msg__PerformanceMetrics__Sequence * array, size_t size);

/// Finalize array of msg/PerformanceMetrics messages.
/**
 * It calls
 * gazebo_msgs__msg__PerformanceMetrics__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__PerformanceMetrics__Sequence__fini(gazebo_msgs__msg__PerformanceMetrics__Sequence * array);

/// Create array of msg/PerformanceMetrics messages.
/**
 * It allocates the memory for the array and calls
 * gazebo_msgs__msg__PerformanceMetrics__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__msg__PerformanceMetrics__Sequence *
gazebo_msgs__msg__PerformanceMetrics__Sequence__create(size_t size);

/// Destroy array of msg/PerformanceMetrics messages.
/**
 * It calls
 * gazebo_msgs__msg__PerformanceMetrics__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__PerformanceMetrics__Sequence__destroy(gazebo_msgs__msg__PerformanceMetrics__Sequence * array);

/// Check for msg/PerformanceMetrics message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__PerformanceMetrics__Sequence__are_equal(const gazebo_msgs__msg__PerformanceMetrics__Sequence * lhs, const gazebo_msgs__msg__PerformanceMetrics__Sequence * rhs);

/// Copy an array of msg/PerformanceMetrics messages.
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
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__PerformanceMetrics__Sequence__copy(
  const gazebo_msgs__msg__PerformanceMetrics__Sequence * input,
  gazebo_msgs__msg__PerformanceMetrics__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__PERFORMANCE_METRICS__FUNCTIONS_H_
