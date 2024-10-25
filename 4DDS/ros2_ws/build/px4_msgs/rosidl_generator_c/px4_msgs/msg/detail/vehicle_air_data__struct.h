// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleAirData.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_AIR_DATA__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_AIR_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleAirData in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleAirData
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// unique device ID for the selected barometer
  uint32_t baro_device_id;
  /// Altitude above MSL calculated from temperature compensated baro sensor data using an ISA corrected for sea level pressure SENS_BARO_QNH.
  float baro_alt_meter;
  /// Temperature in degrees Celsius
  float baro_temp_celcius;
  /// Absolute pressure in Pascals
  float baro_pressure_pa;
  /// air density
  float rho;
  /// equivalent airspeed to true airspeed conversion factor
  float eas2tas;
  /// Calibration changed counter. Monotonically increases whenever calibration changes.
  uint8_t calibration_count;
} px4_msgs__msg__VehicleAirData;

// Struct for a sequence of px4_msgs__msg__VehicleAirData.
typedef struct px4_msgs__msg__VehicleAirData__Sequence
{
  px4_msgs__msg__VehicleAirData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleAirData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_AIR_DATA__STRUCT_H_
