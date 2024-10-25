// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/NpfgStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__NPFG_STATUS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__NPFG_STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/npfg_status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const NpfgStatus & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: wind_est_valid
  {
    out << "wind_est_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.wind_est_valid, out);
    out << ", ";
  }

  // member: lat_accel
  {
    out << "lat_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_accel, out);
    out << ", ";
  }

  // member: lat_accel_ff
  {
    out << "lat_accel_ff: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_accel_ff, out);
    out << ", ";
  }

  // member: bearing_feas
  {
    out << "bearing_feas: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing_feas, out);
    out << ", ";
  }

  // member: bearing_feas_on_track
  {
    out << "bearing_feas_on_track: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing_feas_on_track, out);
    out << ", ";
  }

  // member: signed_track_error
  {
    out << "signed_track_error: ";
    rosidl_generator_traits::value_to_yaml(msg.signed_track_error, out);
    out << ", ";
  }

  // member: track_error_bound
  {
    out << "track_error_bound: ";
    rosidl_generator_traits::value_to_yaml(msg.track_error_bound, out);
    out << ", ";
  }

  // member: airspeed_ref
  {
    out << "airspeed_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.airspeed_ref, out);
    out << ", ";
  }

  // member: bearing
  {
    out << "bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing, out);
    out << ", ";
  }

  // member: heading_ref
  {
    out << "heading_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_ref, out);
    out << ", ";
  }

  // member: min_ground_speed_ref
  {
    out << "min_ground_speed_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.min_ground_speed_ref, out);
    out << ", ";
  }

  // member: adapted_period
  {
    out << "adapted_period: ";
    rosidl_generator_traits::value_to_yaml(msg.adapted_period, out);
    out << ", ";
  }

  // member: p_gain
  {
    out << "p_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.p_gain, out);
    out << ", ";
  }

  // member: time_const
  {
    out << "time_const: ";
    rosidl_generator_traits::value_to_yaml(msg.time_const, out);
    out << ", ";
  }

  // member: can_run_factor
  {
    out << "can_run_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.can_run_factor, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const NpfgStatus & msg,
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

  // member: wind_est_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "wind_est_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.wind_est_valid, out);
    out << "\n";
  }

  // member: lat_accel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_accel: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_accel, out);
    out << "\n";
  }

  // member: lat_accel_ff
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat_accel_ff: ";
    rosidl_generator_traits::value_to_yaml(msg.lat_accel_ff, out);
    out << "\n";
  }

  // member: bearing_feas
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bearing_feas: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing_feas, out);
    out << "\n";
  }

  // member: bearing_feas_on_track
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bearing_feas_on_track: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing_feas_on_track, out);
    out << "\n";
  }

  // member: signed_track_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signed_track_error: ";
    rosidl_generator_traits::value_to_yaml(msg.signed_track_error, out);
    out << "\n";
  }

  // member: track_error_bound
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "track_error_bound: ";
    rosidl_generator_traits::value_to_yaml(msg.track_error_bound, out);
    out << "\n";
  }

  // member: airspeed_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airspeed_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.airspeed_ref, out);
    out << "\n";
  }

  // member: bearing
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "bearing: ";
    rosidl_generator_traits::value_to_yaml(msg.bearing, out);
    out << "\n";
  }

  // member: heading_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_ref, out);
    out << "\n";
  }

  // member: min_ground_speed_ref
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "min_ground_speed_ref: ";
    rosidl_generator_traits::value_to_yaml(msg.min_ground_speed_ref, out);
    out << "\n";
  }

  // member: adapted_period
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "adapted_period: ";
    rosidl_generator_traits::value_to_yaml(msg.adapted_period, out);
    out << "\n";
  }

  // member: p_gain
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "p_gain: ";
    rosidl_generator_traits::value_to_yaml(msg.p_gain, out);
    out << "\n";
  }

  // member: time_const
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_const: ";
    rosidl_generator_traits::value_to_yaml(msg.time_const, out);
    out << "\n";
  }

  // member: can_run_factor
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "can_run_factor: ";
    rosidl_generator_traits::value_to_yaml(msg.can_run_factor, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const NpfgStatus & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::NpfgStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::NpfgStatus & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::NpfgStatus>()
{
  return "px4_msgs::msg::NpfgStatus";
}

template<>
inline const char * name<px4_msgs::msg::NpfgStatus>()
{
  return "px4_msgs/msg/NpfgStatus";
}

template<>
struct has_fixed_size<px4_msgs::msg::NpfgStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::NpfgStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::NpfgStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__NPFG_STATUS__TRAITS_HPP_
