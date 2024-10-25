// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleGlobalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_GLOBAL_POSITION__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_GLOBAL_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_global_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleGlobalPosition & msg,
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

  // member: alt_ellipsoid
  {
    out << "alt_ellipsoid: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_ellipsoid, out);
    out << ", ";
  }

  // member: delta_alt
  {
    out << "delta_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_alt, out);
    out << ", ";
  }

  // member: lat_lon_reset_counter
  {
    out << "lat_lon_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_lon_reset_counter, out);
    out << ", ";
  }

  // member: alt_reset_counter
  {
    out << "alt_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_reset_counter, out);
    out << ", ";
  }

  // member: eph
  {
    out << "eph: ";
    rosidl_generator_traits::value_to_yaml(msg.eph, out);
    out << ", ";
  }

  // member: epv
  {
    out << "epv: ";
    rosidl_generator_traits::value_to_yaml(msg.epv, out);
    out << ", ";
  }

  // member: terrain_alt
  {
    out << "terrain_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_alt, out);
    out << ", ";
  }

  // member: terrain_alt_valid
  {
    out << "terrain_alt_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_alt_valid, out);
    out << ", ";
  }

  // member: dead_reckoning
  {
    out << "dead_reckoning: ";
    rosidl_generator_traits::value_to_yaml(msg.dead_reckoning, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleGlobalPosition & msg,
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

  // member: alt_ellipsoid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_ellipsoid: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_ellipsoid, out);
    out << "\n";
  }

  // member: delta_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "delta_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.delta_alt, out);
    out << "\n";
  }

  // member: lat_lon_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_lon_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_lon_reset_counter, out);
    out << "\n";
  }

  // member: alt_reset_counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt_reset_counter: ";
    rosidl_generator_traits::value_to_yaml(msg.alt_reset_counter, out);
    out << "\n";
  }

  // member: eph
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "eph: ";
    rosidl_generator_traits::value_to_yaml(msg.eph, out);
    out << "\n";
  }

  // member: epv
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "epv: ";
    rosidl_generator_traits::value_to_yaml(msg.epv, out);
    out << "\n";
  }

  // member: terrain_alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terrain_alt: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_alt, out);
    out << "\n";
  }

  // member: terrain_alt_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "terrain_alt_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.terrain_alt_valid, out);
    out << "\n";
  }

  // member: dead_reckoning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dead_reckoning: ";
    rosidl_generator_traits::value_to_yaml(msg.dead_reckoning, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleGlobalPosition & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::VehicleGlobalPosition & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleGlobalPosition & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleGlobalPosition>()
{
  return "px4_msgs::msg::VehicleGlobalPosition";
}

template<>
inline const char * name<px4_msgs::msg::VehicleGlobalPosition>()
{
  return "px4_msgs/msg/VehicleGlobalPosition";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleGlobalPosition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleGlobalPosition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleGlobalPosition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_GLOBAL_POSITION__TRAITS_HPP_
