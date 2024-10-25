// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/QshellReq.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/qshell_req__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/qshell_req__functions.h"
#include "px4_msgs/msg/detail/qshell_req__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__QshellReq_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__QshellReq__init(message_memory);
}

void px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__QshellReq_fini_function(void * message_memory)
{
  px4_msgs__msg__QshellReq__fini(message_memory);
}

size_t px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__size_function__QshellReq__cmd(
  const void * untyped_member)
{
  (void)untyped_member;
  return 100;
}

const void * px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__get_const_function__QshellReq__cmd(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__get_function__QshellReq__cmd(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__fetch_function__QshellReq__cmd(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__get_const_function__QshellReq__cmd(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__assign_function__QshellReq__cmd(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__get_function__QshellReq__cmd(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__QshellReq_message_member_array[4] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__QshellReq, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cmd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    100,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__QshellReq, cmd),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__size_function__QshellReq__cmd,  // size() function pointer
    px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__get_const_function__QshellReq__cmd,  // get_const(index) function pointer
    px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__get_function__QshellReq__cmd,  // get(index) function pointer
    px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__fetch_function__QshellReq__cmd,  // fetch(index, &value) function pointer
    px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__assign_function__QshellReq__cmd,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "strlen",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__QshellReq, strlen),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request_sequence",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__QshellReq, request_sequence),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__QshellReq_message_members = {
  "px4_msgs__msg",  // message namespace
  "QshellReq",  // message name
  4,  // number of fields
  sizeof(px4_msgs__msg__QshellReq),
  px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__QshellReq_message_member_array,  // message members
  px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__QshellReq_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__QshellReq_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__QshellReq_message_type_support_handle = {
  0,
  &px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__QshellReq_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, QshellReq)() {
  if (!px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__QshellReq_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__QshellReq_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__QshellReq__rosidl_typesupport_introspection_c__QshellReq_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
