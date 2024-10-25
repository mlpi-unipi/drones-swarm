// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorAccelFifo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_ACCEL_FIFO__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_ACCEL_FIFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorAccelFifo in the package px4_msgs.
typedef struct px4_msgs__msg__SensorAccelFifo
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint64_t timestamp_sample;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  /// delta time between samples (microseconds)
  float dt;
  float scale;
  /// number of valid samples
  uint8_t samples;
  /// acceleration in the FRD board frame X-axis in m/s^2
  int16_t x[32];
  /// acceleration in the FRD board frame Y-axis in m/s^2
  int16_t y[32];
  /// acceleration in the FRD board frame Z-axis in m/s^2
  int16_t z[32];
} px4_msgs__msg__SensorAccelFifo;

// Struct for a sequence of px4_msgs__msg__SensorAccelFifo.
typedef struct px4_msgs__msg__SensorAccelFifo__Sequence
{
  px4_msgs__msg__SensorAccelFifo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorAccelFifo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_ACCEL_FIFO__STRUCT_H_
