// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/AirspeedWind.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AIRSPEED_WIND__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__AIRSPEED_WIND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SOURCE_AS_BETA_ONLY'.
/**
  * wind estimate only based on synthetic sideslip fusion
 */
enum
{
  px4_msgs__msg__AirspeedWind__SOURCE_AS_BETA_ONLY = 0
};

/// Constant 'SOURCE_AS_SENSOR_1'.
/**
  * combined synthetic sideslip and airspeed fusion (data from first airspeed sensor)
 */
enum
{
  px4_msgs__msg__AirspeedWind__SOURCE_AS_SENSOR_1 = 1
};

/// Constant 'SOURCE_AS_SENSOR_2'.
/**
  * combined synthetic sideslip and airspeed fusion (data from second airspeed sensor)
 */
enum
{
  px4_msgs__msg__AirspeedWind__SOURCE_AS_SENSOR_2 = 2
};

/// Constant 'SOURCE_AS_SENSOR_3'.
/**
  * combined synthetic sideslip and airspeed fusion (data from third airspeed sensor)
 */
enum
{
  px4_msgs__msg__AirspeedWind__SOURCE_AS_SENSOR_3 = 3
};

/// Struct defined in msg/AirspeedWind in the package px4_msgs.
typedef struct px4_msgs__msg__AirspeedWind
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
  /// Estimated true airspeed scale factor (not validated)
  float tas_scale_raw;
  /// True airspeed scale factor variance
  float tas_scale_raw_var;
  /// Estimated true airspeed scale factor after validation
  float tas_scale_validated;
  /// Sideslip measurement innovation
  float beta_innov;
  /// Sideslip measurement innovation variance
  float beta_innov_var;
  /// source of wind estimate
  uint8_t source;
} px4_msgs__msg__AirspeedWind;

// Struct for a sequence of px4_msgs__msg__AirspeedWind.
typedef struct px4_msgs__msg__AirspeedWind__Sequence
{
  px4_msgs__msg__AirspeedWind * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__AirspeedWind__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__AIRSPEED_WIND__STRUCT_H_
