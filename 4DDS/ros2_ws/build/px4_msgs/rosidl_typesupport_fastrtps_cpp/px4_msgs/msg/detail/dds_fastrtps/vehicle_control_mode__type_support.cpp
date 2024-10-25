// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleControlMode.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_control_mode__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/vehicle_control_mode__struct.hpp"

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
  const px4_msgs::msg::VehicleControlMode & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: flag_armed
  cdr << (ros_message.flag_armed ? true : false);
  // Member: flag_multicopter_position_control_enabled
  cdr << (ros_message.flag_multicopter_position_control_enabled ? true : false);
  // Member: flag_control_manual_enabled
  cdr << (ros_message.flag_control_manual_enabled ? true : false);
  // Member: flag_control_auto_enabled
  cdr << (ros_message.flag_control_auto_enabled ? true : false);
  // Member: flag_control_offboard_enabled
  cdr << (ros_message.flag_control_offboard_enabled ? true : false);
  // Member: flag_control_position_enabled
  cdr << (ros_message.flag_control_position_enabled ? true : false);
  // Member: flag_control_velocity_enabled
  cdr << (ros_message.flag_control_velocity_enabled ? true : false);
  // Member: flag_control_altitude_enabled
  cdr << (ros_message.flag_control_altitude_enabled ? true : false);
  // Member: flag_control_climb_rate_enabled
  cdr << (ros_message.flag_control_climb_rate_enabled ? true : false);
  // Member: flag_control_acceleration_enabled
  cdr << (ros_message.flag_control_acceleration_enabled ? true : false);
  // Member: flag_control_attitude_enabled
  cdr << (ros_message.flag_control_attitude_enabled ? true : false);
  // Member: flag_control_rates_enabled
  cdr << (ros_message.flag_control_rates_enabled ? true : false);
  // Member: flag_control_allocation_enabled
  cdr << (ros_message.flag_control_allocation_enabled ? true : false);
  // Member: flag_control_termination_enabled
  cdr << (ros_message.flag_control_termination_enabled ? true : false);
  // Member: source_id
  cdr << ros_message.source_id;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::VehicleControlMode & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: flag_armed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_armed = tmp ? true : false;
  }

  // Member: flag_multicopter_position_control_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_multicopter_position_control_enabled = tmp ? true : false;
  }

  // Member: flag_control_manual_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_control_manual_enabled = tmp ? true : false;
  }

  // Member: flag_control_auto_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_control_auto_enabled = tmp ? true : false;
  }

  // Member: flag_control_offboard_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_control_offboard_enabled = tmp ? true : false;
  }

  // Member: flag_control_position_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_control_position_enabled = tmp ? true : false;
  }

  // Member: flag_control_velocity_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_control_velocity_enabled = tmp ? true : false;
  }

  // Member: flag_control_altitude_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_control_altitude_enabled = tmp ? true : false;
  }

  // Member: flag_control_climb_rate_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_control_climb_rate_enabled = tmp ? true : false;
  }

  // Member: flag_control_acceleration_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_control_acceleration_enabled = tmp ? true : false;
  }

  // Member: flag_control_attitude_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_control_attitude_enabled = tmp ? true : false;
  }

  // Member: flag_control_rates_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_control_rates_enabled = tmp ? true : false;
  }

  // Member: flag_control_allocation_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_control_allocation_enabled = tmp ? true : false;
  }

  // Member: flag_control_termination_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flag_control_termination_enabled = tmp ? true : false;
  }

  // Member: source_id
  cdr >> ros_message.source_id;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::VehicleControlMode & ros_message,
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
  // Member: flag_armed
  {
    size_t item_size = sizeof(ros_message.flag_armed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_multicopter_position_control_enabled
  {
    size_t item_size = sizeof(ros_message.flag_multicopter_position_control_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_control_manual_enabled
  {
    size_t item_size = sizeof(ros_message.flag_control_manual_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_control_auto_enabled
  {
    size_t item_size = sizeof(ros_message.flag_control_auto_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_control_offboard_enabled
  {
    size_t item_size = sizeof(ros_message.flag_control_offboard_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_control_position_enabled
  {
    size_t item_size = sizeof(ros_message.flag_control_position_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_control_velocity_enabled
  {
    size_t item_size = sizeof(ros_message.flag_control_velocity_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_control_altitude_enabled
  {
    size_t item_size = sizeof(ros_message.flag_control_altitude_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_control_climb_rate_enabled
  {
    size_t item_size = sizeof(ros_message.flag_control_climb_rate_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_control_acceleration_enabled
  {
    size_t item_size = sizeof(ros_message.flag_control_acceleration_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_control_attitude_enabled
  {
    size_t item_size = sizeof(ros_message.flag_control_attitude_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_control_rates_enabled
  {
    size_t item_size = sizeof(ros_message.flag_control_rates_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_control_allocation_enabled
  {
    size_t item_size = sizeof(ros_message.flag_control_allocation_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flag_control_termination_enabled
  {
    size_t item_size = sizeof(ros_message.flag_control_termination_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: source_id
  {
    size_t item_size = sizeof(ros_message.source_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_VehicleControlMode(
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

  // Member: flag_armed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flag_multicopter_position_control_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flag_control_manual_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flag_control_auto_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flag_control_offboard_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flag_control_position_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flag_control_velocity_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flag_control_altitude_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flag_control_climb_rate_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flag_control_acceleration_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flag_control_attitude_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flag_control_rates_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flag_control_allocation_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flag_control_termination_enabled
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: source_id
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
    using DataType = px4_msgs::msg::VehicleControlMode;
    is_plain =
      (
      offsetof(DataType, source_id) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _VehicleControlMode__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleControlMode *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleControlMode__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::VehicleControlMode *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleControlMode__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleControlMode *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleControlMode__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VehicleControlMode(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VehicleControlMode__callbacks = {
  "px4_msgs::msg",
  "VehicleControlMode",
  _VehicleControlMode__cdr_serialize,
  _VehicleControlMode__cdr_deserialize,
  _VehicleControlMode__get_serialized_size,
  _VehicleControlMode__max_serialized_size
};

static rosidl_message_type_support_t _VehicleControlMode__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleControlMode__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::VehicleControlMode>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleControlMode__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, VehicleControlMode)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleControlMode__handle;
}

#ifdef __cplusplus
}
#endif
