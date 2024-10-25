// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RtlTimeEstimate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RTL_TIME_ESTIMATE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__RTL_TIME_ESTIMATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RtlTimeEstimate in the package px4_msgs.
typedef struct px4_msgs__msg__RtlTimeEstimate
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Flag indicating whether the time estiamtes are valid
  bool valid;
  /// Estimated time for RTL
  float time_estimate;
  /// Same as time_estimate, but with safety factor and safety margin included (factor*t + margin)
  float safe_time_estimate;
} px4_msgs__msg__RtlTimeEstimate;

// Struct for a sequence of px4_msgs__msg__RtlTimeEstimate.
typedef struct px4_msgs__msg__RtlTimeEstimate__Sequence
{
  px4_msgs__msg__RtlTimeEstimate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RtlTimeEstimate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RTL_TIME_ESTIMATE__STRUCT_H_
