// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from gazebo_msgs:msg/WheelSlip.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "gazebo_msgs/msg/detail/wheel_slip__struct.hpp"
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

void WheelSlip_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) gazebo_msgs::msg::WheelSlip(_init);
}

void WheelSlip_fini_function(void * message_memory)
{
  auto typed_message = static_cast<gazebo_msgs::msg::WheelSlip *>(message_memory);
  typed_message->~WheelSlip();
}

size_t size_function__WheelSlip__name(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WheelSlip__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelSlip__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<std::string> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelSlip__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const std::string *>(
    get_const_function__WheelSlip__name(untyped_member, index));
  auto & value = *reinterpret_cast<std::string *>(untyped_value);
  value = item;
}

void assign_function__WheelSlip__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<std::string *>(
    get_function__WheelSlip__name(untyped_member, index));
  const auto & value = *reinterpret_cast<const std::string *>(untyped_value);
  item = value;
}

void resize_function__WheelSlip__name(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<std::string> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WheelSlip__lateral_slip(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WheelSlip__lateral_slip(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelSlip__lateral_slip(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelSlip__lateral_slip(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__WheelSlip__lateral_slip(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__WheelSlip__lateral_slip(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__WheelSlip__lateral_slip(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__WheelSlip__lateral_slip(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__WheelSlip__longitudinal_slip(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__WheelSlip__longitudinal_slip(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__WheelSlip__longitudinal_slip(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__WheelSlip__longitudinal_slip(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__WheelSlip__longitudinal_slip(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__WheelSlip__longitudinal_slip(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__WheelSlip__longitudinal_slip(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__WheelSlip__longitudinal_slip(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember WheelSlip_message_member_array[3] = {
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs::msg::WheelSlip, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelSlip__name,  // size() function pointer
    get_const_function__WheelSlip__name,  // get_const(index) function pointer
    get_function__WheelSlip__name,  // get(index) function pointer
    fetch_function__WheelSlip__name,  // fetch(index, &value) function pointer
    assign_function__WheelSlip__name,  // assign(index, value) function pointer
    resize_function__WheelSlip__name  // resize(index) function pointer
  },
  {
    "lateral_slip",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs::msg::WheelSlip, lateral_slip),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelSlip__lateral_slip,  // size() function pointer
    get_const_function__WheelSlip__lateral_slip,  // get_const(index) function pointer
    get_function__WheelSlip__lateral_slip,  // get(index) function pointer
    fetch_function__WheelSlip__lateral_slip,  // fetch(index, &value) function pointer
    assign_function__WheelSlip__lateral_slip,  // assign(index, value) function pointer
    resize_function__WheelSlip__lateral_slip  // resize(index) function pointer
  },
  {
    "longitudinal_slip",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(gazebo_msgs::msg::WheelSlip, longitudinal_slip),  // bytes offset in struct
    nullptr,  // default value
    size_function__WheelSlip__longitudinal_slip,  // size() function pointer
    get_const_function__WheelSlip__longitudinal_slip,  // get_const(index) function pointer
    get_function__WheelSlip__longitudinal_slip,  // get(index) function pointer
    fetch_function__WheelSlip__longitudinal_slip,  // fetch(index, &value) function pointer
    assign_function__WheelSlip__longitudinal_slip,  // assign(index, value) function pointer
    resize_function__WheelSlip__longitudinal_slip  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers WheelSlip_message_members = {
  "gazebo_msgs::msg",  // message namespace
  "WheelSlip",  // message name
  3,  // number of fields
  sizeof(gazebo_msgs::msg::WheelSlip),
  WheelSlip_message_member_array,  // message members
  WheelSlip_init_function,  // function to initialize message memory (memory has to be allocated)
  WheelSlip_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t WheelSlip_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &WheelSlip_message_members,
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
get_message_type_support_handle<gazebo_msgs::msg::WheelSlip>()
{
  return &::gazebo_msgs::msg::rosidl_typesupport_introspection_cpp::WheelSlip_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, gazebo_msgs, msg, WheelSlip)() {
  return &::gazebo_msgs::msg::rosidl_typesupport_introspection_cpp::WheelSlip_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
