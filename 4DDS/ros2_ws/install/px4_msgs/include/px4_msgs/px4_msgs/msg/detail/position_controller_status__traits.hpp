// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PositionControllerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/position_controller_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PositionControllerStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: nav_roll
  {
    out << "nav_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_roll, out);
    out << ", ";
  }

  // member: nav_pitch
  {
    out << "nav_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_pitch, out);
    out << ", ";
  }

  // member: nav_bearing
  {
    out << "nav_bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_bearing, out);
    out << ", ";
  }

  // member: target_bearing
  {
    out << "target_bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.target_bearing, out);
    out << ", ";
  }

  // member: xtrack_error
  {
    out << "xtrack_error: ";
    rosidl_generator_traits::value_to_yaml(msg.xtrack_error, out);
    out << ", ";
  }

  // member: wp_dist
  {
    out << "wp_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.wp_dist, out);
    out << ", ";
  }

  // member: acceptance_radius
  {
    out << "acceptance_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.acceptance_radius, out);
    out << ", ";
  }

  // member: yaw_acceptance
  {
    out << "yaw_acceptance: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_acceptance, out);
    out << ", ";
  }

  // member: altitude_acceptance
  {
    out << "altitude_acceptance: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_acceptance, out);
    out << ", ";
  }

  // member: type
  {
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionControllerStatus & msg,
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

  // member: nav_roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_roll: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_roll, out);
    out << "\n";
  }

  // member: nav_pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_pitch, out);
    out << "\n";
  }

  // member: nav_bearing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_bearing, out);
    out << "\n";
  }

  // member: target_bearing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.target_bearing, out);
    out << "\n";
  }

  // member: xtrack_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "xtrack_error: ";
    rosidl_generator_traits::value_to_yaml(msg.xtrack_error, out);
    out << "\n";
  }

  // member: wp_dist
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wp_dist: ";
    rosidl_generator_traits::value_to_yaml(msg.wp_dist, out);
    out << "\n";
  }

  // member: acceptance_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceptance_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.acceptance_radius, out);
    out << "\n";
  }

  // member: yaw_acceptance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_acceptance: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_acceptance, out);
    out << "\n";
  }

  // member: altitude_acceptance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_acceptance: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_acceptance, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    rosidl_generator_traits::value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionControllerStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::PositionControllerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::PositionControllerStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::PositionControllerStatus>()
{
  return "px4_msgs::msg::PositionControllerStatus";
}

template<>
inline const char * name<px4_msgs::msg::PositionControllerStatus>()
{
  return "px4_msgs/msg/PositionControllerStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::PositionControllerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PositionControllerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::PositionControllerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_STATUS__TRAITS_HPP_
