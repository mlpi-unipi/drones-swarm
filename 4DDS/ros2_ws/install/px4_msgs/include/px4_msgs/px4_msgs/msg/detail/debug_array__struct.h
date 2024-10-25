// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DebugArray.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DEBUG_ARRAY__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__DEBUG_ARRAY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ARRAY_SIZE'.
enum
{
  px4_msgs__msg__DebugArray__ARRAY_SIZE = 58
};

/// Struct defined in msg/DebugArray in the package px4_msgs.
typedef struct px4_msgs__msg__DebugArray
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// unique ID of debug array, used to discriminate between arrays
  uint16_t id;
  /// name of the debug array (max. 10 characters)
  uint8_t name[10];
  /// data
  float data[58];
} px4_msgs__msg__DebugArray;

// Struct for a sequence of px4_msgs__msg__DebugArray.
typedef struct px4_msgs__msg__DebugArray__Sequence
{
  px4_msgs__msg__DebugArray * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DebugArray__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__DEBUG_ARRAY__STRUCT_H_
