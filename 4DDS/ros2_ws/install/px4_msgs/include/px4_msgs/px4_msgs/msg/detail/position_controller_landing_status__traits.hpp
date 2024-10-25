// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/PositionControllerLandingStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/position_controller_landing_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const PositionControllerLandingStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: lateral_touchdown_offset
  {
    out << "lateral_touchdown_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_touchdown_offset, out);
    out << ", ";
  }

  // member: flaring
  {
    out << "flaring: ";
    rosidl_generator_traits::value_to_yaml(msg.flaring, out);
    out << ", ";
  }

  // member: abort_status
  {
    out << "abort_status: ";
    rosidl_generator_traits::value_to_yaml(msg.abort_status, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const PositionControllerLandingStatus & msg,
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

  // member: lateral_touchdown_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lateral_touchdown_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.lateral_touchdown_offset, out);
    out << "\n";
  }

  // member: flaring
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flaring: ";
    rosidl_generator_traits::value_to_yaml(msg.flaring, out);
    out << "\n";
  }

  // member: abort_status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "abort_status: ";
    rosidl_generator_traits::value_to_yaml(msg.abort_status, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const PositionControllerLandingStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::PositionControllerLandingStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::PositionControllerLandingStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::PositionControllerLandingStatus>()
{
  return "px4_msgs::msg::PositionControllerLandingStatus";
}

template<>
inline const char * name<px4_msgs::msg::PositionControllerLandingStatus>()
{
  return "px4_msgs/msg/PositionControllerLandingStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::PositionControllerLandingStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::PositionControllerLandingStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::PositionControllerLandingStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__TRAITS_HPP_
