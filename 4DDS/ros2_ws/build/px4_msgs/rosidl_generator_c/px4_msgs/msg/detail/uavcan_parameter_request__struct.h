// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/UavcanParameterRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_REQUEST__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MESSAGE_TYPE_PARAM_REQUEST_READ'.
/**
  * MAVLINK_MSG_ID_PARAM_REQUEST_READ
 */
enum
{
  px4_msgs__msg__UavcanParameterRequest__MESSAGE_TYPE_PARAM_REQUEST_READ = 20
};

/// Constant 'MESSAGE_TYPE_PARAM_REQUEST_LIST'.
/**
  * MAVLINK_MSG_ID_PARAM_REQUEST_LIST
 */
enum
{
  px4_msgs__msg__UavcanParameterRequest__MESSAGE_TYPE_PARAM_REQUEST_LIST = 21
};

/// Constant 'MESSAGE_TYPE_PARAM_SET'.
/**
  * MAVLINK_MSG_ID_PARAM_SET
 */
enum
{
  px4_msgs__msg__UavcanParameterRequest__MESSAGE_TYPE_PARAM_SET = 23
};

/// Constant 'NODE_ID_ALL'.
/**
  * MAV_COMP_ID_ALL
 */
enum
{
  px4_msgs__msg__UavcanParameterRequest__NODE_ID_ALL = 0
};

/// Constant 'PARAM_TYPE_UINT8'.
/**
  * MAV_PARAM_TYPE_UINT8
 */
enum
{
  px4_msgs__msg__UavcanParameterRequest__PARAM_TYPE_UINT8 = 1
};

/// Constant 'PARAM_TYPE_INT64'.
/**
  * MAV_PARAM_TYPE_INT64
 */
enum
{
  px4_msgs__msg__UavcanParameterRequest__PARAM_TYPE_INT64 = 8
};

/// Constant 'PARAM_TYPE_REAL32'.
/**
  * MAV_PARAM_TYPE_REAL32
 */
enum
{
  px4_msgs__msg__UavcanParameterRequest__PARAM_TYPE_REAL32 = 9
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__UavcanParameterRequest__ORB_QUEUE_LENGTH = 4
};

/// Struct defined in msg/UavcanParameterRequest in the package px4_msgs.
/**
  * UAVCAN-MAVLink parameter bridge request type
 */
typedef struct px4_msgs__msg__UavcanParameterRequest
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// MAVLink message type: PARAM_REQUEST_READ, PARAM_REQUEST_LIST, PARAM_SET
  uint8_t message_type;
  /// UAVCAN node ID mapped from MAVLink component ID
  uint8_t node_id;
  /// MAVLink/UAVCAN parameter name
  uint8_t param_id[17];
  /// -1 if the param_id field should be used as identifier
  int16_t param_index;
  /// MAVLink parameter type
  uint8_t param_type;
  /// current value if param_type is int-like
  int64_t int_value;
  /// current value if param_type is float-like
  float real_value;
} px4_msgs__msg__UavcanParameterRequest;

// Struct for a sequence of px4_msgs__msg__UavcanParameterRequest.
typedef struct px4_msgs__msg__UavcanParameterRequest__Sequence
{
  px4_msgs__msg__UavcanParameterRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__UavcanParameterRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__UAVCAN_PARAMETER_REQUEST__STRUCT_H_
