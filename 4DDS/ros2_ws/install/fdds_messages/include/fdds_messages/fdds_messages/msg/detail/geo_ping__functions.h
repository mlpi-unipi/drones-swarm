// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from fdds_messages:msg/GeoPing.idl
// generated code does not contain a copyright notice

#ifndef FDDS_MESSAGES__MSG__DETAIL__GEO_PING__FUNCTIONS_H_
#define FDDS_MESSAGES__MSG__DETAIL__GEO_PING__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "fdds_messages/msg/rosidl_generator_c__visibility_control.h"

#include "fdds_messages/msg/detail/geo_ping__struct.h"

/// Initialize msg/GeoPing message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * fdds_messages__msg__GeoPing
 * )) before or use
 * fdds_messages__msg__GeoPing__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
bool
fdds_messages__msg__GeoPing__init(fdds_messages__msg__GeoPing * msg);

/// Finalize msg/GeoPing message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
void
fdds_messages__msg__GeoPing__fini(fdds_messages__msg__GeoPing * msg);

/// Create msg/GeoPing message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * fdds_messages__msg__GeoPing__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
fdds_messages__msg__GeoPing *
fdds_messages__msg__GeoPing__create();

/// Destroy msg/GeoPing message.
/**
 * It calls
 * fdds_messages__msg__GeoPing__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
void
fdds_messages__msg__GeoPing__destroy(fdds_messages__msg__GeoPing * msg);

/// Check for msg/GeoPing message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
bool
fdds_messages__msg__GeoPing__are_equal(const fdds_messages__msg__GeoPing * lhs, const fdds_messages__msg__GeoPing * rhs);

/// Copy a msg/GeoPing message.
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
fdds_messages__msg__GeoPing__copy(
  const fdds_messages__msg__GeoPing * input,
  fdds_messages__msg__GeoPing * output);

/// Initialize array of msg/GeoPing messages.
/**
 * It allocates the memory for the number of elements and calls
 * fdds_messages__msg__GeoPing__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
bool
fdds_messages__msg__GeoPing__Sequence__init(fdds_messages__msg__GeoPing__Sequence * array, size_t size);

/// Finalize array of msg/GeoPing messages.
/**
 * It calls
 * fdds_messages__msg__GeoPing__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
void
fdds_messages__msg__GeoPing__Sequence__fini(fdds_messages__msg__GeoPing__Sequence * array);

/// Create array of msg/GeoPing messages.
/**
 * It allocates the memory for the array and calls
 * fdds_messages__msg__GeoPing__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
fdds_messages__msg__GeoPing__Sequence *
fdds_messages__msg__GeoPing__Sequence__create(size_t size);

/// Destroy array of msg/GeoPing messages.
/**
 * It calls
 * fdds_messages__msg__GeoPing__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
void
fdds_messages__msg__GeoPing__Sequence__destroy(fdds_messages__msg__GeoPing__Sequence * array);

/// Check for msg/GeoPing message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_fdds_messages
bool
fdds_messages__msg__GeoPing__Sequence__are_equal(const fdds_messages__msg__GeoPing__Sequence * lhs, const fdds_messages__msg__GeoPing__Sequence * rhs);

/// Copy an array of msg/GeoPing messages.
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
fdds_messages__msg__GeoPing__Sequence__copy(
  const fdds_messages__msg__GeoPing__Sequence * input,
  fdds_messages__msg__GeoPing__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // FDDS_MESSAGES__MSG__DETAIL__GEO_PING__FUNCTIONS_H_
