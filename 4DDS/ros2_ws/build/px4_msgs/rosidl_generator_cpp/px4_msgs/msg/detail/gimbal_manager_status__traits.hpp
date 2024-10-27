// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/GimbalManagerStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/gimbal_manager_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GimbalManagerStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: flags
  {
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << ", ";
  }

  // member: gimbal_device_id
  {
    out << "gimbal_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gimbal_device_id, out);
    out << ", ";
  }

  // member: primary_control_sysid
  {
    out << "primary_control_sysid: ";
    rosidl_generator_traits::value_to_yaml(msg.primary_control_sysid, out);
    out << ", ";
  }

  // member: primary_control_compid
  {
    out << "primary_control_compid: ";
    rosidl_generator_traits::value_to_yaml(msg.primary_control_compid, out);
    out << ", ";
  }

  // member: secondary_control_sysid
  {
    out << "secondary_control_sysid: ";
    rosidl_generator_traits::value_to_yaml(msg.secondary_control_sysid, out);
    out << ", ";
  }

  // member: secondary_control_compid
  {
    out << "secondary_control_compid: ";
    rosidl_generator_traits::value_to_yaml(msg.secondary_control_compid, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GimbalManagerStatus & msg,
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

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << "\n";
  }

  // member: gimbal_device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gimbal_device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.gimbal_device_id, out);
    out << "\n";
  }

  // member: primary_control_sysid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "primary_control_sysid: ";
    rosidl_generator_traits::value_to_yaml(msg.primary_control_sysid, out);
    out << "\n";
  }

  // member: primary_control_compid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "primary_control_compid: ";
    rosidl_generator_traits::value_to_yaml(msg.primary_control_compid, out);
    out << "\n";
  }

  // member: secondary_control_sysid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secondary_control_sysid: ";
    rosidl_generator_traits::value_to_yaml(msg.secondary_control_sysid, out);
    out << "\n";
  }

  // member: secondary_control_compid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "secondary_control_compid: ";
    rosidl_generator_traits::value_to_yaml(msg.secondary_control_compid, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GimbalManagerStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::GimbalManagerStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::GimbalManagerStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::GimbalManagerStatus>()
{
  return "px4_msgs::msg::GimbalManagerStatus";
}

template<>
inline const char * name<px4_msgs::msg::GimbalManagerStatus>()
{
  return "px4_msgs/msg/GimbalManagerStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::GimbalManagerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::GimbalManagerStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::GimbalManagerStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_STATUS__TRAITS_HPP_
