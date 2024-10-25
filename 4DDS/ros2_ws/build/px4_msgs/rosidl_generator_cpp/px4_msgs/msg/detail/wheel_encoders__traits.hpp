// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/WheelEncoders.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/wheel_encoders__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelEncoders & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: wheel_speed
  {
    if (msg.wheel_speed.size() == 0) {
      out << "wheel_speed: []";
    } else {
      out << "wheel_speed: [";
      size_t pending_items = msg.wheel_speed.size();
      for (auto item : msg.wheel_speed) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: wheel_angle
  {
    if (msg.wheel_angle.size() == 0) {
      out << "wheel_angle: []";
    } else {
      out << "wheel_angle: [";
      size_t pending_items = msg.wheel_angle.size();
      for (auto item : msg.wheel_angle) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const WheelEncoders & msg,
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

  // member: wheel_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheel_speed.size() == 0) {
      out << "wheel_speed: []\n";
    } else {
      out << "wheel_speed:\n";
      for (auto item : msg.wheel_speed) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: wheel_angle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.wheel_angle.size() == 0) {
      out << "wheel_angle: []\n";
    } else {
      out << "wheel_angle:\n";
      for (auto item : msg.wheel_angle) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const WheelEncoders & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::WheelEncoders & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::WheelEncoders & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::WheelEncoders>()
{
  return "px4_msgs::msg::WheelEncoders";
}

template<>
inline const char * name<px4_msgs::msg::WheelEncoders>()
{
  return "px4_msgs/msg/WheelEncoders";
}

template<>
struct has_fixed_size<px4_msgs::msg::WheelEncoders>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::WheelEncoders>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::WheelEncoders>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__TRAITS_HPP_
