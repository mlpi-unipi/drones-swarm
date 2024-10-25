// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/MagWorkerData.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MAG_WORKER_DATA__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__MAG_WORKER_DATA__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/mag_worker_data__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const MagWorkerData & msg,
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

  // member: done_count
  {
    out << "done_count: ";
    rosidl_generator_traits::value_to_yaml(msg.done_count, out);
    out << ", ";
  }

  // member: calibration_points_perside
  {
    out << "calibration_points_perside: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_points_perside, out);
    out << ", ";
  }

  // member: calibration_interval_perside_us
  {
    out << "calibration_interval_perside_us: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_interval_perside_us, out);
    out << ", ";
  }

  // member: calibration_counter_total
  {
    if (msg.calibration_counter_total.size() == 0) {
      out << "calibration_counter_total: []";
    } else {
      out << "calibration_counter_total: [";
      size_t pending_items = msg.calibration_counter_total.size();
      for (auto item : msg.calibration_counter_total) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: side_data_collected
  {
    if (msg.side_data_collected.size() == 0) {
      out << "side_data_collected: []";
    } else {
      out << "side_data_collected: [";
      size_t pending_items = msg.side_data_collected.size();
      for (auto item : msg.side_data_collected) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: x
  {
    if (msg.x.size() == 0) {
      out << "x: []";
    } else {
      out << "x: [";
      size_t pending_items = msg.x.size();
      for (auto item : msg.x) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: y
  {
    if (msg.y.size() == 0) {
      out << "y: []";
    } else {
      out << "y: [";
      size_t pending_items = msg.y.size();
      for (auto item : msg.y) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: z
  {
    if (msg.z.size() == 0) {
      out << "z: []";
    } else {
      out << "z: [";
      size_t pending_items = msg.z.size();
      for (auto item : msg.z) {
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
  const MagWorkerData & msg,
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

  // member: done_count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "done_count: ";
    rosidl_generator_traits::value_to_yaml(msg.done_count, out);
    out << "\n";
  }

  // member: calibration_points_perside
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_points_perside: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_points_perside, out);
    out << "\n";
  }

  // member: calibration_interval_perside_us
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_interval_perside_us: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_interval_perside_us, out);
    out << "\n";
  }

  // member: calibration_counter_total
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.calibration_counter_total.size() == 0) {
      out << "calibration_counter_total: []\n";
    } else {
      out << "calibration_counter_total:\n";
      for (auto item : msg.calibration_counter_total) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: side_data_collected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.side_data_collected.size() == 0) {
      out << "side_data_collected: []\n";
    } else {
      out << "side_data_collected:\n";
      for (auto item : msg.side_data_collected) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: x
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.x.size() == 0) {
      out << "x: []\n";
    } else {
      out << "x:\n";
      for (auto item : msg.x) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: y
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.y.size() == 0) {
      out << "y: []\n";
    } else {
      out << "y:\n";
      for (auto item : msg.y) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: z
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.z.size() == 0) {
      out << "z: []\n";
    } else {
      out << "z:\n";
      for (auto item : msg.z) {
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

inline std::string to_yaml(const MagWorkerData & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::MagWorkerData & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::MagWorkerData & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::MagWorkerData>()
{
  return "px4_msgs::msg::MagWorkerData";
}

template<>
inline const char * name<px4_msgs::msg::MagWorkerData>()
{
  return "px4_msgs/msg/MagWorkerData";
}

template<>
struct has_fixed_size<px4_msgs::msg::MagWorkerData>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::MagWorkerData>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::MagWorkerData>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__MAG_WORKER_DATA__TRAITS_HPP_
