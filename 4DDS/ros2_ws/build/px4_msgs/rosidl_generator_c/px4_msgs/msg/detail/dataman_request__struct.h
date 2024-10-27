// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DatamanRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DATAMAN_REQUEST__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__DATAMAN_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/DatamanRequest in the package px4_msgs.
typedef struct px4_msgs__msg__DatamanRequest
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint8_t client_id;
  /// id/read/write/clear
  uint8_t request_type;
  /// dm_item_t
  uint8_t item;
  uint32_t index;
  uint8_t data[56];
  uint32_t data_length;
} px4_msgs__msg__DatamanRequest;

// Struct for a sequence of px4_msgs__msg__DatamanRequest.
typedef struct px4_msgs__msg__DatamanRequest__Sequence
{
  px4_msgs__msg__DatamanRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DatamanRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__DATAMAN_REQUEST__STRUCT_H_
