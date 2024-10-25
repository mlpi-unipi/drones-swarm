// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/FailsafeFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/FailsafeFlags in the package px4_msgs.
/**
  * Input flags for the failsafe state machine set by the arming & health checks.
  *
  * Flags must be named such that false == no failure (e.g. _invalid, _unhealthy, _lost)
  * The flag comments are used as label for the failsafe state machine simulation
 */
typedef struct px4_msgs__msg__FailsafeFlags
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Per-mode requirements
  uint32_t mode_req_angular_velocity;
  uint32_t mode_req_attitude;
  uint32_t mode_req_local_alt;
  uint32_t mode_req_local_position;
  uint32_t mode_req_local_position_relaxed;
  uint32_t mode_req_global_position;
  uint32_t mode_req_mission;
  uint32_t mode_req_offboard_signal;
  uint32_t mode_req_home_position;
  /// if set, mode cannot be entered if wind or flight time limit exceeded
  uint32_t mode_req_wind_and_flight_time_compliance;
  /// if set, cannot arm while in this mode
  uint32_t mode_req_prevent_arming;
  uint32_t mode_req_manual_control;
  /// other requirements, not covered above (for external modes)
  uint32_t mode_req_other;
  /// Mode requirements
  /// Angular velocity invalid
  bool angular_velocity_invalid;
  /// Attitude invalid
  bool attitude_invalid;
  /// Local altitude invalid
  bool local_altitude_invalid;
  /// Local position estimate invalid
  bool local_position_invalid;
  /// Local position with reduced accuracy requirements invalid (e.g. flying with optical flow)
  bool local_position_invalid_relaxed;
  /// Local velocity estimate invalid
  bool local_velocity_invalid;
  /// Global position estimate invalid
  bool global_position_invalid;
  /// No mission available
  bool auto_mission_missing;
  /// Offboard signal lost
  bool offboard_control_signal_lost;
  /// No home position available
  bool home_position_invalid;
  /// Control links
  /// Manual control (RC) signal lost
  bool manual_control_signal_lost;
  /// GCS connection lost
  bool gcs_connection_lost;
  /// Battery
  /// Battery warning level
  uint8_t battery_warning;
  /// Low battery based on remaining flight time
  bool battery_low_remaining_time;
  /// Battery unhealthy
  bool battery_unhealthy;
  /// Other
  /// Geofence breached (one or multiple)
  bool geofence_breached;
  /// Mission failure
  bool mission_failure;
  /// vehicle in fixed-wing system failure failsafe mode (after quad-chute)
  bool vtol_fixed_wing_system_failure;
  /// Wind limit exceeded
  bool wind_limit_exceeded;
  /// Maximum flight time exceeded
  bool flight_time_limit_exceeded;
  /// Local position estimate has dropped below threshold, but is currently still declared valid
  bool local_position_accuracy_low;
  /// Failure detector
  /// Critical failure (attitude/altitude limit exceeded, or external ATS)
  bool fd_critical_failure;
  /// ESC failed to arm
  bool fd_esc_arming_failure;
  /// Imbalanced propeller detected
  bool fd_imbalanced_prop;
  /// Motor failure
  bool fd_motor_failure;
} px4_msgs__msg__FailsafeFlags;

// Struct for a sequence of px4_msgs__msg__FailsafeFlags.
typedef struct px4_msgs__msg__FailsafeFlags__Sequence
{
  px4_msgs__msg__FailsafeFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__FailsafeFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__FAILSAFE_FLAGS__STRUCT_H_
