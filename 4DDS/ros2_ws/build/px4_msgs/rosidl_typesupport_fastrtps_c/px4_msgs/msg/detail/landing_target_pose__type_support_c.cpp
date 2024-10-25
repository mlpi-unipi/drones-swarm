// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/LandingTargetPose.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/landing_target_pose__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/landing_target_pose__struct.h"
#include "px4_msgs/msg/detail/landing_target_pose__functions.h"
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


using _LandingTargetPose__ros_msg_type = px4_msgs__msg__LandingTargetPose;

static bool _LandingTargetPose__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _LandingTargetPose__ros_msg_type * ros_message = static_cast<const _LandingTargetPose__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: is_static
  {
    cdr << (ros_message->is_static ? true : false);
  }

  // Field name: rel_pos_valid
  {
    cdr << (ros_message->rel_pos_valid ? true : false);
  }

  // Field name: rel_vel_valid
  {
    cdr << (ros_message->rel_vel_valid ? true : false);
  }

  // Field name: x_rel
  {
    cdr << ros_message->x_rel;
  }

  // Field name: y_rel
  {
    cdr << ros_message->y_rel;
  }

  // Field name: z_rel
  {
    cdr << ros_message->z_rel;
  }

  // Field name: vx_rel
  {
    cdr << ros_message->vx_rel;
  }

  // Field name: vy_rel
  {
    cdr << ros_message->vy_rel;
  }

  // Field name: cov_x_rel
  {
    cdr << ros_message->cov_x_rel;
  }

  // Field name: cov_y_rel
  {
    cdr << ros_message->cov_y_rel;
  }

  // Field name: cov_vx_rel
  {
    cdr << ros_message->cov_vx_rel;
  }

  // Field name: cov_vy_rel
  {
    cdr << ros_message->cov_vy_rel;
  }

  // Field name: abs_pos_valid
  {
    cdr << (ros_message->abs_pos_valid ? true : false);
  }

  // Field name: x_abs
  {
    cdr << ros_message->x_abs;
  }

  // Field name: y_abs
  {
    cdr << ros_message->y_abs;
  }

  // Field name: z_abs
  {
    cdr << ros_message->z_abs;
  }

  return true;
}

static bool _LandingTargetPose__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _LandingTargetPose__ros_msg_type * ros_message = static_cast<_LandingTargetPose__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: is_static
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_static = tmp ? true : false;
  }

  // Field name: rel_pos_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rel_pos_valid = tmp ? true : false;
  }

  // Field name: rel_vel_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rel_vel_valid = tmp ? true : false;
  }

  // Field name: x_rel
  {
    cdr >> ros_message->x_rel;
  }

  // Field name: y_rel
  {
    cdr >> ros_message->y_rel;
  }

  // Field name: z_rel
  {
    cdr >> ros_message->z_rel;
  }

  // Field name: vx_rel
  {
    cdr >> ros_message->vx_rel;
  }

  // Field name: vy_rel
  {
    cdr >> ros_message->vy_rel;
  }

  // Field name: cov_x_rel
  {
    cdr >> ros_message->cov_x_rel;
  }

  // Field name: cov_y_rel
  {
    cdr >> ros_message->cov_y_rel;
  }

  // Field name: cov_vx_rel
  {
    cdr >> ros_message->cov_vx_rel;
  }

  // Field name: cov_vy_rel
  {
    cdr >> ros_message->cov_vy_rel;
  }

  // Field name: abs_pos_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->abs_pos_valid = tmp ? true : false;
  }

  // Field name: x_abs
  {
    cdr >> ros_message->x_abs;
  }

  // Field name: y_abs
  {
    cdr >> ros_message->y_abs;
  }

  // Field name: z_abs
  {
    cdr >> ros_message->z_abs;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__LandingTargetPose(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _LandingTargetPose__ros_msg_type * ros_message = static_cast<const _LandingTargetPose__ros_msg_type *>(untyped_ros_message);
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
  // field.name is_static
  {
    size_t item_size = sizeof(ros_message->is_static);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rel_pos_valid
  {
    size_t item_size = sizeof(ros_message->rel_pos_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rel_vel_valid
  {
    size_t item_size = sizeof(ros_message->rel_vel_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_rel
  {
    size_t item_size = sizeof(ros_message->x_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_rel
  {
    size_t item_size = sizeof(ros_message->y_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_rel
  {
    size_t item_size = sizeof(ros_message->z_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vx_rel
  {
    size_t item_size = sizeof(ros_message->vx_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vy_rel
  {
    size_t item_size = sizeof(ros_message->vy_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_x_rel
  {
    size_t item_size = sizeof(ros_message->cov_x_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_y_rel
  {
    size_t item_size = sizeof(ros_message->cov_y_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_vx_rel
  {
    size_t item_size = sizeof(ros_message->cov_vx_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cov_vy_rel
  {
    size_t item_size = sizeof(ros_message->cov_vy_rel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name abs_pos_valid
  {
    size_t item_size = sizeof(ros_message->abs_pos_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x_abs
  {
    size_t item_size = sizeof(ros_message->x_abs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y_abs
  {
    size_t item_size = sizeof(ros_message->y_abs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_abs
  {
    size_t item_size = sizeof(ros_message->z_abs);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _LandingTargetPose__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__LandingTargetPose(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__LandingTargetPose(
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
  // member: is_static
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rel_pos_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rel_vel_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: x_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vx_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vy_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_x_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_y_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_vx_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cov_vy_rel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: abs_pos_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: x_abs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y_abs
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_abs
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
    using DataType = px4_msgs__msg__LandingTargetPose;
    is_plain =
      (
      offsetof(DataType, z_abs) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _LandingTargetPose__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__LandingTargetPose(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_LandingTargetPose = {
  "px4_msgs::msg",
  "LandingTargetPose",
  _LandingTargetPose__cdr_serialize,
  _LandingTargetPose__cdr_deserialize,
  _LandingTargetPose__get_serialized_size,
  _LandingTargetPose__max_serialized_size
};

static rosidl_message_type_support_t _LandingTargetPose__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_LandingTargetPose,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, LandingTargetPose)() {
  return &_LandingTargetPose__type_support;
}

#if defined(__cplusplus)
}
#endif
