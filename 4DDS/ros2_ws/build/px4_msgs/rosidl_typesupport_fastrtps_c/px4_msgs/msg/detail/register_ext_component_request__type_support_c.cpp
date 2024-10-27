// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/RegisterExtComponentRequest.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/register_ext_component_request__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/register_ext_component_request__struct.h"
#include "px4_msgs/msg/detail/register_ext_component_request__functions.h"
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


using _RegisterExtComponentRequest__ros_msg_type = px4_msgs__msg__RegisterExtComponentRequest;

static bool _RegisterExtComponentRequest__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _RegisterExtComponentRequest__ros_msg_type * ros_message = static_cast<const _RegisterExtComponentRequest__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: request_id
  {
    cdr << ros_message->request_id;
  }

  // Field name: name
  {
    size_t size = 25;
    auto array_ptr = ros_message->name;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: px4_ros2_api_version
  {
    cdr << ros_message->px4_ros2_api_version;
  }

  // Field name: register_arming_check
  {
    cdr << (ros_message->register_arming_check ? true : false);
  }

  // Field name: register_mode
  {
    cdr << (ros_message->register_mode ? true : false);
  }

  // Field name: register_mode_executor
  {
    cdr << (ros_message->register_mode_executor ? true : false);
  }

  // Field name: enable_replace_internal_mode
  {
    cdr << (ros_message->enable_replace_internal_mode ? true : false);
  }

  // Field name: replace_internal_mode
  {
    cdr << ros_message->replace_internal_mode;
  }

  // Field name: activate_mode_immediately
  {
    cdr << (ros_message->activate_mode_immediately ? true : false);
  }

  return true;
}

static bool _RegisterExtComponentRequest__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _RegisterExtComponentRequest__ros_msg_type * ros_message = static_cast<_RegisterExtComponentRequest__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: request_id
  {
    cdr >> ros_message->request_id;
  }

  // Field name: name
  {
    size_t size = 25;
    auto array_ptr = ros_message->name;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: px4_ros2_api_version
  {
    cdr >> ros_message->px4_ros2_api_version;
  }

  // Field name: register_arming_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->register_arming_check = tmp ? true : false;
  }

  // Field name: register_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->register_mode = tmp ? true : false;
  }

  // Field name: register_mode_executor
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->register_mode_executor = tmp ? true : false;
  }

  // Field name: enable_replace_internal_mode
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->enable_replace_internal_mode = tmp ? true : false;
  }

  // Field name: replace_internal_mode
  {
    cdr >> ros_message->replace_internal_mode;
  }

  // Field name: activate_mode_immediately
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->activate_mode_immediately = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__RegisterExtComponentRequest(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _RegisterExtComponentRequest__ros_msg_type * ros_message = static_cast<const _RegisterExtComponentRequest__ros_msg_type *>(untyped_ros_message);
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
  // field.name name
  {
    size_t array_size = 25;
    auto array_ptr = ros_message->name;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name px4_ros2_api_version
  {
    size_t item_size = sizeof(ros_message->px4_ros2_api_version);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name register_arming_check
  {
    size_t item_size = sizeof(ros_message->register_arming_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name register_mode
  {
    size_t item_size = sizeof(ros_message->register_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name register_mode_executor
  {
    size_t item_size = sizeof(ros_message->register_mode_executor);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name enable_replace_internal_mode
  {
    size_t item_size = sizeof(ros_message->enable_replace_internal_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name replace_internal_mode
  {
    size_t item_size = sizeof(ros_message->replace_internal_mode);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name activate_mode_immediately
  {
    size_t item_size = sizeof(ros_message->activate_mode_immediately);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _RegisterExtComponentRequest__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__RegisterExtComponentRequest(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__RegisterExtComponentRequest(
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

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: name
  {
    size_t array_size = 25;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: px4_ros2_api_version
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint16_t);
    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }
  // member: register_arming_check
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: register_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: register_mode_executor
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: enable_replace_internal_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: replace_internal_mode
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: activate_mode_immediately
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
    using DataType = px4_msgs__msg__RegisterExtComponentRequest;
    is_plain =
      (
      offsetof(DataType, activate_mode_immediately) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _RegisterExtComponentRequest__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__RegisterExtComponentRequest(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_RegisterExtComponentRequest = {
  "px4_msgs::msg",
  "RegisterExtComponentRequest",
  _RegisterExtComponentRequest__cdr_serialize,
  _RegisterExtComponentRequest__cdr_deserialize,
  _RegisterExtComponentRequest__get_serialized_size,
  _RegisterExtComponentRequest__max_serialized_size
};

static rosidl_message_type_support_t _RegisterExtComponentRequest__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_RegisterExtComponentRequest,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, RegisterExtComponentRequest)() {
  return &_RegisterExtComponentRequest__type_support;
}

#if defined(__cplusplus)
}
#endif
