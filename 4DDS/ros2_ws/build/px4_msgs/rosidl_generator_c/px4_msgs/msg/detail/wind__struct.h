// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/Wind.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__WIND__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__WIND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Wind in the package px4_msgs.
typedef struct px4_msgs__msg__Wind
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// Wind component in north / X direction (m/sec)
  float windspeed_north;
  /// Wind component in east / Y direction (m/sec)
  float windspeed_east;
  /// Wind estimate error variance in north / X direction (m/sec)**2 - set to zero (no uncertainty) if not estimated
  float variance_north;
  /// Wind estimate error variance in east / Y direction (m/sec)**2 - set to zero (no uncertainty) if not estimated
  float variance_east;
  /// True airspeed innovation
  float tas_innov;
  /// True airspeed innovation variance
  float tas_innov_var;
  /// Sideslip measurement innovation
  float beta_innov;
  /// Sideslip measurement innovation variance
  float beta_innov_var;
} px4_msgs__msg__Wind;

// Struct for a sequence of px4_msgs__msg__Wind.
typedef struct px4_msgs__msg__Wind__Sequence
{
  px4_msgs__msg__Wind * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__Wind__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__WIND__STRUCT_H_
