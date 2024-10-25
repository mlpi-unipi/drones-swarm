// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorCombined.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RELATIVE_TIMESTAMP_INVALID'.
/**
  * (0x7fffffff) If one of the relative timestamps is set to this value, it means the associated sensor values are invalid
 */
enum
{
  px4_msgs__msg__SensorCombined__RELATIVE_TIMESTAMP_INVALID = 2147483647l
};

/// Constant 'CLIPPING_X'.
enum
{
  px4_msgs__msg__SensorCombined__CLIPPING_X = 1
};

/// Constant 'CLIPPING_Y'.
enum
{
  px4_msgs__msg__SensorCombined__CLIPPING_Y = 2
};

/// Constant 'CLIPPING_Z'.
enum
{
  px4_msgs__msg__SensorCombined__CLIPPING_Z = 4
};

/// Struct defined in msg/SensorCombined in the package px4_msgs.
/**
  * Sensor readings in SI-unit form.
  * These fields are scaled and offset-compensated where possible and do not
  * change with board revisions and sensor updates.
 */
typedef struct px4_msgs__msg__SensorCombined
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// gyro timstamp is equal to the timestamp of the message
  /// average angular rate measured in the FRD body frame XYZ-axis in rad/s over the last gyro sampling period
  float gyro_rad[3];
  /// gyro measurement sampling period in microseconds
  uint32_t gyro_integral_dt;
  /// timestamp + accelerometer_timestamp_relative = Accelerometer timestamp
  int32_t accelerometer_timestamp_relative;
  /// average value acceleration measured in the FRD body frame XYZ-axis in m/s^2 over the last accelerometer sampling period
  float accelerometer_m_s2[3];
  /// accelerometer measurement sampling period in microseconds
  uint32_t accelerometer_integral_dt;
  /// bitfield indicating if there was any accelerometer clipping (per axis) during the integration time frame
  uint8_t accelerometer_clipping;
  /// bitfield indicating if there was any gyro clipping (per axis) during the integration time frame
  uint8_t gyro_clipping;
  /// Calibration changed counter. Monotonically increases whenever accelermeter calibration changes.
  uint8_t accel_calibration_count;
  /// Calibration changed counter. Monotonically increases whenever rate gyro calibration changes.
  uint8_t gyro_calibration_count;
} px4_msgs__msg__SensorCombined;

// Struct for a sequence of px4_msgs__msg__SensorCombined.
typedef struct px4_msgs__msg__SensorCombined__Sequence
{
  px4_msgs__msg__SensorCombined * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorCombined__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_COMBINED__STRUCT_H_
