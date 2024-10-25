// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/HomePosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HOME_POSITION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__HOME_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/HomePosition in the package px4_msgs.
/**
  * GPS home position in WGS84 coordinates.
 */
typedef struct px4_msgs__msg__HomePosition
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Latitude in degrees
  double lat;
  /// Longitude in degrees
  double lon;
  /// Altitude in meters (AMSL)
  float alt;
  /// X coordinate in meters
  float x;
  /// Y coordinate in meters
  float y;
  /// Z coordinate in meters
  float z;
  /// Yaw angle in radians
  float yaw;
  /// true when the altitude has been set
  bool valid_alt;
  /// true when the latitude and longitude have been set
  bool valid_hpos;
  /// true when the local position (xyz) has been set
  bool valid_lpos;
  /// true when home position was set manually
  bool manual_home;
  /// update counter of the home position
  uint32_t update_count;
} px4_msgs__msg__HomePosition;

// Struct for a sequence of px4_msgs__msg__HomePosition.
typedef struct px4_msgs__msg__HomePosition__Sequence
{
  px4_msgs__msg__HomePosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__HomePosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__HOME_POSITION__STRUCT_H_
