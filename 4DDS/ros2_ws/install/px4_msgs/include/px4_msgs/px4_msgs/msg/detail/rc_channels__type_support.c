// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/RcChannels.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/rc_channels__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/rc_channels__functions.h"
#include "px4_msgs/msg/detail/rc_channels__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__RcChannels_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__RcChannels__init(message_memory);
}

void px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__RcChannels_fini_function(void * message_memory)
{
  px4_msgs__msg__RcChannels__fini(message_memory);
}

size_t px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__size_function__RcChannels__channels(
  const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__get_const_function__RcChannels__channels(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__get_function__RcChannels__channels(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__fetch_function__RcChannels__channels(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__get_const_function__RcChannels__channels(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__assign_function__RcChannels__channels(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__get_function__RcChannels__channels(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__size_function__RcChannels__function(
  const void * untyped_member)
{
  (void)untyped_member;
  return 28;
}

const void * px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__get_const_function__RcChannels__function(
  const void * untyped_member, size_t index)
{
  const int8_t * member =
    (const int8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__get_function__RcChannels__function(
  void * untyped_member, size_t index)
{
  int8_t * member =
    (int8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__fetch_function__RcChannels__function(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__get_const_function__RcChannels__function(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__assign_function__RcChannels__function(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__get_function__RcChannels__function(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__RcChannels_message_member_array[8] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcChannels, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_last_valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcChannels, timestamp_last_valid),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channels",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcChannels, channels),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__size_function__RcChannels__channels,  // size() function pointer
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__get_const_function__RcChannels__channels,  // get_const(index) function pointer
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__get_function__RcChannels__channels,  // get(index) function pointer
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__fetch_function__RcChannels__channels,  // fetch(index, &value) function pointer
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__assign_function__RcChannels__channels,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channel_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcChannels, channel_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "function",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    28,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcChannels, function),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__size_function__RcChannels__function,  // size() function pointer
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__get_const_function__RcChannels__function,  // get_const(index) function pointer
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__get_function__RcChannels__function,  // get(index) function pointer
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__fetch_function__RcChannels__function,  // fetch(index, &value) function pointer
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__assign_function__RcChannels__function,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rssi",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcChannels, rssi),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "signal_lost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcChannels, signal_lost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "frame_drop_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcChannels, frame_drop_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__RcChannels_message_members = {
  "px4_msgs__msg",  // message namespace
  "RcChannels",  // message name
  8,  // number of fields
  sizeof(px4_msgs__msg__RcChannels),
  px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__RcChannels_message_member_array,  // message members
  px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__RcChannels_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__RcChannels_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__RcChannels_message_type_support_handle = {
  0,
  &px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__RcChannels_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, RcChannels)() {
  if (!px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__RcChannels_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__RcChannels_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__RcChannels__rosidl_typesupport_introspection_c__RcChannels_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
