// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/Airspeed.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AIRSPEED__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__AIRSPEED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/Airspeed in the package px4_msgs.
typedef struct px4_msgs__msg__Airspeed
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint64_t timestamp_sample;
  /// indicated airspeed in m/s
  float indicated_airspeed_m_s;
  /// true filtered airspeed in m/s
  float true_airspeed_m_s;
  /// air temperature in degrees Celsius, -1000 if unknown
  float air_temperature_celsius;
  /// confidence value from 0 to 1 for this sensor
  float confidence;
} px4_msgs__msg__Airspeed;

// Struct for a sequence of px4_msgs__msg__Airspeed.
typedef struct px4_msgs__msg__Airspeed__Sequence
{
  px4_msgs__msg__Airspeed * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__Airspeed__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__AIRSPEED__STRUCT_H_
