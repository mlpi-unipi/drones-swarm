// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/UnregisterExtComponent.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/unregister_ext_component__struct.hpp"
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

void UnregisterExtComponent_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::UnregisterExtComponent(_init);
}

void UnregisterExtComponent_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::UnregisterExtComponent *>(message_memory);
  typed_message->~UnregisterExtComponent();
}

size_t size_function__UnregisterExtComponent__name(const void * untyped_member)
{
  (void)untyped_member;
  return 25;
}

const void * get_const_function__UnregisterExtComponent__name(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<uint8_t, 25> *>(untyped_member);
  return &member[index];
}

void * get_function__UnregisterExtComponent__name(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<uint8_t, 25> *>(untyped_member);
  return &member[index];
}

void fetch_function__UnregisterExtComponent__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint8_t *>(
    get_const_function__UnregisterExtComponent__name(untyped_member, index));
  auto & value = *reinterpret_cast<uint8_t *>(untyped_value);
  value = item;
}

void assign_function__UnregisterExtComponent__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint8_t *>(
    get_function__UnregisterExtComponent__name(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint8_t *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember UnregisterExtComponent_message_member_array[5] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::UnregisterExtComponent, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "name",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    25,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::UnregisterExtComponent, name),  // bytes offset in struct
    nullptr,  // default value
    size_function__UnregisterExtComponent__name,  // size() function pointer
    get_const_function__UnregisterExtComponent__name,  // get_const(index) function pointer
    get_function__UnregisterExtComponent__name,  // get(index) function pointer
    fetch_function__UnregisterExtComponent__name,  // fetch(index, &value) function pointer
    assign_function__UnregisterExtComponent__name,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "arming_check_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::UnregisterExtComponent, arming_check_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mode_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::UnregisterExtComponent, mode_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "mode_executor_id",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::UnregisterExtComponent, mode_executor_id),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers UnregisterExtComponent_message_members = {
  "px4_msgs::msg",  // message namespace
  "UnregisterExtComponent",  // message name
  5,  // number of fields
  sizeof(px4_msgs::msg::UnregisterExtComponent),
  UnregisterExtComponent_message_member_array,  // message members
  UnregisterExtComponent_init_function,  // function to initialize message memory (memory has to be allocated)
  UnregisterExtComponent_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t UnregisterExtComponent_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &UnregisterExtComponent_message_members,
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
get_message_type_support_handle<px4_msgs::msg::UnregisterExtComponent>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::UnregisterExtComponent_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, UnregisterExtComponent)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::UnregisterExtComponent_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
