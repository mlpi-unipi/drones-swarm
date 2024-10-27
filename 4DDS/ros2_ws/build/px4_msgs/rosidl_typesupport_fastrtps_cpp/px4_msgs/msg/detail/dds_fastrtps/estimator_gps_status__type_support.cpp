// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/EstimatorGpsStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/estimator_gps_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/estimator_gps_status__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::EstimatorGpsStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: timestamp_sample
  cdr << ros_message.timestamp_sample;
  // Member: checks_passed
  cdr << (ros_message.checks_passed ? true : false);
  // Member: check_fail_gps_fix
  cdr << (ros_message.check_fail_gps_fix ? true : false);
  // Member: check_fail_min_sat_count
  cdr << (ros_message.check_fail_min_sat_count ? true : false);
  // Member: check_fail_max_pdop
  cdr << (ros_message.check_fail_max_pdop ? true : false);
  // Member: check_fail_max_horz_err
  cdr << (ros_message.check_fail_max_horz_err ? true : false);
  // Member: check_fail_max_vert_err
  cdr << (ros_message.check_fail_max_vert_err ? true : false);
  // Member: check_fail_max_spd_err
  cdr << (ros_message.check_fail_max_spd_err ? true : false);
  // Member: check_fail_max_horz_drift
  cdr << (ros_message.check_fail_max_horz_drift ? true : false);
  // Member: check_fail_max_vert_drift
  cdr << (ros_message.check_fail_max_vert_drift ? true : false);
  // Member: check_fail_max_horz_spd_err
  cdr << (ros_message.check_fail_max_horz_spd_err ? true : false);
  // Member: check_fail_max_vert_spd_err
  cdr << (ros_message.check_fail_max_vert_spd_err ? true : false);
  // Member: position_drift_rate_horizontal_m_s
  cdr << ros_message.position_drift_rate_horizontal_m_s;
  // Member: position_drift_rate_vertical_m_s
  cdr << ros_message.position_drift_rate_vertical_m_s;
  // Member: filtered_horizontal_speed_m_s
  cdr << ros_message.filtered_horizontal_speed_m_s;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::EstimatorGpsStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: timestamp_sample
  cdr >> ros_message.timestamp_sample;

  // Member: checks_passed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.checks_passed = tmp ? true : false;
  }

  // Member: check_fail_gps_fix
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.check_fail_gps_fix = tmp ? true : false;
  }

  // Member: check_fail_min_sat_count
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.check_fail_min_sat_count = tmp ? true : false;
  }

  // Member: check_fail_max_pdop
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.check_fail_max_pdop = tmp ? true : false;
  }

  // Member: check_fail_max_horz_err
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.check_fail_max_horz_err = tmp ? true : false;
  }

  // Member: check_fail_max_vert_err
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.check_fail_max_vert_err = tmp ? true : false;
  }

  // Member: check_fail_max_spd_err
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.check_fail_max_spd_err = tmp ? true : false;
  }

  // Member: check_fail_max_horz_drift
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.check_fail_max_horz_drift = tmp ? true : false;
  }

  // Member: check_fail_max_vert_drift
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.check_fail_max_vert_drift = tmp ? true : false;
  }

  // Member: check_fail_max_horz_spd_err
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.check_fail_max_horz_spd_err = tmp ? true : false;
  }

  // Member: check_fail_max_vert_spd_err
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.check_fail_max_vert_spd_err = tmp ? true : false;
  }

  // Member: position_drift_rate_horizontal_m_s
  cdr >> ros_message.position_drift_rate_horizontal_m_s;

  // Member: position_drift_rate_vertical_m_s
  cdr >> ros_message.position_drift_rate_vertical_m_s;

  // Member: filtered_horizontal_speed_m_s
  cdr >> ros_message.filtered_horizontal_speed_m_s;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::EstimatorGpsStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: timestamp_sample
  {
    size_t item_size = sizeof(ros_message.timestamp_sample);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: checks_passed
  {
    size_t item_size = sizeof(ros_message.checks_passed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: check_fail_gps_fix
  {
    size_t item_size = sizeof(ros_message.check_fail_gps_fix);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: check_fail_min_sat_count
  {
    size_t item_size = sizeof(ros_message.check_fail_min_sat_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: check_fail_max_pdop
  {
    size_t item_size = sizeof(ros_message.check_fail_max_pdop);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: check_fail_max_horz_err
  {
    size_t item_size = sizeof(ros_message.check_fail_max_horz_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: check_fail_max_vert_err
  {
    size_t item_size = sizeof(ros_message.check_fail_max_vert_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: check_fail_max_spd_err
  {
    size_t item_size = sizeof(ros_message.check_fail_max_spd_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: check_fail_max_horz_drift
  {
    size_t item_size = sizeof(ros_message.check_fail_max_horz_drift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: check_fail_max_vert_drift
  {
    size_t item_size = sizeof(ros_message.check_fail_max_vert_drift);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: check_fail_max_horz_spd_err
  {
    size_t item_size = sizeof(ros_message.check_fail_max_horz_spd_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: check_fail_max_vert_spd_err
  {
    size_t item_size = sizeof(ros_message.check_fail_max_vert_spd_err);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_drift_rate_horizontal_m_s
  {
    size_t item_size = sizeof(ros_message.position_drift_rate_horizontal_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_drift_rate_vertical_m_s
  {
    size_t item_size = sizeof(ros_message.position_drift_rate_vertical_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: filtered_horizontal_speed_m_s
  {
    size_t item_size = sizeof(ros_message.filtered_horizontal_speed_m_s);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_EstimatorGpsStatus(
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


  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: timestamp_sample
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: checks_passed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: check_fail_gps_fix
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: check_fail_min_sat_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: check_fail_max_pdop
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: check_fail_max_horz_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: check_fail_max_vert_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: check_fail_max_spd_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: check_fail_max_horz_drift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: check_fail_max_vert_drift
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: check_fail_max_horz_spd_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: check_fail_max_vert_spd_err
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: position_drift_rate_horizontal_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: position_drift_rate_vertical_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: filtered_horizontal_speed_m_s
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = px4_msgs::msg::EstimatorGpsStatus;
    is_plain =
      (
      offsetof(DataType, filtered_horizontal_speed_m_s) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _EstimatorGpsStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EstimatorGpsStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _EstimatorGpsStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::EstimatorGpsStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _EstimatorGpsStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::EstimatorGpsStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _EstimatorGpsStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_EstimatorGpsStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _EstimatorGpsStatus__callbacks = {
  "px4_msgs::msg",
  "EstimatorGpsStatus",
  _EstimatorGpsStatus__cdr_serialize,
  _EstimatorGpsStatus__cdr_deserialize,
  _EstimatorGpsStatus__get_serialized_size,
  _EstimatorGpsStatus__max_serialized_size
};

static rosidl_message_type_support_t _EstimatorGpsStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_EstimatorGpsStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::EstimatorGpsStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EstimatorGpsStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, EstimatorGpsStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_EstimatorGpsStatus__handle;
}

#ifdef __cplusplus
}
#endif
