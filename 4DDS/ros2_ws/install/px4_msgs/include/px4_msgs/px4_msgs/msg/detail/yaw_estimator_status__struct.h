// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/YawEstimatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/YawEstimatorStatus in the package px4_msgs.
typedef struct px4_msgs__msg__YawEstimatorStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// composite yaw from GSF (rad)
  float yaw_composite;
  /// composite yaw variance from GSF (rad^2)
  float yaw_variance;
  bool yaw_composite_valid;
  /// yaw estimate for each model in the filter bank (rad)
  float yaw[5];
  /// North velocity innovation for each model in the filter bank (m/s)
  float innov_vn[5];
  /// East velocity innovation for each model in the filter bank (m/s)
  float innov_ve[5];
  /// weighting for each model in the filter bank
  float weight[5];
} px4_msgs__msg__YawEstimatorStatus;

// Struct for a sequence of px4_msgs__msg__YawEstimatorStatus.
typedef struct px4_msgs__msg__YawEstimatorStatus__Sequence
{
  px4_msgs__msg__YawEstimatorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__YawEstimatorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__YAW_ESTIMATOR_STATUS__STRUCT_H_
