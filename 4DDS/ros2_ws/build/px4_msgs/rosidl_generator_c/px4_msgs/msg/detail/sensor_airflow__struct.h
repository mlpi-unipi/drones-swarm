// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorAirflow.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_AIRFLOW__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_AIRFLOW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorAirflow in the package px4_msgs.
typedef struct px4_msgs__msg__SensorAirflow
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  /// the speed being reported by the wind / airflow sensor
  float speed;
  /// the direction bein report by the wind / airflow sensor
  float direction;
  /// Status code from the sensor
  uint8_t status;
} px4_msgs__msg__SensorAirflow;

// Struct for a sequence of px4_msgs__msg__SensorAirflow.
typedef struct px4_msgs__msg__SensorAirflow__Sequence
{
  px4_msgs__msg__SensorAirflow * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorAirflow__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_AIRFLOW__STRUCT_H_
