// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorBias3d.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_BIAS3D__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_BIAS3D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EstimatorBias3d in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorBias3d
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  /// estimated barometric altitude bias (m)
  float bias[3];
  /// estimated barometric altitude bias variance (m^2)
  float bias_var[3];
  /// innovation of the last measurement fusion (m)
  float innov[3];
  /// innovation variance of the last measurement fusion (m^2)
  float innov_var[3];
  /// normalized innovation squared test ratio
  float innov_test_ratio[3];
} px4_msgs__msg__EstimatorBias3d;

// Struct for a sequence of px4_msgs__msg__EstimatorBias3d.
typedef struct px4_msgs__msg__EstimatorBias3d__Sequence
{
  px4_msgs__msg__EstimatorBias3d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorBias3d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_BIAS3D__STRUCT_H_
