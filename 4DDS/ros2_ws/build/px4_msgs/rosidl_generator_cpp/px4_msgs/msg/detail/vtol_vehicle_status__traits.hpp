// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VtolVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vtol_vehicle_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VtolVehicleStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: vehicle_vtol_state
  {
    out << "vehicle_vtol_state: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_vtol_state, out);
    out << ", ";
  }

  // member: fixed_wing_system_failure
  {
    out << "fixed_wing_system_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_wing_system_failure, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VtolVehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: vehicle_vtol_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_vtol_state: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_vtol_state, out);
    out << "\n";
  }

  // member: fixed_wing_system_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fixed_wing_system_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.fixed_wing_system_failure, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VtolVehicleStatus & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::VtolVehicleStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VtolVehicleStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VtolVehicleStatus>()
{
  return "px4_msgs::msg::VtolVehicleStatus";
}

template<>
inline const char * name<px4_msgs::msg::VtolVehicleStatus>()
{
  return "px4_msgs/msg/VtolVehicleStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::VtolVehicleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VtolVehicleStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VtolVehicleStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__TRAITS_HPP_
