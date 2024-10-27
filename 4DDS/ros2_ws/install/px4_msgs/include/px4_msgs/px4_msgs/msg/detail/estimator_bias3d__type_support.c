// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/EstimatorBias3d.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/estimator_bias3d__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/estimator_bias3d__functions.h"
#include "px4_msgs/msg/detail/estimator_bias3d__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__EstimatorBias3d_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__EstimatorBias3d__init(message_memory);
}

void px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__EstimatorBias3d_fini_function(void * message_memory)
{
  px4_msgs__msg__EstimatorBias3d__fini(message_memory);
}

size_t px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__size_function__EstimatorBias3d__bias(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__bias(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__bias(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__fetch_function__EstimatorBias3d__bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__bias(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__assign_function__EstimatorBias3d__bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__bias(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__size_function__EstimatorBias3d__bias_var(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__bias_var(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__bias_var(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__fetch_function__EstimatorBias3d__bias_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__bias_var(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__assign_function__EstimatorBias3d__bias_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__bias_var(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__size_function__EstimatorBias3d__innov(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__innov(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__innov(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__fetch_function__EstimatorBias3d__innov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__innov(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__assign_function__EstimatorBias3d__innov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__innov(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__size_function__EstimatorBias3d__innov_var(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__innov_var(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__innov_var(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__fetch_function__EstimatorBias3d__innov_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__innov_var(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__assign_function__EstimatorBias3d__innov_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__innov_var(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__size_function__EstimatorBias3d__innov_test_ratio(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__innov_test_ratio(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__innov_test_ratio(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__fetch_function__EstimatorBias3d__innov_test_ratio(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__innov_test_ratio(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__assign_function__EstimatorBias3d__innov_test_ratio(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__innov_test_ratio(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__EstimatorBias3d_message_member_array[8] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorBias3d, timestamp),  // bytes offset in struct
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
    offsetof(px4_msgs__msg__EstimatorBias3d, timestamp_sample),  // bytes offset in struct
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
    offsetof(px4_msgs__msg__EstimatorBias3d, device_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bias",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorBias3d, bias),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__size_function__EstimatorBias3d__bias,  // size() function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__bias,  // get_const(index) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__bias,  // get(index) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__fetch_function__EstimatorBias3d__bias,  // fetch(index, &value) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__assign_function__EstimatorBias3d__bias,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "bias_var",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorBias3d, bias_var),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__size_function__EstimatorBias3d__bias_var,  // size() function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__bias_var,  // get_const(index) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__bias_var,  // get(index) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__fetch_function__EstimatorBias3d__bias_var,  // fetch(index, &value) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__assign_function__EstimatorBias3d__bias_var,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "innov",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorBias3d, innov),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__size_function__EstimatorBias3d__innov,  // size() function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__innov,  // get_const(index) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__innov,  // get(index) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__fetch_function__EstimatorBias3d__innov,  // fetch(index, &value) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__assign_function__EstimatorBias3d__innov,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "innov_var",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorBias3d, innov_var),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__size_function__EstimatorBias3d__innov_var,  // size() function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__innov_var,  // get_const(index) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__innov_var,  // get(index) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__fetch_function__EstimatorBias3d__innov_var,  // fetch(index, &value) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__assign_function__EstimatorBias3d__innov_var,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "innov_test_ratio",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorBias3d, innov_test_ratio),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__size_function__EstimatorBias3d__innov_test_ratio,  // size() function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_const_function__EstimatorBias3d__innov_test_ratio,  // get_const(index) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__get_function__EstimatorBias3d__innov_test_ratio,  // get(index) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__fetch_function__EstimatorBias3d__innov_test_ratio,  // fetch(index, &value) function pointer
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__assign_function__EstimatorBias3d__innov_test_ratio,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__EstimatorBias3d_message_members = {
  "px4_msgs__msg",  // message namespace
  "EstimatorBias3d",  // message name
  8,  // number of fields
  sizeof(px4_msgs__msg__EstimatorBias3d),
  px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__EstimatorBias3d_message_member_array,  // message members
  px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__EstimatorBias3d_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__EstimatorBias3d_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__EstimatorBias3d_message_type_support_handle = {
  0,
  &px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__EstimatorBias3d_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, EstimatorBias3d)() {
  if (!px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__EstimatorBias3d_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__EstimatorBias3d_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__EstimatorBias3d__rosidl_typesupport_introspection_c__EstimatorBias3d_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
