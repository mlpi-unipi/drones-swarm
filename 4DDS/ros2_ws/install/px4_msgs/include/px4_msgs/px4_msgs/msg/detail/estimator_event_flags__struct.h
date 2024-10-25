// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorEventFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_EVENT_FLAGS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_EVENT_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EstimatorEventFlags in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorEventFlags
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// information events
  /// number of information event changes
  uint32_t information_event_changes;
  /// 0 - true when gps quality checks are passing passed
  bool gps_checks_passed;
  /// 1 - true when the velocity states are reset to the gps measurement
  bool reset_vel_to_gps;
  /// 2 - true when the velocity states are reset using the optical flow measurement
  bool reset_vel_to_flow;
  /// 3 - true when the velocity states are reset to the vision system measurement
  bool reset_vel_to_vision;
  /// 4 - true when the velocity states are reset to zero
  bool reset_vel_to_zero;
  /// 5 - true when the position states are reset to the last known position
  bool reset_pos_to_last_known;
  /// 6 - true when the position states are reset to the gps measurement
  bool reset_pos_to_gps;
  /// 7 - true when the position states are reset to the vision system measurement
  bool reset_pos_to_vision;
  /// 8 - true when the filter starts using gps measurements to correct the state estimates
  bool starting_gps_fusion;
  /// 9 - true when the filter starts using vision system position measurements to correct the state estimates
  bool starting_vision_pos_fusion;
  /// 10 - true when the filter starts using vision system velocity measurements to correct the state estimates
  bool starting_vision_vel_fusion;
  /// 11 - true when the filter starts using vision system yaw  measurements to correct the state estimates
  bool starting_vision_yaw_fusion;
  /// 12 - true when the filter resets the yaw to an estimate derived from IMU and GPS data
  bool yaw_aligned_to_imu_gps;
  /// 13 - true when the vertical position state is reset to the baro measurement
  bool reset_hgt_to_baro;
  /// 14 - true when the vertical position state is reset to the gps measurement
  bool reset_hgt_to_gps;
  /// 15 - true when the vertical position state is reset to the rng measurement
  bool reset_hgt_to_rng;
  /// 16 - true when the vertical position state is reset to the ev measurement
  bool reset_hgt_to_ev;
  /// warning events
  /// number of warning event changes
  uint32_t warning_event_changes;
  /// 0 - true when the gps is failing quality checks
  bool gps_quality_poor;
  /// 1 - true when the gps data has not been used to correct the state estimates for a significant time period
  bool gps_fusion_timout;
  /// 2 - true when the gps data has stopped for a significant time period
  bool gps_data_stopped;
  /// 3 - true when the gps data has stopped for a significant time period but the filter is able to use other sources of data to maintain navigation
  bool gps_data_stopped_using_alternate;
  /// 4 - true when the height sensor has not been used to correct the state estimates for a significant time period
  bool height_sensor_timeout;
  /// 5 - true when the filter has insufficient data to estimate velocity and position and is falling back to an attitude, height and height rate mode of operation
  bool stopping_navigation;
  /// 6 - true when the filter has detected bad acceerometer bias state esitmstes and has reset the corresponding covariance matrix elements
  bool invalid_accel_bias_cov_reset;
  /// 7 - true when the filter has detected an invalid yaw estimate and has reset the yaw angle to the GPS ground course
  bool bad_yaw_using_gps_course;
  /// 8 - true when the filter has detected bad magnetometer data and is stopping further use of the magnetometer data
  bool stopping_mag_use;
  /// 9 - true when the vision system data has stopped for a significant time period
  bool vision_data_stopped;
  /// 10 - true when the filter has detected bad magnetometer data, has reset the yaw to anothter source of data and has stopped further use of the magnetometer data
  bool emergency_yaw_reset_mag_stopped;
  /// 11 - true when the filter has detected bad GNSS yaw data, has reset the yaw to anothter source of data and has stopped further use of the GNSS yaw data
  bool emergency_yaw_reset_gps_yaw_stopped;
} px4_msgs__msg__EstimatorEventFlags;

// Struct for a sequence of px4_msgs__msg__EstimatorEventFlags.
typedef struct px4_msgs__msg__EstimatorEventFlags__Sequence
{
  px4_msgs__msg__EstimatorEventFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorEventFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_EVENT_FLAGS__STRUCT_H_
