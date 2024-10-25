// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from gazebo_msgs:msg/SensorPerformanceMetric.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__FUNCTIONS_H_
#define GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "gazebo_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "gazebo_msgs/msg/detail/sensor_performance_metric__struct.h"

/// Initialize msg/SensorPerformanceMetric message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * gazebo_msgs__msg__SensorPerformanceMetric
 * )) before or use
 * gazebo_msgs__msg__SensorPerformanceMetric__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__SensorPerformanceMetric__init(gazebo_msgs__msg__SensorPerformanceMetric * msg);

/// Finalize msg/SensorPerformanceMetric message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__SensorPerformanceMetric__fini(gazebo_msgs__msg__SensorPerformanceMetric * msg);

/// Create msg/SensorPerformanceMetric message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * gazebo_msgs__msg__SensorPerformanceMetric__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__msg__SensorPerformanceMetric *
gazebo_msgs__msg__SensorPerformanceMetric__create();

/// Destroy msg/SensorPerformanceMetric message.
/**
 * It calls
 * gazebo_msgs__msg__SensorPerformanceMetric__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__SensorPerformanceMetric__destroy(gazebo_msgs__msg__SensorPerformanceMetric * msg);

/// Check for msg/SensorPerformanceMetric message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__SensorPerformanceMetric__are_equal(const gazebo_msgs__msg__SensorPerformanceMetric * lhs, const gazebo_msgs__msg__SensorPerformanceMetric * rhs);

/// Copy a msg/SensorPerformanceMetric message.
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
gazebo_msgs__msg__SensorPerformanceMetric__copy(
  const gazebo_msgs__msg__SensorPerformanceMetric * input,
  gazebo_msgs__msg__SensorPerformanceMetric * output);

/// Initialize array of msg/SensorPerformanceMetric messages.
/**
 * It allocates the memory for the number of elements and calls
 * gazebo_msgs__msg__SensorPerformanceMetric__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__init(gazebo_msgs__msg__SensorPerformanceMetric__Sequence * array, size_t size);

/// Finalize array of msg/SensorPerformanceMetric messages.
/**
 * It calls
 * gazebo_msgs__msg__SensorPerformanceMetric__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__fini(gazebo_msgs__msg__SensorPerformanceMetric__Sequence * array);

/// Create array of msg/SensorPerformanceMetric messages.
/**
 * It allocates the memory for the array and calls
 * gazebo_msgs__msg__SensorPerformanceMetric__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
gazebo_msgs__msg__SensorPerformanceMetric__Sequence *
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__create(size_t size);

/// Destroy array of msg/SensorPerformanceMetric messages.
/**
 * It calls
 * gazebo_msgs__msg__SensorPerformanceMetric__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
void
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__destroy(gazebo_msgs__msg__SensorPerformanceMetric__Sequence * array);

/// Check for msg/SensorPerformanceMetric message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_gazebo_msgs
bool
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__are_equal(const gazebo_msgs__msg__SensorPerformanceMetric__Sequence * lhs, const gazebo_msgs__msg__SensorPerformanceMetric__Sequence * rhs);

/// Copy an array of msg/SensorPerformanceMetric messages.
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
gazebo_msgs__msg__SensorPerformanceMetric__Sequence__copy(
  const gazebo_msgs__msg__SensorPerformanceMetric__Sequence * input,
  gazebo_msgs__msg__SensorPerformanceMetric__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // GAZEBO_MSGS__MSG__DETAIL__SENSOR_PERFORMANCE_METRIC__FUNCTIONS_H_
