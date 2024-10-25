// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorsStatusImu.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorsStatusImu in the package px4_msgs.
/**
  * Sensor check metrics. This will be zero for a sensor that's primary or unpopulated.
 */
typedef struct px4_msgs__msg__SensorsStatusImu
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// current primary accel device id for reference
  uint32_t accel_device_id_primary;
  uint32_t accel_device_ids[4];
  /// magnitude of acceleration difference between IMU instance and mean in m/s^2.
  float accel_inconsistency_m_s_s[4];
  bool accel_healthy[4];
  uint8_t accel_priority[4];
  /// current primary gyro device id for reference
  uint32_t gyro_device_id_primary;
  uint32_t gyro_device_ids[4];
  /// magnitude of angular rate difference between IMU instance and mean in (rad/s).
  float gyro_inconsistency_rad_s[4];
  bool gyro_healthy[4];
  uint8_t gyro_priority[4];
} px4_msgs__msg__SensorsStatusImu;

// Struct for a sequence of px4_msgs__msg__SensorsStatusImu.
typedef struct px4_msgs__msg__SensorsStatusImu__Sequence
{
  px4_msgs__msg__SensorsStatusImu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorsStatusImu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSORS_STATUS_IMU__STRUCT_H_
