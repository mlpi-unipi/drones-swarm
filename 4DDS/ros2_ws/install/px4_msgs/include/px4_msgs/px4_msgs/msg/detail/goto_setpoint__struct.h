// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GotoSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GotoSetpoint in the package px4_msgs.
/**
  * Position and (optional) heading setpoints with corresponding speed constraints
  * Setpoints are intended as inputs to position and heading smoothers, respectively
  * Setpoints do not need to be kinematically consistent
  * Optional heading setpoints may be specified as controlled by the respective flag
  * Unset optional setpoints are not controlled
  * Unset optional constraints default to vehicle specifications
 */
typedef struct px4_msgs__msg__GotoSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// setpoints
  /// [m] NED local world frame
  float position[3];
  /// true if heading is to be controlled
  bool flag_control_heading;
  /// (optional) [-pi,pi] from North
  float heading;
  /// constraints
  /// true if setting a non-default horizontal speed limit
  bool flag_set_max_horizontal_speed;
  /// (optional) maximum speed (absolute) in the NE-plane
  float max_horizontal_speed;
  /// true if setting a non-default vertical speed limit
  bool flag_set_max_vertical_speed;
  /// (optional) maximum speed (absolute) in the D-axis
  float max_vertical_speed;
  /// true if setting a non-default heading rate limit
  bool flag_set_max_heading_rate;
  /// (optional) maximum heading rate (absolute)
  float max_heading_rate;
} px4_msgs__msg__GotoSetpoint;

// Struct for a sequence of px4_msgs__msg__GotoSetpoint.
typedef struct px4_msgs__msg__GotoSetpoint__Sequence
{
  px4_msgs__msg__GotoSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GotoSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__STRUCT_H_
