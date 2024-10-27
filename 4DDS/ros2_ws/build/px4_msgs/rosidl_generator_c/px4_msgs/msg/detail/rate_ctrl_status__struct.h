// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RateCtrlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/RateCtrlStatus in the package px4_msgs.
typedef struct px4_msgs__msg__RateCtrlStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// rate controller integrator status
  float rollspeed_integ;
  float pitchspeed_integ;
  float yawspeed_integ;
  /// FW only and optional
  float wheel_rate_integ;
} px4_msgs__msg__RateCtrlStatus;

// Struct for a sequence of px4_msgs__msg__RateCtrlStatus.
typedef struct px4_msgs__msg__RateCtrlStatus__Sequence
{
  px4_msgs__msg__RateCtrlStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RateCtrlStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__STRUCT_H_
