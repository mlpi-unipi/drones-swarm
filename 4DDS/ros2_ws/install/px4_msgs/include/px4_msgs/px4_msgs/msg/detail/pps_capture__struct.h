// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/PpsCapture.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PPS_CAPTURE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__PPS_CAPTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/PpsCapture in the package px4_msgs.
typedef struct px4_msgs__msg__PpsCapture
{
  /// time since system start (microseconds) at PPS capture event
  uint64_t timestamp;
  /// Corrected GPS UTC timestamp at PPS capture event
  uint64_t rtc_timestamp;
  /// Increments when PPS dt < 50ms
  uint8_t pps_rate_exceeded_counter;
} px4_msgs__msg__PpsCapture;

// Struct for a sequence of px4_msgs__msg__PpsCapture.
typedef struct px4_msgs__msg__PpsCapture__Sequence
{
  px4_msgs__msg__PpsCapture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__PpsCapture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__PPS_CAPTURE__STRUCT_H_
