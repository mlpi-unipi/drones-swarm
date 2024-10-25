// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/QshellRetval.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__QSHELL_RETVAL__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__QSHELL_RETVAL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/QshellRetval in the package px4_msgs.
typedef struct px4_msgs__msg__QshellRetval
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  int32_t return_value;
  uint32_t return_sequence;
} px4_msgs__msg__QshellRetval;

// Struct for a sequence of px4_msgs__msg__QshellRetval.
typedef struct px4_msgs__msg__QshellRetval__Sequence
{
  px4_msgs__msg__QshellRetval * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__QshellRetval__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__QSHELL_RETVAL__STRUCT_H_
