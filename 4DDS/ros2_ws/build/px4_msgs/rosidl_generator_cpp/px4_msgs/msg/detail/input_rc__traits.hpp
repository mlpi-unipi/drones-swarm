// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/InputRc.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__INPUT_RC__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__INPUT_RC__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/input_rc__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const InputRc & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_last_signal
  {
    out << "timestamp_last_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_last_signal, out);
    out << ", ";
  }

  // member: channel_count
  {
    out << "channel_count: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_count, out);
    out << ", ";
  }

  // member: rssi
  {
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << ", ";
  }

  // member: rc_failsafe
  {
    out << "rc_failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_failsafe, out);
    out << ", ";
  }

  // member: rc_lost
  {
    out << "rc_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_lost, out);
    out << ", ";
  }

  // member: rc_lost_frame_count
  {
    out << "rc_lost_frame_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_lost_frame_count, out);
    out << ", ";
  }

  // member: rc_total_frame_count
  {
    out << "rc_total_frame_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_total_frame_count, out);
    out << ", ";
  }

  // member: rc_ppm_frame_length
  {
    out << "rc_ppm_frame_length: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_ppm_frame_length, out);
    out << ", ";
  }

  // member: input_source
  {
    out << "input_source: ";
    rosidl_generator_traits::value_to_yaml(msg.input_source, out);
    out << ", ";
  }

  // member: values
  {
    if (msg.values.size() == 0) {
      out << "values: []";
    } else {
      out << "values: [";
      size_t pending_items = msg.values.size();
      for (auto item : msg.values) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: link_quality
  {
    out << "link_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.link_quality, out);
    out << ", ";
  }

  // member: rssi_dbm
  {
    out << "rssi_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi_dbm, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InputRc & msg,
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

  // member: timestamp_last_signal
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_last_signal: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_last_signal, out);
    out << "\n";
  }

  // member: channel_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "channel_count: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_count, out);
    out << "\n";
  }

  // member: rssi
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << "\n";
  }

  // member: rc_failsafe
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_failsafe: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_failsafe, out);
    out << "\n";
  }

  // member: rc_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_lost, out);
    out << "\n";
  }

  // member: rc_lost_frame_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_lost_frame_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_lost_frame_count, out);
    out << "\n";
  }

  // member: rc_total_frame_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_total_frame_count: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_total_frame_count, out);
    out << "\n";
  }

  // member: rc_ppm_frame_length
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_ppm_frame_length: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_ppm_frame_length, out);
    out << "\n";
  }

  // member: input_source
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "input_source: ";
    rosidl_generator_traits::value_to_yaml(msg.input_source, out);
    out << "\n";
  }

  // member: values
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.values.size() == 0) {
      out << "values: []\n";
    } else {
      out << "values:\n";
      for (auto item : msg.values) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: link_quality
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "link_quality: ";
    rosidl_generator_traits::value_to_yaml(msg.link_quality, out);
    out << "\n";
  }

  // member: rssi_dbm
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rssi_dbm: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi_dbm, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InputRc & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::InputRc & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::InputRc & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::InputRc>()
{
  return "px4_msgs::msg::InputRc";
}

template<>
inline const char * name<px4_msgs::msg::InputRc>()
{
  return "px4_msgs/msg/InputRc";
}

template<>
struct has_fixed_size<px4_msgs::msg::InputRc>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::InputRc>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::InputRc>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__INPUT_RC__TRAITS_HPP_
