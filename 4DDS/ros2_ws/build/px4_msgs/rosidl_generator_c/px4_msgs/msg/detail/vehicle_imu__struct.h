// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleImu.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_IMU__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_IMU__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CLIPPING_X'.
enum
{
  px4_msgs__msg__VehicleImu__CLIPPING_X = 1
};

/// Constant 'CLIPPING_Y'.
enum
{
  px4_msgs__msg__VehicleImu__CLIPPING_Y = 2
};

/// Constant 'CLIPPING_Z'.
enum
{
  px4_msgs__msg__VehicleImu__CLIPPING_Z = 4
};

/// Struct defined in msg/VehicleImu in the package px4_msgs.
/**
  * IMU readings in SI-unit form.
 */
typedef struct px4_msgs__msg__VehicleImu
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint64_t timestamp_sample;
  /// Accelerometer unique device ID for the sensor that does not change between power cycles
  uint32_t accel_device_id;
  /// Gyroscope unique device ID for the sensor that does not change between power cycles
  uint32_t gyro_device_id;
  /// delta angle about the FRD body frame XYZ-axis in rad over the integration time frame (delta_angle_dt)
  float delta_angle[3];
  /// delta velocity in the FRD body frame XYZ-axis in m/s over the integration time frame (delta_velocity_dt)
  float delta_velocity[3];
  /// integration period in microseconds
  uint16_t delta_angle_dt;
  /// integration period in microseconds
  uint16_t delta_velocity_dt;
  /// bitfield indicating if there was any gyro clipping (per axis) during the integration time frame
  uint8_t delta_angle_clipping;
  /// bitfield indicating if there was any accelerometer clipping (per axis) during the integration time frame
  uint8_t delta_velocity_clipping;
  /// Calibration changed counter. Monotonically increases whenever accelermeter calibration changes.
  uint8_t accel_calibration_count;
  /// Calibration changed counter. Monotonically increases whenever rate gyro calibration changes.
  uint8_t gyro_calibration_count;
} px4_msgs__msg__VehicleImu;

// Struct for a sequence of px4_msgs__msg__VehicleImu.
typedef struct px4_msgs__msg__VehicleImu__Sequence
{
  px4_msgs__msg__VehicleImu * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleImu__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_IMU__STRUCT_H_
