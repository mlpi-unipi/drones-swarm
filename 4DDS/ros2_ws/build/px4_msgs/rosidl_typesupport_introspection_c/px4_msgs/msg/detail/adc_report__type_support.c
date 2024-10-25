// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/AdcReport.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/adc_report__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/adc_report__functions.h"
#include "px4_msgs/msg/detail/adc_report__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__AdcReport_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__AdcReport__init(message_memory);
}

void px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__AdcReport_fini_function(void * message_memory)
{
  px4_msgs__msg__AdcReport__fini(message_memory);
}

size_t px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__size_function__AdcReport__channel_id(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__get_const_function__AdcReport__channel_id(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__get_function__AdcReport__channel_id(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__fetch_function__AdcReport__channel_id(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__get_const_function__AdcReport__channel_id(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__assign_function__AdcReport__channel_id(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__get_function__AdcReport__channel_id(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__size_function__AdcReport__raw_data(
  const void * untyped_member)
{
  (void)untyped_member;
  return 12;
}

const void * px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__get_const_function__AdcReport__raw_data(
  const void * untyped_member, size_t index)
{
  const int32_t * member =
    (const int32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__get_function__AdcReport__raw_data(
  void * untyped_member, size_t index)
{
  int32_t * member =
    (int32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__fetch_function__AdcReport__raw_data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__get_const_function__AdcReport__raw_data(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__assign_function__AdcReport__raw_data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__get_function__AdcReport__raw_data(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__AdcReport_message_member_array[6] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__AdcReport, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "device_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__AdcReport, device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "channel_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__AdcReport, channel_id),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__size_function__AdcReport__channel_id,  // size() function pointer
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__get_const_function__AdcReport__channel_id,  // get_const(index) function pointer
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__get_function__AdcReport__channel_id,  // get(index) function pointer
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__fetch_function__AdcReport__channel_id,  // fetch(index, &value) function pointer
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__assign_function__AdcReport__channel_id,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw_data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    12,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__AdcReport, raw_data),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__size_function__AdcReport__raw_data,  // size() function pointer
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__get_const_function__AdcReport__raw_data,  // get_const(index) function pointer
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__get_function__AdcReport__raw_data,  // get(index) function pointer
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__fetch_function__AdcReport__raw_data,  // fetch(index, &value) function pointer
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__assign_function__AdcReport__raw_data,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "resolution",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__AdcReport, resolution),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "v_ref",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__AdcReport, v_ref),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__AdcReport_message_members = {
  "px4_msgs__msg",  // message namespace
  "AdcReport",  // message name
  6,  // number of fields
  sizeof(px4_msgs__msg__AdcReport),
  px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__AdcReport_message_member_array,  // message members
  px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__AdcReport_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__AdcReport_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__AdcReport_message_type_support_handle = {
  0,
  &px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__AdcReport_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, AdcReport)() {
  if (!px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__AdcReport_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__AdcReport_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__AdcReport__rosidl_typesupport_introspection_c__AdcReport_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
