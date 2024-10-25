// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/TransponderReport.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/transponder_report__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const TransponderReport & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: icao_address
  {
    out << "icao_address: ";
    rosidl_generator_traits::value_to_yaml(msg.icao_address, out);
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

  // member: altitude_type
  {
    out << "altitude_type: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_type, out);
    out << ", ";
  }

  // member: altitude
  {
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: hor_velocity
  {
    out << "hor_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.hor_velocity, out);
    out << ", ";
  }

  // member: ver_velocity
  {
    out << "ver_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.ver_velocity, out);
    out << ", ";
  }

  // member: callsign
  {
    if (msg.callsign.size() == 0) {
      out << "callsign: []";
    } else {
      out << "callsign: [";
      size_t pending_items = msg.callsign.size();
      for (auto item : msg.callsign) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: emitter_type
  {
    out << "emitter_type: ";
    rosidl_generator_traits::value_to_yaml(msg.emitter_type, out);
    out << ", ";
  }

  // member: tslc
  {
    out << "tslc: ";
    rosidl_generator_traits::value_to_yaml(msg.tslc, out);
    out << ", ";
  }

  // member: flags
  {
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << ", ";
  }

  // member: squawk
  {
    out << "squawk: ";
    rosidl_generator_traits::value_to_yaml(msg.squawk, out);
    out << ", ";
  }

  // member: uas_id
  {
    if (msg.uas_id.size() == 0) {
      out << "uas_id: []";
    } else {
      out << "uas_id: [";
      size_t pending_items = msg.uas_id.size();
      for (auto item : msg.uas_id) {
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
  const TransponderReport & msg,
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

  // member: icao_address
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "icao_address: ";
    rosidl_generator_traits::value_to_yaml(msg.icao_address, out);
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

  // member: altitude_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude_type: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude_type, out);
    out << "\n";
  }

  // member: altitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "altitude: ";
    rosidl_generator_traits::value_to_yaml(msg.altitude, out);
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

  // member: hor_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hor_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.hor_velocity, out);
    out << "\n";
  }

  // member: ver_velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ver_velocity: ";
    rosidl_generator_traits::value_to_yaml(msg.ver_velocity, out);
    out << "\n";
  }

  // member: callsign
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.callsign.size() == 0) {
      out << "callsign: []\n";
    } else {
      out << "callsign:\n";
      for (auto item : msg.callsign) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: emitter_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "emitter_type: ";
    rosidl_generator_traits::value_to_yaml(msg.emitter_type, out);
    out << "\n";
  }

  // member: tslc
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "tslc: ";
    rosidl_generator_traits::value_to_yaml(msg.tslc, out);
    out << "\n";
  }

  // member: flags
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flags: ";
    rosidl_generator_traits::value_to_yaml(msg.flags, out);
    out << "\n";
  }

  // member: squawk
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "squawk: ";
    rosidl_generator_traits::value_to_yaml(msg.squawk, out);
    out << "\n";
  }

  // member: uas_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.uas_id.size() == 0) {
      out << "uas_id: []\n";
    } else {
      out << "uas_id:\n";
      for (auto item : msg.uas_id) {
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

inline std::string to_yaml(const TransponderReport & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::TransponderReport & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::TransponderReport & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::TransponderReport>()
{
  return "px4_msgs::msg::TransponderReport";
}

template<>
inline const char * name<px4_msgs::msg::TransponderReport>()
{
  return "px4_msgs/msg/TransponderReport";
}

template<>
struct has_fixed_size<px4_msgs::msg::TransponderReport>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::TransponderReport>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::TransponderReport>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__TRANSPONDER_REPORT__TRAITS_HPP_
