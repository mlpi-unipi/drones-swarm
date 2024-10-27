// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ParameterSetUsedRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_SET_USED_REQUEST__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_SET_USED_REQUEST__STRUCT_H_

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
  px4_msgs__msg__ParameterSetUsedRequest__ORB_QUEUE_LENGTH = 64
};

/// Struct defined in msg/ParameterSetUsedRequest in the package px4_msgs.
/**
  * ParameterSetUsedRequest : Used by a remote to update the used flag for a parameter on the primary
 */
typedef struct px4_msgs__msg__ParameterSetUsedRequest
{
  uint64_t timestamp;
  uint16_t parameter_index;
} px4_msgs__msg__ParameterSetUsedRequest;

// Struct for a sequence of px4_msgs__msg__ParameterSetUsedRequest.
typedef struct px4_msgs__msg__ParameterSetUsedRequest__Sequence
{
  px4_msgs__msg__ParameterSetUsedRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ParameterSetUsedRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_SET_USED_REQUEST__STRUCT_H_
