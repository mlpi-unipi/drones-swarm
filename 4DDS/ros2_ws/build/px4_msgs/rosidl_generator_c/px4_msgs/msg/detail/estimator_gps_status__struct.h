// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorGpsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_GPS_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_GPS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EstimatorGpsStatus in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorGpsStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  bool checks_passed;
  /// 0 : insufficient fix type (no 3D solution)
  bool check_fail_gps_fix;
  /// 1 : minimum required sat count fail
  bool check_fail_min_sat_count;
  /// 2 : maximum allowed PDOP fail
  bool check_fail_max_pdop;
  /// 3 : maximum allowed horizontal position error fail
  bool check_fail_max_horz_err;
  /// 4 : maximum allowed vertical position error fail
  bool check_fail_max_vert_err;
  /// 5 : maximum allowed speed error fail
  bool check_fail_max_spd_err;
  /// 6 : maximum allowed horizontal position drift fail - requires stationary vehicle
  bool check_fail_max_horz_drift;
  /// 7 : maximum allowed vertical position drift fail - requires stationary vehicle
  bool check_fail_max_vert_drift;
  /// 8 : maximum allowed horizontal speed fail - requires stationary vehicle
  bool check_fail_max_horz_spd_err;
  /// 9 : maximum allowed vertical velocity discrepancy fail
  bool check_fail_max_vert_spd_err;
  /// Horizontal position rate magnitude (m/s)
  float position_drift_rate_horizontal_m_s;
  /// Vertical position rate magnitude (m/s)
  float position_drift_rate_vertical_m_s;
  /// Filtered horizontal velocity magnitude (m/s)
  float filtered_horizontal_speed_m_s;
} px4_msgs__msg__EstimatorGpsStatus;

// Struct for a sequence of px4_msgs__msg__EstimatorGpsStatus.
typedef struct px4_msgs__msg__EstimatorGpsStatus__Sequence
{
  px4_msgs__msg__EstimatorGpsStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorGpsStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_GPS_STATUS__STRUCT_H_
