// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DebugValue.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DEBUG_VALUE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__DEBUG_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DebugValue in the package px4_msgs.
typedef struct px4_msgs__msg__DebugValue
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// index of debug variable
  int8_t ind;
  /// the value to send as debug output
  float value;
} px4_msgs__msg__DebugValue;

// Struct for a sequence of px4_msgs__msg__DebugValue.
typedef struct px4_msgs__msg__DebugValue__Sequence
{
  px4_msgs__msg__DebugValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DebugValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__DEBUG_VALUE__STRUCT_H_
