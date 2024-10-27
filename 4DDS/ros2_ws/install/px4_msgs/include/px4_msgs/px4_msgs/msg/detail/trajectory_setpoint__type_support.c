// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/TrajectorySetpoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/trajectory_setpoint__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/trajectory_setpoint__functions.h"
#include "px4_msgs/msg/detail/trajectory_setpoint__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__TrajectorySetpoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__TrajectorySetpoint__init(message_memory);
}

void px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__TrajectorySetpoint_fini_function(void * message_memory)
{
  px4_msgs__msg__TrajectorySetpoint__fini(message_memory);
}

size_t px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__size_function__TrajectorySetpoint__position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_const_function__TrajectorySetpoint__position(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_function__TrajectorySetpoint__position(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__fetch_function__TrajectorySetpoint__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_const_function__TrajectorySetpoint__position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__assign_function__TrajectorySetpoint__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_function__TrajectorySetpoint__position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__size_function__TrajectorySetpoint__velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_const_function__TrajectorySetpoint__velocity(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_function__TrajectorySetpoint__velocity(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__fetch_function__TrajectorySetpoint__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_const_function__TrajectorySetpoint__velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__assign_function__TrajectorySetpoint__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_function__TrajectorySetpoint__velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__size_function__TrajectorySetpoint__acceleration(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_const_function__TrajectorySetpoint__acceleration(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_function__TrajectorySetpoint__acceleration(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__fetch_function__TrajectorySetpoint__acceleration(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_const_function__TrajectorySetpoint__acceleration(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__assign_function__TrajectorySetpoint__acceleration(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_function__TrajectorySetpoint__acceleration(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__size_function__TrajectorySetpoint__jerk(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_const_function__TrajectorySetpoint__jerk(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_function__TrajectorySetpoint__jerk(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__fetch_function__TrajectorySetpoint__jerk(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_const_function__TrajectorySetpoint__jerk(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__assign_function__TrajectorySetpoint__jerk(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_function__TrajectorySetpoint__jerk(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__TrajectorySetpoint_message_member_array[7] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TrajectorySetpoint, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TrajectorySetpoint, position),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__size_function__TrajectorySetpoint__position,  // size() function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_const_function__TrajectorySetpoint__position,  // get_const(index) function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_function__TrajectorySetpoint__position,  // get(index) function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__fetch_function__TrajectorySetpoint__position,  // fetch(index, &value) function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__assign_function__TrajectorySetpoint__position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TrajectorySetpoint, velocity),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__size_function__TrajectorySetpoint__velocity,  // size() function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_const_function__TrajectorySetpoint__velocity,  // get_const(index) function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_function__TrajectorySetpoint__velocity,  // get(index) function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__fetch_function__TrajectorySetpoint__velocity,  // fetch(index, &value) function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__assign_function__TrajectorySetpoint__velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "acceleration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TrajectorySetpoint, acceleration),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__size_function__TrajectorySetpoint__acceleration,  // size() function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_const_function__TrajectorySetpoint__acceleration,  // get_const(index) function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_function__TrajectorySetpoint__acceleration,  // get(index) function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__fetch_function__TrajectorySetpoint__acceleration,  // fetch(index, &value) function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__assign_function__TrajectorySetpoint__acceleration,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "jerk",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TrajectorySetpoint, jerk),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__size_function__TrajectorySetpoint__jerk,  // size() function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_const_function__TrajectorySetpoint__jerk,  // get_const(index) function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__get_function__TrajectorySetpoint__jerk,  // get(index) function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__fetch_function__TrajectorySetpoint__jerk,  // fetch(index, &value) function pointer
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__assign_function__TrajectorySetpoint__jerk,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yaw",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TrajectorySetpoint, yaw),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "yawspeed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__TrajectorySetpoint, yawspeed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__TrajectorySetpoint_message_members = {
  "px4_msgs__msg",  // message namespace
  "TrajectorySetpoint",  // message name
  7,  // number of fields
  sizeof(px4_msgs__msg__TrajectorySetpoint),
  px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__TrajectorySetpoint_message_member_array,  // message members
  px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__TrajectorySetpoint_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__TrajectorySetpoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__TrajectorySetpoint_message_type_support_handle = {
  0,
  &px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__TrajectorySetpoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, TrajectorySetpoint)() {
  if (!px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__TrajectorySetpoint_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__TrajectorySetpoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__TrajectorySetpoint__rosidl_typesupport_introspection_c__TrajectorySetpoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
