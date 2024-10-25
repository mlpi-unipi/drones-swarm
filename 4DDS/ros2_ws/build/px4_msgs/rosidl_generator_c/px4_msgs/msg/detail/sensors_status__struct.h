// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/SensorsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSORS_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__SENSORS_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/SensorsStatus in the package px4_msgs.
/**
  * Sensor check metrics. This will be zero for a sensor that's primary or unpopulated.
 */
typedef struct px4_msgs__msg__SensorsStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// current primary device id for reference
  uint32_t device_id_primary;
  uint32_t device_ids[4];
  /// magnitude of difference between sensor instance and mean
  float inconsistency[4];
  /// sensor healthy
  bool healthy[4];
  uint8_t priority[4];
  bool enabled[4];
  bool external[4];
} px4_msgs__msg__SensorsStatus;

// Struct for a sequence of px4_msgs__msg__SensorsStatus.
typedef struct px4_msgs__msg__SensorsStatus__Sequence
{
  px4_msgs__msg__SensorsStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__SensorsStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__SENSORS_STATUS__STRUCT_H_
