// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/GeofenceResult.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GEOFENCE_RESULT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__GEOFENCE_RESULT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/geofence_result__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const GeofenceResult & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: geofence_max_dist_triggered
  {
    out << "geofence_max_dist_triggered: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_max_dist_triggered, out);
    out << ", ";
  }

  // member: geofence_max_alt_triggered
  {
    out << "geofence_max_alt_triggered: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_max_alt_triggered, out);
    out << ", ";
  }

  // member: geofence_custom_fence_triggered
  {
    out << "geofence_custom_fence_triggered: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_custom_fence_triggered, out);
    out << ", ";
  }

  // member: geofence_action
  {
    out << "geofence_action: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_action, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GeofenceResult & msg,
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

  // member: geofence_max_dist_triggered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geofence_max_dist_triggered: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_max_dist_triggered, out);
    out << "\n";
  }

  // member: geofence_max_alt_triggered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geofence_max_alt_triggered: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_max_alt_triggered, out);
    out << "\n";
  }

  // member: geofence_custom_fence_triggered
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geofence_custom_fence_triggered: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_custom_fence_triggered, out);
    out << "\n";
  }

  // member: geofence_action
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "geofence_action: ";
    rosidl_generator_traits::value_to_yaml(msg.geofence_action, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GeofenceResult & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::GeofenceResult & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::GeofenceResult & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::GeofenceResult>()
{
  return "px4_msgs::msg::GeofenceResult";
}

template<>
inline const char * name<px4_msgs::msg::GeofenceResult>()
{
  return "px4_msgs/msg/GeofenceResult";
}

template<>
struct has_fixed_size<px4_msgs::msg::GeofenceResult>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::GeofenceResult>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::GeofenceResult>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__GEOFENCE_RESULT__TRAITS_HPP_
