// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TecsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TECS_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TECS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TecsStatus in the package px4_msgs.
typedef struct px4_msgs__msg__TecsStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Altitude setpoint AMSL
  float altitude_sp;
  /// Altitude setpoint reference AMSL
  float altitude_reference;
  /// Height rate setpoint reference
  float height_rate_reference;
  /// Direct height rate setpoint from velocity reference generator
  float height_rate_direct;
  /// Height rate setpoint
  float height_rate_setpoint;
  /// Height rate
  float height_rate;
  /// Equivalent airspeed setpoint
  float equivalent_airspeed_sp;
  /// True airspeed setpoint
  float true_airspeed_sp;
  /// True airspeed filtered
  float true_airspeed_filtered;
  /// True airspeed derivative setpoint
  float true_airspeed_derivative_sp;
  /// True airspeed derivative
  float true_airspeed_derivative;
  /// True airspeed derivative raw
  float true_airspeed_derivative_raw;
  /// Total energy rate setpoint
  float total_energy_rate_sp;
  /// Total energy rate estimate
  float total_energy_rate;
  /// Energy balance rate setpoint
  float total_energy_balance_rate_sp;
  /// Energy balance rate estimate
  float total_energy_balance_rate;
  /// Throttle integrator value
  float throttle_integ;
  /// Pitch integrator value
  float pitch_integ;
  /// Current throttle setpoint
  float throttle_sp;
  /// Current pitch setpoint
  float pitch_sp_rad;
  /// estimated throttle value [0,1] required to fly level at equivalent_airspeed_sp in the current atmospheric conditions
  float throttle_trim;
  /// 0: no underspeed, 1: maximal underspeed. Controller takes measures to avoid stall proportional to ratio if >0.
  float underspeed_ratio;
} px4_msgs__msg__TecsStatus;

// Struct for a sequence of px4_msgs__msg__TecsStatus.
typedef struct px4_msgs__msg__TecsStatus__Sequence
{
  px4_msgs__msg__TecsStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TecsStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TECS_STATUS__STRUCT_H_
