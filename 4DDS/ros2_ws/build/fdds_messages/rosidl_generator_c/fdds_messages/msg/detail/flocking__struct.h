// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from fdds_messages:msg/Flocking.idl
// generated code does not contain a copyright notice

#ifndef FDDS_MESSAGES__MSG__DETAIL__FLOCKING__STRUCT_H_
#define FDDS_MESSAGES__MSG__DETAIL__FLOCKING__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Flocking in the package fdds_messages.
/**
  * consider using int32 to wrap 2 float16 in 32 bits
 */
typedef struct fdds_messages__msg__Flocking
{
  float cohesion_x;
  float cohesion_y;
  float alignment_x;
  float alignment_y;
  float separation_x;
  float separation_y;
} fdds_messages__msg__Flocking;

// Struct for a sequence of fdds_messages__msg__Flocking.
typedef struct fdds_messages__msg__Flocking__Sequence
{
  fdds_messages__msg__Flocking * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} fdds_messages__msg__Flocking__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // FDDS_MESSAGES__MSG__DETAIL__FLOCKING__STRUCT_H_
