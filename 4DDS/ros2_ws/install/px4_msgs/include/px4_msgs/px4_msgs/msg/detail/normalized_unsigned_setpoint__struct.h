// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/NormalizedUnsignedSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NORMALIZED_UNSIGNED_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__NORMALIZED_UNSIGNED_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NormalizedUnsignedSetpoint in the package px4_msgs.
typedef struct px4_msgs__msg__NormalizedUnsignedSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// [0, 1]
  float normalized_setpoint;
} px4_msgs__msg__NormalizedUnsignedSetpoint;

// Struct for a sequence of px4_msgs__msg__NormalizedUnsignedSetpoint.
typedef struct px4_msgs__msg__NormalizedUnsignedSetpoint__Sequence
{
  px4_msgs__msg__NormalizedUnsignedSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__NormalizedUnsignedSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__NORMALIZED_UNSIGNED_SETPOINT__STRUCT_H_
