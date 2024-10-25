// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/ManualControlSwitches.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/manual_control_switches__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/manual_control_switches__struct.h"
#include "px4_msgs/msg/detail/manual_control_switches__functions.h"
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


using _ManualControlSwitches__ros_msg_type = px4_msgs__msg__ManualControlSwitches;

static bool _ManualControlSwitches__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ManualControlSwitches__ros_msg_type * ros_message = static_cast<const _ManualControlSwitches__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: mode_slot
  {
    cdr << ros_message->mode_slot;
  }

  // Field name: arm_switch
  {
    cdr << ros_message->arm_switch;
  }

  // Field name: return_switch
  {
    cdr << ros_message->return_switch;
  }

  // Field name: loiter_switch
  {
    cdr << ros_message->loiter_switch;
  }

  // Field name: offboard_switch
  {
    cdr << ros_message->offboard_switch;
  }

  // Field name: kill_switch
  {
    cdr << ros_message->kill_switch;
  }

  // Field name: gear_switch
  {
    cdr << ros_message->gear_switch;
  }

  // Field name: transition_switch
  {
    cdr << ros_message->transition_switch;
  }

  // Field name: photo_switch
  {
    cdr << ros_message->photo_switch;
  }

  // Field name: video_switch
  {
    cdr << ros_message->video_switch;
  }

  // Field name: engage_main_motor_switch
  {
    cdr << ros_message->engage_main_motor_switch;
  }

  // Field name: switch_changes
  {
    cdr << ros_message->switch_changes;
  }

  return true;
}

static bool _ManualControlSwitches__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ManualControlSwitches__ros_msg_type * ros_message = static_cast<_ManualControlSwitches__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: mode_slot
  {
    cdr >> ros_message->mode_slot;
  }

  // Field name: arm_switch
  {
    cdr >> ros_message->arm_switch;
  }

  // Field name: return_switch
  {
    cdr >> ros_message->return_switch;
  }

  // Field name: loiter_switch
  {
    cdr >> ros_message->loiter_switch;
  }

  // Field name: offboard_switch
  {
    cdr >> ros_message->offboard_switch;
  }

  // Field name: kill_switch
  {
    cdr >> ros_message->kill_switch;
  }

  // Field name: gear_switch
  {
    cdr >> ros_message->gear_switch;
  }

  // Field name: transition_switch
  {
    cdr >> ros_message->transition_switch;
  }

  // Field name: photo_switch
  {
    cdr >> ros_message->photo_switch;
  }

  // Field name: video_switch
  {
    cdr >> ros_message->video_switch;
  }

  // Field name: engage_main_motor_switch
  {
    cdr >> ros_message->engage_main_motor_switch;
  }

  // Field name: switch_changes
  {
    cdr >> ros_message->switch_changes;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__ManualControlSwitches(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ManualControlSwitches__ros_msg_type * ros_message = static_cast<const _ManualControlSwitches__ros_msg_type *>(untyped_ros_message);
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
  // field.name mode_slot
  {
    size_t item_size = sizeof(ros_message->mode_slot);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name arm_switch
  {
    size_t item_size = sizeof(ros_message->arm_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name return_switch
  {
    size_t item_size = sizeof(ros_message->return_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loiter_switch
  {
    size_t item_size = sizeof(ros_message->loiter_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offboard_switch
  {
    size_t item_size = sizeof(ros_message->offboard_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name kill_switch
  {
    size_t item_size = sizeof(ros_message->kill_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gear_switch
  {
    size_t item_size = sizeof(ros_message->gear_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name transition_switch
  {
    size_t item_size = sizeof(ros_message->transition_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name photo_switch
  {
    size_t item_size = sizeof(ros_message->photo_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name video_switch
  {
    size_t item_size = sizeof(ros_message->video_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engage_main_motor_switch
  {
    size_t item_size = sizeof(ros_message->engage_main_motor_switch);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name switch_changes
  {
    size_t item_size = sizeof(ros_message->switch_changes);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ManualControlSwitches__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__ManualControlSwitches(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__ManualControlSwitches(
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
  // member: mode_slot
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: arm_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: return_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: loiter_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: offboard_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: kill_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gear_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: transition_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: photo_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: video_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engage_main_motor_switch
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: switch_changes
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
    using DataType = px4_msgs__msg__ManualControlSwitches;
    is_plain =
      (
      offsetof(DataType, switch_changes) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ManualControlSwitches__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__ManualControlSwitches(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ManualControlSwitches = {
  "px4_msgs::msg",
  "ManualControlSwitches",
  _ManualControlSwitches__cdr_serialize,
  _ManualControlSwitches__cdr_deserialize,
  _ManualControlSwitches__get_serialized_size,
  _ManualControlSwitches__max_serialized_size
};

static rosidl_message_type_support_t _ManualControlSwitches__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ManualControlSwitches,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, ManualControlSwitches)() {
  return &_ManualControlSwitches__type_support;
}

#if defined(__cplusplus)
}
#endif
