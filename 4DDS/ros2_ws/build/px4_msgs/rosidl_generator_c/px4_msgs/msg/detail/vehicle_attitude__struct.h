// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleAttitude.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleAttitude in the package px4_msgs.
/**
  * This is similar to the mavlink message ATTITUDE_QUATERNION, but for onboard use
 */
typedef struct px4_msgs__msg__VehicleAttitude
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// Quaternion rotation from the FRD body frame to the NED earth frame
  float q[4];
  /// Amount by which quaternion has changed during last reset
  float delta_q_reset[4];
  /// Quaternion reset counter
  uint8_t quat_reset_counter;
} px4_msgs__msg__VehicleAttitude;

// Struct for a sequence of px4_msgs__msg__VehicleAttitude.
typedef struct px4_msgs__msg__VehicleAttitude__Sequence
{
  px4_msgs__msg__VehicleAttitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleAttitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ATTITUDE__STRUCT_H_
