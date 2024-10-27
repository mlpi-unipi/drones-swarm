// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorSelection.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_SELECTION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSOR_SELECTION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorSelection in the package px4_msgs.
/**
  * Sensor ID's for the voted sensors output on the sensor_combined topic.
  * Will be updated on startup of the sensor module and when sensor selection changes
 */
typedef struct px4_msgs__msg__SensorSelection
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// unique device ID for the selected accelerometers
  uint32_t accel_device_id;
  /// unique device ID for the selected rate gyros
  uint32_t gyro_device_id;
} px4_msgs__msg__SensorSelection;

// Struct for a sequence of px4_msgs__msg__SensorSelection.
typedef struct px4_msgs__msg__SensorSelection__Sequence
{
  px4_msgs__msg__SensorSelection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorSelection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_SELECTION__STRUCT_H_
