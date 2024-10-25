// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/SensorsStatusImu.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/sensors_status_imu__struct.hpp"
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

void SensorsStatusImu_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::SensorsStatusImu(_init);
}

void SensorsStatusImu_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::SensorsStatusImu *>(message_memory);
  typed_message->~SensorsStatusImu();
}

size_t size_function__SensorsStatusImu__accel_device_ids(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusImu__accel_device_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusImu__accel_device_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatusImu__accel_device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__SensorsStatusImu__accel_device_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatusImu__accel_device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__SensorsStatusImu__accel_device_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__SensorsStatusImu__accel_inconsistency_m_s_s(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusImu__accel_inconsistency_m_s_s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusImu__accel_inconsistency_m_s_s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatusImu__accel_inconsistency_m_s_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorsStatusImu__accel_inconsistency_m_s_s(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatusImu__accel_inconsistency_m_s_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorsStatusImu__accel_inconsistency_m_s_s(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorsStatusImu__accel_healthy(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusImu__accel_healthy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusImu__accel_healthy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatusImu__accel_healthy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__SensorsStatusImu__accel_healthy(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatusImu__accel_healthy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__SensorsStatusImu__accel_healthy(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__SensorsStatusImu__accel_priority(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusImu__accel_priority(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusImu__accel_priority(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatusImu__accel_priority(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorsStatusImu__accel_priority(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatusImu__accel_priority(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorsStatusImu__accel_priority(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__SensorsStatusImu__gyro_device_ids(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusImu__gyro_device_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusImu__gyro_device_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatusImu__gyro_device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__SensorsStatusImu__gyro_device_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatusImu__gyro_device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__SensorsStatusImu__gyro_device_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__SensorsStatusImu__gyro_inconsistency_rad_s(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusImu__gyro_inconsistency_rad_s(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusImu__gyro_inconsistency_rad_s(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatusImu__gyro_inconsistency_rad_s(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorsStatusImu__gyro_inconsistency_rad_s(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatusImu__gyro_inconsistency_rad_s(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorsStatusImu__gyro_inconsistency_rad_s(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorsStatusImu__gyro_healthy(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusImu__gyro_healthy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusImu__gyro_healthy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatusImu__gyro_healthy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__SensorsStatusImu__gyro_healthy(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatusImu__gyro_healthy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__SensorsStatusImu__gyro_healthy(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__SensorsStatusImu__gyro_priority(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatusImu__gyro_priority(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatusImu__gyro_priority(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatusImu__gyro_priority(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorsStatusImu__gyro_priority(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatusImu__gyro_priority(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorsStatusImu__gyro_priority(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorsStatusImu_message_member_array[11] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusImu, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accel_device_id_primary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusImu, accel_device_id_primary),  // bytes offset in struct
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
    offsetof(px4_msgs::msg::SensorsStatusImu, accel_device_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusImu__accel_device_ids,  // size() function pointer
    get_const_function__SensorsStatusImu__accel_device_ids,  // get_const(index) function pointer
    get_function__SensorsStatusImu__accel_device_ids,  // get(index) function pointer
    fetch_function__SensorsStatusImu__accel_device_ids,  // fetch(index, &value) function pointer
    assign_function__SensorsStatusImu__accel_device_ids,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accel_inconsistency_m_s_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusImu, accel_inconsistency_m_s_s),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusImu__accel_inconsistency_m_s_s,  // size() function pointer
    get_const_function__SensorsStatusImu__accel_inconsistency_m_s_s,  // get_const(index) function pointer
    get_function__SensorsStatusImu__accel_inconsistency_m_s_s,  // get(index) function pointer
    fetch_function__SensorsStatusImu__accel_inconsistency_m_s_s,  // fetch(index, &value) function pointer
    assign_function__SensorsStatusImu__accel_inconsistency_m_s_s,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accel_healthy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusImu, accel_healthy),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusImu__accel_healthy,  // size() function pointer
    get_const_function__SensorsStatusImu__accel_healthy,  // get_const(index) function pointer
    get_function__SensorsStatusImu__accel_healthy,  // get(index) function pointer
    fetch_function__SensorsStatusImu__accel_healthy,  // fetch(index, &value) function pointer
    assign_function__SensorsStatusImu__accel_healthy,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "accel_priority",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusImu, accel_priority),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusImu__accel_priority,  // size() function pointer
    get_const_function__SensorsStatusImu__accel_priority,  // get_const(index) function pointer
    get_function__SensorsStatusImu__accel_priority,  // get(index) function pointer
    fetch_function__SensorsStatusImu__accel_priority,  // fetch(index, &value) function pointer
    assign_function__SensorsStatusImu__accel_priority,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_device_id_primary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusImu, gyro_device_id_primary),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
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
    offsetof(px4_msgs::msg::SensorsStatusImu, gyro_device_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusImu__gyro_device_ids,  // size() function pointer
    get_const_function__SensorsStatusImu__gyro_device_ids,  // get_const(index) function pointer
    get_function__SensorsStatusImu__gyro_device_ids,  // get(index) function pointer
    fetch_function__SensorsStatusImu__gyro_device_ids,  // fetch(index, &value) function pointer
    assign_function__SensorsStatusImu__gyro_device_ids,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_inconsistency_rad_s",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusImu, gyro_inconsistency_rad_s),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusImu__gyro_inconsistency_rad_s,  // size() function pointer
    get_const_function__SensorsStatusImu__gyro_inconsistency_rad_s,  // get_const(index) function pointer
    get_function__SensorsStatusImu__gyro_inconsistency_rad_s,  // get(index) function pointer
    fetch_function__SensorsStatusImu__gyro_inconsistency_rad_s,  // fetch(index, &value) function pointer
    assign_function__SensorsStatusImu__gyro_inconsistency_rad_s,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_healthy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusImu, gyro_healthy),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusImu__gyro_healthy,  // size() function pointer
    get_const_function__SensorsStatusImu__gyro_healthy,  // get_const(index) function pointer
    get_function__SensorsStatusImu__gyro_healthy,  // get(index) function pointer
    fetch_function__SensorsStatusImu__gyro_healthy,  // fetch(index, &value) function pointer
    assign_function__SensorsStatusImu__gyro_healthy,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_priority",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatusImu, gyro_priority),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatusImu__gyro_priority,  // size() function pointer
    get_const_function__SensorsStatusImu__gyro_priority,  // get_const(index) function pointer
    get_function__SensorsStatusImu__gyro_priority,  // get(index) function pointer
    fetch_function__SensorsStatusImu__gyro_priority,  // fetch(index, &value) function pointer
    assign_function__SensorsStatusImu__gyro_priority,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorsStatusImu_message_members = {
  "px4_msgs::msg",  // message namespace
  "SensorsStatusImu",  // message name
  11,  // number of fields
  sizeof(px4_msgs::msg::SensorsStatusImu),
  SensorsStatusImu_message_member_array,  // message members
  SensorsStatusImu_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorsStatusImu_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorsStatusImu_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorsStatusImu_message_members,
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
get_message_type_support_handle<px4_msgs::msg::SensorsStatusImu>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::SensorsStatusImu_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, SensorsStatusImu)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::SensorsStatusImu_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
