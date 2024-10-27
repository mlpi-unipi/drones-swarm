// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/MagnetometerBiasEstimate.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/magnetometer_bias_estimate__struct.hpp"
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

void MagnetometerBiasEstimate_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::MagnetometerBiasEstimate(_init);
}

void MagnetometerBiasEstimate_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::MagnetometerBiasEstimate *>(message_memory);
  typed_message->~MagnetometerBiasEstimate();
}

size_t size_function__MagnetometerBiasEstimate__bias_x(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__MagnetometerBiasEstimate__bias_x(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__MagnetometerBiasEstimate__bias_x(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__MagnetometerBiasEstimate__bias_x(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MagnetometerBiasEstimate__bias_x(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MagnetometerBiasEstimate__bias_x(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MagnetometerBiasEstimate__bias_x(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MagnetometerBiasEstimate__bias_y(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__MagnetometerBiasEstimate__bias_y(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__MagnetometerBiasEstimate__bias_y(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__MagnetometerBiasEstimate__bias_y(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MagnetometerBiasEstimate__bias_y(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MagnetometerBiasEstimate__bias_y(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MagnetometerBiasEstimate__bias_y(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MagnetometerBiasEstimate__bias_z(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__MagnetometerBiasEstimate__bias_z(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__MagnetometerBiasEstimate__bias_z(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__MagnetometerBiasEstimate__bias_z(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__MagnetometerBiasEstimate__bias_z(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__MagnetometerBiasEstimate__bias_z(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__MagnetometerBiasEstimate__bias_z(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__MagnetometerBiasEstimate__valid(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__MagnetometerBiasEstimate__valid(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__MagnetometerBiasEstimate__valid(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__MagnetometerBiasEstimate__valid(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__MagnetometerBiasEstimate__valid(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__MagnetometerBiasEstimate__valid(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__MagnetometerBiasEstimate__valid(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

size_t size_function__MagnetometerBiasEstimate__stable(const void * untyped_member)
{
  (void)untyped_member;
  return 4;
}

const void * get_const_function__MagnetometerBiasEstimate__stable(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void * get_function__MagnetometerBiasEstimate__stable(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<bool, 4> *>(untyped_member);
  return &member[index];
}

void fetch_function__MagnetometerBiasEstimate__stable(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const bool *>(
    get_const_function__MagnetometerBiasEstimate__stable(untyped_member, index));
  auto & value = *reinterpret_cast<bool *>(untyped_value);
  value = item;
}

void assign_function__MagnetometerBiasEstimate__stable(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<bool *>(
    get_function__MagnetometerBiasEstimate__stable(untyped_member, index));
  const auto & value = *reinterpret_cast<const bool *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MagnetometerBiasEstimate_message_member_array[6] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::MagnetometerBiasEstimate, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bias_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::MagnetometerBiasEstimate, bias_x),  // bytes offset in struct
    nullptr,  // default value
    size_function__MagnetometerBiasEstimate__bias_x,  // size() function pointer
    get_const_function__MagnetometerBiasEstimate__bias_x,  // get_const(index) function pointer
    get_function__MagnetometerBiasEstimate__bias_x,  // get(index) function pointer
    fetch_function__MagnetometerBiasEstimate__bias_x,  // fetch(index, &value) function pointer
    assign_function__MagnetometerBiasEstimate__bias_x,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bias_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::MagnetometerBiasEstimate, bias_y),  // bytes offset in struct
    nullptr,  // default value
    size_function__MagnetometerBiasEstimate__bias_y,  // size() function pointer
    get_const_function__MagnetometerBiasEstimate__bias_y,  // get_const(index) function pointer
    get_function__MagnetometerBiasEstimate__bias_y,  // get(index) function pointer
    fetch_function__MagnetometerBiasEstimate__bias_y,  // fetch(index, &value) function pointer
    assign_function__MagnetometerBiasEstimate__bias_y,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bias_z",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::MagnetometerBiasEstimate, bias_z),  // bytes offset in struct
    nullptr,  // default value
    size_function__MagnetometerBiasEstimate__bias_z,  // size() function pointer
    get_const_function__MagnetometerBiasEstimate__bias_z,  // get_const(index) function pointer
    get_function__MagnetometerBiasEstimate__bias_z,  // get(index) function pointer
    fetch_function__MagnetometerBiasEstimate__bias_z,  // fetch(index, &value) function pointer
    assign_function__MagnetometerBiasEstimate__bias_z,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::MagnetometerBiasEstimate, valid),  // bytes offset in struct
    nullptr,  // default value
    size_function__MagnetometerBiasEstimate__valid,  // size() function pointer
    get_const_function__MagnetometerBiasEstimate__valid,  // get_const(index) function pointer
    get_function__MagnetometerBiasEstimate__valid,  // get(index) function pointer
    fetch_function__MagnetometerBiasEstimate__valid,  // fetch(index, &value) function pointer
    assign_function__MagnetometerBiasEstimate__valid,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "stable",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    4,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::MagnetometerBiasEstimate, stable),  // bytes offset in struct
    nullptr,  // default value
    size_function__MagnetometerBiasEstimate__stable,  // size() function pointer
    get_const_function__MagnetometerBiasEstimate__stable,  // get_const(index) function pointer
    get_function__MagnetometerBiasEstimate__stable,  // get(index) function pointer
    fetch_function__MagnetometerBiasEstimate__stable,  // fetch(index, &value) function pointer
    assign_function__MagnetometerBiasEstimate__stable,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MagnetometerBiasEstimate_message_members = {
  "px4_msgs::msg",  // message namespace
  "MagnetometerBiasEstimate",  // message name
  6,  // number of fields
  sizeof(px4_msgs::msg::MagnetometerBiasEstimate),
  MagnetometerBiasEstimate_message_member_array,  // message members
  MagnetometerBiasEstimate_init_function,  // function to initialize message memory (memory has to be allocated)
  MagnetometerBiasEstimate_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MagnetometerBiasEstimate_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MagnetometerBiasEstimate_message_members,
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
get_message_type_support_handle<px4_msgs::msg::MagnetometerBiasEstimate>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::MagnetometerBiasEstimate_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, MagnetometerBiasEstimate)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::MagnetometerBiasEstimate_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
