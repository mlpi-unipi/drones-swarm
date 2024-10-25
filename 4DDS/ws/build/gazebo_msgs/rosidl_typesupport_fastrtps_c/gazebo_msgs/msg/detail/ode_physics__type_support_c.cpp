// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from gazebo_msgs:msg/ODEPhysics.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/ode_physics__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "gazebo_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "gazebo_msgs/msg/detail/ode_physics__struct.h"
#include "gazebo_msgs/msg/detail/ode_physics__functions.h"
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


using _ODEPhysics__ros_msg_type = gazebo_msgs__msg__ODEPhysics;

static bool _ODEPhysics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _ODEPhysics__ros_msg_type * ros_message = static_cast<const _ODEPhysics__ros_msg_type *>(untyped_ros_message);
  // Field name: auto_disable_bodies
  {
    cdr << (ros_message->auto_disable_bodies ? true : false);
  }

  // Field name: sor_pgs_precon_iters
  {
    cdr << ros_message->sor_pgs_precon_iters;
  }

  // Field name: sor_pgs_iters
  {
    cdr << ros_message->sor_pgs_iters;
  }

  // Field name: sor_pgs_w
  {
    cdr << ros_message->sor_pgs_w;
  }

  // Field name: sor_pgs_rms_error_tol
  {
    cdr << ros_message->sor_pgs_rms_error_tol;
  }

  // Field name: contact_surface_layer
  {
    cdr << ros_message->contact_surface_layer;
  }

  // Field name: contact_max_correcting_vel
  {
    cdr << ros_message->contact_max_correcting_vel;
  }

  // Field name: cfm
  {
    cdr << ros_message->cfm;
  }

  // Field name: erp
  {
    cdr << ros_message->erp;
  }

  // Field name: max_contacts
  {
    cdr << ros_message->max_contacts;
  }

  return true;
}

static bool _ODEPhysics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _ODEPhysics__ros_msg_type * ros_message = static_cast<_ODEPhysics__ros_msg_type *>(untyped_ros_message);
  // Field name: auto_disable_bodies
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_disable_bodies = tmp ? true : false;
  }

  // Field name: sor_pgs_precon_iters
  {
    cdr >> ros_message->sor_pgs_precon_iters;
  }

  // Field name: sor_pgs_iters
  {
    cdr >> ros_message->sor_pgs_iters;
  }

  // Field name: sor_pgs_w
  {
    cdr >> ros_message->sor_pgs_w;
  }

  // Field name: sor_pgs_rms_error_tol
  {
    cdr >> ros_message->sor_pgs_rms_error_tol;
  }

  // Field name: contact_surface_layer
  {
    cdr >> ros_message->contact_surface_layer;
  }

  // Field name: contact_max_correcting_vel
  {
    cdr >> ros_message->contact_max_correcting_vel;
  }

  // Field name: cfm
  {
    cdr >> ros_message->cfm;
  }

  // Field name: erp
  {
    cdr >> ros_message->erp;
  }

  // Field name: max_contacts
  {
    cdr >> ros_message->max_contacts;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t get_serialized_size_gazebo_msgs__msg__ODEPhysics(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _ODEPhysics__ros_msg_type * ros_message = static_cast<const _ODEPhysics__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name auto_disable_bodies
  {
    size_t item_size = sizeof(ros_message->auto_disable_bodies);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sor_pgs_precon_iters
  {
    size_t item_size = sizeof(ros_message->sor_pgs_precon_iters);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sor_pgs_iters
  {
    size_t item_size = sizeof(ros_message->sor_pgs_iters);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sor_pgs_w
  {
    size_t item_size = sizeof(ros_message->sor_pgs_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sor_pgs_rms_error_tol
  {
    size_t item_size = sizeof(ros_message->sor_pgs_rms_error_tol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contact_surface_layer
  {
    size_t item_size = sizeof(ros_message->contact_surface_layer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name contact_max_correcting_vel
  {
    size_t item_size = sizeof(ros_message->contact_max_correcting_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cfm
  {
    size_t item_size = sizeof(ros_message->cfm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name erp
  {
    size_t item_size = sizeof(ros_message->erp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name max_contacts
  {
    size_t item_size = sizeof(ros_message->max_contacts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _ODEPhysics__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_gazebo_msgs__msg__ODEPhysics(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_gazebo_msgs
size_t max_serialized_size_gazebo_msgs__msg__ODEPhysics(
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

  // member: auto_disable_bodies
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sor_pgs_precon_iters
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sor_pgs_iters
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: sor_pgs_w
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: sor_pgs_rms_error_tol
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: contact_surface_layer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: contact_max_correcting_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: cfm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: erp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: max_contacts
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
    using DataType = gazebo_msgs__msg__ODEPhysics;
    is_plain =
      (
      offsetof(DataType, max_contacts) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _ODEPhysics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_gazebo_msgs__msg__ODEPhysics(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_ODEPhysics = {
  "gazebo_msgs::msg",
  "ODEPhysics",
  _ODEPhysics__cdr_serialize,
  _ODEPhysics__cdr_deserialize,
  _ODEPhysics__get_serialized_size,
  _ODEPhysics__max_serialized_size
};

static rosidl_message_type_support_t _ODEPhysics__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_ODEPhysics,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, gazebo_msgs, msg, ODEPhysics)() {
  return &_ODEPhysics__type_support;
}

#if defined(__cplusplus)
}
#endif
