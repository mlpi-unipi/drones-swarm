// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/Px4ioStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/px4io_status__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/px4io_status__functions.h"
#include "px4_msgs/msg/detail/px4io_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__Px4ioStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__Px4ioStatus__init(message_memory);
}

void px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__Px4ioStatus_fini_function(void * message_memory)
{
  px4_msgs__msg__Px4ioStatus__fini(message_memory);
}

size_t px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__size_function__Px4ioStatus__pwm(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__pwm(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__pwm(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__fetch_function__Px4ioStatus__pwm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__pwm(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__assign_function__Px4ioStatus__pwm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__pwm(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__size_function__Px4ioStatus__pwm_disarmed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__pwm_disarmed(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__pwm_disarmed(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__fetch_function__Px4ioStatus__pwm_disarmed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__pwm_disarmed(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__assign_function__Px4ioStatus__pwm_disarmed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__pwm_disarmed(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__size_function__Px4ioStatus__pwm_failsafe(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__pwm_failsafe(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__pwm_failsafe(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__fetch_function__Px4ioStatus__pwm_failsafe(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__pwm_failsafe(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__assign_function__Px4ioStatus__pwm_failsafe(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__pwm_failsafe(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__size_function__Px4ioStatus__pwm_rate_hz(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__pwm_rate_hz(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__pwm_rate_hz(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__fetch_function__Px4ioStatus__pwm_rate_hz(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__pwm_rate_hz(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__assign_function__Px4ioStatus__pwm_rate_hz(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__pwm_rate_hz(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__size_function__Px4ioStatus__raw_inputs(
  const void * untyped_member)
{
  (void)untyped_member;
  return 18;
}

const void * px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__raw_inputs(
  const void * untyped_member, size_t index)
{
  const uint16_t * member =
    (const uint16_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__raw_inputs(
  void * untyped_member, size_t index)
{
  uint16_t * member =
    (uint16_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__fetch_function__Px4ioStatus__raw_inputs(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint16_t * item =
    ((const uint16_t *)
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__raw_inputs(untyped_member, index));
  uint16_t * value =
    (uint16_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__assign_function__Px4ioStatus__raw_inputs(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint16_t * item =
    ((uint16_t *)
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__raw_inputs(untyped_member, index));
  const uint16_t * value =
    (const uint16_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__Px4ioStatus_message_member_array[32] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "free_memory_bytes",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, free_memory_bytes),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "voltage_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, voltage_v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "rssi_v",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, rssi_v),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_arm_sync",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_arm_sync),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_failsafe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_failsafe),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_fmu_initialized",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_fmu_initialized),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_fmu_ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_fmu_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_init_ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_init_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_outputs_armed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_outputs_armed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_raw_pwm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_raw_pwm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_rc_ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_rc_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_rc_dsm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_rc_dsm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_rc_ppm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_rc_ppm),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_rc_sbus",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_rc_sbus),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_rc_st24",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_rc_st24),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_rc_sumd",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_rc_sumd),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "status_safety_button_event",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, status_safety_button_event),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alarm_pwm_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, alarm_pwm_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "alarm_rc_lost",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, alarm_rc_lost),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arming_failsafe_custom",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, arming_failsafe_custom),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arming_fmu_armed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, arming_fmu_armed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arming_fmu_prearmed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, arming_fmu_prearmed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arming_force_failsafe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, arming_force_failsafe),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arming_io_arm_ok",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, arming_io_arm_ok),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arming_lockdown",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, arming_lockdown),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "arming_termination_failsafe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, arming_termination_failsafe),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, pwm),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__size_function__Px4ioStatus__pwm,  // size() function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__pwm,  // get_const(index) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__pwm,  // get(index) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__fetch_function__Px4ioStatus__pwm,  // fetch(index, &value) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__assign_function__Px4ioStatus__pwm,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm_disarmed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, pwm_disarmed),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__size_function__Px4ioStatus__pwm_disarmed,  // size() function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__pwm_disarmed,  // get_const(index) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__pwm_disarmed,  // get(index) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__fetch_function__Px4ioStatus__pwm_disarmed,  // fetch(index, &value) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__assign_function__Px4ioStatus__pwm_disarmed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm_failsafe",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, pwm_failsafe),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__size_function__Px4ioStatus__pwm_failsafe,  // size() function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__pwm_failsafe,  // get_const(index) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__pwm_failsafe,  // get(index) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__fetch_function__Px4ioStatus__pwm_failsafe,  // fetch(index, &value) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__assign_function__Px4ioStatus__pwm_failsafe,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "pwm_rate_hz",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, pwm_rate_hz),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__size_function__Px4ioStatus__pwm_rate_hz,  // size() function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__pwm_rate_hz,  // get_const(index) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__pwm_rate_hz,  // get(index) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__fetch_function__Px4ioStatus__pwm_rate_hz,  // fetch(index, &value) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__assign_function__Px4ioStatus__pwm_rate_hz,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "raw_inputs",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    18,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__Px4ioStatus, raw_inputs),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__size_function__Px4ioStatus__raw_inputs,  // size() function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_const_function__Px4ioStatus__raw_inputs,  // get_const(index) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__get_function__Px4ioStatus__raw_inputs,  // get(index) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__fetch_function__Px4ioStatus__raw_inputs,  // fetch(index, &value) function pointer
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__assign_function__Px4ioStatus__raw_inputs,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__Px4ioStatus_message_members = {
  "px4_msgs__msg",  // message namespace
  "Px4ioStatus",  // message name
  32,  // number of fields
  sizeof(px4_msgs__msg__Px4ioStatus),
  px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__Px4ioStatus_message_member_array,  // message members
  px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__Px4ioStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__Px4ioStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__Px4ioStatus_message_type_support_handle = {
  0,
  &px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__Px4ioStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, Px4ioStatus)() {
  if (!px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__Px4ioStatus_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__Px4ioStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__Px4ioStatus__rosidl_typesupport_introspection_c__Px4ioStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
