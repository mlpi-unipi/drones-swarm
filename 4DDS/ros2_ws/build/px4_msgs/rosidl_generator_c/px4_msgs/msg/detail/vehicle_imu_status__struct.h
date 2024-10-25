// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleImuStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleImuStatus in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleImuStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t accel_device_id;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t gyro_device_id;
  /// total clipping per axis
  uint32_t accel_clipping[3];
  /// total clipping per axis
  uint32_t gyro_clipping[3];
  uint32_t accel_error_count;
  uint32_t gyro_error_count;
  float accel_rate_hz;
  float gyro_rate_hz;
  /// full raw sensor sample rate (Hz)
  float accel_raw_rate_hz;
  /// full raw sensor sample rate (Hz)
  float gyro_raw_rate_hz;
  /// high frequency vibration level in the accelerometer data (m/s/s)
  float accel_vibration_metric;
  /// high frequency vibration level in the gyro data (rad/s)
  float gyro_vibration_metric;
  /// average IMU delta angle coning correction (rad^2)
  float delta_angle_coning_metric;
  /// average accelerometer readings since last publication
  float mean_accel[3];
  /// average gyroscope readings since last publication
  float mean_gyro[3];
  /// accelerometer variance since last publication
  float var_accel[3];
  /// gyroscope variance since last publication
  float var_gyro[3];
  float temperature_accel;
  float temperature_gyro;
} px4_msgs__msg__VehicleImuStatus;

// Struct for a sequence of px4_msgs__msg__VehicleImuStatus.
typedef struct px4_msgs__msg__VehicleImuStatus__Sequence
{
  px4_msgs__msg__VehicleImuStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleImuStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_IMU_STATUS__STRUCT_H_
