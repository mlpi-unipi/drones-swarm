// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RateCtrlStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/rate_ctrl_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RateCtrlStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: rollspeed_integ
  {
    out << "rollspeed_integ: ";
    rosidl_generator_traits::value_to_yaml(msg.rollspeed_integ, out);
    out << ", ";
  }

  // member: pitchspeed_integ
  {
    out << "pitchspeed_integ: ";
    rosidl_generator_traits::value_to_yaml(msg.pitchspeed_integ, out);
    out << ", ";
  }

  // member: yawspeed_integ
  {
    out << "yawspeed_integ: ";
    rosidl_generator_traits::value_to_yaml(msg.yawspeed_integ, out);
    out << ", ";
  }

  // member: wheel_rate_integ
  {
    out << "wheel_rate_integ: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_rate_integ, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RateCtrlStatus & msg,
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

  // member: rollspeed_integ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rollspeed_integ: ";
    rosidl_generator_traits::value_to_yaml(msg.rollspeed_integ, out);
    out << "\n";
  }

  // member: pitchspeed_integ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitchspeed_integ: ";
    rosidl_generator_traits::value_to_yaml(msg.pitchspeed_integ, out);
    out << "\n";
  }

  // member: yawspeed_integ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yawspeed_integ: ";
    rosidl_generator_traits::value_to_yaml(msg.yawspeed_integ, out);
    out << "\n";
  }

  // member: wheel_rate_integ
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wheel_rate_integ: ";
    rosidl_generator_traits::value_to_yaml(msg.wheel_rate_integ, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RateCtrlStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::RateCtrlStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::RateCtrlStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::RateCtrlStatus>()
{
  return "px4_msgs::msg::RateCtrlStatus";
}

template<>
inline const char * name<px4_msgs::msg::RateCtrlStatus>()
{
  return "px4_msgs/msg/RateCtrlStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::RateCtrlStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RateCtrlStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RateCtrlStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__RATE_CTRL_STATUS__TRAITS_HPP_
