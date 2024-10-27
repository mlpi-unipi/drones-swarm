// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/SensorsStatusImu.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/sensors_status_imu__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/sensors_status_imu__functions.h"
#include "px4_msgs/msg/detail/sensors_status_imu__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__SensorsStatusImu_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__SensorsStatusImu__init(message_memory);
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__SensorsStatusImu_fini_function(void * message_memory)
{
  px4_msgs__msg__SensorsStatusImu__fini(message_memory);
}

size_t px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__accel_device_ids(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__accel_device_ids(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__accel_device_ids(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__accel_device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__accel_device_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__accel_device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__accel_device_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__accel_inconsistency_m_s_s(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__accel_inconsistency_m_s_s(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__accel_inconsistency_m_s_s(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__accel_inconsistency_m_s_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__accel_inconsistency_m_s_s(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__accel_inconsistency_m_s_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__accel_inconsistency_m_s_s(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__accel_healthy(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__accel_healthy(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__accel_healthy(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__accel_healthy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__accel_healthy(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__accel_healthy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__accel_healthy(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__accel_priority(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__accel_priority(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__accel_priority(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__accel_priority(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__accel_priority(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__accel_priority(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__accel_priority(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__gyro_device_ids(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__gyro_device_ids(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__gyro_device_ids(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__gyro_device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__gyro_device_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__gyro_device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__gyro_device_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__gyro_inconsistency_rad_s(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__gyro_inconsistency_rad_s(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__gyro_inconsistency_rad_s(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__gyro_inconsistency_rad_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__gyro_inconsistency_rad_s(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__gyro_inconsistency_rad_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__gyro_inconsistency_rad_s(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__gyro_healthy(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__gyro_healthy(
  const void * untyped_member, size_t index)
{
  const bool * member =
    (const bool *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__gyro_healthy(
  void * untyped_member, size_t index)
{
  bool * member =
    (bool *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__gyro_healthy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const bool * item =
    ((const bool *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__gyro_healthy(untyped_member, index));
  bool * value =
    (bool *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__gyro_healthy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  bool * item =
    ((bool *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__gyro_healthy(untyped_member, index));
  const bool * value =
    (const bool *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__gyro_priority(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__gyro_priority(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__gyro_priority(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__gyro_priority(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__gyro_priority(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__gyro_priority(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__gyro_priority(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__SensorsStatusImu_message_member_array[11] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatusImu, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_device_id_primary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatusImu, accel_device_id_primary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_device_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatusImu, accel_device_ids),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__accel_device_ids,  // size() function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__accel_device_ids,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__accel_device_ids,  // get(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__accel_device_ids,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__accel_device_ids,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_inconsistency_m_s_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatusImu, accel_inconsistency_m_s_s),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__accel_inconsistency_m_s_s,  // size() function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__accel_inconsistency_m_s_s,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__accel_inconsistency_m_s_s,  // get(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__accel_inconsistency_m_s_s,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__accel_inconsistency_m_s_s,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_healthy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatusImu, accel_healthy),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__accel_healthy,  // size() function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__accel_healthy,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__accel_healthy,  // get(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__accel_healthy,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__accel_healthy,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatusImu, accel_priority),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__accel_priority,  // size() function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__accel_priority,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__accel_priority,  // get(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__accel_priority,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__accel_priority,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_device_id_primary",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatusImu, gyro_device_id_primary),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_device_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatusImu, gyro_device_ids),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__gyro_device_ids,  // size() function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__gyro_device_ids,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__gyro_device_ids,  // get(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__gyro_device_ids,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__gyro_device_ids,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_inconsistency_rad_s",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatusImu, gyro_inconsistency_rad_s),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__gyro_inconsistency_rad_s,  // size() function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__gyro_inconsistency_rad_s,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__gyro_inconsistency_rad_s,  // get(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__gyro_inconsistency_rad_s,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__gyro_inconsistency_rad_s,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_healthy",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatusImu, gyro_healthy),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__gyro_healthy,  // size() function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__gyro_healthy,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__gyro_healthy,  // get(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__gyro_healthy,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__gyro_healthy,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_priority",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorsStatusImu, gyro_priority),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__size_function__SensorsStatusImu__gyro_priority,  // size() function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_const_function__SensorsStatusImu__gyro_priority,  // get_const(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__get_function__SensorsStatusImu__gyro_priority,  // get(index) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__fetch_function__SensorsStatusImu__gyro_priority,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__assign_function__SensorsStatusImu__gyro_priority,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__SensorsStatusImu_message_members = {
  "px4_msgs__msg",  // message namespace
  "SensorsStatusImu",  // message name
  11,  // number of fields
  sizeof(px4_msgs__msg__SensorsStatusImu),
  px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__SensorsStatusImu_message_member_array,  // message members
  px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__SensorsStatusImu_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__SensorsStatusImu_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__SensorsStatusImu_message_type_support_handle = {
  0,
  &px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__SensorsStatusImu_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, SensorsStatusImu)() {
  if (!px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__SensorsStatusImu_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__SensorsStatusImu_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__SensorsStatusImu__rosidl_typesupport_introspection_c__SensorsStatusImu_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
