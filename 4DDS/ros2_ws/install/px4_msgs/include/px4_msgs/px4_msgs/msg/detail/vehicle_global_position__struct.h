// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleGlobalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_GLOBAL_POSITION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_GLOBAL_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleGlobalPosition in the package px4_msgs.
/**
  * Fused global position in WGS84.
  * This struct contains global position estimation. It is not the raw GPS
  * measurement (@see vehicle_gps_position). This topic is usually published by the position
  * estimator, which will take more sources of information into account than just GPS,
  * e.g. control inputs of the vehicle in a Kalman-filter implementation.
 */
typedef struct px4_msgs__msg__VehicleGlobalPosition
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// Latitude, (degrees)
  double lat;
  /// Longitude, (degrees)
  double lon;
  /// Altitude AMSL, (meters)
  float alt;
  /// Altitude above ellipsoid, (meters)
  float alt_ellipsoid;
  /// Reset delta for altitude
  float delta_alt;
  /// Counter for reset events on horizontal position coordinates
  uint8_t lat_lon_reset_counter;
  /// Counter for reset events on altitude
  uint8_t alt_reset_counter;
  /// Standard deviation of horizontal position error, (metres)
  float eph;
  /// Standard deviation of vertical position error, (metres)
  float epv;
  /// Terrain altitude WGS84, (metres)
  float terrain_alt;
  /// Terrain altitude estimate is valid
  bool terrain_alt_valid;
  /// True if this position is estimated through dead-reckoning
  bool dead_reckoning;
} px4_msgs__msg__VehicleGlobalPosition;

// Struct for a sequence of px4_msgs__msg__VehicleGlobalPosition.
typedef struct px4_msgs__msg__VehicleGlobalPosition__Sequence
{
  px4_msgs__msg__VehicleGlobalPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleGlobalPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_GLOBAL_POSITION__STRUCT_H_
