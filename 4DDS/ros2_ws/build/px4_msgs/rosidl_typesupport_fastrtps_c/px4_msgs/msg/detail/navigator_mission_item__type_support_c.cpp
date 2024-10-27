// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/NavigatorMissionItem.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/navigator_mission_item__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/navigator_mission_item__struct.h"
#include "px4_msgs/msg/detail/navigator_mission_item__functions.h"
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


using _NavigatorMissionItem__ros_msg_type = px4_msgs__msg__NavigatorMissionItem;

static bool _NavigatorMissionItem__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NavigatorMissionItem__ros_msg_type * ros_message = static_cast<const _NavigatorMissionItem__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: instance_count
  {
    cdr << ros_message->instance_count;
  }

  // Field name: sequence_current
  {
    cdr << ros_message->sequence_current;
  }

  // Field name: nav_cmd
  {
    cdr << ros_message->nav_cmd;
  }

  // Field name: latitude
  {
    cdr << ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr << ros_message->longitude;
  }

  // Field name: time_inside
  {
    cdr << ros_message->time_inside;
  }

  // Field name: acceptance_radius
  {
    cdr << ros_message->acceptance_radius;
  }

  // Field name: loiter_radius
  {
    cdr << ros_message->loiter_radius;
  }

  // Field name: yaw
  {
    cdr << ros_message->yaw;
  }

  // Field name: altitude
  {
    cdr << ros_message->altitude;
  }

  // Field name: frame
  {
    cdr << ros_message->frame;
  }

  // Field name: origin
  {
    cdr << ros_message->origin;
  }

  // Field name: loiter_exit_xtrack
  {
    cdr << (ros_message->loiter_exit_xtrack ? true : false);
  }

  // Field name: force_heading
  {
    cdr << (ros_message->force_heading ? true : false);
  }

  // Field name: altitude_is_relative
  {
    cdr << (ros_message->altitude_is_relative ? true : false);
  }

  // Field name: autocontinue
  {
    cdr << (ros_message->autocontinue ? true : false);
  }

  // Field name: vtol_back_transition
  {
    cdr << (ros_message->vtol_back_transition ? true : false);
  }

  return true;
}

static bool _NavigatorMissionItem__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NavigatorMissionItem__ros_msg_type * ros_message = static_cast<_NavigatorMissionItem__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: instance_count
  {
    cdr >> ros_message->instance_count;
  }

  // Field name: sequence_current
  {
    cdr >> ros_message->sequence_current;
  }

  // Field name: nav_cmd
  {
    cdr >> ros_message->nav_cmd;
  }

  // Field name: latitude
  {
    cdr >> ros_message->latitude;
  }

  // Field name: longitude
  {
    cdr >> ros_message->longitude;
  }

  // Field name: time_inside
  {
    cdr >> ros_message->time_inside;
  }

  // Field name: acceptance_radius
  {
    cdr >> ros_message->acceptance_radius;
  }

  // Field name: loiter_radius
  {
    cdr >> ros_message->loiter_radius;
  }

  // Field name: yaw
  {
    cdr >> ros_message->yaw;
  }

  // Field name: altitude
  {
    cdr >> ros_message->altitude;
  }

  // Field name: frame
  {
    cdr >> ros_message->frame;
  }

  // Field name: origin
  {
    cdr >> ros_message->origin;
  }

  // Field name: loiter_exit_xtrack
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->loiter_exit_xtrack = tmp ? true : false;
  }

  // Field name: force_heading
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->force_heading = tmp ? true : false;
  }

  // Field name: altitude_is_relative
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->altitude_is_relative = tmp ? true : false;
  }

  // Field name: autocontinue
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->autocontinue = tmp ? true : false;
  }

  // Field name: vtol_back_transition
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vtol_back_transition = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__NavigatorMissionItem(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NavigatorMissionItem__ros_msg_type * ros_message = static_cast<const _NavigatorMissionItem__ros_msg_type *>(untyped_ros_message);
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
  // field.name instance_count
  {
    size_t item_size = sizeof(ros_message->instance_count);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sequence_current
  {
    size_t item_size = sizeof(ros_message->sequence_current);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name nav_cmd
  {
    size_t item_size = sizeof(ros_message->nav_cmd);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name latitude
  {
    size_t item_size = sizeof(ros_message->latitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name longitude
  {
    size_t item_size = sizeof(ros_message->longitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name time_inside
  {
    size_t item_size = sizeof(ros_message->time_inside);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name acceptance_radius
  {
    size_t item_size = sizeof(ros_message->acceptance_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loiter_radius
  {
    size_t item_size = sizeof(ros_message->loiter_radius);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name yaw
  {
    size_t item_size = sizeof(ros_message->yaw);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude
  {
    size_t item_size = sizeof(ros_message->altitude);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name frame
  {
    size_t item_size = sizeof(ros_message->frame);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name origin
  {
    size_t item_size = sizeof(ros_message->origin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name loiter_exit_xtrack
  {
    size_t item_size = sizeof(ros_message->loiter_exit_xtrack);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name force_heading
  {
    size_t item_size = sizeof(ros_message->force_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name altitude_is_relative
  {
    size_t item_size = sizeof(ros_message->altitude_is_relative);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name autocontinue
  {
    size_t item_size = sizeof(ros_message->autocontinue);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vtol_back_transition
  {
    size_t item_size = sizeof(ros_message->vtol_back_transition);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NavigatorMissionItem__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__NavigatorMissionItem(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__NavigatorMissionItem(
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
  // member: instance_count
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sequence_current
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: nav_cmd
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: latitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: longitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: time_inside
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: acceptance_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: loiter_radius
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: yaw
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: altitude
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: frame
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: origin
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: loiter_exit_xtrack
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: force_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: altitude_is_relative
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: autocontinue
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vtol_back_transition
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
    using DataType = px4_msgs__msg__NavigatorMissionItem;
    is_plain =
      (
      offsetof(DataType, vtol_back_transition) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _NavigatorMissionItem__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__NavigatorMissionItem(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_NavigatorMissionItem = {
  "px4_msgs::msg",
  "NavigatorMissionItem",
  _NavigatorMissionItem__cdr_serialize,
  _NavigatorMissionItem__cdr_deserialize,
  _NavigatorMissionItem__get_serialized_size,
  _NavigatorMissionItem__max_serialized_size
};

static rosidl_message_type_support_t _NavigatorMissionItem__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NavigatorMissionItem,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, NavigatorMissionItem)() {
  return &_NavigatorMissionItem__type_support;
}

#if defined(__cplusplus)
}
#endif
