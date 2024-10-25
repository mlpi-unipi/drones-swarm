// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/UnregisterExtComponent.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__UNREGISTER_EXT_COMPONENT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__UNREGISTER_EXT_COMPONENT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/UnregisterExtComponent in the package px4_msgs.
typedef struct px4_msgs__msg__UnregisterExtComponent
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// either the mode name, or component name
  uint8_t name[25];
  /// arming check registration ID (-1 if not registered)
  int8_t arming_check_id;
  /// assigned mode ID (-1 if not registered)
  int8_t mode_id;
  /// assigned mode executor ID (-1 if not registered)
  int8_t mode_executor_id;
} px4_msgs__msg__UnregisterExtComponent;

// Struct for a sequence of px4_msgs__msg__UnregisterExtComponent.
typedef struct px4_msgs__msg__UnregisterExtComponent__Sequence
{
  px4_msgs__msg__UnregisterExtComponent * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__UnregisterExtComponent__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__UNREGISTER_EXT_COMPONENT__STRUCT_H_
