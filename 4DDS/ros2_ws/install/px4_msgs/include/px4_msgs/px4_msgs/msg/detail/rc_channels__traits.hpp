// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/RcChannels.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__RC_CHANNELS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__RC_CHANNELS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/rc_channels__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const RcChannels & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: timestamp_last_valid
  {
    out << "timestamp_last_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_last_valid, out);
    out << ", ";
  }

  // member: channels
  {
    if (msg.channels.size() == 0) {
      out << "channels: []";
    } else {
      out << "channels: [";
      size_t pending_items = msg.channels.size();
      for (auto item : msg.channels) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: channel_count
  {
    out << "channel_count: ";
    rosidl_generator_traits::value_to_yaml(msg.channel_count, out);
    out << ", ";
  }

  // member: function
  {
    if (msg.function.size() == 0) {
      out << "function: []";
    } else {
      out << "function: [";
      size_t pending_items = msg.function.size();
      for (auto item : msg.function) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: rssi
  {
    out << "rssi: ";
    rosidl_generator_traits::value_to_yaml(msg.rssi, out);
    out << ", ";
  }

  // member: signal_lost
  {
    out << "signal_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_lost, out);
    out << ", ";
  }

  // member: frame_drop_count
  {
    out << "frame_drop_count: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_drop_count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RcChannels & msg,
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

  // member: timestamp_last_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp_last_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp_last_valid, out);
    out << "\n";
  }

  // member: channels
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.channels.size() == 0) {
      out << "channels: []\n";
    } else {
      out << "channels:\n";
      for (auto item : msg.channels) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: function
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.function.size() == 0) {
      out << "function: []\n";
    } else {
      out << "function:\n";
      for (auto item : msg.function) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: signal_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "signal_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.signal_lost, out);
    out << "\n";
  }

  // member: frame_drop_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "frame_drop_count: ";
    rosidl_generator_traits::value_to_yaml(msg.frame_drop_count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RcChannels & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::RcChannels & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::RcChannels & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::RcChannels>()
{
  return "px4_msgs::msg::RcChannels";
}

template<>
inline const char * name<px4_msgs::msg::RcChannels>()
{
  return "px4_msgs/msg/RcChannels";
}

template<>
struct has_fixed_size<px4_msgs::msg::RcChannels>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::RcChannels>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::RcChannels>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__RC_CHANNELS__TRAITS_HPP_
