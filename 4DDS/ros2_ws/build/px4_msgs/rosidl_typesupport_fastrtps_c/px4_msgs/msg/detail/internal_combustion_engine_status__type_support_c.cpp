// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/InternalCombustionEngineStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/internal_combustion_engine_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/internal_combustion_engine_status__struct.h"
#include "px4_msgs/msg/detail/internal_combustion_engine_status__functions.h"
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


using _InternalCombustionEngineStatus__ros_msg_type = px4_msgs__msg__InternalCombustionEngineStatus;

static bool _InternalCombustionEngineStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _InternalCombustionEngineStatus__ros_msg_type * ros_message = static_cast<const _InternalCombustionEngineStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: state
  {
    cdr << ros_message->state;
  }

  // Field name: flags
  {
    cdr << ros_message->flags;
  }

  // Field name: engine_load_percent
  {
    cdr << ros_message->engine_load_percent;
  }

  // Field name: engine_speed_rpm
  {
    cdr << ros_message->engine_speed_rpm;
  }

  // Field name: spark_dwell_time_ms
  {
    cdr << ros_message->spark_dwell_time_ms;
  }

  // Field name: atmospheric_pressure_kpa
  {
    cdr << ros_message->atmospheric_pressure_kpa;
  }

  // Field name: intake_manifold_pressure_kpa
  {
    cdr << ros_message->intake_manifold_pressure_kpa;
  }

  // Field name: intake_manifold_temperature
  {
    cdr << ros_message->intake_manifold_temperature;
  }

  // Field name: coolant_temperature
  {
    cdr << ros_message->coolant_temperature;
  }

  // Field name: oil_pressure
  {
    cdr << ros_message->oil_pressure;
  }

  // Field name: oil_temperature
  {
    cdr << ros_message->oil_temperature;
  }

  // Field name: fuel_pressure
  {
    cdr << ros_message->fuel_pressure;
  }

  // Field name: fuel_consumption_rate_cm3pm
  {
    cdr << ros_message->fuel_consumption_rate_cm3pm;
  }

  // Field name: estimated_consumed_fuel_volume_cm3
  {
    cdr << ros_message->estimated_consumed_fuel_volume_cm3;
  }

  // Field name: throttle_position_percent
  {
    cdr << ros_message->throttle_position_percent;
  }

  // Field name: ecu_index
  {
    cdr << ros_message->ecu_index;
  }

  // Field name: spark_plug_usage
  {
    cdr << ros_message->spark_plug_usage;
  }

  // Field name: ignition_timing_deg
  {
    cdr << ros_message->ignition_timing_deg;
  }

  // Field name: injection_time_ms
  {
    cdr << ros_message->injection_time_ms;
  }

  // Field name: cylinder_head_temperature
  {
    cdr << ros_message->cylinder_head_temperature;
  }

  // Field name: exhaust_gas_temperature
  {
    cdr << ros_message->exhaust_gas_temperature;
  }

  // Field name: lambda_coefficient
  {
    cdr << ros_message->lambda_coefficient;
  }

  return true;
}

static bool _InternalCombustionEngineStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _InternalCombustionEngineStatus__ros_msg_type * ros_message = static_cast<_InternalCombustionEngineStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: state
  {
    cdr >> ros_message->state;
  }

  // Field name: flags
  {
    cdr >> ros_message->flags;
  }

  // Field name: engine_load_percent
  {
    cdr >> ros_message->engine_load_percent;
  }

  // Field name: engine_speed_rpm
  {
    cdr >> ros_message->engine_speed_rpm;
  }

  // Field name: spark_dwell_time_ms
  {
    cdr >> ros_message->spark_dwell_time_ms;
  }

  // Field name: atmospheric_pressure_kpa
  {
    cdr >> ros_message->atmospheric_pressure_kpa;
  }

  // Field name: intake_manifold_pressure_kpa
  {
    cdr >> ros_message->intake_manifold_pressure_kpa;
  }

  // Field name: intake_manifold_temperature
  {
    cdr >> ros_message->intake_manifold_temperature;
  }

  // Field name: coolant_temperature
  {
    cdr >> ros_message->coolant_temperature;
  }

  // Field name: oil_pressure
  {
    cdr >> ros_message->oil_pressure;
  }

  // Field name: oil_temperature
  {
    cdr >> ros_message->oil_temperature;
  }

  // Field name: fuel_pressure
  {
    cdr >> ros_message->fuel_pressure;
  }

  // Field name: fuel_consumption_rate_cm3pm
  {
    cdr >> ros_message->fuel_consumption_rate_cm3pm;
  }

  // Field name: estimated_consumed_fuel_volume_cm3
  {
    cdr >> ros_message->estimated_consumed_fuel_volume_cm3;
  }

  // Field name: throttle_position_percent
  {
    cdr >> ros_message->throttle_position_percent;
  }

  // Field name: ecu_index
  {
    cdr >> ros_message->ecu_index;
  }

  // Field name: spark_plug_usage
  {
    cdr >> ros_message->spark_plug_usage;
  }

  // Field name: ignition_timing_deg
  {
    cdr >> ros_message->ignition_timing_deg;
  }

  // Field name: injection_time_ms
  {
    cdr >> ros_message->injection_time_ms;
  }

  // Field name: cylinder_head_temperature
  {
    cdr >> ros_message->cylinder_head_temperature;
  }

  // Field name: exhaust_gas_temperature
  {
    cdr >> ros_message->exhaust_gas_temperature;
  }

  // Field name: lambda_coefficient
  {
    cdr >> ros_message->lambda_coefficient;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__InternalCombustionEngineStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _InternalCombustionEngineStatus__ros_msg_type * ros_message = static_cast<const _InternalCombustionEngineStatus__ros_msg_type *>(untyped_ros_message);
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
  // field.name state
  {
    size_t item_size = sizeof(ros_message->state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flags
  {
    size_t item_size = sizeof(ros_message->flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_load_percent
  {
    size_t item_size = sizeof(ros_message->engine_load_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name engine_speed_rpm
  {
    size_t item_size = sizeof(ros_message->engine_speed_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spark_dwell_time_ms
  {
    size_t item_size = sizeof(ros_message->spark_dwell_time_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name atmospheric_pressure_kpa
  {
    size_t item_size = sizeof(ros_message->atmospheric_pressure_kpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name intake_manifold_pressure_kpa
  {
    size_t item_size = sizeof(ros_message->intake_manifold_pressure_kpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name intake_manifold_temperature
  {
    size_t item_size = sizeof(ros_message->intake_manifold_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name coolant_temperature
  {
    size_t item_size = sizeof(ros_message->coolant_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name oil_pressure
  {
    size_t item_size = sizeof(ros_message->oil_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name oil_temperature
  {
    size_t item_size = sizeof(ros_message->oil_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_pressure
  {
    size_t item_size = sizeof(ros_message->fuel_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name fuel_consumption_rate_cm3pm
  {
    size_t item_size = sizeof(ros_message->fuel_consumption_rate_cm3pm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name estimated_consumed_fuel_volume_cm3
  {
    size_t item_size = sizeof(ros_message->estimated_consumed_fuel_volume_cm3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name throttle_position_percent
  {
    size_t item_size = sizeof(ros_message->throttle_position_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ecu_index
  {
    size_t item_size = sizeof(ros_message->ecu_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name spark_plug_usage
  {
    size_t item_size = sizeof(ros_message->spark_plug_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name ignition_timing_deg
  {
    size_t item_size = sizeof(ros_message->ignition_timing_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name injection_time_ms
  {
    size_t item_size = sizeof(ros_message->injection_time_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name cylinder_head_temperature
  {
    size_t item_size = sizeof(ros_message->cylinder_head_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name exhaust_gas_temperature
  {
    size_t item_size = sizeof(ros_message->exhaust_gas_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lambda_coefficient
  {
    size_t item_size = sizeof(ros_message->lambda_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _InternalCombustionEngineStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__InternalCombustionEngineStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__InternalCombustionEngineStatus(
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
  // member: state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: engine_load_percent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: engine_speed_rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: spark_dwell_time_ms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: atmospheric_pressure_kpa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: intake_manifold_pressure_kpa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: intake_manifold_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: coolant_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: oil_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: oil_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fuel_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: fuel_consumption_rate_cm3pm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: estimated_consumed_fuel_volume_cm3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: throttle_position_percent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ecu_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: spark_plug_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: ignition_timing_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: injection_time_ms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: cylinder_head_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: exhaust_gas_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: lambda_coefficient
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
    using DataType = px4_msgs__msg__InternalCombustionEngineStatus;
    is_plain =
      (
      offsetof(DataType, lambda_coefficient) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _InternalCombustionEngineStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__InternalCombustionEngineStatus(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_InternalCombustionEngineStatus = {
  "px4_msgs::msg",
  "InternalCombustionEngineStatus",
  _InternalCombustionEngineStatus__cdr_serialize,
  _InternalCombustionEngineStatus__cdr_deserialize,
  _InternalCombustionEngineStatus__get_serialized_size,
  _InternalCombustionEngineStatus__max_serialized_size
};

static rosidl_message_type_support_t _InternalCombustionEngineStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_InternalCombustionEngineStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, InternalCombustionEngineStatus)() {
  return &_InternalCombustionEngineStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
