// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleRatesSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_RATES_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_RATES_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleRatesSetpoint in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleRatesSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// body angular rates in NED frame
  /// [rad/s] roll rate setpoint
  float roll;
  /// pitch rate setpoint
  float pitch;
  /// yaw rate setpoint
  float yaw;
  /// For clarification: For multicopters thrust_body[0] and thrust[1] are usually 0 and thrust[2] is the negative throttle demand.
  /// For fixed wings thrust_x is the throttle demand and thrust_y, thrust_z will usually be zero.
  /// Normalized thrust command in body NED frame [-1,1]
  float thrust_body[3];
  /// Reset roll/pitch/yaw integrals (navigation logic change)
  bool reset_integral;
} px4_msgs__msg__VehicleRatesSetpoint;

// Struct for a sequence of px4_msgs__msg__VehicleRatesSetpoint.
typedef struct px4_msgs__msg__VehicleRatesSetpoint__Sequence
{
  px4_msgs__msg__VehicleRatesSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleRatesSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_RATES_SETPOINT__STRUCT_H_
