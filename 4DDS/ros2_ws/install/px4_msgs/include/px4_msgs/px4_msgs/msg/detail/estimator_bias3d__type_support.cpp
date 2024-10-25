// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EstimatorBias3d.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/estimator_bias3d__struct.hpp"
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

void EstimatorBias3d_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::EstimatorBias3d(_init);
}

void EstimatorBias3d_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::EstimatorBias3d *>(message_memory);
  typed_message->~EstimatorBias3d();
}

size_t size_function__EstimatorBias3d__bias(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorBias3d__bias(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorBias3d__bias(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__EstimatorBias3d__bias(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__EstimatorBias3d__bias(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__EstimatorBias3d__bias(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__EstimatorBias3d__bias(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__EstimatorBias3d__bias_var(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorBias3d__bias_var(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorBias3d__bias_var(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__EstimatorBias3d__bias_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__EstimatorBias3d__bias_var(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__EstimatorBias3d__bias_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__EstimatorBias3d__bias_var(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__EstimatorBias3d__innov(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorBias3d__innov(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorBias3d__innov(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__EstimatorBias3d__innov(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__EstimatorBias3d__innov(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__EstimatorBias3d__innov(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__EstimatorBias3d__innov(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__EstimatorBias3d__innov_var(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorBias3d__innov_var(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorBias3d__innov_var(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__EstimatorBias3d__innov_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__EstimatorBias3d__innov_var(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__EstimatorBias3d__innov_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__EstimatorBias3d__innov_var(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__EstimatorBias3d__innov_test_ratio(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__EstimatorBias3d__innov_test_ratio(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorBias3d__innov_test_ratio(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__EstimatorBias3d__innov_test_ratio(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__EstimatorBias3d__innov_test_ratio(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__EstimatorBias3d__innov_test_ratio(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__EstimatorBias3d__innov_test_ratio(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EstimatorBias3d_message_member_array[8] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorBias3d, timestamp),  // bytes offset in struct
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
    offsetof(px4_msgs::msg::EstimatorBias3d, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "device_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorBias3d, device_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bias",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorBias3d, bias),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorBias3d__bias,  // size() function pointer
    get_const_function__EstimatorBias3d__bias,  // get_const(index) function pointer
    get_function__EstimatorBias3d__bias,  // get(index) function pointer
    fetch_function__EstimatorBias3d__bias,  // fetch(index, &value) function pointer
    assign_function__EstimatorBias3d__bias,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bias_var",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorBias3d, bias_var),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorBias3d__bias_var,  // size() function pointer
    get_const_function__EstimatorBias3d__bias_var,  // get_const(index) function pointer
    get_function__EstimatorBias3d__bias_var,  // get(index) function pointer
    fetch_function__EstimatorBias3d__bias_var,  // fetch(index, &value) function pointer
    assign_function__EstimatorBias3d__bias_var,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "innov",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorBias3d, innov),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorBias3d__innov,  // size() function pointer
    get_const_function__EstimatorBias3d__innov,  // get_const(index) function pointer
    get_function__EstimatorBias3d__innov,  // get(index) function pointer
    fetch_function__EstimatorBias3d__innov,  // fetch(index, &value) function pointer
    assign_function__EstimatorBias3d__innov,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "innov_var",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorBias3d, innov_var),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorBias3d__innov_var,  // size() function pointer
    get_const_function__EstimatorBias3d__innov_var,  // get_const(index) function pointer
    get_function__EstimatorBias3d__innov_var,  // get(index) function pointer
    fetch_function__EstimatorBias3d__innov_var,  // fetch(index, &value) function pointer
    assign_function__EstimatorBias3d__innov_var,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "innov_test_ratio",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorBias3d, innov_test_ratio),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorBias3d__innov_test_ratio,  // size() function pointer
    get_const_function__EstimatorBias3d__innov_test_ratio,  // get_const(index) function pointer
    get_function__EstimatorBias3d__innov_test_ratio,  // get(index) function pointer
    fetch_function__EstimatorBias3d__innov_test_ratio,  // fetch(index, &value) function pointer
    assign_function__EstimatorBias3d__innov_test_ratio,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EstimatorBias3d_message_members = {
  "px4_msgs::msg",  // message namespace
  "EstimatorBias3d",  // message name
  8,  // number of fields
  sizeof(px4_msgs::msg::EstimatorBias3d),
  EstimatorBias3d_message_member_array,  // message members
  EstimatorBias3d_init_function,  // function to initialize message memory (memory has to be allocated)
  EstimatorBias3d_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EstimatorBias3d_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EstimatorBias3d_message_members,
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
get_message_type_support_handle<px4_msgs::msg::EstimatorBias3d>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorBias3d_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, EstimatorBias3d)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorBias3d_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
