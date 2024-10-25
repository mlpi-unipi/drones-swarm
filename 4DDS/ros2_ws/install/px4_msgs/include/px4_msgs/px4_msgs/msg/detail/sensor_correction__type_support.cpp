// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/SensorCorrection.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/sensor_correction__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace px4_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SensorCorrection_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::SensorCorrection(_init);
}

void SensorCorrection_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::SensorCorrection *>(message_memory);
  typed_message->~SensorCorrection();
}

size_t size_function__SensorCorrection__accel_device_ids(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorCorrection__accel_device_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__accel_device_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__accel_device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__SensorCorrection__accel_device_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__accel_device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__SensorCorrection__accel_device_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__accel_temperature(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorCorrection__accel_temperature(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__accel_temperature(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__accel_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__accel_temperature(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__accel_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__accel_temperature(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__accel_offset_0(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorCorrection__accel_offset_0(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__accel_offset_0(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__accel_offset_0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__accel_offset_0(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__accel_offset_0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__accel_offset_0(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__accel_offset_1(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorCorrection__accel_offset_1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__accel_offset_1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__accel_offset_1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__accel_offset_1(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__accel_offset_1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__accel_offset_1(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__accel_offset_2(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorCorrection__accel_offset_2(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__accel_offset_2(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__accel_offset_2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__accel_offset_2(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__accel_offset_2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__accel_offset_2(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__accel_offset_3(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorCorrection__accel_offset_3(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__accel_offset_3(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__accel_offset_3(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__accel_offset_3(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__accel_offset_3(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__accel_offset_3(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__gyro_device_ids(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorCorrection__gyro_device_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__gyro_device_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__gyro_device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__SensorCorrection__gyro_device_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__gyro_device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__SensorCorrection__gyro_device_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__gyro_temperature(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorCorrection__gyro_temperature(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__gyro_temperature(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__gyro_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__gyro_temperature(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__gyro_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__gyro_temperature(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__gyro_offset_0(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorCorrection__gyro_offset_0(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__gyro_offset_0(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__gyro_offset_0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__gyro_offset_0(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__gyro_offset_0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__gyro_offset_0(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__gyro_offset_1(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorCorrection__gyro_offset_1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__gyro_offset_1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__gyro_offset_1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__gyro_offset_1(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__gyro_offset_1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__gyro_offset_1(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__gyro_offset_2(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorCorrection__gyro_offset_2(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__gyro_offset_2(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__gyro_offset_2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__gyro_offset_2(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__gyro_offset_2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__gyro_offset_2(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__gyro_offset_3(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorCorrection__gyro_offset_3(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__gyro_offset_3(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__gyro_offset_3(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__gyro_offset_3(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__gyro_offset_3(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__gyro_offset_3(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__mag_device_ids(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorCorrection__mag_device_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__mag_device_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__mag_device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__SensorCorrection__mag_device_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__mag_device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__SensorCorrection__mag_device_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__mag_temperature(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorCorrection__mag_temperature(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__mag_temperature(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__mag_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__mag_temperature(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__mag_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__mag_temperature(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__mag_offset_0(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorCorrection__mag_offset_0(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__mag_offset_0(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__mag_offset_0(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__mag_offset_0(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__mag_offset_0(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__mag_offset_0(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__mag_offset_1(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorCorrection__mag_offset_1(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__mag_offset_1(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__mag_offset_1(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__mag_offset_1(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__mag_offset_1(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__mag_offset_1(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__mag_offset_2(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorCorrection__mag_offset_2(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__mag_offset_2(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__mag_offset_2(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__mag_offset_2(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__mag_offset_2(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__mag_offset_2(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__mag_offset_3(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__SensorCorrection__mag_offset_3(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__mag_offset_3(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__mag_offset_3(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__mag_offset_3(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__mag_offset_3(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__mag_offset_3(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__baro_device_ids(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorCorrection__baro_device_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__baro_device_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__baro_device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__SensorCorrection__baro_device_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__baro_device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__SensorCorrection__baro_device_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__SensorCorrection__baro_temperature(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorCorrection__baro_temperature(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorCorrection__baro_temperature(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorCorrection__baro_temperature(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorCorrection__baro_temperature(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorCorrection__baro_temperature(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorCorrection__baro_temperature(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorCorrection_message_member_array[25] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accel_device_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, accel_device_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__accel_device_ids,  // size() function pointer
    get_const_function__SensorCorrection__accel_device_ids,  // get_const(index) function pointer
    get_function__SensorCorrection__accel_device_ids,  // get(index) function pointer
    fetch_function__SensorCorrection__accel_device_ids,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__accel_device_ids,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accel_temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, accel_temperature),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__accel_temperature,  // size() function pointer
    get_const_function__SensorCorrection__accel_temperature,  // get_const(index) function pointer
    get_function__SensorCorrection__accel_temperature,  // get(index) function pointer
    fetch_function__SensorCorrection__accel_temperature,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__accel_temperature,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accel_offset_0",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, accel_offset_0),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__accel_offset_0,  // size() function pointer
    get_const_function__SensorCorrection__accel_offset_0,  // get_const(index) function pointer
    get_function__SensorCorrection__accel_offset_0,  // get(index) function pointer
    fetch_function__SensorCorrection__accel_offset_0,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__accel_offset_0,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accel_offset_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, accel_offset_1),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__accel_offset_1,  // size() function pointer
    get_const_function__SensorCorrection__accel_offset_1,  // get_const(index) function pointer
    get_function__SensorCorrection__accel_offset_1,  // get(index) function pointer
    fetch_function__SensorCorrection__accel_offset_1,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__accel_offset_1,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accel_offset_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, accel_offset_2),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__accel_offset_2,  // size() function pointer
    get_const_function__SensorCorrection__accel_offset_2,  // get_const(index) function pointer
    get_function__SensorCorrection__accel_offset_2,  // get(index) function pointer
    fetch_function__SensorCorrection__accel_offset_2,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__accel_offset_2,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accel_offset_3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, accel_offset_3),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__accel_offset_3,  // size() function pointer
    get_const_function__SensorCorrection__accel_offset_3,  // get_const(index) function pointer
    get_function__SensorCorrection__accel_offset_3,  // get(index) function pointer
    fetch_function__SensorCorrection__accel_offset_3,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__accel_offset_3,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_device_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, gyro_device_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__gyro_device_ids,  // size() function pointer
    get_const_function__SensorCorrection__gyro_device_ids,  // get_const(index) function pointer
    get_function__SensorCorrection__gyro_device_ids,  // get(index) function pointer
    fetch_function__SensorCorrection__gyro_device_ids,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__gyro_device_ids,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, gyro_temperature),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__gyro_temperature,  // size() function pointer
    get_const_function__SensorCorrection__gyro_temperature,  // get_const(index) function pointer
    get_function__SensorCorrection__gyro_temperature,  // get(index) function pointer
    fetch_function__SensorCorrection__gyro_temperature,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__gyro_temperature,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_offset_0",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, gyro_offset_0),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__gyro_offset_0,  // size() function pointer
    get_const_function__SensorCorrection__gyro_offset_0,  // get_const(index) function pointer
    get_function__SensorCorrection__gyro_offset_0,  // get(index) function pointer
    fetch_function__SensorCorrection__gyro_offset_0,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__gyro_offset_0,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_offset_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, gyro_offset_1),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__gyro_offset_1,  // size() function pointer
    get_const_function__SensorCorrection__gyro_offset_1,  // get_const(index) function pointer
    get_function__SensorCorrection__gyro_offset_1,  // get(index) function pointer
    fetch_function__SensorCorrection__gyro_offset_1,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__gyro_offset_1,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_offset_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, gyro_offset_2),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__gyro_offset_2,  // size() function pointer
    get_const_function__SensorCorrection__gyro_offset_2,  // get_const(index) function pointer
    get_function__SensorCorrection__gyro_offset_2,  // get(index) function pointer
    fetch_function__SensorCorrection__gyro_offset_2,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__gyro_offset_2,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_offset_3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, gyro_offset_3),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__gyro_offset_3,  // size() function pointer
    get_const_function__SensorCorrection__gyro_offset_3,  // get_const(index) function pointer
    get_function__SensorCorrection__gyro_offset_3,  // get(index) function pointer
    fetch_function__SensorCorrection__gyro_offset_3,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__gyro_offset_3,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mag_device_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, mag_device_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__mag_device_ids,  // size() function pointer
    get_const_function__SensorCorrection__mag_device_ids,  // get_const(index) function pointer
    get_function__SensorCorrection__mag_device_ids,  // get(index) function pointer
    fetch_function__SensorCorrection__mag_device_ids,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__mag_device_ids,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mag_temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, mag_temperature),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__mag_temperature,  // size() function pointer
    get_const_function__SensorCorrection__mag_temperature,  // get_const(index) function pointer
    get_function__SensorCorrection__mag_temperature,  // get(index) function pointer
    fetch_function__SensorCorrection__mag_temperature,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__mag_temperature,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mag_offset_0",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, mag_offset_0),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__mag_offset_0,  // size() function pointer
    get_const_function__SensorCorrection__mag_offset_0,  // get_const(index) function pointer
    get_function__SensorCorrection__mag_offset_0,  // get(index) function pointer
    fetch_function__SensorCorrection__mag_offset_0,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__mag_offset_0,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mag_offset_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, mag_offset_1),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__mag_offset_1,  // size() function pointer
    get_const_function__SensorCorrection__mag_offset_1,  // get_const(index) function pointer
    get_function__SensorCorrection__mag_offset_1,  // get(index) function pointer
    fetch_function__SensorCorrection__mag_offset_1,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__mag_offset_1,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mag_offset_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, mag_offset_2),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__mag_offset_2,  // size() function pointer
    get_const_function__SensorCorrection__mag_offset_2,  // get_const(index) function pointer
    get_function__SensorCorrection__mag_offset_2,  // get(index) function pointer
    fetch_function__SensorCorrection__mag_offset_2,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__mag_offset_2,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mag_offset_3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, mag_offset_3),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__mag_offset_3,  // size() function pointer
    get_const_function__SensorCorrection__mag_offset_3,  // get_const(index) function pointer
    get_function__SensorCorrection__mag_offset_3,  // get(index) function pointer
    fetch_function__SensorCorrection__mag_offset_3,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__mag_offset_3,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "baro_device_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, baro_device_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__baro_device_ids,  // size() function pointer
    get_const_function__SensorCorrection__baro_device_ids,  // get_const(index) function pointer
    get_function__SensorCorrection__baro_device_ids,  // get(index) function pointer
    fetch_function__SensorCorrection__baro_device_ids,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__baro_device_ids,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "baro_temperature",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, baro_temperature),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorCorrection__baro_temperature,  // size() function pointer
    get_const_function__SensorCorrection__baro_temperature,  // get_const(index) function pointer
    get_function__SensorCorrection__baro_temperature,  // get(index) function pointer
    fetch_function__SensorCorrection__baro_temperature,  // fetch(index, &value) function pointer
    assign_function__SensorCorrection__baro_temperature,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "baro_offset_0",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, baro_offset_0),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "baro_offset_1",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, baro_offset_1),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "baro_offset_2",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, baro_offset_2),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "baro_offset_3",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorCorrection, baro_offset_3),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorCorrection_message_members = {
  "px4_msgs::msg",  // message namespace
  "SensorCorrection",  // message name
  25,  // number of fields
  sizeof(px4_msgs::msg::SensorCorrection),
  SensorCorrection_message_member_array,  // message members
  SensorCorrection_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorCorrection_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorCorrection_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorCorrection_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace px4_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::SensorCorrection>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::SensorCorrection_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, SensorCorrection)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::SensorCorrection_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
