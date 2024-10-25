// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/DifferentialDriveSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DIFFERENTIAL_DRIVE_SETPOINT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__DIFFERENTIAL_DRIVE_SETPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/differential_drive_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const DifferentialDriveSetpoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: speed
  {
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << ", ";
  }

  // member: closed_loop_speed_control
  {
    out << "closed_loop_speed_control: ";
    rosidl_generator_traits::value_to_yaml(msg.closed_loop_speed_control, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << ", ";
  }

  // member: closed_loop_yaw_rate_control
  {
    out << "closed_loop_yaw_rate_control: ";
    rosidl_generator_traits::value_to_yaml(msg.closed_loop_yaw_rate_control, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const DifferentialDriveSetpoint & msg,
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

  // member: speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "speed: ";
    rosidl_generator_traits::value_to_yaml(msg.speed, out);
    out << "\n";
  }

  // member: closed_loop_speed_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "closed_loop_speed_control: ";
    rosidl_generator_traits::value_to_yaml(msg.closed_loop_speed_control, out);
    out << "\n";
  }

  // member: yaw_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
    out << "\n";
  }

  // member: closed_loop_yaw_rate_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "closed_loop_yaw_rate_control: ";
    rosidl_generator_traits::value_to_yaml(msg.closed_loop_yaw_rate_control, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const DifferentialDriveSetpoint & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::DifferentialDriveSetpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::DifferentialDriveSetpoint & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::DifferentialDriveSetpoint>()
{
  return "px4_msgs::msg::DifferentialDriveSetpoint";
}

template<>
inline const char * name<px4_msgs::msg::DifferentialDriveSetpoint>()
{
  return "px4_msgs/msg/DifferentialDriveSetpoint";
}

template<>
struct has_fixed_size<px4_msgs::msg::DifferentialDriveSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::DifferentialDriveSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::DifferentialDriveSetpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__DIFFERENTIAL_DRIVE_SETPOINT__TRAITS_HPP_
