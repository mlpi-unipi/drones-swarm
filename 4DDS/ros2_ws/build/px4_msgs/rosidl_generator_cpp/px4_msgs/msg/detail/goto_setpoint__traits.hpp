// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/GotoSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/goto_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GotoSetpoint & msg,
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
    if (msg.position.size() == 0) {
      out << "position: []";
    } else {
      out << "position: [";
      size_t pending_items = msg.position.size();
      for (auto item : msg.position) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: flag_control_heading
  {
    out << "flag_control_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_heading, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: flag_set_max_horizontal_speed
  {
    out << "flag_set_max_horizontal_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_set_max_horizontal_speed, out);
    out << ", ";
  }

  // member: max_horizontal_speed
  {
    out << "max_horizontal_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_horizontal_speed, out);
    out << ", ";
  }

  // member: flag_set_max_vertical_speed
  {
    out << "flag_set_max_vertical_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_set_max_vertical_speed, out);
    out << ", ";
  }

  // member: max_vertical_speed
  {
    out << "max_vertical_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_vertical_speed, out);
    out << ", ";
  }

  // member: flag_set_max_heading_rate
  {
    out << "flag_set_max_heading_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_set_max_heading_rate, out);
    out << ", ";
  }

  // member: max_heading_rate
  {
    out << "max_heading_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_heading_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GotoSetpoint & msg,
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
    if (msg.position.size() == 0) {
      out << "position: []\n";
    } else {
      out << "position:\n";
      for (auto item : msg.position) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: flag_control_heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_control_heading: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_control_heading, out);
    out << "\n";
  }

  // member: heading
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << "\n";
  }

  // member: flag_set_max_horizontal_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_set_max_horizontal_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_set_max_horizontal_speed, out);
    out << "\n";
  }

  // member: max_horizontal_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_horizontal_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_horizontal_speed, out);
    out << "\n";
  }

  // member: flag_set_max_vertical_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_set_max_vertical_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_set_max_vertical_speed, out);
    out << "\n";
  }

  // member: max_vertical_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_vertical_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.max_vertical_speed, out);
    out << "\n";
  }

  // member: flag_set_max_heading_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flag_set_max_heading_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.flag_set_max_heading_rate, out);
    out << "\n";
  }

  // member: max_heading_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "max_heading_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.max_heading_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GotoSetpoint & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::GotoSetpoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::GotoSetpoint & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::GotoSetpoint>()
{
  return "px4_msgs::msg::GotoSetpoint";
}

template<>
inline const char * name<px4_msgs::msg::GotoSetpoint>()
{
  return "px4_msgs/msg/GotoSetpoint";
}

template<>
struct has_fixed_size<px4_msgs::msg::GotoSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::GotoSetpoint>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::GotoSetpoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__GOTO_SETPOINT__TRAITS_HPP_
