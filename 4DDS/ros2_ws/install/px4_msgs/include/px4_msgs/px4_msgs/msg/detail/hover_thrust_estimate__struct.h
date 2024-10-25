// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/HoverThrustEstimate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HOVER_THRUST_ESTIMATE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__HOVER_THRUST_ESTIMATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/HoverThrustEstimate in the package px4_msgs.
typedef struct px4_msgs__msg__HoverThrustEstimate
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// time of corresponding sensor data last used for this estimate
  uint64_t timestamp_sample;
  /// estimated hover thrust [0.1, 0.9]
  float hover_thrust;
  /// estimated hover thrust variance
  float hover_thrust_var;
  /// innovation of the last acceleration fusion
  float accel_innov;
  /// innovation variance of the last acceleration fusion
  float accel_innov_var;
  /// normalized innovation squared test ratio
  float accel_innov_test_ratio;
  /// vertical acceleration noise variance estimated form innovation residual
  float accel_noise_var;
  bool valid;
} px4_msgs__msg__HoverThrustEstimate;

// Struct for a sequence of px4_msgs__msg__HoverThrustEstimate.
typedef struct px4_msgs__msg__HoverThrustEstimate__Sequence
{
  px4_msgs__msg__HoverThrustEstimate * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__HoverThrustEstimate__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__HOVER_THRUST_ESTIMATE__STRUCT_H_
