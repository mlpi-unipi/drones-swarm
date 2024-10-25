// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/ArmingCheckReply.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/arming_check_reply__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/arming_check_reply__struct.h"
#include "px4_msgs/msg/detail/arming_check_reply__functions.h"
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

#include "px4_msgs/msg/detail/event__functions.h"  // events

// forward declare type support functions
size_t get_serialized_size_px4_msgs__msg__Event(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_px4_msgs__msg__Event(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, Event)();


using _ArmingCheckReply__ros_msg_type = px4_msgs__msg__ArmingCheckReply;

static bool _ArmingCheckReply__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ArmingCheckReply__ros_msg_type * ros_message = static_cast<const _ArmingCheckReply__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: request_id
  {
    cdr << ros_message->request_id;
  }

  // Field name: registration_id
  {
    cdr << ros_message->registration_id;
  }

  // Field name: health_component_index
  {
    cdr << ros_message->health_component_index;
  }

  // Field name: health_component_is_present
  {
    cdr << (ros_message->health_component_is_present ? true : false);
  }

  // Field name: health_component_warning
  {
    cdr << (ros_message->health_component_warning ? true : false);
  }

  // Field name: health_component_error
  {
    cdr << (ros_message->health_component_error ? true : false);
  }

  // Field name: can_arm_and_run
  {
    cdr << (ros_message->can_arm_and_run ? true : false);
  }

  // Field name: num_events
  {
    cdr << ros_message->num_events;
  }

  // Field name: events
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, px4_msgs, msg, Event
      )()->data);
    size_t size = 5;
    auto array_ptr = ros_message->events;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_serialize(
          &array_ptr[i], cdr))
      {
        return false;
      }
    }
  }

  // Field name: mode_req_angular_velocity
  {
    cdr << (ros_message->mode_req_angular_velocity ? true : false);
  }

  // Field name: mode_req_attitude
  {
    cdr << (ros_message->mode_req_attitude ? true : false);
  }

  // Field name: mode_req_local_alt
  {
    cdr << (ros_message->mode_req_local_alt ? true : false);
  }

  // Field name: mode_req_local_position
  {
    cdr << (ros_message->mode_req_local_position ? true : false);
  }

  // Field name: mode_req_local_position_relaxed
  {
    cdr << (ros_message->mode_req_local_position_relaxed ? true : false);
  }

  // Field name: mode_req_global_position
  {
    cdr << (ros_message->mode_req_global_position ? true : false);
  }

  // Field name: mode_req_mission
  {
    cdr << (ros_message->mode_req_mission ? true : false);
  }

  // Field name: mode_req_home_position
  {
    cdr << (ros_message->mode_req_home_position ? true : false);
  }

  // Field name: mode_req_prevent_arming
  {
    cdr << (ros_message->mode_req_prevent_arming ? true : false);
  }

  // Field name: mode_req_manual_control
  {
    cdr << (ros_message->mode_req_manual_control ? true : false);
  }

  return true;
}

static bool _ArmingCheckReply__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ArmingCheckReply__ros_msg_type * ros_message = static_cast<_ArmingCheckReply__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: request_id
  {
    cdr >> ros_message->request_id;
  }

  // Field name: registration_id
  {
    cdr >> ros_message->registration_id;
  }

  // Field name: health_component_index
  {
    cdr >> ros_message->health_component_index;
  }

  // Field name: health_component_is_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->health_component_is_present = tmp ? true : false;
  }

  // Field name: health_component_warning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->health_component_warning = tmp ? true : false;
  }

  // Field name: health_component_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->health_component_error = tmp ? true : false;
  }

  // Field name: can_arm_and_run
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->can_arm_and_run = tmp ? true : false;
  }

  // Field name: num_events
  {
    cdr >> ros_message->num_events;
  }

  // Field name: events
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, px4_msgs, msg, Event
      )()->data);
    size_t size = 5;
    auto array_ptr = ros_message->events;
    for (size_t i = 0; i < size; ++i) {
      if (!callbacks->cdr_deserialize(
          cdr, &array_ptr[i]))
      {
        return false;
      }
    }
  }

  // Field name: mode_req_angular_velocity
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_angular_velocity = tmp ? true : false;
  }

  // Field name: mode_req_attitude
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_attitude = tmp ? true : false;
  }

  // Field name: mode_req_local_alt
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_local_alt = tmp ? true : false;
  }

  // Field name: mode_req_local_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_local_position = tmp ? true : false;
  }

  // Field name: mode_req_local_position_relaxed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_local_position_relaxed = tmp ? true : false;
  }

  // Field name: mode_req_global_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_global_position = tmp ? true : false;
  }

  // Field name: mode_req_mission
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_mission = tmp ? true : false;
  }

  // Field name: mode_req_home_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_home_position = tmp ? true : false;
  }

  // Field name: mode_req_prevent_arming
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_prevent_arming = tmp ? true : false;
  }

  // Field name: mode_req_manual_control
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->mode_req_manual_control = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__ArmingCheckReply(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ArmingCheckReply__ros_msg_type * ros_message = static_cast<const _ArmingCheckReply__ros_msg_type *>(untyped_ros_message);
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
  // field.name request_id
  {
    size_t item_size = sizeof(ros_message->request_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name registration_id
  {
    size_t item_size = sizeof(ros_message->registration_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name health_component_index
  {
    size_t item_size = sizeof(ros_message->health_component_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name health_component_is_present
  {
    size_t item_size = sizeof(ros_message->health_component_is_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name health_component_warning
  {
    size_t item_size = sizeof(ros_message->health_component_warning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name health_component_error
  {
    size_t item_size = sizeof(ros_message->health_component_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name can_arm_and_run
  {
    size_t item_size = sizeof(ros_message->can_arm_and_run);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name num_events
  {
    size_t item_size = sizeof(ros_message->num_events);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name events
  {
    size_t array_size = 5;
    auto array_ptr = ros_message->events;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += get_serialized_size_px4_msgs__msg__Event(
        &array_ptr[index], current_alignment);
    }
  }
  // field.name mode_req_angular_velocity
  {
    size_t item_size = sizeof(ros_message->mode_req_angular_velocity);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_attitude
  {
    size_t item_size = sizeof(ros_message->mode_req_attitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_local_alt
  {
    size_t item_size = sizeof(ros_message->mode_req_local_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_local_position
  {
    size_t item_size = sizeof(ros_message->mode_req_local_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_local_position_relaxed
  {
    size_t item_size = sizeof(ros_message->mode_req_local_position_relaxed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_global_position
  {
    size_t item_size = sizeof(ros_message->mode_req_global_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_mission
  {
    size_t item_size = sizeof(ros_message->mode_req_mission);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_home_position
  {
    size_t item_size = sizeof(ros_message->mode_req_home_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_prevent_arming
  {
    size_t item_size = sizeof(ros_message->mode_req_prevent_arming);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name mode_req_manual_control
  {
    size_t item_size = sizeof(ros_message->mode_req_manual_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ArmingCheckReply__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__ArmingCheckReply(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__ArmingCheckReply(
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
  // member: request_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: registration_id
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: health_component_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: health_component_is_present
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: health_component_warning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: health_component_error
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: can_arm_and_run
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: num_events
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: events
  {
    size_t array_size = 5;


    last_member_size = 0;
    for (size_t index = 0; index < array_size; ++index) {
      bool inner_full_bounded;
      bool inner_is_plain;
      size_t inner_size;
      inner_size =
        max_serialized_size_px4_msgs__msg__Event(
        inner_full_bounded, inner_is_plain, current_alignment);
      last_member_size += inner_size;
      current_alignment += inner_size;
      full_bounded &= inner_full_bounded;
      is_plain &= inner_is_plain;
    }
  }
  // member: mode_req_angular_velocity
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode_req_attitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode_req_local_alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode_req_local_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode_req_local_position_relaxed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode_req_global_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode_req_mission
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode_req_home_position
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode_req_prevent_arming
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: mode_req_manual_control
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
    using DataType = px4_msgs__msg__ArmingCheckReply;
    is_plain =
      (
      offsetof(DataType, mode_req_manual_control) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ArmingCheckReply__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__ArmingCheckReply(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ArmingCheckReply = {
  "px4_msgs::msg",
  "ArmingCheckReply",
  _ArmingCheckReply__cdr_serialize,
  _ArmingCheckReply__cdr_deserialize,
  _ArmingCheckReply__get_serialized_size,
  _ArmingCheckReply__max_serialized_size
};

static rosidl_message_type_support_t _ArmingCheckReply__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ArmingCheckReply,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, ArmingCheckReply)() {
  return &_ArmingCheckReply__type_support;
}

#if defined(__cplusplus)
}
#endif
