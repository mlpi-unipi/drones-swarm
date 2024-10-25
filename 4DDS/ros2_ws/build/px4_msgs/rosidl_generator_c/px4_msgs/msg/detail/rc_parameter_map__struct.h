// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RcParameterMap.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RC_PARAMETER_MAP__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__RC_PARAMETER_MAP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RC_PARAM_MAP_NCHAN'.
/**
  * This limit is also hardcoded in the enum RC_CHANNELS_FUNCTION in rc_channels.h
 */
enum
{
  px4_msgs__msg__RcParameterMap__RC_PARAM_MAP_NCHAN = 3
};

/// Constant 'PARAM_ID_LEN'.
/**
  * corresponds to MAVLINK_MSG_PARAM_VALUE_FIELD_PARAM_ID_LEN
 */
enum
{
  px4_msgs__msg__RcParameterMap__PARAM_ID_LEN = 16
};

/// Struct defined in msg/RcParameterMap in the package px4_msgs.
typedef struct px4_msgs__msg__RcParameterMap
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// true for RC-Param channels which are mapped to a param
  bool valid[3];
  /// corresponding param index, this field is ignored if set to -1, in this case param_id will be used
  int32_t param_index[3];
  /// MAP_NCHAN * (ID_LEN + 1) chars, corresponding param id, null terminated
  uint8_t param_id[51];
  /// scale to map the RC input [-1, 1] to a parameter value
  float scale[3];
  /// initial value around which the parameter value is changed
  float value0[3];
  /// minimal parameter value
  float value_min[3];
  /// minimal parameter value
  float value_max[3];
} px4_msgs__msg__RcParameterMap;

// Struct for a sequence of px4_msgs__msg__RcParameterMap.
typedef struct px4_msgs__msg__RcParameterMap__Sequence
{
  px4_msgs__msg__RcParameterMap * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RcParameterMap__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__RC_PARAMETER_MAP__STRUCT_H_
