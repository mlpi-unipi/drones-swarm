// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/YawEstimatorStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/yaw_estimator_status__struct.hpp"
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

void YawEstimatorStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::YawEstimatorStatus(_init);
}

void YawEstimatorStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::YawEstimatorStatus *>(message_memory);
  typed_message->~YawEstimatorStatus();
}

size_t size_function__YawEstimatorStatus__yaw(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__YawEstimatorStatus__yaw(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__YawEstimatorStatus__yaw(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__YawEstimatorStatus__yaw(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__YawEstimatorStatus__yaw(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__YawEstimatorStatus__yaw(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__YawEstimatorStatus__yaw(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__YawEstimatorStatus__innov_vn(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__YawEstimatorStatus__innov_vn(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__YawEstimatorStatus__innov_vn(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__YawEstimatorStatus__innov_vn(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__YawEstimatorStatus__innov_vn(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__YawEstimatorStatus__innov_vn(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__YawEstimatorStatus__innov_vn(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__YawEstimatorStatus__innov_ve(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__YawEstimatorStatus__innov_ve(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__YawEstimatorStatus__innov_ve(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__YawEstimatorStatus__innov_ve(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__YawEstimatorStatus__innov_ve(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__YawEstimatorStatus__innov_ve(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__YawEstimatorStatus__innov_ve(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__YawEstimatorStatus__weight(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__YawEstimatorStatus__weight(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__YawEstimatorStatus__weight(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__YawEstimatorStatus__weight(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__YawEstimatorStatus__weight(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__YawEstimatorStatus__weight(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__YawEstimatorStatus__weight(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember YawEstimatorStatus_message_member_array[9] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::YawEstimatorStatus, timestamp),  // bytes offset in struct
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
    offsetof(px4_msgs::msg::YawEstimatorStatus, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yaw_composite",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::YawEstimatorStatus, yaw_composite),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yaw_variance",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::YawEstimatorStatus, yaw_variance),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yaw_composite_valid",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::YawEstimatorStatus, yaw_composite_valid),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "yaw",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::YawEstimatorStatus, yaw),  // bytes offset in struct
    nullptr,  // default value
    size_function__YawEstimatorStatus__yaw,  // size() function pointer
    get_const_function__YawEstimatorStatus__yaw,  // get_const(index) function pointer
    get_function__YawEstimatorStatus__yaw,  // get(index) function pointer
    fetch_function__YawEstimatorStatus__yaw,  // fetch(index, &value) function pointer
    assign_function__YawEstimatorStatus__yaw,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "innov_vn",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::YawEstimatorStatus, innov_vn),  // bytes offset in struct
    nullptr,  // default value
    size_function__YawEstimatorStatus__innov_vn,  // size() function pointer
    get_const_function__YawEstimatorStatus__innov_vn,  // get_const(index) function pointer
    get_function__YawEstimatorStatus__innov_vn,  // get(index) function pointer
    fetch_function__YawEstimatorStatus__innov_vn,  // fetch(index, &value) function pointer
    assign_function__YawEstimatorStatus__innov_vn,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "innov_ve",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::YawEstimatorStatus, innov_ve),  // bytes offset in struct
    nullptr,  // default value
    size_function__YawEstimatorStatus__innov_ve,  // size() function pointer
    get_const_function__YawEstimatorStatus__innov_ve,  // get_const(index) function pointer
    get_function__YawEstimatorStatus__innov_ve,  // get(index) function pointer
    fetch_function__YawEstimatorStatus__innov_ve,  // fetch(index, &value) function pointer
    assign_function__YawEstimatorStatus__innov_ve,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "weight",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::YawEstimatorStatus, weight),  // bytes offset in struct
    nullptr,  // default value
    size_function__YawEstimatorStatus__weight,  // size() function pointer
    get_const_function__YawEstimatorStatus__weight,  // get_const(index) function pointer
    get_function__YawEstimatorStatus__weight,  // get(index) function pointer
    fetch_function__YawEstimatorStatus__weight,  // fetch(index, &value) function pointer
    assign_function__YawEstimatorStatus__weight,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers YawEstimatorStatus_message_members = {
  "px4_msgs::msg",  // message namespace
  "YawEstimatorStatus",  // message name
  9,  // number of fields
  sizeof(px4_msgs::msg::YawEstimatorStatus),
  YawEstimatorStatus_message_member_array,  // message members
  YawEstimatorStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  YawEstimatorStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t YawEstimatorStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &YawEstimatorStatus_message_members,
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
get_message_type_support_handle<px4_msgs::msg::YawEstimatorStatus>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::YawEstimatorStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, YawEstimatorStatus)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::YawEstimatorStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
