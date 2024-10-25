// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SatelliteInfo.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/satellite_info__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SatelliteInfo & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << ", ";
  }

  // member: svid
  {
    if (msg.svid.size() == 0) {
      out << "svid: []";
    } else {
      out << "svid: [";
      size_t pending_items = msg.svid.size();
      for (auto item : msg.svid) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: used
  {
    if (msg.used.size() == 0) {
      out << "used: []";
    } else {
      out << "used: [";
      size_t pending_items = msg.used.size();
      for (auto item : msg.used) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: elevation
  {
    if (msg.elevation.size() == 0) {
      out << "elevation: []";
    } else {
      out << "elevation: [";
      size_t pending_items = msg.elevation.size();
      for (auto item : msg.elevation) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: azimuth
  {
    if (msg.azimuth.size() == 0) {
      out << "azimuth: []";
    } else {
      out << "azimuth: [";
      size_t pending_items = msg.azimuth.size();
      for (auto item : msg.azimuth) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: snr
  {
    if (msg.snr.size() == 0) {
      out << "snr: []";
    } else {
      out << "snr: [";
      size_t pending_items = msg.snr.size();
      for (auto item : msg.snr) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: prn
  {
    if (msg.prn.size() == 0) {
      out << "prn: []";
    } else {
      out << "prn: [";
      size_t pending_items = msg.prn.size();
      for (auto item : msg.prn) {
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
  const SatelliteInfo & msg,
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

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }

  // member: svid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.svid.size() == 0) {
      out << "svid: []\n";
    } else {
      out << "svid:\n";
      for (auto item : msg.svid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: used
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.used.size() == 0) {
      out << "used: []\n";
    } else {
      out << "used:\n";
      for (auto item : msg.used) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: elevation
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.elevation.size() == 0) {
      out << "elevation: []\n";
    } else {
      out << "elevation:\n";
      for (auto item : msg.elevation) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: azimuth
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.azimuth.size() == 0) {
      out << "azimuth: []\n";
    } else {
      out << "azimuth:\n";
      for (auto item : msg.azimuth) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: snr
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.snr.size() == 0) {
      out << "snr: []\n";
    } else {
      out << "snr:\n";
      for (auto item : msg.snr) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: prn
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.prn.size() == 0) {
      out << "prn: []\n";
    } else {
      out << "prn:\n";
      for (auto item : msg.prn) {
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

inline std::string to_yaml(const SatelliteInfo & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::SatelliteInfo & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::SatelliteInfo & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::SatelliteInfo>()
{
  return "px4_msgs::msg::SatelliteInfo";
}

template<>
inline const char * name<px4_msgs::msg::SatelliteInfo>()
{
  return "px4_msgs/msg/SatelliteInfo";
}

template<>
struct has_fixed_size<px4_msgs::msg::SatelliteInfo>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SatelliteInfo>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SatelliteInfo>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SATELLITE_INFO__TRAITS_HPP_
