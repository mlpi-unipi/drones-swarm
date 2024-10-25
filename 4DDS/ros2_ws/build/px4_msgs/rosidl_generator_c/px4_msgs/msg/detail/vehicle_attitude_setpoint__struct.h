// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleAttitudeSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleAttitudeSetpoint in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleAttitudeSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// body angle in NED frame (can be NaN for FW)
  float roll_body;
  /// body angle in NED frame (can be NaN for FW)
  float pitch_body;
  /// body angle in NED frame (can be NaN for FW)
  float yaw_body;
  /// rad/s (commanded by user)
  float yaw_sp_move_rate;
  /// For quaternion-based attitude control
  /// Desired quaternion for quaternion control
  float q_d[4];
  /// For clarification: For multicopters thrust_body[0] and thrust[1] are usually 0 and thrust[2] is the negative throttle demand.
  /// For fixed wings thrust_x is the throttle demand and thrust_y, thrust_z will usually be zero.
  /// Normalized thrust command in body NED frame [-1,1]
  float thrust_body[3];
  /// Reset roll/pitch/yaw integrals (navigation logic change)
  bool reset_integral;
  /// control heading with steering wheel (used for auto takeoff on runway)
  bool fw_control_yaw_wheel;
} px4_msgs__msg__VehicleAttitudeSetpoint;

// Struct for a sequence of px4_msgs__msg__VehicleAttitudeSetpoint.
typedef struct px4_msgs__msg__VehicleAttitudeSetpoint__Sequence
{
  px4_msgs__msg__VehicleAttitudeSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleAttitudeSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE_SETPOINT__STRUCT_H_
