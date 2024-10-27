// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from px4_msgs:msg/OnboardComputerStatus.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "px4_msgs/msg/detail/onboard_computer_status__rosidl_typesupport_introspection_c.h"
#include "px4_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "px4_msgs/msg/detail/onboard_computer_status__functions.h"
#include "px4_msgs/msg/detail/onboard_computer_status__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__OnboardComputerStatus_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  px4_msgs__msg__OnboardComputerStatus__init(message_memory);
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__OnboardComputerStatus_fini_function(void * message_memory)
{
  px4_msgs__msg__OnboardComputerStatus__fini(message_memory);
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__cpu_cores(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__cpu_cores(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__cpu_cores(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__cpu_cores(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__cpu_cores(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__cpu_cores(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__cpu_cores(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__cpu_combined(
  const void * untyped_member)
{
  (void)untyped_member;
  return 10;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__cpu_combined(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__cpu_combined(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__cpu_combined(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__cpu_combined(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__cpu_combined(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__cpu_combined(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__gpu_cores(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__gpu_cores(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__gpu_cores(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__gpu_cores(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__gpu_cores(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__gpu_cores(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__gpu_cores(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__gpu_combined(
  const void * untyped_member)
{
  (void)untyped_member;
  return 10;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__gpu_combined(
  const void * untyped_member, size_t index)
{
  const uint8_t * member =
    (const uint8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__gpu_combined(
  void * untyped_member, size_t index)
{
  uint8_t * member =
    (uint8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__gpu_combined(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__gpu_combined(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__gpu_combined(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__gpu_combined(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__temperature_core(
  const void * untyped_member)
{
  (void)untyped_member;
  return 8;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__temperature_core(
  const void * untyped_member, size_t index)
{
  const int8_t * member =
    (const int8_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__temperature_core(
  void * untyped_member, size_t index)
{
  int8_t * member =
    (int8_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__temperature_core(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int8_t * item =
    ((const int8_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__temperature_core(untyped_member, index));
  int8_t * value =
    (int8_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__temperature_core(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int8_t * item =
    ((int8_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__temperature_core(untyped_member, index));
  const int8_t * value =
    (const int8_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__fan_speed(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__fan_speed(
  const void * untyped_member, size_t index)
{
  const int16_t * member =
    (const int16_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__fan_speed(
  void * untyped_member, size_t index)
{
  int16_t * member =
    (int16_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__fan_speed(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int16_t * item =
    ((const int16_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__fan_speed(untyped_member, index));
  int16_t * value =
    (int16_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__fan_speed(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int16_t * item =
    ((int16_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__fan_speed(untyped_member, index));
  const int16_t * value =
    (const int16_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__storage_type(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__storage_type(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__storage_type(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__storage_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__storage_type(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__storage_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__storage_type(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__storage_usage(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__storage_usage(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__storage_usage(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__storage_usage(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__storage_usage(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__storage_usage(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__storage_usage(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__storage_total(
  const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__storage_total(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__storage_total(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__storage_total(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__storage_total(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__storage_total(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__storage_total(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__link_type(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_type(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_type(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__link_type(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_type(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__link_type(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_type(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__link_tx_rate(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_tx_rate(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_tx_rate(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__link_tx_rate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_tx_rate(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__link_tx_rate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_tx_rate(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__link_rx_rate(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_rx_rate(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_rx_rate(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__link_rx_rate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_rx_rate(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__link_rx_rate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_rx_rate(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__link_tx_max(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_tx_max(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_tx_max(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__link_tx_max(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_tx_max(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__link_tx_max(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_tx_max(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

size_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__link_rx_max(
  const void * untyped_member)
{
  (void)untyped_member;
  return 6;
}

const void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_rx_max(
  const void * untyped_member, size_t index)
{
  const uint32_t * member =
    (const uint32_t *)(untyped_member);
  return &member[index];
}

void * px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_rx_max(
  void * untyped_member, size_t index)
{
  uint32_t * member =
    (uint32_t *)(untyped_member);
  return &member[index];
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__link_rx_max(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint32_t * item =
    ((const uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_rx_max(untyped_member, index));
  uint32_t * value =
    (uint32_t *)(untyped_value);
  *value = *item;
}

void px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__link_rx_max(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint32_t * item =
    ((uint32_t *)
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_rx_max(untyped_member, index));
  const uint32_t * value =
    (const uint32_t *)(untyped_value);
  *item = *value;
}

static rosidl_typesupport_introspection_c__MessageMember px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__OnboardComputerStatus_message_member_array[20] = {
  {
    "timestamp",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, timestamp),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "uptime",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, uptime),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cpu_cores",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, cpu_cores),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__cpu_cores,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__cpu_cores,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__cpu_cores,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__cpu_cores,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__cpu_cores,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "cpu_combined",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    10,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, cpu_combined),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__cpu_combined,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__cpu_combined,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__cpu_combined,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__cpu_combined,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__cpu_combined,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gpu_cores",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, gpu_cores),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__gpu_cores,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__gpu_cores,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__gpu_cores,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__gpu_cores,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__gpu_cores,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "gpu_combined",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    10,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, gpu_combined),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__gpu_combined,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__gpu_combined,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__gpu_combined,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__gpu_combined,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__gpu_combined,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature_board",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, temperature_board),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "temperature_core",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    8,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, temperature_core),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__temperature_core,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__temperature_core,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__temperature_core,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__temperature_core,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__temperature_core,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "fan_speed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, fan_speed),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__fan_speed,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__fan_speed,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__fan_speed,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__fan_speed,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__fan_speed,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ram_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, ram_usage),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "ram_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, ram_total),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "storage_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, storage_type),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__storage_type,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__storage_type,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__storage_type,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__storage_type,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__storage_type,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "storage_usage",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, storage_usage),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__storage_usage,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__storage_usage,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__storage_usage,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__storage_usage,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__storage_usage,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "storage_total",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, storage_total),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__storage_total,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__storage_total,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__storage_total,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__storage_total,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__storage_total,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, link_type),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__link_type,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_type,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_type,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__link_type,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__link_type,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_tx_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, link_tx_rate),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__link_tx_rate,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_tx_rate,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_tx_rate,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__link_tx_rate,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__link_tx_rate,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_rx_rate",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, link_rx_rate),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__link_rx_rate,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_rx_rate,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_rx_rate,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__link_rx_rate,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__link_rx_rate,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_tx_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, link_tx_max),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__link_tx_max,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_tx_max,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_tx_max,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__link_tx_max,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__link_tx_max,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "link_rx_max",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    6,  // array size
    false,  // is upper bound
    offsetof(px4_msgs__msg__OnboardComputerStatus, link_rx_max),  // bytes offset in struct
    NULL,  // default value
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__size_function__OnboardComputerStatus__link_rx_max,  // size() function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_const_function__OnboardComputerStatus__link_rx_max,  // get_const(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__get_function__OnboardComputerStatus__link_rx_max,  // get(index) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__fetch_function__OnboardComputerStatus__link_rx_max,  // fetch(index, &value) function pointer
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__assign_function__OnboardComputerStatus__link_rx_max,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__OnboardComputerStatus_message_members = {
  "px4_msgs__msg",  // message namespace
  "OnboardComputerStatus",  // message name
  20,  // number of fields
  sizeof(px4_msgs__msg__OnboardComputerStatus),
  px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__OnboardComputerStatus_message_member_array,  // message members
  px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__OnboardComputerStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__OnboardComputerStatus_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__OnboardComputerStatus_message_type_support_handle = {
  0,
  &px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__OnboardComputerStatus_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_px4_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, px4_msgs, msg, OnboardComputerStatus)() {
  if (!px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__OnboardComputerStatus_message_type_support_handle.typesupport_identifier) {
    px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__OnboardComputerStatus_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &px4_msgs__msg__OnboardComputerStatus__rosidl_typesupport_introspection_c__OnboardComputerStatus_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
