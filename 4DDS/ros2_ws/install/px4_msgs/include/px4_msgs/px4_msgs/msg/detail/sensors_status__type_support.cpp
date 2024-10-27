// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/SensorsStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/sensors_status__struct.hpp"
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

void SensorsStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::SensorsStatus(_init);
}

void SensorsStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::SensorsStatus *>(message_memory);
  typed_message->~SensorsStatus();
}

size_t size_function__SensorsStatus__device_ids(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatus__device_ids(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatus__device_ids(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint32_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatus__device_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint32_t *>(
    get_const_function__SensorsStatus__device_ids(untyped_member, index));
  auto & value = *reinterpret_cast<uint32_t *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatus__device_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint32_t *>(
    get_function__SensorsStatus__device_ids(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint32_t *>(untyped_value);
  item = value;
}

size_t size_function__SensorsStatus__inconsistency(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatus__inconsistency(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatus__inconsistency(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatus__inconsistency(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__SensorsStatus__inconsistency(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatus__inconsistency(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__SensorsStatus__inconsistency(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__SensorsStatus__healthy(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatus__healthy(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatus__healthy(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatus__healthy(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__SensorsStatus__healthy(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatus__healthy(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__SensorsStatus__healthy(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__SensorsStatus__priority(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatus__priority(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatus__priority(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatus__priority(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__SensorsStatus__priority(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatus__priority(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__SensorsStatus__priority(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

size_t size_function__SensorsStatus__enabled(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatus__enabled(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatus__enabled(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatus__enabled(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__SensorsStatus__enabled(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatus__enabled(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__SensorsStatus__enabled(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__SensorsStatus__external(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__SensorsStatus__external(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__SensorsStatus__external(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__SensorsStatus__external(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__SensorsStatus__external(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__SensorsStatus__external(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__SensorsStatus__external(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SensorsStatus_message_member_array[8] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatus, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "device_id_primary",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatus, device_id_primary),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "device_ids",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatus, device_ids),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatus__device_ids,  // size() function pointer
    get_const_function__SensorsStatus__device_ids,  // get_const(index) function pointer
    get_function__SensorsStatus__device_ids,  // get(index) function pointer
    fetch_function__SensorsStatus__device_ids,  // fetch(index, &value) function pointer
    assign_function__SensorsStatus__device_ids,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "inconsistency",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatus, inconsistency),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatus__inconsistency,  // size() function pointer
    get_const_function__SensorsStatus__inconsistency,  // get_const(index) function pointer
    get_function__SensorsStatus__inconsistency,  // get(index) function pointer
    fetch_function__SensorsStatus__inconsistency,  // fetch(index, &value) function pointer
    assign_function__SensorsStatus__inconsistency,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "healthy",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatus, healthy),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatus__healthy,  // size() function pointer
    get_const_function__SensorsStatus__healthy,  // get_const(index) function pointer
    get_function__SensorsStatus__healthy,  // get(index) function pointer
    fetch_function__SensorsStatus__healthy,  // fetch(index, &value) function pointer
    assign_function__SensorsStatus__healthy,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "priority",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatus, priority),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatus__priority,  // size() function pointer
    get_const_function__SensorsStatus__priority,  // get_const(index) function pointer
    get_function__SensorsStatus__priority,  // get(index) function pointer
    fetch_function__SensorsStatus__priority,  // fetch(index, &value) function pointer
    assign_function__SensorsStatus__priority,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "enabled",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatus, enabled),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatus__enabled,  // size() function pointer
    get_const_function__SensorsStatus__enabled,  // get_const(index) function pointer
    get_function__SensorsStatus__enabled,  // get(index) function pointer
    fetch_function__SensorsStatus__enabled,  // fetch(index, &value) function pointer
    assign_function__SensorsStatus__enabled,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "external",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::SensorsStatus, external),  // bytes offset in struct
    nullptr,  // default value
    size_function__SensorsStatus__external,  // size() function pointer
    get_const_function__SensorsStatus__external,  // get_const(index) function pointer
    get_function__SensorsStatus__external,  // get(index) function pointer
    fetch_function__SensorsStatus__external,  // fetch(index, &value) function pointer
    assign_function__SensorsStatus__external,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SensorsStatus_message_members = {
  "px4_msgs::msg",  // message namespace
  "SensorsStatus",  // message name
  8,  // number of fields
  sizeof(px4_msgs::msg::SensorsStatus),
  SensorsStatus_message_member_array,  // message members
  SensorsStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorsStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SensorsStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SensorsStatus_message_members,
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
get_message_type_support_handle<px4_msgs::msg::SensorsStatus>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::SensorsStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, SensorsStatus)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::SensorsStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
