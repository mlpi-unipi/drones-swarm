// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleRoi.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_roi__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleRoi & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: mode
  {
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
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

  // member: roll_offset
  {
    out << "roll_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_offset, out);
    out << ", ";
  }

  // member: pitch_offset
  {
    out << "pitch_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_offset, out);
    out << ", ";
  }

  // member: yaw_offset
  {
    out << "yaw_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_offset, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleRoi & msg,
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

  // member: mode
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mode: ";
    rosidl_generator_traits::value_to_yaml(msg.mode, out);
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

  // member: roll_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "roll_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.roll_offset, out);
    out << "\n";
  }

  // member: pitch_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "pitch_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.pitch_offset, out);
    out << "\n";
  }

  // member: yaw_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "yaw_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.yaw_offset, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleRoi & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VehicleRoi & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleRoi & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleRoi>()
{
  return "px4_msgs::msg::VehicleRoi";
}

template<>
inline const char * name<px4_msgs::msg::VehicleRoi>()
{
  return "px4_msgs/msg/VehicleRoi";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleRoi>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleRoi>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleRoi>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_ROI__TRAITS_HPP_
