// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/RegisterExtComponentRequest.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'LATEST_PX4_ROS2_API_VERSION'.
/**
  * API version compatibility. Increase this on a breaking semantic change. Changes to any message field are detected separately and do not require an API version change.
 */
enum
{
  px4_msgs__msg__RegisterExtComponentRequest__LATEST_PX4_ROS2_API_VERSION = 1
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__RegisterExtComponentRequest__ORB_QUEUE_LENGTH = 2
};

/// Struct defined in msg/RegisterExtComponentRequest in the package px4_msgs.
/**
  * Request to register an external component
 */
typedef struct px4_msgs__msg__RegisterExtComponentRequest
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// ID, set this to a random value
  uint64_t request_id;
  /// either the requested mode name, or component name
  uint8_t name[25];
  /// Set to LATEST_PX4_ROS2_API_VERSION
  uint16_t px4_ros2_api_version;
  /// Components to be registered
  bool register_arming_check;
  /// registering a mode also requires arming_check to be set
  bool register_mode;
  /// registering an executor also requires a mode to be registered (which is the owned mode by the executor)
  bool register_mode_executor;
  /// set to true if an internal mode should be replaced
  bool enable_replace_internal_mode;
  /// vehicle_status::NAVIGATION_STATE_*
  uint8_t replace_internal_mode;
  /// switch to the registered mode (can only be set in combination with an executor)
  bool activate_mode_immediately;
} px4_msgs__msg__RegisterExtComponentRequest;

// Struct for a sequence of px4_msgs__msg__RegisterExtComponentRequest.
typedef struct px4_msgs__msg__RegisterExtComponentRequest__Sequence
{
  px4_msgs__msg__RegisterExtComponentRequest * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__RegisterExtComponentRequest__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__REGISTER_EXT_COMPONENT_REQUEST__STRUCT_H_
