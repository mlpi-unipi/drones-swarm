// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EstimatorStates.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/estimator_states__struct.hpp"
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

void EstimatorStates_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::EstimatorStates(_init);
}

void EstimatorStates_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::EstimatorStates *>(message_memory);
  typed_message->~EstimatorStates();
}

size_t size_function__EstimatorStates__states(const void * untyped_member)
{
  (void)untyped_member;
  return 24;
}

const void * get_const_function__EstimatorStates__states(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 24> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorStates__states(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 24> *>(untyped_member);
  return &member[index];
}

void fetch_function__EstimatorStates__states(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__EstimatorStates__states(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__EstimatorStates__states(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__EstimatorStates__states(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__EstimatorStates__covariances(const void * untyped_member)
{
  (void)untyped_member;
  return 23;
}

const void * get_const_function__EstimatorStates__covariances(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 23> *>(untyped_member);
  return &member[index];
}

void * get_function__EstimatorStates__covariances(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 23> *>(untyped_member);
  return &member[index];
}

void fetch_function__EstimatorStates__covariances(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__EstimatorStates__covariances(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__EstimatorStates__covariances(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__EstimatorStates__covariances(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember EstimatorStates_message_member_array[5] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorStates, timestamp),  // bytes offset in struct
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
    offsetof(px4_msgs::msg::EstimatorStates, timestamp_sample),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    24,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorStates, states),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorStates__states,  // size() function pointer
    get_const_function__EstimatorStates__states,  // get_const(index) function pointer
    get_function__EstimatorStates__states,  // get(index) function pointer
    fetch_function__EstimatorStates__states,  // fetch(index, &value) function pointer
    assign_function__EstimatorStates__states,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "n_states",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorStates, n_states),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "covariances",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    23,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::EstimatorStates, covariances),  // bytes offset in struct
    nullptr,  // default value
    size_function__EstimatorStates__covariances,  // size() function pointer
    get_const_function__EstimatorStates__covariances,  // get_const(index) function pointer
    get_function__EstimatorStates__covariances,  // get(index) function pointer
    fetch_function__EstimatorStates__covariances,  // fetch(index, &value) function pointer
    assign_function__EstimatorStates__covariances,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers EstimatorStates_message_members = {
  "px4_msgs::msg",  // message namespace
  "EstimatorStates",  // message name
  5,  // number of fields
  sizeof(px4_msgs::msg::EstimatorStates),
  EstimatorStates_message_member_array,  // message members
  EstimatorStates_init_function,  // function to initialize message memory (memory has to be allocated)
  EstimatorStates_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t EstimatorStates_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &EstimatorStates_message_members,
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
get_message_type_support_handle<px4_msgs::msg::EstimatorStates>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorStates_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, EstimatorStates)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::EstimatorStates_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
