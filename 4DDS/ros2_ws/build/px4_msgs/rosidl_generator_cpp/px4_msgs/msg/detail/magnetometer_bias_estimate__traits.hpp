// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/MagnetometerBiasEstimate.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MAGNETOMETER_BIAS_ESTIMATE__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MAGNETOMETER_BIAS_ESTIMATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/magnetometer_bias_estimate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MagnetometerBiasEstimate & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: bias_x
  {
    if (msg.bias_x.size() == 0) {
      out << "bias_x: []";
    } else {
      out << "bias_x: [";
      size_t pending_items = msg.bias_x.size();
      for (auto item : msg.bias_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bias_y
  {
    if (msg.bias_y.size() == 0) {
      out << "bias_y: []";
    } else {
      out << "bias_y: [";
      size_t pending_items = msg.bias_y.size();
      for (auto item : msg.bias_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: bias_z
  {
    if (msg.bias_z.size() == 0) {
      out << "bias_z: []";
    } else {
      out << "bias_z: [";
      size_t pending_items = msg.bias_z.size();
      for (auto item : msg.bias_z) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: valid
  {
    if (msg.valid.size() == 0) {
      out << "valid: []";
    } else {
      out << "valid: [";
      size_t pending_items = msg.valid.size();
      for (auto item : msg.valid) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: stable
  {
    if (msg.stable.size() == 0) {
      out << "stable: []";
    } else {
      out << "stable: [";
      size_t pending_items = msg.stable.size();
      for (auto item : msg.stable) {
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
  const MagnetometerBiasEstimate & msg,
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

  // member: bias_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bias_x.size() == 0) {
      out << "bias_x: []\n";
    } else {
      out << "bias_x:\n";
      for (auto item : msg.bias_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bias_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bias_y.size() == 0) {
      out << "bias_y: []\n";
    } else {
      out << "bias_y:\n";
      for (auto item : msg.bias_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: bias_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bias_z.size() == 0) {
      out << "bias_z: []\n";
    } else {
      out << "bias_z:\n";
      for (auto item : msg.bias_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.valid.size() == 0) {
      out << "valid: []\n";
    } else {
      out << "valid:\n";
      for (auto item : msg.valid) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: stable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.stable.size() == 0) {
      out << "stable: []\n";
    } else {
      out << "stable:\n";
      for (auto item : msg.stable) {
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

inline std::string to_yaml(const MagnetometerBiasEstimate & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::MagnetometerBiasEstimate & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::MagnetometerBiasEstimate & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::MagnetometerBiasEstimate>()
{
  return "px4_msgs::msg::MagnetometerBiasEstimate";
}

template<>
inline const char * name<px4_msgs::msg::MagnetometerBiasEstimate>()
{
  return "px4_msgs/msg/MagnetometerBiasEstimate";
}

template<>
struct has_fixed_size<px4_msgs::msg::MagnetometerBiasEstimate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::MagnetometerBiasEstimate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::MagnetometerBiasEstimate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MAGNETOMETER_BIAS_ESTIMATE__TRAITS_HPP_
