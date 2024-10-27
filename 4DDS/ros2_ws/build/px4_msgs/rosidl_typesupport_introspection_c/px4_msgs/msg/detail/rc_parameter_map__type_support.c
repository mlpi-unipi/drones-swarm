// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/RcParameterMap.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/rc_parameter_map__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/rc_parameter_map__functions.h"
#include "px4_msgs/msg/detail/rc_parameter_map__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__RcParameterMap_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__RcParameterMap__init(message_memory);
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__RcParameterMap_fini_function(void * message_memory)
{
  px4_msgs__msg__RcParameterMap__fini(message_memory);
}

size_t px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__valid(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__valid(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__valid(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__valid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__valid(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__valid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__valid(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__param_index(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__param_index(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__param_index(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__param_index(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__param_index(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__param_index(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__param_index(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__param_id(
  const void * untyped_member)
{
  (void)untyped_member;
  return 51;
}

const void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__param_id(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__param_id(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__param_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__param_id(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__param_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__param_id(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__scale(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__scale(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__scale(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__scale(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__scale(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__scale(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__scale(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__value0(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__value0(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__value0(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__value0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__value0(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__value0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__value0(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__value_min(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__value_min(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__value_min(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__value_min(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__value_min(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__value_min(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__value_min(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__value_max(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__value_max(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__value_max(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__value_max(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__value_max(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__value_max(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__value_max(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__RcParameterMap_message_member_array[8] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcParameterMap, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcParameterMap, valid),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__valid,  // size() function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__valid,  // get_const(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__valid,  // get(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__valid,  // fetch(index, &value) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__valid,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "param_index",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcParameterMap, param_index),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__param_index,  // size() function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__param_index,  // get_const(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__param_index,  // get(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__param_index,  // fetch(index, &value) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__param_index,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "param_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    51,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcParameterMap, param_id),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__param_id,  // size() function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__param_id,  // get_const(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__param_id,  // get(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__param_id,  // fetch(index, &value) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__param_id,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "scale",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcParameterMap, scale),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__scale,  // size() function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__scale,  // get_const(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__scale,  // get(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__scale,  // fetch(index, &value) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__scale,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcParameterMap, value0),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__value0,  // size() function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__value0,  // get_const(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__value0,  // get(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__value0,  // fetch(index, &value) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__value0,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value_min",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcParameterMap, value_min),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__value_min,  // size() function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__value_min,  // get_const(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__value_min,  // get(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__value_min,  // fetch(index, &value) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__value_min,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "value_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__RcParameterMap, value_max),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__size_function__RcParameterMap__value_max,  // size() function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_const_function__RcParameterMap__value_max,  // get_const(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__get_function__RcParameterMap__value_max,  // get(index) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__fetch_function__RcParameterMap__value_max,  // fetch(index, &value) function pointer
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__assign_function__RcParameterMap__value_max,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__RcParameterMap_message_members = {
  "px4_msgs__msg",  // message namespace
  "RcParameterMap",  // message name
  8,  // number of fields
  sizeof(px4_msgs__msg__RcParameterMap),
  px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__RcParameterMap_message_member_array,  // message members
  px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__RcParameterMap_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__RcParameterMap_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__RcParameterMap_message_type_support_handle = {
  0,
  &px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__RcParameterMap_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, RcParameterMap)() {
  if (!px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__RcParameterMap_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__RcParameterMap_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__RcParameterMap__rosidl_typesupport_introspection_c__RcParameterMap_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
