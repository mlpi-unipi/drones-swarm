// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorUwb.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_UWB__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_UWB__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/sensor_uwb__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorUwb & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: sessionid
  {
    out << "sessionid: ";
    rosidl_generator_traits::value_to_yaml(msg.sessionid, out);
    out << ", ";
  }

  // member: time_offset
  {
    out << "time_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset, out);
    out << ", ";
  }

  // member: counter
  {
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << ", ";
  }

  // member: mac
  {
    out << "mac: ";
    rosidl_generator_traits::value_to_yaml(msg.mac, out);
    out << ", ";
  }

  // member: mac_dest
  {
    out << "mac_dest: ";
    rosidl_generator_traits::value_to_yaml(msg.mac_dest, out);
    out << ", ";
  }

  // member: status
  {
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << ", ";
  }

  // member: nlos
  {
    out << "nlos: ";
    rosidl_generator_traits::value_to_yaml(msg.nlos, out);
    out << ", ";
  }

  // member: distance
  {
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << ", ";
  }

  // member: aoa_azimuth_dev
  {
    out << "aoa_azimuth_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_azimuth_dev, out);
    out << ", ";
  }

  // member: aoa_elevation_dev
  {
    out << "aoa_elevation_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_elevation_dev, out);
    out << ", ";
  }

  // member: aoa_azimuth_resp
  {
    out << "aoa_azimuth_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_azimuth_resp, out);
    out << ", ";
  }

  // member: aoa_elevation_resp
  {
    out << "aoa_elevation_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_elevation_resp, out);
    out << ", ";
  }

  // member: aoa_azimuth_fom
  {
    out << "aoa_azimuth_fom: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_azimuth_fom, out);
    out << ", ";
  }

  // member: aoa_elevation_fom
  {
    out << "aoa_elevation_fom: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_elevation_fom, out);
    out << ", ";
  }

  // member: aoa_dest_azimuth_fom
  {
    out << "aoa_dest_azimuth_fom: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_dest_azimuth_fom, out);
    out << ", ";
  }

  // member: aoa_dest_elevation_fom
  {
    out << "aoa_dest_elevation_fom: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_dest_elevation_fom, out);
    out << ", ";
  }

  // member: orientation
  {
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << ", ";
  }

  // member: offset_x
  {
    out << "offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x, out);
    out << ", ";
  }

  // member: offset_y
  {
    out << "offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y, out);
    out << ", ";
  }

  // member: offset_z
  {
    out << "offset_z: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_z, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SensorUwb & msg,
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

  // member: sessionid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sessionid: ";
    rosidl_generator_traits::value_to_yaml(msg.sessionid, out);
    out << "\n";
  }

  // member: time_offset
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_offset: ";
    rosidl_generator_traits::value_to_yaml(msg.time_offset, out);
    out << "\n";
  }

  // member: counter
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "counter: ";
    rosidl_generator_traits::value_to_yaml(msg.counter, out);
    out << "\n";
  }

  // member: mac
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mac: ";
    rosidl_generator_traits::value_to_yaml(msg.mac, out);
    out << "\n";
  }

  // member: mac_dest
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "mac_dest: ";
    rosidl_generator_traits::value_to_yaml(msg.mac_dest, out);
    out << "\n";
  }

  // member: status
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "status: ";
    rosidl_generator_traits::value_to_yaml(msg.status, out);
    out << "\n";
  }

  // member: nlos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "nlos: ";
    rosidl_generator_traits::value_to_yaml(msg.nlos, out);
    out << "\n";
  }

  // member: distance
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "distance: ";
    rosidl_generator_traits::value_to_yaml(msg.distance, out);
    out << "\n";
  }

  // member: aoa_azimuth_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_azimuth_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_azimuth_dev, out);
    out << "\n";
  }

  // member: aoa_elevation_dev
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_elevation_dev: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_elevation_dev, out);
    out << "\n";
  }

  // member: aoa_azimuth_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_azimuth_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_azimuth_resp, out);
    out << "\n";
  }

  // member: aoa_elevation_resp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_elevation_resp: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_elevation_resp, out);
    out << "\n";
  }

  // member: aoa_azimuth_fom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_azimuth_fom: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_azimuth_fom, out);
    out << "\n";
  }

  // member: aoa_elevation_fom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_elevation_fom: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_elevation_fom, out);
    out << "\n";
  }

  // member: aoa_dest_azimuth_fom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_dest_azimuth_fom: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_dest_azimuth_fom, out);
    out << "\n";
  }

  // member: aoa_dest_elevation_fom
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aoa_dest_elevation_fom: ";
    rosidl_generator_traits::value_to_yaml(msg.aoa_dest_elevation_fom, out);
    out << "\n";
  }

  // member: orientation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "orientation: ";
    rosidl_generator_traits::value_to_yaml(msg.orientation, out);
    out << "\n";
  }

  // member: offset_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_x: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_x, out);
    out << "\n";
  }

  // member: offset_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_y: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_y, out);
    out << "\n";
  }

  // member: offset_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offset_z: ";
    rosidl_generator_traits::value_to_yaml(msg.offset_z, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SensorUwb & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::SensorUwb & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::SensorUwb & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::SensorUwb>()
{
  return "px4_msgs::msg::SensorUwb";
}

template<>
inline const char * name<px4_msgs::msg::SensorUwb>()
{
  return "px4_msgs/msg/SensorUwb";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorUwb>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorUwb>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorUwb>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_UWB__TRAITS_HPP_
