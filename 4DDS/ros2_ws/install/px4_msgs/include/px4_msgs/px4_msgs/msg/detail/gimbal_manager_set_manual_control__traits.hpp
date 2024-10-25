// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/GimbalManagerSetManualControl.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_MANUAL_CONTROL__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_MANUAL_CONTROL__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/gimbal_manager_set_manual_control__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GimbalManagerSetManualControl & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: origin_sysid
  {
    out << "origin_sysid: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_sysid, out);
    out << ", ";
  }

  // member: origin_compid
  {
    out << "origin_compid: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_compid, out);
    out << ", ";
  }

  // member: target_system
  {
    out << "target_system: ";
    rosidl_generator_traits::value_to_yaml(msg.target_system, out);
    out << ", ";
  }

  // member: target_component
  {
    out << "target_component: ";
    rosidl_generator_traits::value_to_yaml(msg.target_component, out);
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

  // member: pitch
  {
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: pitch_rate
  {
    out << "pitch_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rate, out);
    out << ", ";
  }

  // member: yaw_rate
  {
    out << "yaw_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GimbalManagerSetManualControl & msg,
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

  // member: origin_sysid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_sysid: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_sysid, out);
    out << "\n";
  }

  // member: origin_compid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "origin_compid: ";
    rosidl_generator_traits::value_to_yaml(msg.origin_compid, out);
    out << "\n";
  }

  // member: target_system
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_system: ";
    rosidl_generator_traits::value_to_yaml(msg.target_system, out);
    out << "\n";
  }

  // member: target_component
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "target_component: ";
    rosidl_generator_traits::value_to_yaml(msg.target_component, out);
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

  // member: pitch
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch, out);
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

  // member: pitch_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_rate, out);
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GimbalManagerSetManualControl & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::GimbalManagerSetManualControl & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::GimbalManagerSetManualControl & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::GimbalManagerSetManualControl>()
{
  return "px4_msgs::msg::GimbalManagerSetManualControl";
}

template<>
inline const char * name<px4_msgs::msg::GimbalManagerSetManualControl>()
{
  return "px4_msgs/msg/GimbalManagerSetManualControl";
}

template<>
struct has_fixed_size<px4_msgs::msg::GimbalManagerSetManualControl>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::GimbalManagerSetManualControl>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::GimbalManagerSetManualControl>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_MANAGER_SET_MANUAL_CONTROL__TRAITS_HPP_
