// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VehicleLocalPosition.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_local_position__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vehicle_local_position__struct.h"
#include "px4_msgs/msg/detail/vehicle_local_position__functions.h"
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


using _VehicleLocalPosition__ros_msg_type = px4_msgs__msg__VehicleLocalPosition;

static bool _VehicleLocalPosition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleLocalPosition__ros_msg_type * ros_message = static_cast<const _VehicleLocalPosition__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr << ros_message->timestamp_sample;
  }

  // Field name: xy_valid
  {
    cdr << (ros_message->xy_valid ? true : false);
  }

  // Field name: z_valid
  {
    cdr << (ros_message->z_valid ? true : false);
  }

  // Field name: v_xy_valid
  {
    cdr << (ros_message->v_xy_valid ? true : false);
  }

  // Field name: v_z_valid
  {
    cdr << (ros_message->v_z_valid ? true : false);
  }

  // Field name: x
  {
    cdr << ros_message->x;
  }

  // Field name: y
  {
    cdr << ros_message->y;
  }

  // Field name: z
  {
    cdr << ros_message->z;
  }

  // Field name: delta_xy
  {
    size_t size = 2;
    auto array_ptr = ros_message->delta_xy;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: xy_reset_counter
  {
    cdr << ros_message->xy_reset_counter;
  }

  // Field name: delta_z
  {
    cdr << ros_message->delta_z;
  }

  // Field name: z_reset_counter
  {
    cdr << ros_message->z_reset_counter;
  }

  // Field name: vx
  {
    cdr << ros_message->vx;
  }

  // Field name: vy
  {
    cdr << ros_message->vy;
  }

  // Field name: vz
  {
    cdr << ros_message->vz;
  }

  // Field name: z_deriv
  {
    cdr << ros_message->z_deriv;
  }

  // Field name: delta_vxy
  {
    size_t size = 2;
    auto array_ptr = ros_message->delta_vxy;
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: vxy_reset_counter
  {
    cdr << ros_message->vxy_reset_counter;
  }

  // Field name: delta_vz
  {
    cdr << ros_message->delta_vz;
  }

  // Field name: vz_reset_counter
  {
    cdr << ros_message->vz_reset_counter;
  }

  // Field name: ax
  {
    cdr << ros_message->ax;
  }

  // Field name: ay
  {
    cdr << ros_message->ay;
  }

  // Field name: az
  {
    cdr << ros_message->az;
  }

  // Field name: heading
  {
    cdr << ros_message->heading;
  }

  // Field name: heading_var
  {
    cdr << ros_message->heading_var;
  }

  // Field name: unaided_heading
  {
    cdr << ros_message->unaided_heading;
  }

  // Field name: delta_heading
  {
    cdr << ros_message->delta_heading;
  }

  // Field name: heading_reset_counter
  {
    cdr << ros_message->heading_reset_counter;
  }

  // Field name: heading_good_for_control
  {
    cdr << (ros_message->heading_good_for_control ? true : false);
  }

  // Field name: tilt_var
  {
    cdr << ros_message->tilt_var;
  }

  // Field name: xy_global
  {
    cdr << (ros_message->xy_global ? true : false);
  }

  // Field name: z_global
  {
    cdr << (ros_message->z_global ? true : false);
  }

  // Field name: ref_timestamp
  {
    cdr << ros_message->ref_timestamp;
  }

  // Field name: ref_lat
  {
    cdr << ros_message->ref_lat;
  }

  // Field name: ref_lon
  {
    cdr << ros_message->ref_lon;
  }

  // Field name: ref_alt
  {
    cdr << ros_message->ref_alt;
  }

  // Field name: dist_bottom
  {
    cdr << ros_message->dist_bottom;
  }

  // Field name: dist_bottom_valid
  {
    cdr << (ros_message->dist_bottom_valid ? true : false);
  }

  // Field name: dist_bottom_sensor_bitfield
  {
    cdr << ros_message->dist_bottom_sensor_bitfield;
  }

  // Field name: eph
  {
    cdr << ros_message->eph;
  }

  // Field name: epv
  {
    cdr << ros_message->epv;
  }

  // Field name: evh
  {
    cdr << ros_message->evh;
  }

  // Field name: evv
  {
    cdr << ros_message->evv;
  }

  // Field name: dead_reckoning
  {
    cdr << (ros_message->dead_reckoning ? true : false);
  }

  // Field name: vxy_max
  {
    cdr << ros_message->vxy_max;
  }

  // Field name: vz_max
  {
    cdr << ros_message->vz_max;
  }

  // Field name: hagl_min
  {
    cdr << ros_message->hagl_min;
  }

  // Field name: hagl_max
  {
    cdr << ros_message->hagl_max;
  }

  return true;
}

static bool _VehicleLocalPosition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleLocalPosition__ros_msg_type * ros_message = static_cast<_VehicleLocalPosition__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: timestamp_sample
  {
    cdr >> ros_message->timestamp_sample;
  }

  // Field name: xy_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->xy_valid = tmp ? true : false;
  }

  // Field name: z_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->z_valid = tmp ? true : false;
  }

  // Field name: v_xy_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->v_xy_valid = tmp ? true : false;
  }

  // Field name: v_z_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->v_z_valid = tmp ? true : false;
  }

  // Field name: x
  {
    cdr >> ros_message->x;
  }

  // Field name: y
  {
    cdr >> ros_message->y;
  }

  // Field name: z
  {
    cdr >> ros_message->z;
  }

  // Field name: delta_xy
  {
    size_t size = 2;
    auto array_ptr = ros_message->delta_xy;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: xy_reset_counter
  {
    cdr >> ros_message->xy_reset_counter;
  }

  // Field name: delta_z
  {
    cdr >> ros_message->delta_z;
  }

  // Field name: z_reset_counter
  {
    cdr >> ros_message->z_reset_counter;
  }

  // Field name: vx
  {
    cdr >> ros_message->vx;
  }

  // Field name: vy
  {
    cdr >> ros_message->vy;
  }

  // Field name: vz
  {
    cdr >> ros_message->vz;
  }

  // Field name: z_deriv
  {
    cdr >> ros_message->z_deriv;
  }

  // Field name: delta_vxy
  {
    size_t size = 2;
    auto array_ptr = ros_message->delta_vxy;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: vxy_reset_counter
  {
    cdr >> ros_message->vxy_reset_counter;
  }

  // Field name: delta_vz
  {
    cdr >> ros_message->delta_vz;
  }

  // Field name: vz_reset_counter
  {
    cdr >> ros_message->vz_reset_counter;
  }

  // Field name: ax
  {
    cdr >> ros_message->ax;
  }

  // Field name: ay
  {
    cdr >> ros_message->ay;
  }

  // Field name: az
  {
    cdr >> ros_message->az;
  }

  // Field name: heading
  {
    cdr >> ros_message->heading;
  }

  // Field name: heading_var
  {
    cdr >> ros_message->heading_var;
  }

  // Field name: unaided_heading
  {
    cdr >> ros_message->unaided_heading;
  }

  // Field name: delta_heading
  {
    cdr >> ros_message->delta_heading;
  }

  // Field name: heading_reset_counter
  {
    cdr >> ros_message->heading_reset_counter;
  }

  // Field name: heading_good_for_control
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->heading_good_for_control = tmp ? true : false;
  }

  // Field name: tilt_var
  {
    cdr >> ros_message->tilt_var;
  }

  // Field name: xy_global
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->xy_global = tmp ? true : false;
  }

  // Field name: z_global
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->z_global = tmp ? true : false;
  }

  // Field name: ref_timestamp
  {
    cdr >> ros_message->ref_timestamp;
  }

  // Field name: ref_lat
  {
    cdr >> ros_message->ref_lat;
  }

  // Field name: ref_lon
  {
    cdr >> ros_message->ref_lon;
  }

  // Field name: ref_alt
  {
    cdr >> ros_message->ref_alt;
  }

  // Field name: dist_bottom
  {
    cdr >> ros_message->dist_bottom;
  }

  // Field name: dist_bottom_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dist_bottom_valid = tmp ? true : false;
  }

  // Field name: dist_bottom_sensor_bitfield
  {
    cdr >> ros_message->dist_bottom_sensor_bitfield;
  }

  // Field name: eph
  {
    cdr >> ros_message->eph;
  }

  // Field name: epv
  {
    cdr >> ros_message->epv;
  }

  // Field name: evh
  {
    cdr >> ros_message->evh;
  }

  // Field name: evv
  {
    cdr >> ros_message->evv;
  }

  // Field name: dead_reckoning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dead_reckoning = tmp ? true : false;
  }

  // Field name: vxy_max
  {
    cdr >> ros_message->vxy_max;
  }

  // Field name: vz_max
  {
    cdr >> ros_message->vz_max;
  }

  // Field name: hagl_min
  {
    cdr >> ros_message->hagl_min;
  }

  // Field name: hagl_max
  {
    cdr >> ros_message->hagl_max;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VehicleLocalPosition(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleLocalPosition__ros_msg_type * ros_message = static_cast<const _VehicleLocalPosition__ros_msg_type *>(untyped_ros_message);
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
  // field.name xy_valid
  {
    size_t item_size = sizeof(ros_message->xy_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_valid
  {
    size_t item_size = sizeof(ros_message->z_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_xy_valid
  {
    size_t item_size = sizeof(ros_message->v_xy_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name v_z_valid
  {
    size_t item_size = sizeof(ros_message->v_z_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name x
  {
    size_t item_size = sizeof(ros_message->x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name y
  {
    size_t item_size = sizeof(ros_message->y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z
  {
    size_t item_size = sizeof(ros_message->z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_xy
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->delta_xy;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name xy_reset_counter
  {
    size_t item_size = sizeof(ros_message->xy_reset_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_z
  {
    size_t item_size = sizeof(ros_message->delta_z);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_reset_counter
  {
    size_t item_size = sizeof(ros_message->z_reset_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vx
  {
    size_t item_size = sizeof(ros_message->vx);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vy
  {
    size_t item_size = sizeof(ros_message->vy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vz
  {
    size_t item_size = sizeof(ros_message->vz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_deriv
  {
    size_t item_size = sizeof(ros_message->z_deriv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_vxy
  {
    size_t array_size = 2;
    auto array_ptr = ros_message->delta_vxy;
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vxy_reset_counter
  {
    size_t item_size = sizeof(ros_message->vxy_reset_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_vz
  {
    size_t item_size = sizeof(ros_message->delta_vz);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vz_reset_counter
  {
    size_t item_size = sizeof(ros_message->vz_reset_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ax
  {
    size_t item_size = sizeof(ros_message->ax);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ay
  {
    size_t item_size = sizeof(ros_message->ay);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name az
  {
    size_t item_size = sizeof(ros_message->az);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading
  {
    size_t item_size = sizeof(ros_message->heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_var
  {
    size_t item_size = sizeof(ros_message->heading_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name unaided_heading
  {
    size_t item_size = sizeof(ros_message->unaided_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name delta_heading
  {
    size_t item_size = sizeof(ros_message->delta_heading);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_reset_counter
  {
    size_t item_size = sizeof(ros_message->heading_reset_counter);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name heading_good_for_control
  {
    size_t item_size = sizeof(ros_message->heading_good_for_control);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name tilt_var
  {
    size_t item_size = sizeof(ros_message->tilt_var);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name xy_global
  {
    size_t item_size = sizeof(ros_message->xy_global);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name z_global
  {
    size_t item_size = sizeof(ros_message->z_global);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_timestamp
  {
    size_t item_size = sizeof(ros_message->ref_timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_lat
  {
    size_t item_size = sizeof(ros_message->ref_lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_lon
  {
    size_t item_size = sizeof(ros_message->ref_lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ref_alt
  {
    size_t item_size = sizeof(ros_message->ref_alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_bottom
  {
    size_t item_size = sizeof(ros_message->dist_bottom);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_bottom_valid
  {
    size_t item_size = sizeof(ros_message->dist_bottom_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dist_bottom_sensor_bitfield
  {
    size_t item_size = sizeof(ros_message->dist_bottom_sensor_bitfield);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name eph
  {
    size_t item_size = sizeof(ros_message->eph);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name epv
  {
    size_t item_size = sizeof(ros_message->epv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name evh
  {
    size_t item_size = sizeof(ros_message->evh);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name evv
  {
    size_t item_size = sizeof(ros_message->evv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dead_reckoning
  {
    size_t item_size = sizeof(ros_message->dead_reckoning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vxy_max
  {
    size_t item_size = sizeof(ros_message->vxy_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vz_max
  {
    size_t item_size = sizeof(ros_message->vz_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hagl_min
  {
    size_t item_size = sizeof(ros_message->hagl_min);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name hagl_max
  {
    size_t item_size = sizeof(ros_message->hagl_max);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleLocalPosition__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VehicleLocalPosition(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VehicleLocalPosition(
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
  // member: xy_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: z_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: v_xy_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: v_z_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: x
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: y
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_xy
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: xy_reset_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: delta_z
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_reset_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vx
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vy
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: z_deriv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_vxy
  {
    size_t array_size = 2;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vxy_reset_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: delta_vz
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vz_reset_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ax
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: ay
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: az
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: unaided_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: delta_heading
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: heading_reset_counter
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: heading_good_for_control
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: tilt_var
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: xy_global
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: z_global
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ref_timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_lat
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_lon
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: ref_alt
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dist_bottom
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dist_bottom_valid
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dist_bottom_sensor_bitfield
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: eph
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: epv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: evh
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: evv
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: dead_reckoning
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vxy_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: vz_max
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hagl_min
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: hagl_max
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
    using DataType = px4_msgs__msg__VehicleLocalPosition;
    is_plain =
      (
      offsetof(DataType, hagl_max) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _VehicleLocalPosition__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__VehicleLocalPosition(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleLocalPosition = {
  "px4_msgs::msg",
  "VehicleLocalPosition",
  _VehicleLocalPosition__cdr_serialize,
  _VehicleLocalPosition__cdr_deserialize,
  _VehicleLocalPosition__get_serialized_size,
  _VehicleLocalPosition__max_serialized_size
};

static rosidl_message_type_support_t _VehicleLocalPosition__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleLocalPosition,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VehicleLocalPosition)() {
  return &_VehicleLocalPosition__type_support;
}

#if defined(__cplusplus)
}
#endif
