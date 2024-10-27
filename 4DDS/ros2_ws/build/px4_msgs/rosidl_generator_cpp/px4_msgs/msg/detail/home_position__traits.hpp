// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/HomePosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__HOME_POSITION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__HOME_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/home_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const HomePosition & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: alt
  {
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << ", ";
  }

  // member: x
  {
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << ", ";
  }

  // member: y
  {
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << ", ";
  }

  // member: z
  {
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
    out << ", ";
  }

  // member: yaw
  {
    out << "yaw: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw, out);
    out << ", ";
  }

  // member: valid_alt
  {
    out << "valid_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_alt, out);
    out << ", ";
  }

  // member: valid_hpos
  {
    out << "valid_hpos: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_hpos, out);
    out << ", ";
  }

  // member: valid_lpos
  {
    out << "valid_lpos: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_lpos, out);
    out << ", ";
  }

  // member: manual_home
  {
    out << "manual_home: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_home, out);
    out << ", ";
  }

  // member: update_count
  {
    out << "update_count: ";
    rosidl_generator_traits::value_to_yaml(msg.update_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const HomePosition & msg,
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

  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << "\n";
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "x: ";
    rosidl_generator_traits::value_to_yaml(msg.x, out);
    out << "\n";
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "y: ";
    rosidl_generator_traits::value_to_yaml(msg.y, out);
    out << "\n";
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "z: ";
    rosidl_generator_traits::value_to_yaml(msg.z, out);
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

  // member: valid_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_alt, out);
    out << "\n";
  }

  // member: valid_hpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_hpos: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_hpos, out);
    out << "\n";
  }

  // member: valid_lpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_lpos: ";
    rosidl_generator_traits::value_to_yaml(msg.valid_lpos, out);
    out << "\n";
  }

  // member: manual_home
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "manual_home: ";
    rosidl_generator_traits::value_to_yaml(msg.manual_home, out);
    out << "\n";
  }

  // member: update_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "update_count: ";
    rosidl_generator_traits::value_to_yaml(msg.update_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const HomePosition & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::HomePosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::HomePosition & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::HomePosition>()
{
  return "px4_msgs::msg::HomePosition";
}

template<>
inline const char * name<px4_msgs::msg::HomePosition>()
{
  return "px4_msgs/msg/HomePosition";
}

template<>
struct has_fixed_size<px4_msgs::msg::HomePosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::HomePosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::HomePosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__HOME_POSITION__TRAITS_HPP_
