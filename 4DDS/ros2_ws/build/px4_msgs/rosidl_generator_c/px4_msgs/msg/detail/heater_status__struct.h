// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/HeaterStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HEATER_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__HEATER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_GPIO'.
enum
{
  px4_msgs__msg__HeaterStatus__MODE_GPIO = 1
};

/// Constant 'MODE_PX4IO'.
enum
{
  px4_msgs__msg__HeaterStatus__MODE_PX4IO = 2
};

/// Struct defined in msg/HeaterStatus in the package px4_msgs.
typedef struct px4_msgs__msg__HeaterStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint32_t device_id;
  bool heater_on;
  bool temperature_target_met;
  float temperature_sensor;
  float temperature_target;
  uint32_t controller_period_usec;
  uint32_t controller_time_on_usec;
  float proportional_value;
  float integrator_value;
  float feed_forward_value;
  uint8_t mode;
} px4_msgs__msg__HeaterStatus;

// Struct for a sequence of px4_msgs__msg__HeaterStatus.
typedef struct px4_msgs__msg__HeaterStatus__Sequence
{
  px4_msgs__msg__HeaterStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__HeaterStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__HEATER_STATUS__STRUCT_H_
