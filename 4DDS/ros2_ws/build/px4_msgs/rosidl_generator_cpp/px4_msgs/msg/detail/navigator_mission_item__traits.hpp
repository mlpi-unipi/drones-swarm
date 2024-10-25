// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/NavigatorMissionItem.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/navigator_mission_item__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NavigatorMissionItem & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: instance_count
  {
    out << "instance_count: ";
    rosidl_generator_traits::value_to_yaml(msg.instance_count, out);
    out << ", ";
  }

  // member: sequence_current
  {
    out << "sequence_current: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_current, out);
    out << ", ";
  }

  // member: nav_cmd
  {
    out << "nav_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_cmd, out);
    out << ", ";
  }

  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: time_inside
  {
    out << "time_inside: ";
    rosidl_generator_traits::value_to_yaml(msg.time_inside, out);
    out << ", ";
  }

  // member: acceptance_radius
  {
    out << "acceptance_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.acceptance_radius, out);
    out << ", ";
  }

  // member: loiter_radius
  {
    out << "loiter_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.loiter_radius, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: frame
  {
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << ", ";
  }

  // member: origin
  {
    out << "origin: ";
    rosidl_generator_traits::value_to_yaml(msg.origin, out);
    out << ", ";
  }

  // member: loiter_exit_xtrack
  {
    out << "loiter_exit_xtrack: ";
    rosidl_generator_traits::value_to_yaml(msg.loiter_exit_xtrack, out);
    out << ", ";
  }

  // member: force_heading
  {
    out << "force_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.force_heading, out);
    out << ", ";
  }

  // member: altitude_is_relative
  {
    out << "altitude_is_relative: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_is_relative, out);
    out << ", ";
  }

  // member: autocontinue
  {
    out << "autocontinue: ";
    rosidl_generator_traits::value_to_yaml(msg.autocontinue, out);
    out << ", ";
  }

  // member: vtol_back_transition
  {
    out << "vtol_back_transition: ";
    rosidl_generator_traits::value_to_yaml(msg.vtol_back_transition, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NavigatorMissionItem & msg,
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

  // member: instance_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "instance_count: ";
    rosidl_generator_traits::value_to_yaml(msg.instance_count, out);
    out << "\n";
  }

  // member: sequence_current
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sequence_current: ";
    rosidl_generator_traits::value_to_yaml(msg.sequence_current, out);
    out << "\n";
  }

  // member: nav_cmd
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nav_cmd: ";
    rosidl_generator_traits::value_to_yaml(msg.nav_cmd, out);
    out << "\n";
  }

  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: time_inside
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_inside: ";
    rosidl_generator_traits::value_to_yaml(msg.time_inside, out);
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

  // member: loiter_radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loiter_radius: ";
    rosidl_generator_traits::value_to_yaml(msg.loiter_radius, out);
    out << "\n";
  }

  // member: yaw
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << "\n";
  }

  // member: frame
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame: ";
    rosidl_generator_traits::value_to_yaml(msg.frame, out);
    out << "\n";
  }

  // member: origin
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin: ";
    rosidl_generator_traits::value_to_yaml(msg.origin, out);
    out << "\n";
  }

  // member: loiter_exit_xtrack
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "loiter_exit_xtrack: ";
    rosidl_generator_traits::value_to_yaml(msg.loiter_exit_xtrack, out);
    out << "\n";
  }

  // member: force_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.force_heading, out);
    out << "\n";
  }

  // member: altitude_is_relative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_is_relative: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_is_relative, out);
    out << "\n";
  }

  // member: autocontinue
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "autocontinue: ";
    rosidl_generator_traits::value_to_yaml(msg.autocontinue, out);
    out << "\n";
  }

  // member: vtol_back_transition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vtol_back_transition: ";
    rosidl_generator_traits::value_to_yaml(msg.vtol_back_transition, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NavigatorMissionItem & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::NavigatorMissionItem & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::NavigatorMissionItem & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::NavigatorMissionItem>()
{
  return "px4_msgs::msg::NavigatorMissionItem";
}

template<>
inline const char * name<px4_msgs::msg::NavigatorMissionItem>()
{
  return "px4_msgs/msg/NavigatorMissionItem";
}

template<>
struct has_fixed_size<px4_msgs::msg::NavigatorMissionItem>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::NavigatorMissionItem>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::NavigatorMissionItem>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__NAVIGATOR_MISSION_ITEM__TRAITS_HPP_
