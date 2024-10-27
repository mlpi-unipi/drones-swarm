// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorGyroFft.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorGyroFft in the package px4_msgs.
typedef struct px4_msgs__msg__SensorGyroFft
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint64_t timestamp_sample;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  float sensor_sample_rate_hz;
  float resolution_hz;
  /// x axis peak frequencies
  float peak_frequencies_x[3];
  /// y axis peak frequencies
  float peak_frequencies_y[3];
  /// z axis peak frequencies
  float peak_frequencies_z[3];
  /// x axis peak SNR
  float peak_snr_x[3];
  /// y axis peak SNR
  float peak_snr_y[3];
  /// z axis peak SNR
  float peak_snr_z[3];
} px4_msgs__msg__SensorGyroFft;

// Struct for a sequence of px4_msgs__msg__SensorGyroFft.
typedef struct px4_msgs__msg__SensorGyroFft__Sequence
{
  px4_msgs__msg__SensorGyroFft * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorGyroFft__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__STRUCT_H_
