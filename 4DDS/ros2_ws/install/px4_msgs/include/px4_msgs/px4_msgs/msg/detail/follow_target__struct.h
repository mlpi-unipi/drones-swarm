// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FollowTarget.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FollowTarget in the package px4_msgs.
typedef struct px4_msgs__msg__FollowTarget
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// target position (deg * 1e7)
  double lat;
  /// target position (deg * 1e7)
  double lon;
  /// target position
  float alt;
  /// target vel in y
  float vy;
  /// target vel in x
  float vx;
  /// target vel in z
  float vz;
  /// target reporting capabilities
  uint8_t est_cap;
} px4_msgs__msg__FollowTarget;

// Struct for a sequence of px4_msgs__msg__FollowTarget.
typedef struct px4_msgs__msg__FollowTarget__Sequence
{
  px4_msgs__msg__FollowTarget * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FollowTarget__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET__STRUCT_H_
