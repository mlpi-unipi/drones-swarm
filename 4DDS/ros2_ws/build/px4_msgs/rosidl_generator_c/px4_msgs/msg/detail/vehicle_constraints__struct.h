// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleConstraints.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_CONSTRAINTS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_CONSTRAINTS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleConstraints in the package px4_msgs.
/**
  * Local setpoint constraints in NED frame
  * setting something to NaN means that no limit is provided
 */
typedef struct px4_msgs__msg__VehicleConstraints
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// in meters/sec
  float speed_up;
  /// in meters/sec
  float speed_down;
  /// tell the controller to initiate takeoff when idling (ignored during flight)
  bool want_takeoff;
} px4_msgs__msg__VehicleConstraints;

// Struct for a sequence of px4_msgs__msg__VehicleConstraints.
typedef struct px4_msgs__msg__VehicleConstraints__Sequence
{
  px4_msgs__msg__VehicleConstraints * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleConstraints__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_CONSTRAINTS__STRUCT_H_
