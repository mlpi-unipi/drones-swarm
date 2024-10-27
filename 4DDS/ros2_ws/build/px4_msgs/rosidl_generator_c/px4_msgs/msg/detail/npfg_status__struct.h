// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/NpfgStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NPFG_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__NPFG_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/NpfgStatus in the package px4_msgs.
typedef struct px4_msgs__msg__NpfgStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// (boolean) true = wind estimate is valid and/or being used by controller (also indicates if wind est usage is disabled despite being valid)
  uint8_t wind_est_valid;
  /// resultant lateral acceleration reference
  float lat_accel;
  /// lateral acceleration demand only for maintaining curvature
  float lat_accel_ff;
  /// bearing feasibility [0,1]
  float bearing_feas;
  /// on-track bearing feasibility [0,1]
  float bearing_feas_on_track;
  /// signed track error
  float signed_track_error;
  /// track error bound
  float track_error_bound;
  /// (true) airspeed reference
  float airspeed_ref;
  /// bearing angle
  float bearing;
  /// heading angle reference
  float heading_ref;
  /// minimum forward ground speed reference
  float min_ground_speed_ref;
  /// adapted period (if auto-tuning enabled)
  float adapted_period;
  /// controller proportional gain
  float p_gain;
  /// controller time constant
  float time_const;
  /// estimate of certainty of the correct functionality of the npfg roll setpoint in [0, 1]
  float can_run_factor;
} px4_msgs__msg__NpfgStatus;

// Struct for a sequence of px4_msgs__msg__NpfgStatus.
typedef struct px4_msgs__msg__NpfgStatus__Sequence
{
  px4_msgs__msg__NpfgStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__NpfgStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__NPFG_STATUS__STRUCT_H_
