// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from px4_msgs:msg/OrbTestLarge.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ORB_TEST_LARGE__FUNCTIONS_H_
#define PX4_MSGS__MSG__DETAIL__ORB_TEST_LARGE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "px4_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "px4_msgs/msg/detail/orb_test_large__struct.h"

/// Initialize msg/OrbTestLarge message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * px4_msgs__msg__OrbTestLarge
 * )) before or use
 * px4_msgs__msg__OrbTestLarge__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__OrbTestLarge__init(px4_msgs__msg__OrbTestLarge * msg);

/// Finalize msg/OrbTestLarge message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__OrbTestLarge__fini(px4_msgs__msg__OrbTestLarge * msg);

/// Create msg/OrbTestLarge message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * px4_msgs__msg__OrbTestLarge__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__OrbTestLarge *
px4_msgs__msg__OrbTestLarge__create();

/// Destroy msg/OrbTestLarge message.
/**
 * It calls
 * px4_msgs__msg__OrbTestLarge__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__OrbTestLarge__destroy(px4_msgs__msg__OrbTestLarge * msg);

/// Check for msg/OrbTestLarge message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__OrbTestLarge__are_equal(const px4_msgs__msg__OrbTestLarge * lhs, const px4_msgs__msg__OrbTestLarge * rhs);

/// Copy a msg/OrbTestLarge message.
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
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__OrbTestLarge__copy(
  const px4_msgs__msg__OrbTestLarge * input,
  px4_msgs__msg__OrbTestLarge * output);

/// Initialize array of msg/OrbTestLarge messages.
/**
 * It allocates the memory for the number of elements and calls
 * px4_msgs__msg__OrbTestLarge__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__OrbTestLarge__Sequence__init(px4_msgs__msg__OrbTestLarge__Sequence * array, size_t size);

/// Finalize array of msg/OrbTestLarge messages.
/**
 * It calls
 * px4_msgs__msg__OrbTestLarge__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__OrbTestLarge__Sequence__fini(px4_msgs__msg__OrbTestLarge__Sequence * array);

/// Create array of msg/OrbTestLarge messages.
/**
 * It allocates the memory for the array and calls
 * px4_msgs__msg__OrbTestLarge__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
px4_msgs__msg__OrbTestLarge__Sequence *
px4_msgs__msg__OrbTestLarge__Sequence__create(size_t size);

/// Destroy array of msg/OrbTestLarge messages.
/**
 * It calls
 * px4_msgs__msg__OrbTestLarge__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
void
px4_msgs__msg__OrbTestLarge__Sequence__destroy(px4_msgs__msg__OrbTestLarge__Sequence * array);

/// Check for msg/OrbTestLarge message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__OrbTestLarge__Sequence__are_equal(const px4_msgs__msg__OrbTestLarge__Sequence * lhs, const px4_msgs__msg__OrbTestLarge__Sequence * rhs);

/// Copy an array of msg/OrbTestLarge messages.
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
ROSIDL_GENERATOR_C_PUBLIC_px4_msgs
bool
px4_msgs__msg__OrbTestLarge__Sequence__copy(
  const px4_msgs__msg__OrbTestLarge__Sequence * input,
  px4_msgs__msg__OrbTestLarge__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ORB_TEST_LARGE__FUNCTIONS_H_
