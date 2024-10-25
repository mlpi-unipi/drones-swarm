// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RegisterExtComponentReply.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REPLY__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REPLY__STRUCT_H_

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
  px4_msgs__msg__RegisterExtComponentReply__ORB_QUEUE_LENGTH = 2
};

/// Struct defined in msg/RegisterExtComponentReply in the package px4_msgs.
typedef struct px4_msgs__msg__RegisterExtComponentReply
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// ID from the request
  uint64_t request_id;
  /// name from the request
  uint8_t name[25];
  uint16_t px4_ros2_api_version;
  bool success;
  /// arming check registration ID (-1 if invalid)
  int8_t arming_check_id;
  /// assigned mode ID (-1 if invalid)
  int8_t mode_id;
  /// assigned mode executor ID (-1 if invalid)
  int8_t mode_executor_id;
} px4_msgs__msg__RegisterExtComponentReply;

// Struct for a sequence of px4_msgs__msg__RegisterExtComponentReply.
typedef struct px4_msgs__msg__RegisterExtComponentReply__Sequence
{
  px4_msgs__msg__RegisterExtComponentReply * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RegisterExtComponentReply__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REPLY__STRUCT_H_
