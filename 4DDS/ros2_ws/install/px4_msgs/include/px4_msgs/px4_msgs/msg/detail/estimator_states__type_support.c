// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/EstimatorStates.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/estimator_states__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/estimator_states__functions.h"
#include "px4_msgs/msg/detail/estimator_states__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__EstimatorStates_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__EstimatorStates__init(message_memory);
}

void px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__EstimatorStates_fini_function(void * message_memory)
{
  px4_msgs__msg__EstimatorStates__fini(message_memory);
}

size_t px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__size_function__EstimatorStates__states(
  const void * untyped_member)
{
  (void)untyped_member;
  return 24;
}

const void * px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__get_const_function__EstimatorStates__states(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__get_function__EstimatorStates__states(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__fetch_function__EstimatorStates__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__get_const_function__EstimatorStates__states(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__assign_function__EstimatorStates__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__get_function__EstimatorStates__states(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__size_function__EstimatorStates__covariances(
  const void * untyped_member)
{
  (void)untyped_member;
  return 23;
}

const void * px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__get_const_function__EstimatorStates__covariances(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__get_function__EstimatorStates__covariances(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__fetch_function__EstimatorStates__covariances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__get_const_function__EstimatorStates__covariances(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__assign_function__EstimatorStates__covariances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__get_function__EstimatorStates__covariances(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__EstimatorStates_message_member_array[5] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorStates, timestamp),  // bytes offset in struct
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
    offsetof(px4_msgs__msg__EstimatorStates, timestamp_sample),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    24,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorStates, states),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__size_function__EstimatorStates__states,  // size() function pointer
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__get_const_function__EstimatorStates__states,  // get_const(index) function pointer
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__get_function__EstimatorStates__states,  // get(index) function pointer
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__fetch_function__EstimatorStates__states,  // fetch(index, &value) function pointer
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__assign_function__EstimatorStates__states,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "n_states",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorStates, n_states),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "covariances",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    23,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__EstimatorStates, covariances),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__size_function__EstimatorStates__covariances,  // size() function pointer
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__get_const_function__EstimatorStates__covariances,  // get_const(index) function pointer
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__get_function__EstimatorStates__covariances,  // get(index) function pointer
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__fetch_function__EstimatorStates__covariances,  // fetch(index, &value) function pointer
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__assign_function__EstimatorStates__covariances,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__EstimatorStates_message_members = {
  "px4_msgs__msg",  // message namespace
  "EstimatorStates",  // message name
  5,  // number of fields
  sizeof(px4_msgs__msg__EstimatorStates),
  px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__EstimatorStates_message_member_array,  // message members
  px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__EstimatorStates_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__EstimatorStates_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__EstimatorStates_message_type_support_handle = {
  0,
  &px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__EstimatorStates_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, EstimatorStates)() {
  if (!px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__EstimatorStates_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__EstimatorStates_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__EstimatorStates__rosidl_typesupport_introspection_c__EstimatorStates_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
