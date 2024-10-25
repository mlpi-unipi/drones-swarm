// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorStates.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATES__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EstimatorStates in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorStates
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// Internal filter states
  float states[24];
  /// Number of states effectively used
  uint8_t n_states;
  /// Diagonal Elements of Covariance Matrix
  float covariances[23];
} px4_msgs__msg__EstimatorStates;

// Struct for a sequence of px4_msgs__msg__EstimatorStates.
typedef struct px4_msgs__msg__EstimatorStates__Sequence
{
  px4_msgs__msg__EstimatorStates * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorStates__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATES__STRUCT_H_
