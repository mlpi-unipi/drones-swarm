// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ArmingCheckRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REQUEST__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/ArmingCheckRequest in the package px4_msgs.
typedef struct px4_msgs__msg__ArmingCheckRequest
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// broadcast message to request all registered arming checks to be reported
  uint8_t request_id;
} px4_msgs__msg__ArmingCheckRequest;

// Struct for a sequence of px4_msgs__msg__ArmingCheckRequest.
typedef struct px4_msgs__msg__ArmingCheckRequest__Sequence
{
  px4_msgs__msg__ArmingCheckRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ArmingCheckRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ARMING_CHECK_REQUEST__STRUCT_H_
