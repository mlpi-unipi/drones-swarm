// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleOpticalFlowVel.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/vehicle_optical_flow_vel__struct.hpp"
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

void VehicleOpticalFlowVel_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::VehicleOpticalFlowVel(_init);
}

void VehicleOpticalFlowVel_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::VehicleOpticalFlowVel *>(message_memory);
  typed_message->~VehicleOpticalFlowVel();
}

size_t size_function__VehicleOpticalFlowVel__vel_body(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__VehicleOpticalFlowVel__vel_body(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleOpticalFlowVel__vel_body(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__VehicleOpticalFlowVel__vel_body(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VehicleOpticalFlowVel__vel_body(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VehicleOpticalFlowVel__vel_body(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VehicleOpticalFlowVel__vel_body(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VehicleOpticalFlowVel__vel_ne(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__VehicleOpticalFlowVel__vel_ne(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleOpticalFlowVel__vel_ne(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__VehicleOpticalFlowVel__vel_ne(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VehicleOpticalFlowVel__vel_ne(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VehicleOpticalFlowVel__vel_ne(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VehicleOpticalFlowVel__vel_ne(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VehicleOpticalFlowVel__flow_rate_uncompensated(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__VehicleOpticalFlowVel__flow_rate_uncompensated(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleOpticalFlowVel__flow_rate_uncompensated(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__VehicleOpticalFlowVel__flow_rate_uncompensated(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VehicleOpticalFlowVel__flow_rate_uncompensated(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VehicleOpticalFlowVel__flow_rate_uncompensated(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VehicleOpticalFlowVel__flow_rate_uncompensated(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VehicleOpticalFlowVel__flow_rate_compensated(const void * untyped_member)
{
  (void)untyped_member;
  return 2;
}

const void * get_const_function__VehicleOpticalFlowVel__flow_rate_compensated(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleOpticalFlowVel__flow_rate_compensated(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 2> *>(untyped_member);
  return &member[index];
}

void fetch_function__VehicleOpticalFlowVel__flow_rate_compensated(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VehicleOpticalFlowVel__flow_rate_compensated(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VehicleOpticalFlowVel__flow_rate_compensated(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VehicleOpticalFlowVel__flow_rate_compensated(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VehicleOpticalFlowVel__gyro_rate(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VehicleOpticalFlowVel__gyro_rate(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleOpticalFlowVel__gyro_rate(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VehicleOpticalFlowVel__gyro_rate(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VehicleOpticalFlowVel__gyro_rate(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VehicleOpticalFlowVel__gyro_rate(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VehicleOpticalFlowVel__gyro_rate(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VehicleOpticalFlowVel__gyro_bias(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VehicleOpticalFlowVel__gyro_bias(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleOpticalFlowVel__gyro_bias(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VehicleOpticalFlowVel__gyro_bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VehicleOpticalFlowVel__gyro_bias(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VehicleOpticalFlowVel__gyro_bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VehicleOpticalFlowVel__gyro_bias(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__VehicleOpticalFlowVel__ref_gyro(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__VehicleOpticalFlowVel__ref_gyro(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleOpticalFlowVel__ref_gyro(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__VehicleOpticalFlowVel__ref_gyro(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__VehicleOpticalFlowVel__ref_gyro(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__VehicleOpticalFlowVel__ref_gyro(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__VehicleOpticalFlowVel__ref_gyro(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VehicleOpticalFlowVel_message_member_array[9] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleOpticalFlowVel, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "timestamp_sample",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleOpticalFlowVel, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_body",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleOpticalFlowVel, vel_body),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleOpticalFlowVel__vel_body,  // size() function pointer
    get_const_function__VehicleOpticalFlowVel__vel_body,  // get_const(index) function pointer
    get_function__VehicleOpticalFlowVel__vel_body,  // get(index) function pointer
    fetch_function__VehicleOpticalFlowVel__vel_body,  // fetch(index, &value) function pointer
    assign_function__VehicleOpticalFlowVel__vel_body,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "vel_ne",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleOpticalFlowVel, vel_ne),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleOpticalFlowVel__vel_ne,  // size() function pointer
    get_const_function__VehicleOpticalFlowVel__vel_ne,  // get_const(index) function pointer
    get_function__VehicleOpticalFlowVel__vel_ne,  // get(index) function pointer
    fetch_function__VehicleOpticalFlowVel__vel_ne,  // fetch(index, &value) function pointer
    assign_function__VehicleOpticalFlowVel__vel_ne,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flow_rate_uncompensated",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleOpticalFlowVel, flow_rate_uncompensated),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleOpticalFlowVel__flow_rate_uncompensated,  // size() function pointer
    get_const_function__VehicleOpticalFlowVel__flow_rate_uncompensated,  // get_const(index) function pointer
    get_function__VehicleOpticalFlowVel__flow_rate_uncompensated,  // get(index) function pointer
    fetch_function__VehicleOpticalFlowVel__flow_rate_uncompensated,  // fetch(index, &value) function pointer
    assign_function__VehicleOpticalFlowVel__flow_rate_uncompensated,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "flow_rate_compensated",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    2,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleOpticalFlowVel, flow_rate_compensated),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleOpticalFlowVel__flow_rate_compensated,  // size() function pointer
    get_const_function__VehicleOpticalFlowVel__flow_rate_compensated,  // get_const(index) function pointer
    get_function__VehicleOpticalFlowVel__flow_rate_compensated,  // get(index) function pointer
    fetch_function__VehicleOpticalFlowVel__flow_rate_compensated,  // fetch(index, &value) function pointer
    assign_function__VehicleOpticalFlowVel__flow_rate_compensated,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_rate",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleOpticalFlowVel, gyro_rate),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleOpticalFlowVel__gyro_rate,  // size() function pointer
    get_const_function__VehicleOpticalFlowVel__gyro_rate,  // get_const(index) function pointer
    get_function__VehicleOpticalFlowVel__gyro_rate,  // get(index) function pointer
    fetch_function__VehicleOpticalFlowVel__gyro_rate,  // fetch(index, &value) function pointer
    assign_function__VehicleOpticalFlowVel__gyro_rate,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gyro_bias",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleOpticalFlowVel, gyro_bias),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleOpticalFlowVel__gyro_bias,  // size() function pointer
    get_const_function__VehicleOpticalFlowVel__gyro_bias,  // get_const(index) function pointer
    get_function__VehicleOpticalFlowVel__gyro_bias,  // get(index) function pointer
    fetch_function__VehicleOpticalFlowVel__gyro_bias,  // fetch(index, &value) function pointer
    assign_function__VehicleOpticalFlowVel__gyro_bias,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ref_gyro",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleOpticalFlowVel, ref_gyro),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleOpticalFlowVel__ref_gyro,  // size() function pointer
    get_const_function__VehicleOpticalFlowVel__ref_gyro,  // get_const(index) function pointer
    get_function__VehicleOpticalFlowVel__ref_gyro,  // get(index) function pointer
    fetch_function__VehicleOpticalFlowVel__ref_gyro,  // fetch(index, &value) function pointer
    assign_function__VehicleOpticalFlowVel__ref_gyro,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VehicleOpticalFlowVel_message_members = {
  "px4_msgs::msg",  // message namespace
  "VehicleOpticalFlowVel",  // message name
  9,  // number of fields
  sizeof(px4_msgs::msg::VehicleOpticalFlowVel),
  VehicleOpticalFlowVel_message_member_array,  // message members
  VehicleOpticalFlowVel_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleOpticalFlowVel_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VehicleOpticalFlowVel_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VehicleOpticalFlowVel_message_members,
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
get_message_type_support_handle<px4_msgs::msg::VehicleOpticalFlowVel>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleOpticalFlowVel_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, VehicleOpticalFlowVel)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleOpticalFlowVel_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
