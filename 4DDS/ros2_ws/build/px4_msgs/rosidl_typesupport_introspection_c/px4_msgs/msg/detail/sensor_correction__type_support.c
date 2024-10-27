// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/SensorCorrection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/sensor_correction__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/sensor_correction__functions.h"
#include "px4_msgs/msg/detail/sensor_correction__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__SensorCorrection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__SensorCorrection__init(message_memory);
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__SensorCorrection_fini_function(void * message_memory)
{
  px4_msgs__msg__SensorCorrection__fini(message_memory);
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__accel_device_ids(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_device_ids(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_device_ids(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__accel_device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_device_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__accel_device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_device_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__accel_temperature(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_temperature(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_temperature(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__accel_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_temperature(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__accel_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_temperature(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__accel_offset_0(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_offset_0(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_offset_0(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__accel_offset_0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_offset_0(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__accel_offset_0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_offset_0(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__accel_offset_1(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_offset_1(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_offset_1(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__accel_offset_1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_offset_1(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__accel_offset_1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_offset_1(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__accel_offset_2(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_offset_2(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_offset_2(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__accel_offset_2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_offset_2(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__accel_offset_2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_offset_2(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__accel_offset_3(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_offset_3(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_offset_3(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__accel_offset_3(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_offset_3(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__accel_offset_3(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_offset_3(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__gyro_device_ids(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_device_ids(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_device_ids(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__gyro_device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_device_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__gyro_device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_device_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__gyro_temperature(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_temperature(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_temperature(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__gyro_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_temperature(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__gyro_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_temperature(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__gyro_offset_0(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_offset_0(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_offset_0(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__gyro_offset_0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_offset_0(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__gyro_offset_0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_offset_0(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__gyro_offset_1(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_offset_1(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_offset_1(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__gyro_offset_1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_offset_1(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__gyro_offset_1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_offset_1(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__gyro_offset_2(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_offset_2(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_offset_2(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__gyro_offset_2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_offset_2(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__gyro_offset_2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_offset_2(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__gyro_offset_3(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_offset_3(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_offset_3(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__gyro_offset_3(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_offset_3(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__gyro_offset_3(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_offset_3(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__mag_device_ids(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_device_ids(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_device_ids(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__mag_device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_device_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__mag_device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_device_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__mag_temperature(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_temperature(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_temperature(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__mag_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_temperature(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__mag_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_temperature(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__mag_offset_0(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_offset_0(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_offset_0(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__mag_offset_0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_offset_0(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__mag_offset_0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_offset_0(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__mag_offset_1(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_offset_1(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_offset_1(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__mag_offset_1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_offset_1(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__mag_offset_1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_offset_1(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__mag_offset_2(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_offset_2(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_offset_2(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__mag_offset_2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_offset_2(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__mag_offset_2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_offset_2(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__mag_offset_3(
  const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_offset_3(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_offset_3(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__mag_offset_3(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_offset_3(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__mag_offset_3(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_offset_3(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__baro_device_ids(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__baro_device_ids(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__baro_device_ids(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__baro_device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__baro_device_ids(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__baro_device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__baro_device_ids(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__baro_temperature(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__baro_temperature(
  const void * untyped_member, size_t index)
{
  const float * member =
    (const float *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__baro_temperature(
  void * untyped_member, size_t index)
{
  float * member =
    (float *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__baro_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__baro_temperature(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__baro_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__baro_temperature(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__SensorCorrection_message_member_array[25] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, timestamp),  // bytes offset in struct
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
    offsetof(px4_msgs__msg__SensorCorrection, accel_device_ids),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__accel_device_ids,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_device_ids,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_device_ids,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__accel_device_ids,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__accel_device_ids,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, accel_temperature),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__accel_temperature,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_temperature,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_temperature,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__accel_temperature,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__accel_temperature,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_offset_0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, accel_offset_0),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__accel_offset_0,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_offset_0,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_offset_0,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__accel_offset_0,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__accel_offset_0,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_offset_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, accel_offset_1),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__accel_offset_1,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_offset_1,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_offset_1,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__accel_offset_1,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__accel_offset_1,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_offset_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, accel_offset_2),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__accel_offset_2,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_offset_2,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_offset_2,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__accel_offset_2,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__accel_offset_2,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "accel_offset_3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, accel_offset_3),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__accel_offset_3,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__accel_offset_3,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__accel_offset_3,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__accel_offset_3,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__accel_offset_3,  // assign(index, value) function pointer
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
    offsetof(px4_msgs__msg__SensorCorrection, gyro_device_ids),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__gyro_device_ids,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_device_ids,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_device_ids,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__gyro_device_ids,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__gyro_device_ids,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, gyro_temperature),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__gyro_temperature,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_temperature,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_temperature,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__gyro_temperature,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__gyro_temperature,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_offset_0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, gyro_offset_0),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__gyro_offset_0,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_offset_0,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_offset_0,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__gyro_offset_0,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__gyro_offset_0,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_offset_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, gyro_offset_1),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__gyro_offset_1,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_offset_1,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_offset_1,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__gyro_offset_1,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__gyro_offset_1,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_offset_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, gyro_offset_2),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__gyro_offset_2,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_offset_2,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_offset_2,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__gyro_offset_2,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__gyro_offset_2,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gyro_offset_3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, gyro_offset_3),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__gyro_offset_3,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__gyro_offset_3,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__gyro_offset_3,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__gyro_offset_3,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__gyro_offset_3,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag_device_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, mag_device_ids),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__mag_device_ids,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_device_ids,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_device_ids,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__mag_device_ids,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__mag_device_ids,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, mag_temperature),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__mag_temperature,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_temperature,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_temperature,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__mag_temperature,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__mag_temperature,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag_offset_0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, mag_offset_0),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__mag_offset_0,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_offset_0,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_offset_0,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__mag_offset_0,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__mag_offset_0,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag_offset_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, mag_offset_1),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__mag_offset_1,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_offset_1,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_offset_1,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__mag_offset_1,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__mag_offset_1,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag_offset_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, mag_offset_2),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__mag_offset_2,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_offset_2,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_offset_2,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__mag_offset_2,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__mag_offset_2,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mag_offset_3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, mag_offset_3),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__mag_offset_3,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__mag_offset_3,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__mag_offset_3,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__mag_offset_3,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__mag_offset_3,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "baro_device_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, baro_device_ids),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__baro_device_ids,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__baro_device_ids,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__baro_device_ids,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__baro_device_ids,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__baro_device_ids,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "baro_temperature",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, baro_temperature),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__size_function__SensorCorrection__baro_temperature,  // size() function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_const_function__SensorCorrection__baro_temperature,  // get_const(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__get_function__SensorCorrection__baro_temperature,  // get(index) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__fetch_function__SensorCorrection__baro_temperature,  // fetch(index, &value) function pointer
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__assign_function__SensorCorrection__baro_temperature,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "baro_offset_0",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, baro_offset_0),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "baro_offset_1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, baro_offset_1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "baro_offset_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, baro_offset_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "baro_offset_3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__SensorCorrection, baro_offset_3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__SensorCorrection_message_members = {
  "px4_msgs__msg",  // message namespace
  "SensorCorrection",  // message name
  25,  // number of fields
  sizeof(px4_msgs__msg__SensorCorrection),
  px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__SensorCorrection_message_member_array,  // message members
  px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__SensorCorrection_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__SensorCorrection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__SensorCorrection_message_type_support_handle = {
  0,
  &px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__SensorCorrection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, SensorCorrection)() {
  if (!px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__SensorCorrection_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__SensorCorrection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__SensorCorrection__rosidl_typesupport_introspection_c__SensorCorrection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
