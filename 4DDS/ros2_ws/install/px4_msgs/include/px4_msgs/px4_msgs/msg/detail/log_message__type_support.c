// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/LogMessage.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/log_message__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/log_message__functions.h"
#include "px4_msgs/msg/detail/log_message__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__LogMessage_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__LogMessage__init(message_memory);
}

void px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__LogMessage_fini_function(void * message_memory)
{
  px4_msgs__msg__LogMessage__fini(message_memory);
}

size_t px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__size_function__LogMessage__text(
  const void * untyped_member)
{
  (void)untyped_member;
  return 127;
}

const void * px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__get_const_function__LogMessage__text(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__get_function__LogMessage__text(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__fetch_function__LogMessage__text(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__get_const_function__LogMessage__text(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__assign_function__LogMessage__text(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__get_function__LogMessage__text(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__LogMessage_message_member_array[3] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__LogMessage, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "severity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__LogMessage, severity),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "text",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    127,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__LogMessage, text),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__size_function__LogMessage__text,  // size() function pointer
    px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__get_const_function__LogMessage__text,  // get_const(index) function pointer
    px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__get_function__LogMessage__text,  // get(index) function pointer
    px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__fetch_function__LogMessage__text,  // fetch(index, &value) function pointer
    px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__assign_function__LogMessage__text,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__LogMessage_message_members = {
  "px4_msgs__msg",  // message namespace
  "LogMessage",  // message name
  3,  // number of fields
  sizeof(px4_msgs__msg__LogMessage),
  px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__LogMessage_message_member_array,  // message members
  px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__LogMessage_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__LogMessage_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__LogMessage_message_type_support_handle = {
  0,
  &px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__LogMessage_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, LogMessage)() {
  if (!px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__LogMessage_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__LogMessage_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__LogMessage__rosidl_typesupport_introspection_c__LogMessage_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
