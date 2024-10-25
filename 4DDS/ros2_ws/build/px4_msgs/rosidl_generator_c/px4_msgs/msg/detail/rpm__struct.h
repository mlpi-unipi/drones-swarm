// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/Rpm.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RPM__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__RPM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Rpm in the package px4_msgs.
typedef struct px4_msgs__msg__Rpm
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// indicated rotor Frequency in Revolution per minute
  float indicated_frequency_rpm;
  /// estimated accuracy in Revolution per minute
  float estimated_accurancy_rpm;
} px4_msgs__msg__Rpm;

// Struct for a sequence of px4_msgs__msg__Rpm.
typedef struct px4_msgs__msg__Rpm__Sequence
{
  px4_msgs__msg__Rpm * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__Rpm__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RPM__STRUCT_H_
