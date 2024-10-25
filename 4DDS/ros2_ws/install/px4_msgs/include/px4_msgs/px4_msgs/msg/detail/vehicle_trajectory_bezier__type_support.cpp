// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleTrajectoryBezier.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/vehicle_trajectory_bezier__struct.hpp"
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

void VehicleTrajectoryBezier_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::VehicleTrajectoryBezier(_init);
}

void VehicleTrajectoryBezier_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::VehicleTrajectoryBezier *>(message_memory);
  typed_message->~VehicleTrajectoryBezier();
}

size_t size_function__VehicleTrajectoryBezier__control_points(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__VehicleTrajectoryBezier__control_points(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<px4_msgs::msg::TrajectoryBezier, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleTrajectoryBezier__control_points(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<px4_msgs::msg::TrajectoryBezier, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__VehicleTrajectoryBezier__control_points(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const px4_msgs::msg::TrajectoryBezier *>(
    get_const_function__VehicleTrajectoryBezier__control_points(untyped_member, index));
  auto & value = *reinterpret_cast<px4_msgs::msg::TrajectoryBezier *>(untyped_value);
  value = item;
}

void assign_function__VehicleTrajectoryBezier__control_points(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<px4_msgs::msg::TrajectoryBezier *>(
    get_function__VehicleTrajectoryBezier__control_points(untyped_member, index));
  const auto & value = *reinterpret_cast<const px4_msgs::msg::TrajectoryBezier *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VehicleTrajectoryBezier_message_member_array[3] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleTrajectoryBezier, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "control_points",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<px4_msgs::msg::TrajectoryBezier>(),  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleTrajectoryBezier, control_points),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleTrajectoryBezier__control_points,  // size() function pointer
    get_const_function__VehicleTrajectoryBezier__control_points,  // get_const(index) function pointer
    get_function__VehicleTrajectoryBezier__control_points,  // get(index) function pointer
    fetch_function__VehicleTrajectoryBezier__control_points,  // fetch(index, &value) function pointer
    assign_function__VehicleTrajectoryBezier__control_points,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "bezier_order",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleTrajectoryBezier, bezier_order),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VehicleTrajectoryBezier_message_members = {
  "px4_msgs::msg",  // message namespace
  "VehicleTrajectoryBezier",  // message name
  3,  // number of fields
  sizeof(px4_msgs::msg::VehicleTrajectoryBezier),
  VehicleTrajectoryBezier_message_member_array,  // message members
  VehicleTrajectoryBezier_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleTrajectoryBezier_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VehicleTrajectoryBezier_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VehicleTrajectoryBezier_message_members,
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
get_message_type_support_handle<px4_msgs::msg::VehicleTrajectoryBezier>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleTrajectoryBezier_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, VehicleTrajectoryBezier)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleTrajectoryBezier_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
