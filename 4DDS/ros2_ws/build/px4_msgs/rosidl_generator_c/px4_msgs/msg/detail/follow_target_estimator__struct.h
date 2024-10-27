// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FollowTargetEstimator.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FollowTargetEstimator in the package px4_msgs.
typedef struct px4_msgs__msg__FollowTargetEstimator
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// time of last filter reset (microseconds)
  uint64_t last_filter_reset_timestamp;
  /// True if estimator states are okay to be used
  bool valid;
  /// True if estimator stopped receiving follow_target messages for some time. The estimate can still be valid, though it might be inaccurate.
  bool stale;
  /// Estimated target latitude
  double lat_est;
  /// Estimated target longitude
  double lon_est;
  /// Estimated target altitude
  float alt_est;
  /// Estimated target NED position (m)
  float pos_est[3];
  /// Estimated target NED velocity (m/s)
  float vel_est[3];
  /// Estimated target NED acceleration (m^2/s)
  float acc_est[3];
  uint64_t prediction_count;
  uint64_t fusion_count;
} px4_msgs__msg__FollowTargetEstimator;

// Struct for a sequence of px4_msgs__msg__FollowTargetEstimator.
typedef struct px4_msgs__msg__FollowTargetEstimator__Sequence
{
  px4_msgs__msg__FollowTargetEstimator * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FollowTargetEstimator__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FOLLOW_TARGET_ESTIMATOR__STRUCT_H_
