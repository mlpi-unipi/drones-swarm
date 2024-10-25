// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorMag.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_MAG__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_MAG__STRUCT_H_

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
  px4_msgs__msg__SensorMag__ORB_QUEUE_LENGTH = 4
};

/// Struct defined in msg/SensorMag in the package px4_msgs.
typedef struct px4_msgs__msg__SensorMag
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint64_t timestamp_sample;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  /// magnetic field in the FRD board frame X-axis in Gauss
  float x;
  /// magnetic field in the FRD board frame Y-axis in Gauss
  float y;
  /// magnetic field in the FRD board frame Z-axis in Gauss
  float z;
  /// temperature in degrees Celsius
  float temperature;
  uint32_t error_count;
} px4_msgs__msg__SensorMag;

// Struct for a sequence of px4_msgs__msg__SensorMag.
typedef struct px4_msgs__msg__SensorMag__Sequence
{
  px4_msgs__msg__SensorMag * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorMag__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_MAG__STRUCT_H_
