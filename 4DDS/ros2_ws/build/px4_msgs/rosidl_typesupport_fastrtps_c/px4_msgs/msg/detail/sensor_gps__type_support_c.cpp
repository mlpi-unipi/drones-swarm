// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/SensorGps.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/sensor_gps__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/sensor_gps__struct.h"
#include "px4_msgs/msg/detail/sensor_gps__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _SensorGps__ros_msg_type = px4_msgs__msg__SensorGps;

static bool _SensorGps__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SensorGps__ros_msg_type * ros_message = static_cast<const _SensorGps__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: device_id
  {
    cdr << ros_message->device_id;
  }

  // Field name: latitude_deg
  {
    cdr << ros_message->latitude_deg;
  }

  // Field name: longitude_deg
  {
    cdr << ros_message->longitude_deg;
  }

  // Field name: altitude_msl_m
  {
    cdr << ros_message->altitude_msl_m;
  }

  // Field name: altitude_ellipsoid_m
  {
    cdr << ros_message->altitude_ellipsoid_m;
  }

  // Field name: s_variance_m_s
  {
    cdr << ros_message->s_variance_m_s;
  }

  // Field name: c_variance_rad
  {
    cdr << ros_message->c_variance_rad;
  }

  // Field name: fix_type
  {
    cdr << ros_message->fix_type;
  }

  // Field name: eph
  {
    cdr << ros_message->eph;
  }

  // Field name: epv
  {
    cdr << ros_message->epv;
  }

  // Field name: hdop
  {
    cdr << ros_message->hdop;
  }

  // Field name: vdop
  {
    cdr << ros_message->vdop;
  }

  // Field name: noise_per_ms
  {
    cdr << ros_message->noise_per_ms;
  }

  // Field name: automatic_gain_control
  {
    cdr << ros_message->automatic_gain_control;
  }

  // Field name: jamming_state
  {
    cdr << ros_message->jamming_state;
  }

  // Field name: jamming_indicator
  {
    cdr << ros_message->jamming_indicator;
  }

  // Field name: spoofing_state
  {
    cdr << ros_message->spoofing_state;
  }

  // Field name: vel_m_s
  {
    cdr << ros_message->vel_m_s;
  }

  // Field name: vel_n_m_s
  {
    cdr << ros_message->vel_n_m_s;
  }

  // Field name: vel_e_m_s
  {
    cdr << ros_message->vel_e_m_s;
  }

  // Field name: vel_d_m_s
  {
    cdr << ros_message->vel_d_m_s;
  }

  // Field name: cog_rad
  {
    cdr << ros_message->cog_rad;
  }

  // Field name: vel_ned_valid
  {
    cdr << (ros_message->vel_ned_valid ? true : false);
  }

  // Field name: timestamp_time_relative
  {
    cdr << ros_message->timestamp_time_relative;
  }

  // Field name: time_utc_usec
  {
    cdr << ros_message->time_utc_usec;
  }

  // Field name: satellites_used
  {
    cdr << ros_message->satellites_used;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: heading_offset
  {
    cdr << ros_message->heading_offset;
  }

  // Field name: heading_accuracy
  {
    cdr << ros_message->heading_accuracy;
  }

  // Field name: rtcm_injection_rate
  {
    cdr << ros_message->rtcm_injection_rate;
  }

  // Field name: selected_rtcm_instance
  {
    cdr << ros_message->selected_rtcm_instance;
  }

  // Field name: rtcm_crc_failed
  {
    cdr << (ros_message->rtcm_crc_failed ? true : false);
  }

  // Field name: rtcm_msg_used
  {
    cdr << ros_message->rtcm_msg_used;
  }

  return true;
}

static bool _SensorGps__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SensorGps__ros_msg_type * ros_message = static_cast<_SensorGps__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: device_id
  {
    cdr >> ros_message->device_id;
  }

  // Field name: latitude_deg
  {
    cdr >> ros_message->latitude_deg;
  }

  // Field name: longitude_deg
  {
    cdr >> ros_message->longitude_deg;
  }

  // Field name: altitude_msl_m
  {
    cdr >> ros_message->altitude_msl_m;
  }

  // Field name: altitude_ellipsoid_m
  {
    cdr >> ros_message->altitude_ellipsoid_m;
  }

  // Field name: s_variance_m_s
  {
    cdr >> ros_message->s_variance_m_s;
  }

  // Field name: c_variance_rad
  {
    cdr >> ros_message->c_variance_rad;
  }

  // Field name: fix_type
  {
    cdr >> ros_message->fix_type;
  }

  // Field name: eph
  {
    cdr >> ros_message->eph;
  }

  // Field name: epv
  {
    cdr >> ros_message->epv;
  }

  // Field name: hdop
  {
    cdr >> ros_message->hdop;
  }

  // Field name: vdop
  {
    cdr >> ros_message->vdop;
  }

  // Field name: noise_per_ms
  {
    cdr >> ros_message->noise_per_ms;
  }

  // Field name: automatic_gain_control
  {
    cdr >> ros_message->automatic_gain_control;
  }

  // Field name: jamming_state
  {
    cdr >> ros_message->jamming_state;
  }

  // Field name: jamming_indicator
  {
    cdr >> ros_message->jamming_indicator;
  }

  // Field name: spoofing_state
  {
    cdr >> ros_message->spoofing_state;
  }

  // Field name: vel_m_s
  {
    cdr >> ros_message->vel_m_s;
  }

  // Field name: vel_n_m_s
  {
    cdr >> ros_message->vel_n_m_s;
  }

  // Field name: vel_e_m_s
  {
    cdr >> ros_message->vel_e_m_s;
  }

  // Field name: vel_d_m_s
  {
    cdr >> ros_message->vel_d_m_s;
  }

  // Field name: cog_rad
  {
    cdr >> ros_message->cog_rad;
  }

  // Field name: vel_ned_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vel_ned_valid = tmp ? true : false;
  }

  // Field name: timestamp_time_relative
  {
    cdr >> ros_message->timestamp_time_relative;
  }

  // Field name: time_utc_usec
  {
    cdr >> ros_message->time_utc_usec;
  }

  // Field name: satellites_used
  {
    cdr >> ros_message->satellites_used;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: heading_offset
  {
    cdr >> ros_message->heading_offset;
  }

  // Field name: heading_accuracy
  {
    cdr >> ros_message->heading_accuracy;
  }

  // Field name: rtcm_injection_rate
  {
    cdr >> ros_message->rtcm_injection_rate;
  }

  // Field name: selected_rtcm_instance
  {
    cdr >> ros_message->selected_rtcm_instance;
  }

  // Field name: rtcm_crc_failed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rtcm_crc_failed = tmp ? true : false;
  }

  // Field name: rtcm_msg_used
  {
    cdr >> ros_message->rtcm_msg_used;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__SensorGps(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SensorGps__ros_msg_type * ros_message = static_cast<const _SensorGps__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_sample
  {
    size_t item_size = sizeof(ros_message->timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name device_id
  {
    size_t item_size = sizeof(ros_message->device_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latitude_deg
  {
    size_t item_size = sizeof(ros_message->latitude_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude_deg
  {
    size_t item_size = sizeof(ros_message->longitude_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude_msl_m
  {
    size_t item_size = sizeof(ros_message->altitude_msl_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude_ellipsoid_m
  {
    size_t item_size = sizeof(ros_message->altitude_ellipsoid_m);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name s_variance_m_s
  {
    size_t item_size = sizeof(ros_message->s_variance_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name c_variance_rad
  {
    size_t item_size = sizeof(ros_message->c_variance_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fix_type
  {
    size_t item_size = sizeof(ros_message->fix_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eph
  {
    size_t item_size = sizeof(ros_message->eph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epv
  {
    size_t item_size = sizeof(ros_message->epv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hdop
  {
    size_t item_size = sizeof(ros_message->hdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vdop
  {
    size_t item_size = sizeof(ros_message->vdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name noise_per_ms
  {
    size_t item_size = sizeof(ros_message->noise_per_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name automatic_gain_control
  {
    size_t item_size = sizeof(ros_message->automatic_gain_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name jamming_state
  {
    size_t item_size = sizeof(ros_message->jamming_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name jamming_indicator
  {
    size_t item_size = sizeof(ros_message->jamming_indicator);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spoofing_state
  {
    size_t item_size = sizeof(ros_message->spoofing_state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_m_s
  {
    size_t item_size = sizeof(ros_message->vel_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_n_m_s
  {
    size_t item_size = sizeof(ros_message->vel_n_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_e_m_s
  {
    size_t item_size = sizeof(ros_message->vel_e_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_d_m_s
  {
    size_t item_size = sizeof(ros_message->vel_d_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cog_rad
  {
    size_t item_size = sizeof(ros_message->cog_rad);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel_ned_valid
  {
    size_t item_size = sizeof(ros_message->vel_ned_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name timestamp_time_relative
  {
    size_t item_size = sizeof(ros_message->timestamp_time_relative);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_utc_usec
  {
    size_t item_size = sizeof(ros_message->time_utc_usec);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name satellites_used
  {
    size_t item_size = sizeof(ros_message->satellites_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_offset
  {
    size_t item_size = sizeof(ros_message->heading_offset);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_accuracy
  {
    size_t item_size = sizeof(ros_message->heading_accuracy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rtcm_injection_rate
  {
    size_t item_size = sizeof(ros_message->rtcm_injection_rate);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name selected_rtcm_instance
  {
    size_t item_size = sizeof(ros_message->selected_rtcm_instance);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rtcm_crc_failed
  {
    size_t item_size = sizeof(ros_message->rtcm_crc_failed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rtcm_msg_used
  {
    size_t item_size = sizeof(ros_message->rtcm_msg_used);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SensorGps__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__SensorGps(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__SensorGps(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;

  // member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: timestamp_sample
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: device_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: latitude_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: longitude_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: altitude_msl_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: altitude_ellipsoid_m
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: s_variance_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: c_variance_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fix_type
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eph
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: epv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: noise_per_ms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: automatic_gain_control
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: jamming_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: jamming_indicator
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: spoofing_state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vel_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_n_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_e_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_d_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cog_rad
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vel_ned_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: timestamp_time_relative
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_utc_usec
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: satellites_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading_offset
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading_accuracy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: rtcm_injection_rate
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: selected_rtcm_instance
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rtcm_crc_failed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rtcm_msg_used
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs__msg__SensorGps;
    is_plain =
      (
      offsetof(DataType, rtcm_msg_used) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _SensorGps__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__SensorGps(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SensorGps = {
  "px4_msgs::msg",
  "SensorGps",
  _SensorGps__cdr_serialize,
  _SensorGps__cdr_deserialize,
  _SensorGps__get_serialized_size,
  _SensorGps__max_serialized_size
};

static rosidl_message_type_support_t _SensorGps__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SensorGps,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, SensorGps)() {
  return &_SensorGps__type_support;
}

#if defined(__cplusplus)
}
#endif
