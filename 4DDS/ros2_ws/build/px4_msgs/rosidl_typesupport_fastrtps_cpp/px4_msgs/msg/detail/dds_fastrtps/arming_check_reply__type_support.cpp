// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/ArmingCheckReply.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/arming_check_reply__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/arming_check_reply__struct.hpp"

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
bool cdr_serialize(
  const px4_msgs::msg::Event &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  px4_msgs::msg::Event &);
size_t get_serialized_size(
  const px4_msgs::msg::Event &,
  size_t current_alignment);
size_t
max_serialized_size_Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace px4_msgs


namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::ArmingCheckReply & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: request_id
  cdr << ros_message.request_id;
  // Member: registration_id
  cdr << ros_message.registration_id;
  // Member: health_component_index
  cdr << ros_message.health_component_index;
  // Member: health_component_is_present
  cdr << (ros_message.health_component_is_present ? true : false);
  // Member: health_component_warning
  cdr << (ros_message.health_component_warning ? true : false);
  // Member: health_component_error
  cdr << (ros_message.health_component_error ? true : false);
  // Member: can_arm_and_run
  cdr << (ros_message.can_arm_and_run ? true : false);
  // Member: num_events
  cdr << ros_message.num_events;
  // Member: events
  {
    for (size_t i = 0; i < 5; i++) {
      px4_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.events[i],
        cdr);
    }
  }
  // Member: mode_req_angular_velocity
  cdr << (ros_message.mode_req_angular_velocity ? true : false);
  // Member: mode_req_attitude
  cdr << (ros_message.mode_req_attitude ? true : false);
  // Member: mode_req_local_alt
  cdr << (ros_message.mode_req_local_alt ? true : false);
  // Member: mode_req_local_position
  cdr << (ros_message.mode_req_local_position ? true : false);
  // Member: mode_req_local_position_relaxed
  cdr << (ros_message.mode_req_local_position_relaxed ? true : false);
  // Member: mode_req_global_position
  cdr << (ros_message.mode_req_global_position ? true : false);
  // Member: mode_req_mission
  cdr << (ros_message.mode_req_mission ? true : false);
  // Member: mode_req_home_position
  cdr << (ros_message.mode_req_home_position ? true : false);
  // Member: mode_req_prevent_arming
  cdr << (ros_message.mode_req_prevent_arming ? true : false);
  // Member: mode_req_manual_control
  cdr << (ros_message.mode_req_manual_control ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::ArmingCheckReply & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: request_id
  cdr >> ros_message.request_id;

  // Member: registration_id
  cdr >> ros_message.registration_id;

  // Member: health_component_index
  cdr >> ros_message.health_component_index;

  // Member: health_component_is_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.health_component_is_present = tmp ? true : false;
  }

  // Member: health_component_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.health_component_warning = tmp ? true : false;
  }

  // Member: health_component_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.health_component_error = tmp ? true : false;
  }

  // Member: can_arm_and_run
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.can_arm_and_run = tmp ? true : false;
  }

  // Member: num_events
  cdr >> ros_message.num_events;

  // Member: events
  {
    for (size_t i = 0; i < 5; i++) {
      px4_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.events[i]);
    }
  }

  // Member: mode_req_angular_velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mode_req_angular_velocity = tmp ? true : false;
  }

  // Member: mode_req_attitude
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mode_req_attitude = tmp ? true : false;
  }

  // Member: mode_req_local_alt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mode_req_local_alt = tmp ? true : false;
  }

  // Member: mode_req_local_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mode_req_local_position = tmp ? true : false;
  }

  // Member: mode_req_local_position_relaxed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mode_req_local_position_relaxed = tmp ? true : false;
  }

  // Member: mode_req_global_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mode_req_global_position = tmp ? true : false;
  }

  // Member: mode_req_mission
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mode_req_mission = tmp ? true : false;
  }

  // Member: mode_req_home_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mode_req_home_position = tmp ? true : false;
  }

  // Member: mode_req_prevent_arming
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mode_req_prevent_arming = tmp ? true : false;
  }

  // Member: mode_req_manual_control
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.mode_req_manual_control = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::ArmingCheckReply & ros_message,
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
  // Member: request_id
  {
    size_t item_size = sizeof(ros_message.request_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: registration_id
  {
    size_t item_size = sizeof(ros_message.registration_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: health_component_index
  {
    size_t item_size = sizeof(ros_message.health_component_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: health_component_is_present
  {
    size_t item_size = sizeof(ros_message.health_component_is_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: health_component_warning
  {
    size_t item_size = sizeof(ros_message.health_component_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: health_component_error
  {
    size_t item_size = sizeof(ros_message.health_component_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: can_arm_and_run
  {
    size_t item_size = sizeof(ros_message.can_arm_and_run);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: num_events
  {
    size_t item_size = sizeof(ros_message.num_events);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: events
  {
    size_t array_size = 5;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        px4_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.events[index], current_alignment);
    }
  }
  // Member: mode_req_angular_velocity
  {
    size_t item_size = sizeof(ros_message.mode_req_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_attitude
  {
    size_t item_size = sizeof(ros_message.mode_req_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_local_alt
  {
    size_t item_size = sizeof(ros_message.mode_req_local_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_local_position
  {
    size_t item_size = sizeof(ros_message.mode_req_local_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_local_position_relaxed
  {
    size_t item_size = sizeof(ros_message.mode_req_local_position_relaxed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_global_position
  {
    size_t item_size = sizeof(ros_message.mode_req_global_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_mission
  {
    size_t item_size = sizeof(ros_message.mode_req_mission);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_home_position
  {
    size_t item_size = sizeof(ros_message.mode_req_home_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_prevent_arming
  {
    size_t item_size = sizeof(ros_message.mode_req_prevent_arming);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: mode_req_manual_control
  {
    size_t item_size = sizeof(ros_message.mode_req_manual_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_ArmingCheckReply(
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

  // Member: request_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: registration_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: health_component_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: health_component_is_present
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: health_component_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: health_component_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: can_arm_and_run
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: num_events
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: events
  {
    size_t array_size = 5;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size =
        px4_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Event(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }

  // Member: mode_req_angular_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode_req_attitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode_req_local_alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode_req_local_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode_req_local_position_relaxed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode_req_global_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode_req_mission
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode_req_home_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode_req_prevent_arming
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: mode_req_manual_control
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
    using DataType = px4_msgs::msg::ArmingCheckReply;
    is_plain =
      (
      offsetof(DataType, mode_req_manual_control) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ArmingCheckReply__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::ArmingCheckReply *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ArmingCheckReply__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::ArmingCheckReply *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ArmingCheckReply__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::ArmingCheckReply *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ArmingCheckReply__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ArmingCheckReply(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ArmingCheckReply__callbacks = {
  "px4_msgs::msg",
  "ArmingCheckReply",
  _ArmingCheckReply__cdr_serialize,
  _ArmingCheckReply__cdr_deserialize,
  _ArmingCheckReply__get_serialized_size,
  _ArmingCheckReply__max_serialized_size
};

static rosidl_message_type_support_t _ArmingCheckReply__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ArmingCheckReply__callbacks,
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
get_message_type_support_handle<px4_msgs::msg::ArmingCheckReply>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_ArmingCheckReply__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, ArmingCheckReply)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_ArmingCheckReply__handle;
}

#ifdef __cplusplus
}
#endif
