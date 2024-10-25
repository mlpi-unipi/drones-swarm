// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorHygrometer.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_HYGROMETER__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_HYGROMETER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorHygrometer in the package px4_msgs.
typedef struct px4_msgs__msg__SensorHygrometer
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint64_t timestamp_sample;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  /// Temperature provided by sensor (Celsius)
  float temperature;
  /// Humidity provided by sensor
  float humidity;
} px4_msgs__msg__SensorHygrometer;

// Struct for a sequence of px4_msgs__msg__SensorHygrometer.
typedef struct px4_msgs__msg__SensorHygrometer__Sequence
{
  px4_msgs__msg__SensorHygrometer * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorHygrometer__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_HYGROMETER__STRUCT_H_
