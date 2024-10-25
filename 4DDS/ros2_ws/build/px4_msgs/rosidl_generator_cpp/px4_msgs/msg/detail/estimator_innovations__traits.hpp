// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/EstimatorInnovations.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATIONS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/estimator_innovations__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const EstimatorInnovations & msg,
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

  // member: gps_hvel
  {
    if (msg.gps_hvel.size() == 0) {
      out << "gps_hvel: []";
    } else {
      out << "gps_hvel: [";
      size_t pending_items = msg.gps_hvel.size();
      for (auto item : msg.gps_hvel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gps_vvel
  {
    out << "gps_vvel: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_vvel, out);
    out << ", ";
  }

  // member: gps_hpos
  {
    if (msg.gps_hpos.size() == 0) {
      out << "gps_hpos: []";
    } else {
      out << "gps_hpos: [";
      size_t pending_items = msg.gps_hpos.size();
      for (auto item : msg.gps_hpos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gps_vpos
  {
    out << "gps_vpos: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_vpos, out);
    out << ", ";
  }

  // member: ev_hvel
  {
    if (msg.ev_hvel.size() == 0) {
      out << "ev_hvel: []";
    } else {
      out << "ev_hvel: [";
      size_t pending_items = msg.ev_hvel.size();
      for (auto item : msg.ev_hvel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ev_vvel
  {
    out << "ev_vvel: ";
    rosidl_generator_traits::value_to_yaml(msg.ev_vvel, out);
    out << ", ";
  }

  // member: ev_hpos
  {
    if (msg.ev_hpos.size() == 0) {
      out << "ev_hpos: []";
    } else {
      out << "ev_hpos: [";
      size_t pending_items = msg.ev_hpos.size();
      for (auto item : msg.ev_hpos) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: ev_vpos
  {
    out << "ev_vpos: ";
    rosidl_generator_traits::value_to_yaml(msg.ev_vpos, out);
    out << ", ";
  }

  // member: rng_vpos
  {
    out << "rng_vpos: ";
    rosidl_generator_traits::value_to_yaml(msg.rng_vpos, out);
    out << ", ";
  }

  // member: baro_vpos
  {
    out << "baro_vpos: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_vpos, out);
    out << ", ";
  }

  // member: aux_hvel
  {
    if (msg.aux_hvel.size() == 0) {
      out << "aux_hvel: []";
    } else {
      out << "aux_hvel: [";
      size_t pending_items = msg.aux_hvel.size();
      for (auto item : msg.aux_hvel) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: flow
  {
    if (msg.flow.size() == 0) {
      out << "flow: []";
    } else {
      out << "flow: [";
      size_t pending_items = msg.flow.size();
      for (auto item : msg.flow) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: terr_flow
  {
    if (msg.terr_flow.size() == 0) {
      out << "terr_flow: []";
    } else {
      out << "terr_flow: [";
      size_t pending_items = msg.terr_flow.size();
      for (auto item : msg.terr_flow) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: heading
  {
    out << "heading: ";
    rosidl_generator_traits::value_to_yaml(msg.heading, out);
    out << ", ";
  }

  // member: mag_field
  {
    if (msg.mag_field.size() == 0) {
      out << "mag_field: []";
    } else {
      out << "mag_field: [";
      size_t pending_items = msg.mag_field.size();
      for (auto item : msg.mag_field) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: gravity
  {
    if (msg.gravity.size() == 0) {
      out << "gravity: []";
    } else {
      out << "gravity: [";
      size_t pending_items = msg.gravity.size();
      for (auto item : msg.gravity) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: drag
  {
    if (msg.drag.size() == 0) {
      out << "drag: []";
    } else {
      out << "drag: [";
      size_t pending_items = msg.drag.size();
      for (auto item : msg.drag) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: airspeed
  {
    out << "airspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.airspeed, out);
    out << ", ";
  }

  // member: beta
  {
    out << "beta: ";
    rosidl_generator_traits::value_to_yaml(msg.beta, out);
    out << ", ";
  }

  // member: hagl
  {
    out << "hagl: ";
    rosidl_generator_traits::value_to_yaml(msg.hagl, out);
    out << ", ";
  }

  // member: hagl_rate
  {
    out << "hagl_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.hagl_rate, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EstimatorInnovations & msg,
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

  // member: gps_hvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gps_hvel.size() == 0) {
      out << "gps_hvel: []\n";
    } else {
      out << "gps_hvel:\n";
      for (auto item : msg.gps_hvel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gps_vvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_vvel: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_vvel, out);
    out << "\n";
  }

  // member: gps_hpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gps_hpos.size() == 0) {
      out << "gps_hpos: []\n";
    } else {
      out << "gps_hpos:\n";
      for (auto item : msg.gps_hpos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gps_vpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_vpos: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_vpos, out);
    out << "\n";
  }

  // member: ev_hvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ev_hvel.size() == 0) {
      out << "ev_hvel: []\n";
    } else {
      out << "ev_hvel:\n";
      for (auto item : msg.ev_hvel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ev_vvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ev_vvel: ";
    rosidl_generator_traits::value_to_yaml(msg.ev_vvel, out);
    out << "\n";
  }

  // member: ev_hpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.ev_hpos.size() == 0) {
      out << "ev_hpos: []\n";
    } else {
      out << "ev_hpos:\n";
      for (auto item : msg.ev_hpos) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: ev_vpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "ev_vpos: ";
    rosidl_generator_traits::value_to_yaml(msg.ev_vpos, out);
    out << "\n";
  }

  // member: rng_vpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rng_vpos: ";
    rosidl_generator_traits::value_to_yaml(msg.rng_vpos, out);
    out << "\n";
  }

  // member: baro_vpos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "baro_vpos: ";
    rosidl_generator_traits::value_to_yaml(msg.baro_vpos, out);
    out << "\n";
  }

  // member: aux_hvel
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.aux_hvel.size() == 0) {
      out << "aux_hvel: []\n";
    } else {
      out << "aux_hvel:\n";
      for (auto item : msg.aux_hvel) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: flow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.flow.size() == 0) {
      out << "flow: []\n";
    } else {
      out << "flow:\n";
      for (auto item : msg.flow) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: terr_flow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.terr_flow.size() == 0) {
      out << "terr_flow: []\n";
    } else {
      out << "terr_flow:\n";
      for (auto item : msg.terr_flow) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
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

  // member: mag_field
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.mag_field.size() == 0) {
      out << "mag_field: []\n";
    } else {
      out << "mag_field:\n";
      for (auto item : msg.mag_field) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: gravity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.gravity.size() == 0) {
      out << "gravity: []\n";
    } else {
      out << "gravity:\n";
      for (auto item : msg.gravity) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: drag
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.drag.size() == 0) {
      out << "drag: []\n";
    } else {
      out << "drag:\n";
      for (auto item : msg.drag) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: airspeed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "airspeed: ";
    rosidl_generator_traits::value_to_yaml(msg.airspeed, out);
    out << "\n";
  }

  // member: beta
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "beta: ";
    rosidl_generator_traits::value_to_yaml(msg.beta, out);
    out << "\n";
  }

  // member: hagl
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hagl: ";
    rosidl_generator_traits::value_to_yaml(msg.hagl, out);
    out << "\n";
  }

  // member: hagl_rate
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "hagl_rate: ";
    rosidl_generator_traits::value_to_yaml(msg.hagl_rate, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EstimatorInnovations & msg, bool use_flow_style = false)
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
  const px4_msgs::msg::EstimatorInnovations & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::EstimatorInnovations & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::EstimatorInnovations>()
{
  return "px4_msgs::msg::EstimatorInnovations";
}

template<>
inline const char * name<px4_msgs::msg::EstimatorInnovations>()
{
  return "px4_msgs/msg/EstimatorInnovations";
}

template<>
struct has_fixed_size<px4_msgs::msg::EstimatorInnovations>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::EstimatorInnovations>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::EstimatorInnovations>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_INNOVATIONS__TRAITS_HPP_
