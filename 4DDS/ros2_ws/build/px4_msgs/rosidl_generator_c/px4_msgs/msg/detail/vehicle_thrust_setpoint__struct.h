// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleThrustSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_THRUST_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_THRUST_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleThrustSetpoint in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleThrustSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// timestamp of the data sample on which this message is based (microseconds)
  uint64_t timestamp_sample;
  /// thrust setpoint along X, Y, Z body axis [-1, 1]
  float xyz[3];
} px4_msgs__msg__VehicleThrustSetpoint;

// Struct for a sequence of px4_msgs__msg__VehicleThrustSetpoint.
typedef struct px4_msgs__msg__VehicleThrustSetpoint__Sequence
{
  px4_msgs__msg__VehicleThrustSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleThrustSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_THRUST_SETPOINT__STRUCT_H_
