// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorGps.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GPS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GPS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/sensor_gps__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorGps & msg,
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

  // member: device_id
  {
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << ", ";
  }

  // member: latitude_deg
  {
    out << "latitude_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_deg, out);
    out << ", ";
  }

  // member: longitude_deg
  {
    out << "longitude_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_deg, out);
    out << ", ";
  }

  // member: altitude_msl_m
  {
    out << "altitude_msl_m: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_msl_m, out);
    out << ", ";
  }

  // member: altitude_ellipsoid_m
  {
    out << "altitude_ellipsoid_m: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_ellipsoid_m, out);
    out << ", ";
  }

  // member: s_variance_m_s
  {
    out << "s_variance_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.s_variance_m_s, out);
    out << ", ";
  }

  // member: c_variance_rad
  {
    out << "c_variance_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.c_variance_rad, out);
    out << ", ";
  }

  // member: fix_type
  {
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
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

  // member: hdop
  {
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << ", ";
  }

  // member: vdop
  {
    out << "vdop: ";
    rosidl_generator_traits::value_to_yaml(msg.vdop, out);
    out << ", ";
  }

  // member: noise_per_ms
  {
    out << "noise_per_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_per_ms, out);
    out << ", ";
  }

  // member: automatic_gain_control
  {
    out << "automatic_gain_control: ";
    rosidl_generator_traits::value_to_yaml(msg.automatic_gain_control, out);
    out << ", ";
  }

  // member: jamming_state
  {
    out << "jamming_state: ";
    rosidl_generator_traits::value_to_yaml(msg.jamming_state, out);
    out << ", ";
  }

  // member: jamming_indicator
  {
    out << "jamming_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.jamming_indicator, out);
    out << ", ";
  }

  // member: spoofing_state
  {
    out << "spoofing_state: ";
    rosidl_generator_traits::value_to_yaml(msg.spoofing_state, out);
    out << ", ";
  }

  // member: vel_m_s
  {
    out << "vel_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_m_s, out);
    out << ", ";
  }

  // member: vel_n_m_s
  {
    out << "vel_n_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_n_m_s, out);
    out << ", ";
  }

  // member: vel_e_m_s
  {
    out << "vel_e_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_e_m_s, out);
    out << ", ";
  }

  // member: vel_d_m_s
  {
    out << "vel_d_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_d_m_s, out);
    out << ", ";
  }

  // member: cog_rad
  {
    out << "cog_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.cog_rad, out);
    out << ", ";
  }

  // member: vel_ned_valid
  {
    out << "vel_ned_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_ned_valid, out);
    out << ", ";
  }

  // member: timestamp_time_relative
  {
    out << "timestamp_time_relative: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_time_relative, out);
    out << ", ";
  }

  // member: time_utc_usec
  {
    out << "time_utc_usec: ";
    rosidl_generator_traits::value_to_yaml(msg.time_utc_usec, out);
    out << ", ";
  }

  // member: satellites_used
  {
    out << "satellites_used: ";
    rosidl_generator_traits::value_to_yaml(msg.satellites_used, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: heading_offset
  {
    out << "heading_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_offset, out);
    out << ", ";
  }

  // member: heading_accuracy
  {
    out << "heading_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_accuracy, out);
    out << ", ";
  }

  // member: rtcm_injection_rate
  {
    out << "rtcm_injection_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.rtcm_injection_rate, out);
    out << ", ";
  }

  // member: selected_rtcm_instance
  {
    out << "selected_rtcm_instance: ";
    rosidl_generator_traits::value_to_yaml(msg.selected_rtcm_instance, out);
    out << ", ";
  }

  // member: rtcm_crc_failed
  {
    out << "rtcm_crc_failed: ";
    rosidl_generator_traits::value_to_yaml(msg.rtcm_crc_failed, out);
    out << ", ";
  }

  // member: rtcm_msg_used
  {
    out << "rtcm_msg_used: ";
    rosidl_generator_traits::value_to_yaml(msg.rtcm_msg_used, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorGps & msg,
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

  // member: device_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "device_id: ";
    rosidl_generator_traits::value_to_yaml(msg.device_id, out);
    out << "\n";
  }

  // member: latitude_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude_deg, out);
    out << "\n";
  }

  // member: longitude_deg
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude_deg: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude_deg, out);
    out << "\n";
  }

  // member: altitude_msl_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_msl_m: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_msl_m, out);
    out << "\n";
  }

  // member: altitude_ellipsoid_m
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_ellipsoid_m: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_ellipsoid_m, out);
    out << "\n";
  }

  // member: s_variance_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "s_variance_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.s_variance_m_s, out);
    out << "\n";
  }

  // member: c_variance_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "c_variance_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.c_variance_rad, out);
    out << "\n";
  }

  // member: fix_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fix_type: ";
    rosidl_generator_traits::value_to_yaml(msg.fix_type, out);
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

  // member: hdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hdop: ";
    rosidl_generator_traits::value_to_yaml(msg.hdop, out);
    out << "\n";
  }

  // member: vdop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vdop: ";
    rosidl_generator_traits::value_to_yaml(msg.vdop, out);
    out << "\n";
  }

  // member: noise_per_ms
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "noise_per_ms: ";
    rosidl_generator_traits::value_to_yaml(msg.noise_per_ms, out);
    out << "\n";
  }

  // member: automatic_gain_control
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "automatic_gain_control: ";
    rosidl_generator_traits::value_to_yaml(msg.automatic_gain_control, out);
    out << "\n";
  }

  // member: jamming_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jamming_state: ";
    rosidl_generator_traits::value_to_yaml(msg.jamming_state, out);
    out << "\n";
  }

  // member: jamming_indicator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "jamming_indicator: ";
    rosidl_generator_traits::value_to_yaml(msg.jamming_indicator, out);
    out << "\n";
  }

  // member: spoofing_state
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "spoofing_state: ";
    rosidl_generator_traits::value_to_yaml(msg.spoofing_state, out);
    out << "\n";
  }

  // member: vel_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_m_s, out);
    out << "\n";
  }

  // member: vel_n_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_n_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_n_m_s, out);
    out << "\n";
  }

  // member: vel_e_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_e_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_e_m_s, out);
    out << "\n";
  }

  // member: vel_d_m_s
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_d_m_s: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_d_m_s, out);
    out << "\n";
  }

  // member: cog_rad
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "cog_rad: ";
    rosidl_generator_traits::value_to_yaml(msg.cog_rad, out);
    out << "\n";
  }

  // member: vel_ned_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vel_ned_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.vel_ned_valid, out);
    out << "\n";
  }

  // member: timestamp_time_relative
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_time_relative: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_time_relative, out);
    out << "\n";
  }

  // member: time_utc_usec
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_utc_usec: ";
    rosidl_generator_traits::value_to_yaml(msg.time_utc_usec, out);
    out << "\n";
  }

  // member: satellites_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "satellites_used: ";
    rosidl_generator_traits::value_to_yaml(msg.satellites_used, out);
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

  // member: heading_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_offset, out);
    out << "\n";
  }

  // member: heading_accuracy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "heading_accuracy: ";
    rosidl_generator_traits::value_to_yaml(msg.heading_accuracy, out);
    out << "\n";
  }

  // member: rtcm_injection_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtcm_injection_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.rtcm_injection_rate, out);
    out << "\n";
  }

  // member: selected_rtcm_instance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "selected_rtcm_instance: ";
    rosidl_generator_traits::value_to_yaml(msg.selected_rtcm_instance, out);
    out << "\n";
  }

  // member: rtcm_crc_failed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtcm_crc_failed: ";
    rosidl_generator_traits::value_to_yaml(msg.rtcm_crc_failed, out);
    out << "\n";
  }

  // member: rtcm_msg_used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rtcm_msg_used: ";
    rosidl_generator_traits::value_to_yaml(msg.rtcm_msg_used, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorGps & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::SensorGps & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::SensorGps & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::SensorGps>()
{
  return "px4_msgs::msg::SensorGps";
}

template<>
inline const char * name<px4_msgs::msg::SensorGps>()
{
  return "px4_msgs/msg/SensorGps";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorGps>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorGps>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorGps>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GPS__TRAITS_HPP_
