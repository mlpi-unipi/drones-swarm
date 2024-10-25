// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/MagnetometerBiasEstimate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/magnetometer_bias_estimate__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/magnetometer_bias_estimate__functions.h"
#include "px4_msgs/msg/detail/magnetometer_bias_estimate__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__MagnetometerBiasEstimate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__MagnetometerBiasEstimate__init(message_memory);
}

void px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__MagnetometerBiasEstimate_fini_function(void * message_memory)
{
  px4_msgs__msg__MagnetometerBiasEstimate__fini(message_memory);
}

size_t px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__size_function__MagnetometerBiasEstimate__bias_x(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__bias_x(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__bias_x(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__fetch_function__MagnetometerBiasEstimate__bias_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__bias_x(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__assign_function__MagnetometerBiasEstimate__bias_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__bias_x(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__size_function__MagnetometerBiasEstimate__bias_y(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__bias_y(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__bias_y(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__fetch_function__MagnetometerBiasEstimate__bias_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__bias_y(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__assign_function__MagnetometerBiasEstimate__bias_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__bias_y(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__size_function__MagnetometerBiasEstimate__bias_z(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__bias_z(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__bias_z(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__fetch_function__MagnetometerBiasEstimate__bias_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__bias_z(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__assign_function__MagnetometerBiasEstimate__bias_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__bias_z(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__size_function__MagnetometerBiasEstimate__valid(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__valid(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__valid(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__fetch_function__MagnetometerBiasEstimate__valid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__valid(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__assign_function__MagnetometerBiasEstimate__valid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__valid(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__size_function__MagnetometerBiasEstimate__stable(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__stable(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__stable(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__fetch_function__MagnetometerBiasEstimate__stable(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__stable(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__assign_function__MagnetometerBiasEstimate__stable(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__stable(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__MagnetometerBiasEstimate_message_member_array[6] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagnetometerBiasEstimate, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bias_x",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagnetometerBiasEstimate, bias_x),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__size_function__MagnetometerBiasEstimate__bias_x,  // size() function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__bias_x,  // get_const(index) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__bias_x,  // get(index) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__fetch_function__MagnetometerBiasEstimate__bias_x,  // fetch(index, &value) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__assign_function__MagnetometerBiasEstimate__bias_x,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bias_y",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagnetometerBiasEstimate, bias_y),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__size_function__MagnetometerBiasEstimate__bias_y,  // size() function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__bias_y,  // get_const(index) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__bias_y,  // get(index) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__fetch_function__MagnetometerBiasEstimate__bias_y,  // fetch(index, &value) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__assign_function__MagnetometerBiasEstimate__bias_y,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bias_z",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagnetometerBiasEstimate, bias_z),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__size_function__MagnetometerBiasEstimate__bias_z,  // size() function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__bias_z,  // get_const(index) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__bias_z,  // get(index) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__fetch_function__MagnetometerBiasEstimate__bias_z,  // fetch(index, &value) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__assign_function__MagnetometerBiasEstimate__bias_z,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "valid",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagnetometerBiasEstimate, valid),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__size_function__MagnetometerBiasEstimate__valid,  // size() function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__valid,  // get_const(index) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__valid,  // get(index) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__fetch_function__MagnetometerBiasEstimate__valid,  // fetch(index, &value) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__assign_function__MagnetometerBiasEstimate__valid,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "stable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__MagnetometerBiasEstimate, stable),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__size_function__MagnetometerBiasEstimate__stable,  // size() function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_const_function__MagnetometerBiasEstimate__stable,  // get_const(index) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__get_function__MagnetometerBiasEstimate__stable,  // get(index) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__fetch_function__MagnetometerBiasEstimate__stable,  // fetch(index, &value) function pointer
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__assign_function__MagnetometerBiasEstimate__stable,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__MagnetometerBiasEstimate_message_members = {
  "px4_msgs__msg",  // message namespace
  "MagnetometerBiasEstimate",  // message name
  6,  // number of fields
  sizeof(px4_msgs__msg__MagnetometerBiasEstimate),
  px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__MagnetometerBiasEstimate_message_member_array,  // message members
  px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__MagnetometerBiasEstimate_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__MagnetometerBiasEstimate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__MagnetometerBiasEstimate_message_type_support_handle = {
  0,
  &px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__MagnetometerBiasEstimate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, MagnetometerBiasEstimate)() {
  if (!px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__MagnetometerBiasEstimate_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__MagnetometerBiasEstimate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__MagnetometerBiasEstimate__rosidl_typesupport_introspection_c__MagnetometerBiasEstimate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
