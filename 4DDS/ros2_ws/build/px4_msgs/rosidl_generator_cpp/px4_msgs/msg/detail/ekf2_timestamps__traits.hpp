// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/Ekf2Timestamps.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__EKF2_TIMESTAMPS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__EKF2_TIMESTAMPS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/ekf2_timestamps__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const Ekf2Timestamps & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: airspeed_timestamp_rel
  {
    out << "airspeed_timestamp_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.airspeed_timestamp_rel, out);
    out << ", ";
  }

  // member: distance_sensor_timestamp_rel
  {
    out << "distance_sensor_timestamp_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_sensor_timestamp_rel, out);
    out << ", ";
  }

  // member: optical_flow_timestamp_rel
  {
    out << "optical_flow_timestamp_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.optical_flow_timestamp_rel, out);
    out << ", ";
  }

  // member: vehicle_air_data_timestamp_rel
  {
    out << "vehicle_air_data_timestamp_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_air_data_timestamp_rel, out);
    out << ", ";
  }

  // member: vehicle_magnetometer_timestamp_rel
  {
    out << "vehicle_magnetometer_timestamp_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_magnetometer_timestamp_rel, out);
    out << ", ";
  }

  // member: visual_odometry_timestamp_rel
  {
    out << "visual_odometry_timestamp_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.visual_odometry_timestamp_rel, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Ekf2Timestamps & msg,
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

  // member: airspeed_timestamp_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airspeed_timestamp_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.airspeed_timestamp_rel, out);
    out << "\n";
  }

  // member: distance_sensor_timestamp_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance_sensor_timestamp_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.distance_sensor_timestamp_rel, out);
    out << "\n";
  }

  // member: optical_flow_timestamp_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "optical_flow_timestamp_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.optical_flow_timestamp_rel, out);
    out << "\n";
  }

  // member: vehicle_air_data_timestamp_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_air_data_timestamp_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_air_data_timestamp_rel, out);
    out << "\n";
  }

  // member: vehicle_magnetometer_timestamp_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vehicle_magnetometer_timestamp_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.vehicle_magnetometer_timestamp_rel, out);
    out << "\n";
  }

  // member: visual_odometry_timestamp_rel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "visual_odometry_timestamp_rel: ";
    rosidl_generator_traits::value_to_yaml(msg.visual_odometry_timestamp_rel, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Ekf2Timestamps & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::Ekf2Timestamps & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::Ekf2Timestamps & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::Ekf2Timestamps>()
{
  return "px4_msgs::msg::Ekf2Timestamps";
}

template<>
inline const char * name<px4_msgs::msg::Ekf2Timestamps>()
{
  return "px4_msgs/msg/Ekf2Timestamps";
}

template<>
struct has_fixed_size<px4_msgs::msg::Ekf2Timestamps>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::Ekf2Timestamps>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::Ekf2Timestamps>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__EKF2_TIMESTAMPS__TRAITS_HPP_
