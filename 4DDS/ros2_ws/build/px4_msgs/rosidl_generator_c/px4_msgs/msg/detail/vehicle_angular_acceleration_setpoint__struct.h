// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleAngularAccelerationSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ANGULAR_ACCELERATION_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ANGULAR_ACCELERATION_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleAngularAccelerationSetpoint in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleAngularAccelerationSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// timestamp of the data sample on which this message is based (microseconds)
  uint64_t timestamp_sample;
  /// angular acceleration about X, Y, Z body axis in rad/s^2
  float xyz[3];
} px4_msgs__msg__VehicleAngularAccelerationSetpoint;

// Struct for a sequence of px4_msgs__msg__VehicleAngularAccelerationSetpoint.
typedef struct px4_msgs__msg__VehicleAngularAccelerationSetpoint__Sequence
{
  px4_msgs__msg__VehicleAngularAccelerationSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleAngularAccelerationSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ANGULAR_ACCELERATION_SETPOINT__STRUCT_H_
