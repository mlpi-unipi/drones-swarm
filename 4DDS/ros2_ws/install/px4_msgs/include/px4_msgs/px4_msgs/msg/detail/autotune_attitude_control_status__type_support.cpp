// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/AutotuneAttitudeControlStatus.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/autotune_attitude_control_status__struct.hpp"
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

void AutotuneAttitudeControlStatus_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::AutotuneAttitudeControlStatus(_init);
}

void AutotuneAttitudeControlStatus_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::AutotuneAttitudeControlStatus *>(message_memory);
  typed_message->~AutotuneAttitudeControlStatus();
}

size_t size_function__AutotuneAttitudeControlStatus__coeff(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__AutotuneAttitudeControlStatus__coeff(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__AutotuneAttitudeControlStatus__coeff(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__AutotuneAttitudeControlStatus__coeff(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AutotuneAttitudeControlStatus__coeff(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AutotuneAttitudeControlStatus__coeff(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AutotuneAttitudeControlStatus__coeff(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__AutotuneAttitudeControlStatus__coeff_var(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__AutotuneAttitudeControlStatus__coeff_var(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__AutotuneAttitudeControlStatus__coeff_var(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__AutotuneAttitudeControlStatus__coeff_var(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AutotuneAttitudeControlStatus__coeff_var(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AutotuneAttitudeControlStatus__coeff_var(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AutotuneAttitudeControlStatus__coeff_var(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

size_t size_function__AutotuneAttitudeControlStatus__rate_sp(const void * untyped_member)
{
  (void)untyped_member;
  return 3;
}

const void * get_const_function__AutotuneAttitudeControlStatus__rate_sp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void * get_function__AutotuneAttitudeControlStatus__rate_sp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<float, 3> *>(untyped_member);
  return &member[index];
}

void fetch_function__AutotuneAttitudeControlStatus__rate_sp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const float *>(
    get_const_function__AutotuneAttitudeControlStatus__rate_sp(untyped_member, index));
  auto & value = *reinterpret_cast<float *>(untyped_value);
  value = item;
}

void assign_function__AutotuneAttitudeControlStatus__rate_sp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<float *>(
    get_function__AutotuneAttitudeControlStatus__rate_sp(untyped_member, index));
  const auto & value = *reinterpret_cast<const float *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember AutotuneAttitudeControlStatus_message_member_array[15] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "coeff",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, coeff),  // bytes offset in struct
    nullptr,  // default value
    size_function__AutotuneAttitudeControlStatus__coeff,  // size() function pointer
    get_const_function__AutotuneAttitudeControlStatus__coeff,  // get_const(index) function pointer
    get_function__AutotuneAttitudeControlStatus__coeff,  // get(index) function pointer
    fetch_function__AutotuneAttitudeControlStatus__coeff,  // fetch(index, &value) function pointer
    assign_function__AutotuneAttitudeControlStatus__coeff,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "coeff_var",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, coeff_var),  // bytes offset in struct
    nullptr,  // default value
    size_function__AutotuneAttitudeControlStatus__coeff_var,  // size() function pointer
    get_const_function__AutotuneAttitudeControlStatus__coeff_var,  // get_const(index) function pointer
    get_function__AutotuneAttitudeControlStatus__coeff_var,  // get(index) function pointer
    fetch_function__AutotuneAttitudeControlStatus__coeff_var,  // fetch(index, &value) function pointer
    assign_function__AutotuneAttitudeControlStatus__coeff_var,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "fitness",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, fitness),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "innov",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, innov),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "dt_model",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, dt_model),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kc",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, kc),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "ki",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, ki),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kd",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, kd),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "kff",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, kff),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "att_p",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, att_p),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "rate_sp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    3,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, rate_sp),  // bytes offset in struct
    nullptr,  // default value
    size_function__AutotuneAttitudeControlStatus__rate_sp,  // size() function pointer
    get_const_function__AutotuneAttitudeControlStatus__rate_sp,  // get_const(index) function pointer
    get_function__AutotuneAttitudeControlStatus__rate_sp,  // get(index) function pointer
    fetch_function__AutotuneAttitudeControlStatus__rate_sp,  // fetch(index, &value) function pointer
    assign_function__AutotuneAttitudeControlStatus__rate_sp,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "u_filt",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, u_filt),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "y_filt",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, y_filt),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::AutotuneAttitudeControlStatus, state),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers AutotuneAttitudeControlStatus_message_members = {
  "px4_msgs::msg",  // message namespace
  "AutotuneAttitudeControlStatus",  // message name
  15,  // number of fields
  sizeof(px4_msgs::msg::AutotuneAttitudeControlStatus),
  AutotuneAttitudeControlStatus_message_member_array,  // message members
  AutotuneAttitudeControlStatus_init_function,  // function to initialize message memory (memory has to be allocated)
  AutotuneAttitudeControlStatus_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t AutotuneAttitudeControlStatus_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &AutotuneAttitudeControlStatus_message_members,
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
get_message_type_support_handle<px4_msgs::msg::AutotuneAttitudeControlStatus>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::AutotuneAttitudeControlStatus_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, AutotuneAttitudeControlStatus)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::AutotuneAttitudeControlStatus_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
