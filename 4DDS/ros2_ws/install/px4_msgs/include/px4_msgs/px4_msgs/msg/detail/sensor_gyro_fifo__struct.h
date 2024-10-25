// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorGyroFifo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FIFO__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FIFO__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__SensorGyroFifo__ORB_QUEUE_LENGTH = 4
};

/// Struct defined in msg/SensorGyroFifo in the package px4_msgs.
typedef struct px4_msgs__msg__SensorGyroFifo
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
  /// angular velocity in the FRD board frame X-axis in rad/s
  int16_t x[32];
  /// angular velocity in the FRD board frame Y-axis in rad/s
  int16_t y[32];
  /// angular velocity in the FRD board frame Z-axis in rad/s
  int16_t z[32];
} px4_msgs__msg__SensorGyroFifo;

// Struct for a sequence of px4_msgs__msg__SensorGyroFifo.
typedef struct px4_msgs__msg__SensorGyroFifo__Sequence
{
  px4_msgs__msg__SensorGyroFifo * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorGyroFifo__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FIFO__STRUCT_H_
