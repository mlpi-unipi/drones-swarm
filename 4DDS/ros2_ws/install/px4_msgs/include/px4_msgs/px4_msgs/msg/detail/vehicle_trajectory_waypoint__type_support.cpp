// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleTrajectoryWaypoint.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "px4_msgs/msg/detail/vehicle_trajectory_waypoint__struct.hpp"
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

void VehicleTrajectoryWaypoint_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) px4_msgs::msg::VehicleTrajectoryWaypoint(_init);
}

void VehicleTrajectoryWaypoint_fini_function(void * message_memory)
{
  auto typed_message = static_cast<px4_msgs::msg::VehicleTrajectoryWaypoint *>(message_memory);
  typed_message->~VehicleTrajectoryWaypoint();
}

size_t size_function__VehicleTrajectoryWaypoint__waypoints(const void * untyped_member)
{
  (void)untyped_member;
  return 5;
}

const void * get_const_function__VehicleTrajectoryWaypoint__waypoints(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::array<px4_msgs::msg::TrajectoryWaypoint, 5> *>(untyped_member);
  return &member[index];
}

void * get_function__VehicleTrajectoryWaypoint__waypoints(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::array<px4_msgs::msg::TrajectoryWaypoint, 5> *>(untyped_member);
  return &member[index];
}

void fetch_function__VehicleTrajectoryWaypoint__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const px4_msgs::msg::TrajectoryWaypoint *>(
    get_const_function__VehicleTrajectoryWaypoint__waypoints(untyped_member, index));
  auto & value = *reinterpret_cast<px4_msgs::msg::TrajectoryWaypoint *>(untyped_value);
  value = item;
}

void assign_function__VehicleTrajectoryWaypoint__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<px4_msgs::msg::TrajectoryWaypoint *>(
    get_function__VehicleTrajectoryWaypoint__waypoints(untyped_member, index));
  const auto & value = *reinterpret_cast<const px4_msgs::msg::TrajectoryWaypoint *>(untyped_value);
  item = value;
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VehicleTrajectoryWaypoint_message_member_array[3] = {
  {
    "timestamp",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleTrajectoryWaypoint, timestamp),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleTrajectoryWaypoint, type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "waypoints",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<px4_msgs::msg::TrajectoryWaypoint>(),  // members of sub message
    true,  // is array
    5,  // array size
    false,  // is upper bound
    offsetof(px4_msgs::msg::VehicleTrajectoryWaypoint, waypoints),  // bytes offset in struct
    nullptr,  // default value
    size_function__VehicleTrajectoryWaypoint__waypoints,  // size() function pointer
    get_const_function__VehicleTrajectoryWaypoint__waypoints,  // get_const(index) function pointer
    get_function__VehicleTrajectoryWaypoint__waypoints,  // get(index) function pointer
    fetch_function__VehicleTrajectoryWaypoint__waypoints,  // fetch(index, &value) function pointer
    assign_function__VehicleTrajectoryWaypoint__waypoints,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VehicleTrajectoryWaypoint_message_members = {
  "px4_msgs::msg",  // message namespace
  "VehicleTrajectoryWaypoint",  // message name
  3,  // number of fields
  sizeof(px4_msgs::msg::VehicleTrajectoryWaypoint),
  VehicleTrajectoryWaypoint_message_member_array,  // message members
  VehicleTrajectoryWaypoint_init_function,  // function to initialize message memory (memory has to be allocated)
  VehicleTrajectoryWaypoint_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VehicleTrajectoryWaypoint_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VehicleTrajectoryWaypoint_message_members,
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
get_message_type_support_handle<px4_msgs::msg::VehicleTrajectoryWaypoint>()
{
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleTrajectoryWaypoint_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, px4_msgs, msg, VehicleTrajectoryWaypoint)() {
  return &::px4_msgs::msg::rosidl_typesupport_introspection_cpp::VehicleTrajectoryWaypoint_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
