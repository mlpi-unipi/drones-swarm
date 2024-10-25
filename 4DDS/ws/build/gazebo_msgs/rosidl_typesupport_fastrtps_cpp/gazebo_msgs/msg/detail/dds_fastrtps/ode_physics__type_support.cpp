// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from gazebo_msgs:msg/ODEPhysics.idl
// generated code does not contain a copyright notice
#include "gazebo_msgs/msg/detail/ode_physics__rosidl_typesupport_fastrtps_cpp.hpp"
#include "gazebo_msgs/msg/detail/ode_physics__struct.hpp"

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

namespace gazebo_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gazebo_msgs
cdr_serialize(
  const gazebo_msgs::msg::ODEPhysics & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: auto_disable_bodies
  cdr << (ros_message.auto_disable_bodies ? true : false);
  // Member: sor_pgs_precon_iters
  cdr << ros_message.sor_pgs_precon_iters;
  // Member: sor_pgs_iters
  cdr << ros_message.sor_pgs_iters;
  // Member: sor_pgs_w
  cdr << ros_message.sor_pgs_w;
  // Member: sor_pgs_rms_error_tol
  cdr << ros_message.sor_pgs_rms_error_tol;
  // Member: contact_surface_layer
  cdr << ros_message.contact_surface_layer;
  // Member: contact_max_correcting_vel
  cdr << ros_message.contact_max_correcting_vel;
  // Member: cfm
  cdr << ros_message.cfm;
  // Member: erp
  cdr << ros_message.erp;
  // Member: max_contacts
  cdr << ros_message.max_contacts;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gazebo_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  gazebo_msgs::msg::ODEPhysics & ros_message)
{
  // Member: auto_disable_bodies
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.auto_disable_bodies = tmp ? true : false;
  }

  // Member: sor_pgs_precon_iters
  cdr >> ros_message.sor_pgs_precon_iters;

  // Member: sor_pgs_iters
  cdr >> ros_message.sor_pgs_iters;

  // Member: sor_pgs_w
  cdr >> ros_message.sor_pgs_w;

  // Member: sor_pgs_rms_error_tol
  cdr >> ros_message.sor_pgs_rms_error_tol;

  // Member: contact_surface_layer
  cdr >> ros_message.contact_surface_layer;

  // Member: contact_max_correcting_vel
  cdr >> ros_message.contact_max_correcting_vel;

  // Member: cfm
  cdr >> ros_message.cfm;

  // Member: erp
  cdr >> ros_message.erp;

  // Member: max_contacts
  cdr >> ros_message.max_contacts;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gazebo_msgs
get_serialized_size(
  const gazebo_msgs::msg::ODEPhysics & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: auto_disable_bodies
  {
    size_t item_size = sizeof(ros_message.auto_disable_bodies);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sor_pgs_precon_iters
  {
    size_t item_size = sizeof(ros_message.sor_pgs_precon_iters);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sor_pgs_iters
  {
    size_t item_size = sizeof(ros_message.sor_pgs_iters);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sor_pgs_w
  {
    size_t item_size = sizeof(ros_message.sor_pgs_w);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sor_pgs_rms_error_tol
  {
    size_t item_size = sizeof(ros_message.sor_pgs_rms_error_tol);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: contact_surface_layer
  {
    size_t item_size = sizeof(ros_message.contact_surface_layer);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: contact_max_correcting_vel
  {
    size_t item_size = sizeof(ros_message.contact_max_correcting_vel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cfm
  {
    size_t item_size = sizeof(ros_message.cfm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: erp
  {
    size_t item_size = sizeof(ros_message.erp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: max_contacts
  {
    size_t item_size = sizeof(ros_message.max_contacts);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_gazebo_msgs
max_serialized_size_ODEPhysics(
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


  // Member: auto_disable_bodies
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sor_pgs_precon_iters
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sor_pgs_iters
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: sor_pgs_w
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: sor_pgs_rms_error_tol
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: contact_surface_layer
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: contact_max_correcting_vel
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: cfm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: erp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: max_contacts
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
    using DataType = gazebo_msgs::msg::ODEPhysics;
    is_plain =
      (
      offsetof(DataType, max_contacts) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _ODEPhysics__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const gazebo_msgs::msg::ODEPhysics *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _ODEPhysics__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<gazebo_msgs::msg::ODEPhysics *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _ODEPhysics__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const gazebo_msgs::msg::ODEPhysics *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _ODEPhysics__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ODEPhysics(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _ODEPhysics__callbacks = {
  "gazebo_msgs::msg",
  "ODEPhysics",
  _ODEPhysics__cdr_serialize,
  _ODEPhysics__cdr_deserialize,
  _ODEPhysics__get_serialized_size,
  _ODEPhysics__max_serialized_size
};

static rosidl_message_type_support_t _ODEPhysics__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_ODEPhysics__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace gazebo_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_gazebo_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<gazebo_msgs::msg::ODEPhysics>()
{
  return &gazebo_msgs::msg::typesupport_fastrtps_cpp::_ODEPhysics__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, gazebo_msgs, msg, ODEPhysics)() {
  return &gazebo_msgs::msg::typesupport_fastrtps_cpp::_ODEPhysics__handle;
}

#ifdef __cplusplus
}
#endif
