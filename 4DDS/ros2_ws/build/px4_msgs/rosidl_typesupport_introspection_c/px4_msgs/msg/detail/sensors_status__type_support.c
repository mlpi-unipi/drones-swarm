// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/SensorsStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/sensors_status__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/sensors_status__functions.h"
#include "px4_msgs/msg/detail/sensors_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__SensorsStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__SensorsStatus__init(message_memory);
}

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__SensorsStatus_fini_function(void * message_memory)
{
  px4_msgs__msg__SensorsStatus__fini(message_memory);
}

size_t px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__size_function__SensorsStatus__device_ids(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__device_ids(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__device_ids(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__fetch_function__SensorsStatus__device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__device_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__assign_function__SensorsStatus__device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__device_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__size_function__SensorsStatus__inconsistency(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__inconsistency(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__inconsistency(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__fetch_function__SensorsStatus__inconsistency(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__inconsistency(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__assign_function__SensorsStatus__inconsistency(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__inconsistency(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__size_function__SensorsStatus__healthy(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__healthy(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__healthy(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__fetch_function__SensorsStatus__healthy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__healthy(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__assign_function__SensorsStatus__healthy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__healthy(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__size_function__SensorsStatus__priority(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__priority(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__priority(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__fetch_function__SensorsStatus__priority(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__priority(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__assign_function__SensorsStatus__priority(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__priority(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__size_function__SensorsStatus__enabled(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__enabled(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__enabled(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__fetch_function__SensorsStatus__enabled(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__enabled(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__assign_function__SensorsStatus__enabled(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__enabled(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__size_function__SensorsStatus__external(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__external(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__external(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__fetch_function__SensorsStatus__external(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__external(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__assign_function__SensorsStatus__external(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__external(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__SensorsStatus_message_member_array[8] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatus, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_id_primary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatus, device_id_primary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatus, device_ids),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__size_function__SensorsStatus__device_ids,  // size() function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__device_ids,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__device_ids,  // get(index) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__fetch_function__SensorsStatus__device_ids,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__assign_function__SensorsStatus__device_ids,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "inconsistency",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatus, inconsistency),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__size_function__SensorsStatus__inconsistency,  // size() function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__inconsistency,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__inconsistency,  // get(index) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__fetch_function__SensorsStatus__inconsistency,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__assign_function__SensorsStatus__inconsistency,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "healthy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatus, healthy),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__size_function__SensorsStatus__healthy,  // size() function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__healthy,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__healthy,  // get(index) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__fetch_function__SensorsStatus__healthy,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__assign_function__SensorsStatus__healthy,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatus, priority),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__size_function__SensorsStatus__priority,  // size() function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__priority,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__priority,  // get(index) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__fetch_function__SensorsStatus__priority,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__assign_function__SensorsStatus__priority,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "enabled",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatus, enabled),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__size_function__SensorsStatus__enabled,  // size() function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__enabled,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__enabled,  // get(index) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__fetch_function__SensorsStatus__enabled,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__assign_function__SensorsStatus__enabled,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "external",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatus, external),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__size_function__SensorsStatus__external,  // size() function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_const_function__SensorsStatus__external,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__get_function__SensorsStatus__external,  // get(index) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__fetch_function__SensorsStatus__external,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__assign_function__SensorsStatus__external,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__SensorsStatus_message_members = {
  "px4_msgs__msg",  // message namespace
  "SensorsStatus",  // message name
  8,  // number of fields
  sizeof(px4_msgs__msg__SensorsStatus),
  px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__SensorsStatus_message_member_array,  // message members
  px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__SensorsStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__SensorsStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__SensorsStatus_message_type_support_handle = {
  0,
  &px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__SensorsStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, SensorsStatus)() {
  if (!px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__SensorsStatus_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__SensorsStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__SensorsStatus__rosidl_typesupport_introspection_c__SensorsStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
