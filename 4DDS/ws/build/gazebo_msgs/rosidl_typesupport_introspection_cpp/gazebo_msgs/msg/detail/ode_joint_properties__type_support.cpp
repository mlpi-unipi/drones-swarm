// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gazebo_msgs:msg/ODEJointProperties.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gazebo_msgs/msg/detail/ode_joint_properties__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace gazebo_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void ODEJointProperties_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gazebo_msgs::msg::ODEJointProperties(_init);
}

void ODEJointProperties_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gazebo_msgs::msg::ODEJointProperties *>(message_memory);
  typed_message->~ODEJointProperties();
}

size_t size_function__ODEJointProperties__damping(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ODEJointProperties__damping(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ODEJointProperties__damping(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ODEJointProperties__damping(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ODEJointProperties__damping(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ODEJointProperties__damping(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ODEJointProperties__damping(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ODEJointProperties__damping(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ODEJointProperties__hi_stop(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ODEJointProperties__hi_stop(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ODEJointProperties__hi_stop(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ODEJointProperties__hi_stop(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ODEJointProperties__hi_stop(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ODEJointProperties__hi_stop(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ODEJointProperties__hi_stop(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ODEJointProperties__hi_stop(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ODEJointProperties__lo_stop(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ODEJointProperties__lo_stop(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ODEJointProperties__lo_stop(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ODEJointProperties__lo_stop(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ODEJointProperties__lo_stop(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ODEJointProperties__lo_stop(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ODEJointProperties__lo_stop(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ODEJointProperties__lo_stop(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ODEJointProperties__erp(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ODEJointProperties__erp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ODEJointProperties__erp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ODEJointProperties__erp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ODEJointProperties__erp(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ODEJointProperties__erp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ODEJointProperties__erp(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ODEJointProperties__erp(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ODEJointProperties__cfm(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ODEJointProperties__cfm(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ODEJointProperties__cfm(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ODEJointProperties__cfm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ODEJointProperties__cfm(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ODEJointProperties__cfm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ODEJointProperties__cfm(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ODEJointProperties__cfm(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ODEJointProperties__stop_erp(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ODEJointProperties__stop_erp(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ODEJointProperties__stop_erp(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ODEJointProperties__stop_erp(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ODEJointProperties__stop_erp(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ODEJointProperties__stop_erp(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ODEJointProperties__stop_erp(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ODEJointProperties__stop_erp(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ODEJointProperties__stop_cfm(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ODEJointProperties__stop_cfm(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ODEJointProperties__stop_cfm(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ODEJointProperties__stop_cfm(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ODEJointProperties__stop_cfm(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ODEJointProperties__stop_cfm(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ODEJointProperties__stop_cfm(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ODEJointProperties__stop_cfm(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ODEJointProperties__fudge_factor(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ODEJointProperties__fudge_factor(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ODEJointProperties__fudge_factor(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ODEJointProperties__fudge_factor(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ODEJointProperties__fudge_factor(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ODEJointProperties__fudge_factor(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ODEJointProperties__fudge_factor(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ODEJointProperties__fudge_factor(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ODEJointProperties__fmax(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ODEJointProperties__fmax(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ODEJointProperties__fmax(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ODEJointProperties__fmax(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ODEJointProperties__fmax(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ODEJointProperties__fmax(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ODEJointProperties__fmax(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ODEJointProperties__fmax(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__ODEJointProperties__vel(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__ODEJointProperties__vel(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__ODEJointProperties__vel(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__ODEJointProperties__vel(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__ODEJointProperties__vel(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__ODEJointProperties__vel(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__ODEJointProperties__vel(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__ODEJointProperties__vel(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember ODEJointProperties_message_member_array[10] = {
  {
    "damping",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs::msg::ODEJointProperties, damping),  // bytes offset in struct
    nullptr,  // default value
    size_function__ODEJointProperties__damping,  // size() function pointer
    get_const_function__ODEJointProperties__damping,  // get_const(index) function pointer
    get_function__ODEJointProperties__damping,  // get(index) function pointer
    fetch_function__ODEJointProperties__damping,  // fetch(index, &value) function pointer
    assign_function__ODEJointProperties__damping,  // assign(index, value) function pointer
    resize_function__ODEJointProperties__damping  // resize(index) function pointer
  },
  {
    "hi_stop",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs::msg::ODEJointProperties, hi_stop),  // bytes offset in struct
    nullptr,  // default value
    size_function__ODEJointProperties__hi_stop,  // size() function pointer
    get_const_function__ODEJointProperties__hi_stop,  // get_const(index) function pointer
    get_function__ODEJointProperties__hi_stop,  // get(index) function pointer
    fetch_function__ODEJointProperties__hi_stop,  // fetch(index, &value) function pointer
    assign_function__ODEJointProperties__hi_stop,  // assign(index, value) function pointer
    resize_function__ODEJointProperties__hi_stop  // resize(index) function pointer
  },
  {
    "lo_stop",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs::msg::ODEJointProperties, lo_stop),  // bytes offset in struct
    nullptr,  // default value
    size_function__ODEJointProperties__lo_stop,  // size() function pointer
    get_const_function__ODEJointProperties__lo_stop,  // get_const(index) function pointer
    get_function__ODEJointProperties__lo_stop,  // get(index) function pointer
    fetch_function__ODEJointProperties__lo_stop,  // fetch(index, &value) function pointer
    assign_function__ODEJointProperties__lo_stop,  // assign(index, value) function pointer
    resize_function__ODEJointProperties__lo_stop  // resize(index) function pointer
  },
  {
    "erp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs::msg::ODEJointProperties, erp),  // bytes offset in struct
    nullptr,  // default value
    size_function__ODEJointProperties__erp,  // size() function pointer
    get_const_function__ODEJointProperties__erp,  // get_const(index) function pointer
    get_function__ODEJointProperties__erp,  // get(index) function pointer
    fetch_function__ODEJointProperties__erp,  // fetch(index, &value) function pointer
    assign_function__ODEJointProperties__erp,  // assign(index, value) function pointer
    resize_function__ODEJointProperties__erp  // resize(index) function pointer
  },
  {
    "cfm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs::msg::ODEJointProperties, cfm),  // bytes offset in struct
    nullptr,  // default value
    size_function__ODEJointProperties__cfm,  // size() function pointer
    get_const_function__ODEJointProperties__cfm,  // get_const(index) function pointer
    get_function__ODEJointProperties__cfm,  // get(index) function pointer
    fetch_function__ODEJointProperties__cfm,  // fetch(index, &value) function pointer
    assign_function__ODEJointProperties__cfm,  // assign(index, value) function pointer
    resize_function__ODEJointProperties__cfm  // resize(index) function pointer
  },
  {
    "stop_erp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs::msg::ODEJointProperties, stop_erp),  // bytes offset in struct
    nullptr,  // default value
    size_function__ODEJointProperties__stop_erp,  // size() function pointer
    get_const_function__ODEJointProperties__stop_erp,  // get_const(index) function pointer
    get_function__ODEJointProperties__stop_erp,  // get(index) function pointer
    fetch_function__ODEJointProperties__stop_erp,  // fetch(index, &value) function pointer
    assign_function__ODEJointProperties__stop_erp,  // assign(index, value) function pointer
    resize_function__ODEJointProperties__stop_erp  // resize(index) function pointer
  },
  {
    "stop_cfm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs::msg::ODEJointProperties, stop_cfm),  // bytes offset in struct
    nullptr,  // default value
    size_function__ODEJointProperties__stop_cfm,  // size() function pointer
    get_const_function__ODEJointProperties__stop_cfm,  // get_const(index) function pointer
    get_function__ODEJointProperties__stop_cfm,  // get(index) function pointer
    fetch_function__ODEJointProperties__stop_cfm,  // fetch(index, &value) function pointer
    assign_function__ODEJointProperties__stop_cfm,  // assign(index, value) function pointer
    resize_function__ODEJointProperties__stop_cfm  // resize(index) function pointer
  },
  {
    "fudge_factor",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs::msg::ODEJointProperties, fudge_factor),  // bytes offset in struct
    nullptr,  // default value
    size_function__ODEJointProperties__fudge_factor,  // size() function pointer
    get_const_function__ODEJointProperties__fudge_factor,  // get_const(index) function pointer
    get_function__ODEJointProperties__fudge_factor,  // get(index) function pointer
    fetch_function__ODEJointProperties__fudge_factor,  // fetch(index, &value) function pointer
    assign_function__ODEJointProperties__fudge_factor,  // assign(index, value) function pointer
    resize_function__ODEJointProperties__fudge_factor  // resize(index) function pointer
  },
  {
    "fmax",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs::msg::ODEJointProperties, fmax),  // bytes offset in struct
    nullptr,  // default value
    size_function__ODEJointProperties__fmax,  // size() function pointer
    get_const_function__ODEJointProperties__fmax,  // get_const(index) function pointer
    get_function__ODEJointProperties__fmax,  // get(index) function pointer
    fetch_function__ODEJointProperties__fmax,  // fetch(index, &value) function pointer
    assign_function__ODEJointProperties__fmax,  // assign(index, value) function pointer
    resize_function__ODEJointProperties__fmax  // resize(index) function pointer
  },
  {
    "vel",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs::msg::ODEJointProperties, vel),  // bytes offset in struct
    nullptr,  // default value
    size_function__ODEJointProperties__vel,  // size() function pointer
    get_const_function__ODEJointProperties__vel,  // get_const(index) function pointer
    get_function__ODEJointProperties__vel,  // get(index) function pointer
    fetch_function__ODEJointProperties__vel,  // fetch(index, &value) function pointer
    assign_function__ODEJointProperties__vel,  // assign(index, value) function pointer
    resize_function__ODEJointProperties__vel  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers ODEJointProperties_message_members = {
  "gazebo_msgs::msg",  // message namespace
  "ODEJointProperties",  // message name
  10,  // number of fields
  sizeof(gazebo_msgs::msg::ODEJointProperties),
  ODEJointProperties_message_member_array,  // message members
  ODEJointProperties_init_function,  // function to initialize message memory (memory has to be allocated)
  ODEJointProperties_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t ODEJointProperties_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &ODEJointProperties_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace gazebo_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<gazebo_msgs::msg::ODEJointProperties>()
{
  return &::gazebo_msgs::msg::rosidl_typesupport_introspection_cpp::ODEJointProperties_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gazebo_msgs, msg, ODEJointProperties)() {
  return &::gazebo_msgs::msg::rosidl_typesupport_introspection_cpp::ODEJointProperties_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
