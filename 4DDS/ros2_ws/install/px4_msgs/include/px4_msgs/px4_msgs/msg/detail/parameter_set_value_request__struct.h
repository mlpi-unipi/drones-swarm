// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ParameterSetValueRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_SET_VALUE_REQUEST__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_SET_VALUE_REQUEST__STRUCT_H_

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
  px4_msgs__msg__ParameterSetValueRequest__ORB_QUEUE_LENGTH = 32
};

/// Struct defined in msg/ParameterSetValueRequest in the package px4_msgs.
/**
  * ParameterSetValueRequest : Used by a remote or primary to update the value for a parameter at the other end
 */
typedef struct px4_msgs__msg__ParameterSetValueRequest
{
  uint64_t timestamp;
  uint16_t parameter_index;
  /// Optional value for an integer parameter
  int32_t int_value;
  /// Optional value for a float parameter
  float float_value;
} px4_msgs__msg__ParameterSetValueRequest;

// Struct for a sequence of px4_msgs__msg__ParameterSetValueRequest.
typedef struct px4_msgs__msg__ParameterSetValueRequest__Sequence
{
  px4_msgs__msg__ParameterSetValueRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ParameterSetValueRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_SET_VALUE_REQUEST__STRUCT_H_
