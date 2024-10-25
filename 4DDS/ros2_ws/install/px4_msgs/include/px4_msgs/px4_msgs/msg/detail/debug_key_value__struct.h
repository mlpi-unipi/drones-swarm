// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DebugKeyValue.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DEBUG_KEY_VALUE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__DEBUG_KEY_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DebugKeyValue in the package px4_msgs.
typedef struct px4_msgs__msg__DebugKeyValue
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// max. 10 characters as key / name
  uint8_t key[10];
  /// the value to send as debug output
  float value;
} px4_msgs__msg__DebugKeyValue;

// Struct for a sequence of px4_msgs__msg__DebugKeyValue.
typedef struct px4_msgs__msg__DebugKeyValue__Sequence
{
  px4_msgs__msg__DebugKeyValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DebugKeyValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__DEBUG_KEY_VALUE__STRUCT_H_
