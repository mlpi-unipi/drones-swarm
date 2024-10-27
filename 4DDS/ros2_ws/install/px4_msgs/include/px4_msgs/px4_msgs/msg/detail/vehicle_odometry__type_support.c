// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/VehicleOdometry.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/vehicle_odometry__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/vehicle_odometry__functions.h"
#include "px4_msgs/msg/detail/vehicle_odometry__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__VehicleOdometry__init(message_memory);
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_fini_function(void * message_memory)
{
  px4_msgs__msg__VehicleOdometry__fini(message_memory);
}

size_t px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__position(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__position(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__position(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__position(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__position(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__q(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__q(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__q(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__q(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__q(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__q(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__q(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__velocity(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__velocity(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__angular_velocity(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__angular_velocity(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__angular_velocity(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__angular_velocity(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__angular_velocity(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__angular_velocity(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__angular_velocity(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__position_variance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__position_variance(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__position_variance(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__position_variance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__position_variance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__position_variance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__position_variance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__orientation_variance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__orientation_variance(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__orientation_variance(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__orientation_variance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__orientation_variance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__orientation_variance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__orientation_variance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__velocity_variance(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__velocity_variance(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__velocity_variance(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__velocity_variance(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__velocity_variance(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__velocity_variance(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__velocity_variance(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_member_array[13] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleOdometry, timestamp),  // bytes offset in struct
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
    offsetof(px4_msgs__msg__VehicleOdometry, timestamp_sample),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pose_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleOdometry, pose_frame),  // bytes offset in struct
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
    offsetof(px4_msgs__msg__VehicleOdometry, position),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__position,  // size() function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__position,  // get_const(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__position,  // get(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__position,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__position,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "q",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleOdometry, q),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__q,  // size() function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__q,  // get_const(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__q,  // get(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__q,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__q,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_frame",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleOdometry, velocity_frame),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
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
    offsetof(px4_msgs__msg__VehicleOdometry, velocity),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__velocity,  // size() function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__velocity,  // get_const(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__velocity,  // get(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__velocity,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "angular_velocity",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleOdometry, angular_velocity),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__angular_velocity,  // size() function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__angular_velocity,  // get_const(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__angular_velocity,  // get(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__angular_velocity,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__angular_velocity,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "position_variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleOdometry, position_variance),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__position_variance,  // size() function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__position_variance,  // get_const(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__position_variance,  // get(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__position_variance,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__position_variance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "orientation_variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleOdometry, orientation_variance),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__orientation_variance,  // size() function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__orientation_variance,  // get_const(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__orientation_variance,  // get(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__orientation_variance,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__orientation_variance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "velocity_variance",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleOdometry, velocity_variance),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__size_function__VehicleOdometry__velocity_variance,  // size() function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_const_function__VehicleOdometry__velocity_variance,  // get_const(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__get_function__VehicleOdometry__velocity_variance,  // get(index) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__fetch_function__VehicleOdometry__velocity_variance,  // fetch(index, &value) function pointer
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__assign_function__VehicleOdometry__velocity_variance,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "reset_counter",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleOdometry, reset_counter),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quality",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__VehicleOdometry, quality),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_members = {
  "px4_msgs__msg",  // message namespace
  "VehicleOdometry",  // message name
  13,  // number of fields
  sizeof(px4_msgs__msg__VehicleOdometry),
  px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_member_array,  // message members
  px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_type_support_handle = {
  0,
  &px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, VehicleOdometry)() {
  if (!px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__VehicleOdometry__rosidl_typesupport_introspection_c__VehicleOdometry_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
