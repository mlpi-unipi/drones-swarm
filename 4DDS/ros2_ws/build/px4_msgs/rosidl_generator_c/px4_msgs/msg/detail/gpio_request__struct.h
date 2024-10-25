// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GpioRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GPIO_REQUEST__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GPIO_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/GpioRequest in the package px4_msgs.
/**
  * Request GPIO mask to be read
 */
typedef struct px4_msgs__msg__GpioRequest
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Device id
  uint32_t device_id;
} px4_msgs__msg__GpioRequest;

// Struct for a sequence of px4_msgs__msg__GpioRequest.
typedef struct px4_msgs__msg__GpioRequest__Sequence
{
  px4_msgs__msg__GpioRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GpioRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GPIO_REQUEST__STRUCT_H_
