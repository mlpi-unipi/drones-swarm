// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/ManualControlSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SETPOINT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SETPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/manual_control_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const ManualControlSetpoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_sample
  {
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << ", ";
  }

  // member: valid
  {
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << ", ";
  }

  // member: data_source
  {
    out << "data_source: ";
    rosidl_generator_traits::value_to_yaml(msg.data_source, out);
    out << ", ";
  }

  // member: roll
  {
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
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

  // member: throttle
  {
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << ", ";
  }

  // member: flaps
  {
    out << "flaps: ";
    rosidl_generator_traits::value_to_yaml(msg.flaps, out);
    out << ", ";
  }

  // member: aux1
  {
    out << "aux1: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1, out);
    out << ", ";
  }

  // member: aux2
  {
    out << "aux2: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2, out);
    out << ", ";
  }

  // member: aux3
  {
    out << "aux3: ";
    rosidl_generator_traits::value_to_yaml(msg.aux3, out);
    out << ", ";
  }

  // member: aux4
  {
    out << "aux4: ";
    rosidl_generator_traits::value_to_yaml(msg.aux4, out);
    out << ", ";
  }

  // member: aux5
  {
    out << "aux5: ";
    rosidl_generator_traits::value_to_yaml(msg.aux5, out);
    out << ", ";
  }

  // member: aux6
  {
    out << "aux6: ";
    rosidl_generator_traits::value_to_yaml(msg.aux6, out);
    out << ", ";
  }

  // member: sticks_moving
  {
    out << "sticks_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.sticks_moving, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ManualControlSetpoint & msg,
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

  // member: timestamp_sample
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_sample: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_sample, out);
    out << "\n";
  }

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid: ";
    rosidl_generator_traits::value_to_yaml(msg.valid, out);
    out << "\n";
  }

  // member: data_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "data_source: ";
    rosidl_generator_traits::value_to_yaml(msg.data_source, out);
    out << "\n";
  }

  // member: roll
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll: ";
    rosidl_generator_traits::value_to_yaml(msg.roll, out);
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

  // member: throttle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "throttle: ";
    rosidl_generator_traits::value_to_yaml(msg.throttle, out);
    out << "\n";
  }

  // member: flaps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flaps: ";
    rosidl_generator_traits::value_to_yaml(msg.flaps, out);
    out << "\n";
  }

  // member: aux1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux1: ";
    rosidl_generator_traits::value_to_yaml(msg.aux1, out);
    out << "\n";
  }

  // member: aux2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux2: ";
    rosidl_generator_traits::value_to_yaml(msg.aux2, out);
    out << "\n";
  }

  // member: aux3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux3: ";
    rosidl_generator_traits::value_to_yaml(msg.aux3, out);
    out << "\n";
  }

  // member: aux4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux4: ";
    rosidl_generator_traits::value_to_yaml(msg.aux4, out);
    out << "\n";
  }

  // member: aux5
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux5: ";
    rosidl_generator_traits::value_to_yaml(msg.aux5, out);
    out << "\n";
  }

  // member: aux6
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aux6: ";
    rosidl_generator_traits::value_to_yaml(msg.aux6, out);
    out << "\n";
  }

  // member: sticks_moving
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sticks_moving: ";
    rosidl_generator_traits::value_to_yaml(msg.sticks_moving, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ManualControlSetpoint & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::ManualControlSetpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::ManualControlSetpoint & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::ManualControlSetpoint>()
{
  return "px4_msgs::msg::ManualControlSetpoint";
}

template<>
inline const char * name<px4_msgs::msg::ManualControlSetpoint>()
{
  return "px4_msgs/msg/ManualControlSetpoint";
}

template<>
struct has_fixed_size<px4_msgs::msg::ManualControlSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::ManualControlSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::ManualControlSetpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_SETPOINT__TRAITS_HPP_
