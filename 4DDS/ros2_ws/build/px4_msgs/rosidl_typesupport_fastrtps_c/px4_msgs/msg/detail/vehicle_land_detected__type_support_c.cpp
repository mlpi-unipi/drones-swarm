// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VehicleLandDetected.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_land_detected__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vehicle_land_detected__struct.h"
#include "px4_msgs/msg/detail/vehicle_land_detected__functions.h"
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


using _VehicleLandDetected__ros_msg_type = px4_msgs__msg__VehicleLandDetected;

static bool _VehicleLandDetected__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleLandDetected__ros_msg_type * ros_message = static_cast<const _VehicleLandDetected__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: freefall
  {
    cdr << (ros_message->freefall ? true : false);
  }

  // Field name: ground_contact
  {
    cdr << (ros_message->ground_contact ? true : false);
  }

  // Field name: maybe_landed
  {
    cdr << (ros_message->maybe_landed ? true : false);
  }

  // Field name: landed
  {
    cdr << (ros_message->landed ? true : false);
  }

  // Field name: in_ground_effect
  {
    cdr << (ros_message->in_ground_effect ? true : false);
  }

  // Field name: in_descend
  {
    cdr << (ros_message->in_descend ? true : false);
  }

  // Field name: has_low_throttle
  {
    cdr << (ros_message->has_low_throttle ? true : false);
  }

  // Field name: vertical_movement
  {
    cdr << (ros_message->vertical_movement ? true : false);
  }

  // Field name: horizontal_movement
  {
    cdr << (ros_message->horizontal_movement ? true : false);
  }

  // Field name: rotational_movement
  {
    cdr << (ros_message->rotational_movement ? true : false);
  }

  // Field name: close_to_ground_or_skipped_check
  {
    cdr << (ros_message->close_to_ground_or_skipped_check ? true : false);
  }

  // Field name: at_rest
  {
    cdr << (ros_message->at_rest ? true : false);
  }

  return true;
}

static bool _VehicleLandDetected__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleLandDetected__ros_msg_type * ros_message = static_cast<_VehicleLandDetected__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: freefall
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->freefall = tmp ? true : false;
  }

  // Field name: ground_contact
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->ground_contact = tmp ? true : false;
  }

  // Field name: maybe_landed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->maybe_landed = tmp ? true : false;
  }

  // Field name: landed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->landed = tmp ? true : false;
  }

  // Field name: in_ground_effect
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_ground_effect = tmp ? true : false;
  }

  // Field name: in_descend
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->in_descend = tmp ? true : false;
  }

  // Field name: has_low_throttle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->has_low_throttle = tmp ? true : false;
  }

  // Field name: vertical_movement
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vertical_movement = tmp ? true : false;
  }

  // Field name: horizontal_movement
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->horizontal_movement = tmp ? true : false;
  }

  // Field name: rotational_movement
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rotational_movement = tmp ? true : false;
  }

  // Field name: close_to_ground_or_skipped_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->close_to_ground_or_skipped_check = tmp ? true : false;
  }

  // Field name: at_rest
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->at_rest = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VehicleLandDetected(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleLandDetected__ros_msg_type * ros_message = static_cast<const _VehicleLandDetected__ros_msg_type *>(untyped_ros_message);
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
  // field.name freefall
  {
    size_t item_size = sizeof(ros_message->freefall);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ground_contact
  {
    size_t item_size = sizeof(ros_message->ground_contact);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name maybe_landed
  {
    size_t item_size = sizeof(ros_message->maybe_landed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name landed
  {
    size_t item_size = sizeof(ros_message->landed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name in_ground_effect
  {
    size_t item_size = sizeof(ros_message->in_ground_effect);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name in_descend
  {
    size_t item_size = sizeof(ros_message->in_descend);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name has_low_throttle
  {
    size_t item_size = sizeof(ros_message->has_low_throttle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vertical_movement
  {
    size_t item_size = sizeof(ros_message->vertical_movement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name horizontal_movement
  {
    size_t item_size = sizeof(ros_message->horizontal_movement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rotational_movement
  {
    size_t item_size = sizeof(ros_message->rotational_movement);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name close_to_ground_or_skipped_check
  {
    size_t item_size = sizeof(ros_message->close_to_ground_or_skipped_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name at_rest
  {
    size_t item_size = sizeof(ros_message->at_rest);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleLandDetected__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VehicleLandDetected(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VehicleLandDetected(
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
  // member: freefall
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ground_contact
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: maybe_landed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: landed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: in_ground_effect
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: in_descend
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: has_low_throttle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vertical_movement
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: horizontal_movement
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rotational_movement
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: close_to_ground_or_skipped_check
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: at_rest
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
    using DataType = px4_msgs__msg__VehicleLandDetected;
    is_plain =
      (
      offsetof(DataType, at_rest) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VehicleLandDetected__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__VehicleLandDetected(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleLandDetected = {
  "px4_msgs::msg",
  "VehicleLandDetected",
  _VehicleLandDetected__cdr_serialize,
  _VehicleLandDetected__cdr_deserialize,
  _VehicleLandDetected__get_serialized_size,
  _VehicleLandDetected__max_serialized_size
};

static rosidl_message_type_support_t _VehicleLandDetected__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleLandDetected,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VehicleLandDetected)() {
  return &_VehicleLandDetected__type_support;
}

#if defined(__cplusplus)
}
#endif
