// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorSensorBias.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_SENSOR_BIAS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_SENSOR_BIAS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/EstimatorSensorBias in the package px4_msgs.
/**
  * Sensor readings and in-run biases in SI-unit form. Sensor readings are compensated for static offsets,
  * scale errors, in-run bias and thermal drift (if thermal compensation is enabled and available).
 */
typedef struct px4_msgs__msg__EstimatorSensorBias
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// In-run bias estimates (subtract from uncorrected data)
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t gyro_device_id;
  /// gyroscope in-run bias in body frame (rad/s)
  float gyro_bias[3];
  /// magnitude of maximum gyroscope in-run bias in body frame (rad/s)
  float gyro_bias_limit;
  float gyro_bias_variance[3];
  bool gyro_bias_valid;
  /// true when the gyro bias estimate is stable enough to use for calibration
  bool gyro_bias_stable;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t accel_device_id;
  /// accelerometer in-run bias in body frame (m/s^2)
  float accel_bias[3];
  /// magnitude of maximum accelerometer in-run bias in body frame (m/s^2)
  float accel_bias_limit;
  float accel_bias_variance[3];
  bool accel_bias_valid;
  /// true when the accel bias estimate is stable enough to use for calibration
  bool accel_bias_stable;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t mag_device_id;
  /// magnetometer in-run bias in body frame (Gauss)
  float mag_bias[3];
  /// magnitude of maximum magnetometer in-run bias in body frame (Gauss)
  float mag_bias_limit;
  float mag_bias_variance[3];
  bool mag_bias_valid;
  /// true when the mag bias estimate is stable enough to use for calibration
  bool mag_bias_stable;
} px4_msgs__msg__EstimatorSensorBias;

// Struct for a sequence of px4_msgs__msg__EstimatorSensorBias.
typedef struct px4_msgs__msg__EstimatorSensorBias__Sequence
{
  px4_msgs__msg__EstimatorSensorBias * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorSensorBias__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_SENSOR_BIAS__STRUCT_H_
