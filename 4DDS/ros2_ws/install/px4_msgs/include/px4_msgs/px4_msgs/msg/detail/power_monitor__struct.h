// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/PowerMonitor.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POWER_MONITOR__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__POWER_MONITOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PowerMonitor in the package px4_msgs.
/**
  * power monitor message
 */
typedef struct px4_msgs__msg__PowerMonitor
{
  /// Time since system start (microseconds)
  uint64_t timestamp;
  /// Voltage in volts, 0 if unknown
  float voltage_v;
  /// Current in amperes, -1 if unknown
  float current_a;
  /// power in watts, -1 if unknown
  float power_w;
  int16_t rconf;
  int16_t rsv;
  int16_t rbv;
  int16_t rp;
  int16_t rc;
  int16_t rcal;
  int16_t me;
  int16_t al;
} px4_msgs__msg__PowerMonitor;

// Struct for a sequence of px4_msgs__msg__PowerMonitor.
typedef struct px4_msgs__msg__PowerMonitor__Sequence
{
  px4_msgs__msg__PowerMonitor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__PowerMonitor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__POWER_MONITOR__STRUCT_H_
