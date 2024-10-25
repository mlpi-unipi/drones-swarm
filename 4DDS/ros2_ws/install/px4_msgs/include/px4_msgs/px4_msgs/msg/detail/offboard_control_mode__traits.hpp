// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/OffboardControlMode.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OFFBOARD_CONTROL_MODE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__OFFBOARD_CONTROL_MODE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/offboard_control_mode__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const OffboardControlMode & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: position
  {
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << ", ";
  }

  // member: velocity
  {
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << ", ";
  }

  // member: acceleration
  {
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << ", ";
  }

  // member: attitude
  {
    out << "attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude, out);
    out << ", ";
  }

  // member: body_rate
  {
    out << "body_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.body_rate, out);
    out << ", ";
  }

  // member: thrust_and_torque
  {
    out << "thrust_and_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust_and_torque, out);
    out << ", ";
  }

  // member: direct_actuator
  {
    out << "direct_actuator: ";
    rosidl_generator_traits::value_to_yaml(msg.direct_actuator, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const OffboardControlMode & msg,
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

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    rosidl_generator_traits::value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.velocity, out);
    out << "\n";
  }

  // member: acceleration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "acceleration: ";
    rosidl_generator_traits::value_to_yaml(msg.acceleration, out);
    out << "\n";
  }

  // member: attitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attitude: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude, out);
    out << "\n";
  }

  // member: body_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "body_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.body_rate, out);
    out << "\n";
  }

  // member: thrust_and_torque
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "thrust_and_torque: ";
    rosidl_generator_traits::value_to_yaml(msg.thrust_and_torque, out);
    out << "\n";
  }

  // member: direct_actuator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "direct_actuator: ";
    rosidl_generator_traits::value_to_yaml(msg.direct_actuator, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const OffboardControlMode & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::OffboardControlMode & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::OffboardControlMode & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::OffboardControlMode>()
{
  return "px4_msgs::msg::OffboardControlMode";
}

template<>
inline const char * name<px4_msgs::msg::OffboardControlMode>()
{
  return "px4_msgs/msg/OffboardControlMode";
}

template<>
struct has_fixed_size<px4_msgs::msg::OffboardControlMode>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::OffboardControlMode>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::OffboardControlMode>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__OFFBOARD_CONTROL_MODE__TRAITS_HPP_
