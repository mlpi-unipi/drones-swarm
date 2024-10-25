// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/AirspeedValidated.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__AIRSPEED_VALIDATED__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__AIRSPEED_VALIDATED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/AirspeedValidated in the package px4_msgs.
typedef struct px4_msgs__msg__AirspeedValidated
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// indicated airspeed in m/s (IAS), set to NAN if invalid
  float indicated_airspeed_m_s;
  /// calibrated airspeed in m/s (CAS, accounts for instrumentation errors), set to NAN if invalid
  float calibrated_airspeed_m_s;
  /// true filtered airspeed in m/s (TAS), set to NAN if invalid
  float true_airspeed_m_s;
  /// CAS calculated from groundspeed - windspeed, where windspeed is estimated based on a zero-sideslip assumption, set to NAN if invalid
  float calibrated_ground_minus_wind_m_s;
  /// TAS calculated from groundspeed - windspeed, where windspeed is estimated based on a zero-sideslip assumption, set to NAN if invalid
  float true_ground_minus_wind_m_s;
  /// True if data from at least one airspeed sensor is declared valid.
  bool airspeed_sensor_measurement_valid;
  /// 1-3: airspeed sensor index, 0: groundspeed-windspeed, -1: airspeed invalid
  int8_t selected_airspeed_index;
} px4_msgs__msg__AirspeedValidated;

// Struct for a sequence of px4_msgs__msg__AirspeedValidated.
typedef struct px4_msgs__msg__AirspeedValidated__Sequence
{
  px4_msgs__msg__AirspeedValidated * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__AirspeedValidated__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__AIRSPEED_VALIDATED__STRUCT_H_
