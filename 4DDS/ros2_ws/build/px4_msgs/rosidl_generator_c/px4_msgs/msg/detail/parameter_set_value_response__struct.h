// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ParameterSetValueResponse.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_SET_VALUE_RESPONSE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_SET_VALUE_RESPONSE__STRUCT_H_

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
  px4_msgs__msg__ParameterSetValueResponse__ORB_QUEUE_LENGTH = 4
};

/// Struct defined in msg/ParameterSetValueResponse in the package px4_msgs.
/**
  * ParameterSetValueResponse : Response to a set value request by either primary or secondary
 */
typedef struct px4_msgs__msg__ParameterSetValueResponse
{
  uint64_t timestamp;
  uint64_t request_timestamp;
  uint16_t parameter_index;
} px4_msgs__msg__ParameterSetValueResponse;

// Struct for a sequence of px4_msgs__msg__ParameterSetValueResponse.
typedef struct px4_msgs__msg__ParameterSetValueResponse__Sequence
{
  px4_msgs__msg__ParameterSetValueResponse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ParameterSetValueResponse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_SET_VALUE_RESPONSE__STRUCT_H_
