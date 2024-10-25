// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VelocityLimits.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VELOCITY_LIMITS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VELOCITY_LIMITS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VelocityLimits in the package px4_msgs.
/**
  * Velocity and yaw rate limits for a multicopter position slow mode only
 */
typedef struct px4_msgs__msg__VelocityLimits
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// absolute speeds, NAN means use default limit
  /// [m/s]
  float horizontal_velocity;
  float vertical_velocity;
  float yaw_rate;
} px4_msgs__msg__VelocityLimits;

// Struct for a sequence of px4_msgs__msg__VelocityLimits.
typedef struct px4_msgs__msg__VelocityLimits__Sequence
{
  px4_msgs__msg__VelocityLimits * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VelocityLimits__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VELOCITY_LIMITS__STRUCT_H_
