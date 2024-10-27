// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from gazebo_msgs:msg/WheelSlip.idl
// generated code does not contain a copyright notice

#ifndef GAZEBO_MSGS__MSG__DETAIL__WHEEL_SLIP__TRAITS_HPP_
#define GAZEBO_MSGS__MSG__DETAIL__WHEEL_SLIP__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "gazebo_msgs/msg/detail/wheel_slip__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace gazebo_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const WheelSlip & msg,
  std::ostream & out)
{
  out << "{";
  // member: name
  {
    if (msg.name.size() == 0) {
      out << "name: []";
    } else {
      out << "name: [";
      size_t pending_items = msg.name.size();
      for (auto item : msg.name) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: lateral_slip
  {
    if (msg.lateral_slip.size() == 0) {
      out << "lateral_slip: []";
    } else {
      out << "lateral_slip: [";
      size_t pending_items = msg.lateral_slip.size();
      for (auto item : msg.lateral_slip) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: longitudinal_slip
  {
    if (msg.longitudinal_slip.size() == 0) {
      out << "longitudinal_slip: []";
    } else {
      out << "longitudinal_slip: [";
      size_t pending_items = msg.longitudinal_slip.size();
      for (auto item : msg.longitudinal_slip) {
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
  const WheelSlip & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.name.size() == 0) {
      out << "name: []\n";
    } else {
      out << "name:\n";
      for (auto item : msg.name) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: lateral_slip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.lateral_slip.size() == 0) {
      out << "lateral_slip: []\n";
    } else {
      out << "lateral_slip:\n";
      for (auto item : msg.lateral_slip) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: longitudinal_slip
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.longitudinal_slip.size() == 0) {
      out << "longitudinal_slip: []\n";
    } else {
      out << "longitudinal_slip:\n";
      for (auto item : msg.longitudinal_slip) {
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

inline std::string to_yaml(const WheelSlip & msg, bool use_flow_style = false)
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

}  // namespace gazebo_msgs

namespace rosidl_generator_traits
{

[[deprecated("use gazebo_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const gazebo_msgs::msg::WheelSlip & msg,
  std::ostream & out, size_t indentation = 0)
{
  gazebo_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use gazebo_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const gazebo_msgs::msg::WheelSlip & msg)
{
  return gazebo_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<gazebo_msgs::msg::WheelSlip>()
{
  return "gazebo_msgs::msg::WheelSlip";
}

template<>
inline const char * name<gazebo_msgs::msg::WheelSlip>()
{
  return "gazebo_msgs/msg/WheelSlip";
}

template<>
struct has_fixed_size<gazebo_msgs::msg::WheelSlip>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<gazebo_msgs::msg::WheelSlip>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<gazebo_msgs::msg::WheelSlip>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // GAZEBO_MSGS__MSG__DETAIL__WHEEL_SLIP__TRAITS_HPP_
