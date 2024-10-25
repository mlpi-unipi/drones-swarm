// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DifferentialPressure.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DIFFERENTIAL_PRESSURE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__DIFFERENTIAL_PRESSURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DifferentialPressure in the package px4_msgs.
typedef struct px4_msgs__msg__DifferentialPressure
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint64_t timestamp_sample;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  /// differential pressure reading in Pascals (may be negative)
  float differential_pressure_pa;
  /// Temperature provided by sensor in degrees Celsius, NAN if unknown
  float temperature;
  /// Number of errors detected by driver
  uint32_t error_count;
} px4_msgs__msg__DifferentialPressure;

// Struct for a sequence of px4_msgs__msg__DifferentialPressure.
typedef struct px4_msgs__msg__DifferentialPressure__Sequence
{
  px4_msgs__msg__DifferentialPressure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DifferentialPressure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__DIFFERENTIAL_PRESSURE__STRUCT_H_
