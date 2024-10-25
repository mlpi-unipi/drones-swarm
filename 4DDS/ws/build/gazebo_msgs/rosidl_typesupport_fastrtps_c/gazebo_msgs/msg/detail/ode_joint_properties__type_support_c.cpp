// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gazebo_msgs:msg/ODEJointProperties.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/ode_joint_properties__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gazebo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gazebo_msgs/msg/detail/ode_joint_properties__struct.h"
#include "gazebo_msgs/msg/detail/ode_joint_properties__functions.h"
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

#include "rosidl_runtime_c/primitives_sequence.h"  // cfm, damping, erp, fmax, fudge_factor, hi_stop, lo_stop, stop_cfm, stop_erp, vel
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // cfm, damping, erp, fmax, fudge_factor, hi_stop, lo_stop, stop_cfm, stop_erp, vel

// forward declare type support functions


using _ODEJointProperties__ros_msg_type = gazebo_msgs__msg__ODEJointProperties;

static bool _ODEJointProperties__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ODEJointProperties__ros_msg_type * ros_message = static_cast<const _ODEJointProperties__ros_msg_type *>(untyped_ros_message);
  // Field name: damping
  {
    size_t size = ros_message->damping.size;
    auto array_ptr = ros_message->damping.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: hi_stop
  {
    size_t size = ros_message->hi_stop.size;
    auto array_ptr = ros_message->hi_stop.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: lo_stop
  {
    size_t size = ros_message->lo_stop.size;
    auto array_ptr = ros_message->lo_stop.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: erp
  {
    size_t size = ros_message->erp.size;
    auto array_ptr = ros_message->erp.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: cfm
  {
    size_t size = ros_message->cfm.size;
    auto array_ptr = ros_message->cfm.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: stop_erp
  {
    size_t size = ros_message->stop_erp.size;
    auto array_ptr = ros_message->stop_erp.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: stop_cfm
  {
    size_t size = ros_message->stop_cfm.size;
    auto array_ptr = ros_message->stop_cfm.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: fudge_factor
  {
    size_t size = ros_message->fudge_factor.size;
    auto array_ptr = ros_message->fudge_factor.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: fmax
  {
    size_t size = ros_message->fmax.size;
    auto array_ptr = ros_message->fmax.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vel
  {
    size_t size = ros_message->vel.size;
    auto array_ptr = ros_message->vel.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _ODEJointProperties__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ODEJointProperties__ros_msg_type * ros_message = static_cast<_ODEJointProperties__ros_msg_type *>(untyped_ros_message);
  // Field name: damping
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->damping.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->damping);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->damping, size)) {
      fprintf(stderr, "failed to create array for field 'damping'");
      return false;
    }
    auto array_ptr = ros_message->damping.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: hi_stop
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->hi_stop.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->hi_stop);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->hi_stop, size)) {
      fprintf(stderr, "failed to create array for field 'hi_stop'");
      return false;
    }
    auto array_ptr = ros_message->hi_stop.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: lo_stop
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->lo_stop.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->lo_stop);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->lo_stop, size)) {
      fprintf(stderr, "failed to create array for field 'lo_stop'");
      return false;
    }
    auto array_ptr = ros_message->lo_stop.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: erp
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->erp.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->erp);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->erp, size)) {
      fprintf(stderr, "failed to create array for field 'erp'");
      return false;
    }
    auto array_ptr = ros_message->erp.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: cfm
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->cfm.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->cfm);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->cfm, size)) {
      fprintf(stderr, "failed to create array for field 'cfm'");
      return false;
    }
    auto array_ptr = ros_message->cfm.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: stop_erp
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->stop_erp.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->stop_erp);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->stop_erp, size)) {
      fprintf(stderr, "failed to create array for field 'stop_erp'");
      return false;
    }
    auto array_ptr = ros_message->stop_erp.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: stop_cfm
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->stop_cfm.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->stop_cfm);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->stop_cfm, size)) {
      fprintf(stderr, "failed to create array for field 'stop_cfm'");
      return false;
    }
    auto array_ptr = ros_message->stop_cfm.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: fudge_factor
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->fudge_factor.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->fudge_factor);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->fudge_factor, size)) {
      fprintf(stderr, "failed to create array for field 'fudge_factor'");
      return false;
    }
    auto array_ptr = ros_message->fudge_factor.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: fmax
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->fmax.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->fmax);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->fmax, size)) {
      fprintf(stderr, "failed to create array for field 'fmax'");
      return false;
    }
    auto array_ptr = ros_message->fmax.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vel
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->vel.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->vel);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->vel, size)) {
      fprintf(stderr, "failed to create array for field 'vel'");
      return false;
    }
    auto array_ptr = ros_message->vel.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t get_serialized_size_gazebo_msgs__msg__ODEJointProperties(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ODEJointProperties__ros_msg_type * ros_message = static_cast<const _ODEJointProperties__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name damping
  {
    size_t array_size = ros_message->damping.size;
    auto array_ptr = ros_message->damping.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hi_stop
  {
    size_t array_size = ros_message->hi_stop.size;
    auto array_ptr = ros_message->hi_stop.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lo_stop
  {
    size_t array_size = ros_message->lo_stop.size;
    auto array_ptr = ros_message->lo_stop.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name erp
  {
    size_t array_size = ros_message->erp.size;
    auto array_ptr = ros_message->erp.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cfm
  {
    size_t array_size = ros_message->cfm.size;
    auto array_ptr = ros_message->cfm.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop_erp
  {
    size_t array_size = ros_message->stop_erp.size;
    auto array_ptr = ros_message->stop_erp.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name stop_cfm
  {
    size_t array_size = ros_message->stop_cfm.size;
    auto array_ptr = ros_message->stop_cfm.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fudge_factor
  {
    size_t array_size = ros_message->fudge_factor.size;
    auto array_ptr = ros_message->fudge_factor.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fmax
  {
    size_t array_size = ros_message->fmax.size;
    auto array_ptr = ros_message->fmax.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vel
  {
    size_t array_size = ros_message->vel.size;
    auto array_ptr = ros_message->vel.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ODEJointProperties__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gazebo_msgs__msg__ODEJointProperties(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t max_serialized_size_gazebo_msgs__msg__ODEJointProperties(
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

  // member: damping
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: hi_stop
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lo_stop
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: erp
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cfm
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stop_erp
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: stop_cfm
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fudge_factor
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: fmax
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: vel
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = gazebo_msgs__msg__ODEJointProperties;
    is_plain =
      (
      offsetof(DataType, vel) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ODEJointProperties__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gazebo_msgs__msg__ODEJointProperties(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ODEJointProperties = {
  "gazebo_msgs::msg",
  "ODEJointProperties",
  _ODEJointProperties__cdr_serialize,
  _ODEJointProperties__cdr_deserialize,
  _ODEJointProperties__get_serialized_size,
  _ODEJointProperties__max_serialized_size
};

static rosidl_message_type_support_t _ODEJointProperties__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ODEJointProperties,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, msg, ODEJointProperties)() {
  return &_ODEJointProperties__type_support;
}

#if defined(__cplusplus)
}
#endif
