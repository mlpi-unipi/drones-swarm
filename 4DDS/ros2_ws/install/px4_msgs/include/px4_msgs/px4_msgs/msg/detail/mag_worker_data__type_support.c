// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/MagWorkerData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/mag_worker_data__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/mag_worker_data__functions.h"
#include "px4_msgs/msg/detail/mag_worker_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__MagWorkerData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__MagWorkerData__init(message_memory);
}

void px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__MagWorkerData_fini_function(void * message_memory)
{
  px4_msgs__msg__MagWorkerData__fini(message_memory);
}

size_t px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__size_function__MagWorkerData__calibration_counter_total(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__calibration_counter_total(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__calibration_counter_total(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__fetch_function__MagWorkerData__calibration_counter_total(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__calibration_counter_total(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__assign_function__MagWorkerData__calibration_counter_total(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__calibration_counter_total(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__size_function__MagWorkerData__side_data_collected(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__side_data_collected(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__side_data_collected(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__fetch_function__MagWorkerData__side_data_collected(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__side_data_collected(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__assign_function__MagWorkerData__side_data_collected(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__side_data_collected(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__size_function__MagWorkerData__x(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__x(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__x(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__fetch_function__MagWorkerData__x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__assign_function__MagWorkerData__x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__size_function__MagWorkerData__y(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__y(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__y(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__fetch_function__MagWorkerData__y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__assign_function__MagWorkerData__y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__size_function__MagWorkerData__z(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__z(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__z(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__fetch_function__MagWorkerData__z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__z(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__assign_function__MagWorkerData__z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__z(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__MagWorkerData_message_member_array[10] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagWorkerData, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagWorkerData, timestamp_sample),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "done_count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagWorkerData, done_count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration_points_perside",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagWorkerData, calibration_points_perside),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration_interval_perside_us",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagWorkerData, calibration_interval_perside_us),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "calibration_counter_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagWorkerData, calibration_counter_total),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__size_function__MagWorkerData__calibration_counter_total,  // size() function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__calibration_counter_total,  // get_const(index) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__calibration_counter_total,  // get(index) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__fetch_function__MagWorkerData__calibration_counter_total,  // fetch(index, &value) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__assign_function__MagWorkerData__calibration_counter_total,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "side_data_collected",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagWorkerData, side_data_collected),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__size_function__MagWorkerData__side_data_collected,  // size() function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__side_data_collected,  // get_const(index) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__side_data_collected,  // get(index) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__fetch_function__MagWorkerData__side_data_collected,  // fetch(index, &value) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__assign_function__MagWorkerData__side_data_collected,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagWorkerData, x),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__size_function__MagWorkerData__x,  // size() function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__x,  // get_const(index) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__x,  // get(index) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__fetch_function__MagWorkerData__x,  // fetch(index, &value) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__assign_function__MagWorkerData__x,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagWorkerData, y),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__size_function__MagWorkerData__y,  // size() function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__y,  // get_const(index) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__y,  // get(index) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__fetch_function__MagWorkerData__y,  // fetch(index, &value) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__assign_function__MagWorkerData__y,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagWorkerData, z),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__size_function__MagWorkerData__z,  // size() function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_const_function__MagWorkerData__z,  // get_const(index) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__get_function__MagWorkerData__z,  // get(index) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__fetch_function__MagWorkerData__z,  // fetch(index, &value) function pointer
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__assign_function__MagWorkerData__z,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__MagWorkerData_message_members = {
  "px4_msgs__msg",  // message namespace
  "MagWorkerData",  // message name
  10,  // number of fields
  sizeof(px4_msgs__msg__MagWorkerData),
  px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__MagWorkerData_message_member_array,  // message members
  px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__MagWorkerData_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__MagWorkerData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__MagWorkerData_message_type_support_handle = {
  0,
  &px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__MagWorkerData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, MagWorkerData)() {
  if (!px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__MagWorkerData_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__MagWorkerData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__MagWorkerData__rosidl_typesupport_introspection_c__MagWorkerData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
