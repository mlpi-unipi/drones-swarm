// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorCorrection.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorCorrection in the package px4_msgs.
/**
  * Sensor corrections in SI-unit form for the voted sensor
 */
typedef struct px4_msgs__msg__SensorCorrection
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Corrections for acceleromter acceleration outputs where corrected_accel = raw_accel * accel_scale + accel_offset
  /// Note the corrections are in the sensor frame and must be applied before the sensor data is rotated into body frame
  uint32_t accel_device_ids[4];
  float accel_temperature[4];
  /// accelerometer 0 offsets in the FRD board frame XYZ-axis in m/s^s
  float accel_offset_0[3];
  /// accelerometer 1 offsets in the FRD board frame XYZ-axis in m/s^s
  float accel_offset_1[3];
  /// accelerometer 2 offsets in the FRD board frame XYZ-axis in m/s^s
  float accel_offset_2[3];
  /// accelerometer 3 offsets in the FRD board frame XYZ-axis in m/s^s
  float accel_offset_3[3];
  /// Corrections for gyro angular rate outputs where corrected_rate = raw_rate * gyro_scale + gyro_offset
  /// Note the corrections are in the sensor frame and must be applied before the sensor data is rotated into body frame
  uint32_t gyro_device_ids[4];
  float gyro_temperature[4];
  /// gyro 0 XYZ offsets in the sensor frame in rad/s
  float gyro_offset_0[3];
  /// gyro 1 XYZ offsets in the sensor frame in rad/s
  float gyro_offset_1[3];
  /// gyro 2 XYZ offsets in the sensor frame in rad/s
  float gyro_offset_2[3];
  /// gyro 3 XYZ offsets in the sensor frame in rad/s
  float gyro_offset_3[3];
  /// Corrections for magnetometer measurement outputs where corrected_mag = raw_mag * mag_scale + mag_offset
  /// Note the corrections are in the sensor frame and must be applied before the sensor data is rotated into body frame
  uint32_t mag_device_ids[4];
  float mag_temperature[4];
  /// magnetometer 0 offsets in the FRD board frame XYZ-axis in m/s^s
  float mag_offset_0[3];
  /// magnetometer 1 offsets in the FRD board frame XYZ-axis in m/s^s
  float mag_offset_1[3];
  /// magnetometer 2 offsets in the FRD board frame XYZ-axis in m/s^s
  float mag_offset_2[3];
  /// magnetometer 3 offsets in the FRD board frame XYZ-axis in m/s^s
  float mag_offset_3[3];
  /// Corrections for barometric pressure outputs where corrected_pressure = raw_pressure * pressure_scale + pressure_offset
  /// Note the corrections are in the sensor frame and must be applied before the sensor data is rotated into body frame
  uint32_t baro_device_ids[4];
  float baro_temperature[4];
  /// barometric pressure 0 offsets in the sensor frame in Pascals
  float baro_offset_0;
  /// barometric pressure 1 offsets in the sensor frame in Pascals
  float baro_offset_1;
  /// barometric pressure 2 offsets in the sensor frame in Pascals
  float baro_offset_2;
  /// barometric pressure 3 offsets in the sensor frame in Pascals
  float baro_offset_3;
} px4_msgs__msg__SensorCorrection;

// Struct for a sequence of px4_msgs__msg__SensorCorrection.
typedef struct px4_msgs__msg__SensorCorrection__Sequence
{
  px4_msgs__msg__SensorCorrection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorCorrection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_CORRECTION__STRUCT_H_
