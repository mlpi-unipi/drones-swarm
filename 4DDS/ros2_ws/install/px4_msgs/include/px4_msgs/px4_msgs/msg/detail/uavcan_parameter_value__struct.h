// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/UavcanParameterValue.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_VALUE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_VALUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UavcanParameterValue in the package px4_msgs.
/**
  * UAVCAN-MAVLink parameter bridge response type
 */
typedef struct px4_msgs__msg__UavcanParameterValue
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// UAVCAN node ID mapped from MAVLink component ID
  uint8_t node_id;
  /// MAVLink/UAVCAN parameter name
  uint8_t param_id[17];
  /// parameter index, if known
  int16_t param_index;
  /// number of parameters exposed by the node
  uint16_t param_count;
  /// MAVLink parameter type
  uint8_t param_type;
  /// current value if param_type is int-like
  int64_t int_value;
  /// current value if param_type is float-like
  float real_value;
} px4_msgs__msg__UavcanParameterValue;

// Struct for a sequence of px4_msgs__msg__UavcanParameterValue.
typedef struct px4_msgs__msg__UavcanParameterValue__Sequence
{
  px4_msgs__msg__UavcanParameterValue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__UavcanParameterValue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_VALUE__STRUCT_H_
