// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleControlMode.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleControlMode in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleControlMode
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// synonym for actuator_armed.armed
  bool flag_armed;
  bool flag_multicopter_position_control_enabled;
  /// true if manual input is mixed in
  bool flag_control_manual_enabled;
  /// true if onboard autopilot should act
  bool flag_control_auto_enabled;
  /// true if offboard control should be used
  bool flag_control_offboard_enabled;
  /// true if position is controlled
  bool flag_control_position_enabled;
  /// true if horizontal velocity (implies direction) is controlled
  bool flag_control_velocity_enabled;
  /// true if altitude is controlled
  bool flag_control_altitude_enabled;
  /// true if climb rate is controlled
  bool flag_control_climb_rate_enabled;
  /// true if acceleration is controlled
  bool flag_control_acceleration_enabled;
  /// true if attitude stabilization is mixed in
  bool flag_control_attitude_enabled;
  /// true if rates are stabilized
  bool flag_control_rates_enabled;
  /// true if control allocation is enabled
  bool flag_control_allocation_enabled;
  /// true if flighttermination is enabled
  bool flag_control_termination_enabled;
  /// TODO: use dedicated topic for external requests
  /// Mode ID (nav_state)
  uint8_t source_id;
} px4_msgs__msg__VehicleControlMode;

// Struct for a sequence of px4_msgs__msg__VehicleControlMode.
typedef struct px4_msgs__msg__VehicleControlMode__Sequence
{
  px4_msgs__msg__VehicleControlMode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleControlMode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_CONTROL_MODE__STRUCT_H_
