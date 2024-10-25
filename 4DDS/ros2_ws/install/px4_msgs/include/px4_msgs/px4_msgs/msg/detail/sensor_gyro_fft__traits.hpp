// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/SensorGyroFft.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/sensor_gyro_fft__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const SensorGyroFft & msg,
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

  // member: sensor_sample_rate_hz
  {
    out << "sensor_sample_rate_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_sample_rate_hz, out);
    out << ", ";
  }

  // member: resolution_hz
  {
    out << "resolution_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution_hz, out);
    out << ", ";
  }

  // member: peak_frequencies_x
  {
    if (msg.peak_frequencies_x.size() == 0) {
      out << "peak_frequencies_x: []";
    } else {
      out << "peak_frequencies_x: [";
      size_t pending_items = msg.peak_frequencies_x.size();
      for (auto item : msg.peak_frequencies_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: peak_frequencies_y
  {
    if (msg.peak_frequencies_y.size() == 0) {
      out << "peak_frequencies_y: []";
    } else {
      out << "peak_frequencies_y: [";
      size_t pending_items = msg.peak_frequencies_y.size();
      for (auto item : msg.peak_frequencies_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: peak_frequencies_z
  {
    if (msg.peak_frequencies_z.size() == 0) {
      out << "peak_frequencies_z: []";
    } else {
      out << "peak_frequencies_z: [";
      size_t pending_items = msg.peak_frequencies_z.size();
      for (auto item : msg.peak_frequencies_z) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: peak_snr_x
  {
    if (msg.peak_snr_x.size() == 0) {
      out << "peak_snr_x: []";
    } else {
      out << "peak_snr_x: [";
      size_t pending_items = msg.peak_snr_x.size();
      for (auto item : msg.peak_snr_x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: peak_snr_y
  {
    if (msg.peak_snr_y.size() == 0) {
      out << "peak_snr_y: []";
    } else {
      out << "peak_snr_y: [";
      size_t pending_items = msg.peak_snr_y.size();
      for (auto item : msg.peak_snr_y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: peak_snr_z
  {
    if (msg.peak_snr_z.size() == 0) {
      out << "peak_snr_z: []";
    } else {
      out << "peak_snr_z: [";
      size_t pending_items = msg.peak_snr_z.size();
      for (auto item : msg.peak_snr_z) {
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
  const SensorGyroFft & msg,
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

  // member: sensor_sample_rate_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_sample_rate_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.sensor_sample_rate_hz, out);
    out << "\n";
  }

  // member: resolution_hz
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "resolution_hz: ";
    rosidl_generator_traits::value_to_yaml(msg.resolution_hz, out);
    out << "\n";
  }

  // member: peak_frequencies_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.peak_frequencies_x.size() == 0) {
      out << "peak_frequencies_x: []\n";
    } else {
      out << "peak_frequencies_x:\n";
      for (auto item : msg.peak_frequencies_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: peak_frequencies_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.peak_frequencies_y.size() == 0) {
      out << "peak_frequencies_y: []\n";
    } else {
      out << "peak_frequencies_y:\n";
      for (auto item : msg.peak_frequencies_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: peak_frequencies_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.peak_frequencies_z.size() == 0) {
      out << "peak_frequencies_z: []\n";
    } else {
      out << "peak_frequencies_z:\n";
      for (auto item : msg.peak_frequencies_z) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: peak_snr_x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.peak_snr_x.size() == 0) {
      out << "peak_snr_x: []\n";
    } else {
      out << "peak_snr_x:\n";
      for (auto item : msg.peak_snr_x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: peak_snr_y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.peak_snr_y.size() == 0) {
      out << "peak_snr_y: []\n";
    } else {
      out << "peak_snr_y:\n";
      for (auto item : msg.peak_snr_y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: peak_snr_z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.peak_snr_z.size() == 0) {
      out << "peak_snr_z: []\n";
    } else {
      out << "peak_snr_z:\n";
      for (auto item : msg.peak_snr_z) {
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

inline std::string to_yaml(const SensorGyroFft & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::SensorGyroFft & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::SensorGyroFft & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::SensorGyroFft>()
{
  return "px4_msgs::msg::SensorGyroFft";
}

template<>
inline const char * name<px4_msgs::msg::SensorGyroFft>()
{
  return "px4_msgs/msg/SensorGyroFft";
}

template<>
struct has_fixed_size<px4_msgs::msg::SensorGyroFft>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::SensorGyroFft>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::SensorGyroFft>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__SENSOR_GYRO_FFT__TRAITS_HPP_
