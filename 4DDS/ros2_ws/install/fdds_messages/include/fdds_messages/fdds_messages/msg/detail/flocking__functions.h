// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fdds_messages:msg/Flocking.idl
// generated code does not contain a copyright notice

#ifndef FDDS_MESSAGES__MSG__DETAIL__FLOCKING__FUNCTIONS_H_
#define FDDS_MESSAGES__MSG__DETAIL__FLOCKING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fdds_messages/msg/rosidl_generator_c__visibility_control.h"

#include "fdds_messages/msg/detail/flocking__struct.h"

/// Initialize msg/Flocking message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fdds_messages__msg__Flocking
 * )) before or use
 * fdds_messages__msg__Flocking__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
bool
fdds_messages__msg__Flocking__init(fdds_messages__msg__Flocking * msg);

/// Finalize msg/Flocking message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
void
fdds_messages__msg__Flocking__fini(fdds_messages__msg__Flocking * msg);

/// Create msg/Flocking message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fdds_messages__msg__Flocking__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
fdds_messages__msg__Flocking *
fdds_messages__msg__Flocking__create();

/// Destroy msg/Flocking message.
/**
 * It calls
 * fdds_messages__msg__Flocking__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
void
fdds_messages__msg__Flocking__destroy(fdds_messages__msg__Flocking * msg);

/// Check for msg/Flocking message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
bool
fdds_messages__msg__Flocking__are_equal(const fdds_messages__msg__Flocking * lhs, const fdds_messages__msg__Flocking * rhs);

/// Copy a msg/Flocking message.
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
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
bool
fdds_messages__msg__Flocking__copy(
  const fdds_messages__msg__Flocking * input,
  fdds_messages__msg__Flocking * output);

/// Initialize array of msg/Flocking messages.
/**
 * It allocates the memory for the number of elements and calls
 * fdds_messages__msg__Flocking__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
bool
fdds_messages__msg__Flocking__Sequence__init(fdds_messages__msg__Flocking__Sequence * array, size_t size);

/// Finalize array of msg/Flocking messages.
/**
 * It calls
 * fdds_messages__msg__Flocking__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
void
fdds_messages__msg__Flocking__Sequence__fini(fdds_messages__msg__Flocking__Sequence * array);

/// Create array of msg/Flocking messages.
/**
 * It allocates the memory for the array and calls
 * fdds_messages__msg__Flocking__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
fdds_messages__msg__Flocking__Sequence *
fdds_messages__msg__Flocking__Sequence__create(size_t size);

/// Destroy array of msg/Flocking messages.
/**
 * It calls
 * fdds_messages__msg__Flocking__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
void
fdds_messages__msg__Flocking__Sequence__destroy(fdds_messages__msg__Flocking__Sequence * array);

/// Check for msg/Flocking message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
bool
fdds_messages__msg__Flocking__Sequence__are_equal(const fdds_messages__msg__Flocking__Sequence * lhs, const fdds_messages__msg__Flocking__Sequence * rhs);

/// Copy an array of msg/Flocking messages.
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
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
bool
fdds_messages__msg__Flocking__Sequence__copy(
  const fdds_messages__msg__Flocking__Sequence * input,
  fdds_messages__msg__Flocking__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FDDS_MESSAGES__MSG__DETAIL__FLOCKING__FUNCTIONS_H_
