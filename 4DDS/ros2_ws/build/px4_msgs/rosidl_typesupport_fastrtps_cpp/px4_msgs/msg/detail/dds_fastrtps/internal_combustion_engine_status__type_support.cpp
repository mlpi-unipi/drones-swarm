// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/InternalCombustionEngineStatus.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/internal_combustion_engine_status__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/internal_combustion_engine_status__struct.hpp"

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

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::InternalCombustionEngineStatus & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: state
  cdr << ros_message.state;
  // Member: flags
  cdr << ros_message.flags;
  // Member: engine_load_percent
  cdr << ros_message.engine_load_percent;
  // Member: engine_speed_rpm
  cdr << ros_message.engine_speed_rpm;
  // Member: spark_dwell_time_ms
  cdr << ros_message.spark_dwell_time_ms;
  // Member: atmospheric_pressure_kpa
  cdr << ros_message.atmospheric_pressure_kpa;
  // Member: intake_manifold_pressure_kpa
  cdr << ros_message.intake_manifold_pressure_kpa;
  // Member: intake_manifold_temperature
  cdr << ros_message.intake_manifold_temperature;
  // Member: coolant_temperature
  cdr << ros_message.coolant_temperature;
  // Member: oil_pressure
  cdr << ros_message.oil_pressure;
  // Member: oil_temperature
  cdr << ros_message.oil_temperature;
  // Member: fuel_pressure
  cdr << ros_message.fuel_pressure;
  // Member: fuel_consumption_rate_cm3pm
  cdr << ros_message.fuel_consumption_rate_cm3pm;
  // Member: estimated_consumed_fuel_volume_cm3
  cdr << ros_message.estimated_consumed_fuel_volume_cm3;
  // Member: throttle_position_percent
  cdr << ros_message.throttle_position_percent;
  // Member: ecu_index
  cdr << ros_message.ecu_index;
  // Member: spark_plug_usage
  cdr << ros_message.spark_plug_usage;
  // Member: ignition_timing_deg
  cdr << ros_message.ignition_timing_deg;
  // Member: injection_time_ms
  cdr << ros_message.injection_time_ms;
  // Member: cylinder_head_temperature
  cdr << ros_message.cylinder_head_temperature;
  // Member: exhaust_gas_temperature
  cdr << ros_message.exhaust_gas_temperature;
  // Member: lambda_coefficient
  cdr << ros_message.lambda_coefficient;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::InternalCombustionEngineStatus & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: state
  cdr >> ros_message.state;

  // Member: flags
  cdr >> ros_message.flags;

  // Member: engine_load_percent
  cdr >> ros_message.engine_load_percent;

  // Member: engine_speed_rpm
  cdr >> ros_message.engine_speed_rpm;

  // Member: spark_dwell_time_ms
  cdr >> ros_message.spark_dwell_time_ms;

  // Member: atmospheric_pressure_kpa
  cdr >> ros_message.atmospheric_pressure_kpa;

  // Member: intake_manifold_pressure_kpa
  cdr >> ros_message.intake_manifold_pressure_kpa;

  // Member: intake_manifold_temperature
  cdr >> ros_message.intake_manifold_temperature;

  // Member: coolant_temperature
  cdr >> ros_message.coolant_temperature;

  // Member: oil_pressure
  cdr >> ros_message.oil_pressure;

  // Member: oil_temperature
  cdr >> ros_message.oil_temperature;

  // Member: fuel_pressure
  cdr >> ros_message.fuel_pressure;

  // Member: fuel_consumption_rate_cm3pm
  cdr >> ros_message.fuel_consumption_rate_cm3pm;

  // Member: estimated_consumed_fuel_volume_cm3
  cdr >> ros_message.estimated_consumed_fuel_volume_cm3;

  // Member: throttle_position_percent
  cdr >> ros_message.throttle_position_percent;

  // Member: ecu_index
  cdr >> ros_message.ecu_index;

  // Member: spark_plug_usage
  cdr >> ros_message.spark_plug_usage;

  // Member: ignition_timing_deg
  cdr >> ros_message.ignition_timing_deg;

  // Member: injection_time_ms
  cdr >> ros_message.injection_time_ms;

  // Member: cylinder_head_temperature
  cdr >> ros_message.cylinder_head_temperature;

  // Member: exhaust_gas_temperature
  cdr >> ros_message.exhaust_gas_temperature;

  // Member: lambda_coefficient
  cdr >> ros_message.lambda_coefficient;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::InternalCombustionEngineStatus & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: state
  {
    size_t item_size = sizeof(ros_message.state);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flags
  {
    size_t item_size = sizeof(ros_message.flags);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_load_percent
  {
    size_t item_size = sizeof(ros_message.engine_load_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: engine_speed_rpm
  {
    size_t item_size = sizeof(ros_message.engine_speed_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: spark_dwell_time_ms
  {
    size_t item_size = sizeof(ros_message.spark_dwell_time_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: atmospheric_pressure_kpa
  {
    size_t item_size = sizeof(ros_message.atmospheric_pressure_kpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: intake_manifold_pressure_kpa
  {
    size_t item_size = sizeof(ros_message.intake_manifold_pressure_kpa);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: intake_manifold_temperature
  {
    size_t item_size = sizeof(ros_message.intake_manifold_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: coolant_temperature
  {
    size_t item_size = sizeof(ros_message.coolant_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: oil_pressure
  {
    size_t item_size = sizeof(ros_message.oil_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: oil_temperature
  {
    size_t item_size = sizeof(ros_message.oil_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_pressure
  {
    size_t item_size = sizeof(ros_message.fuel_pressure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: fuel_consumption_rate_cm3pm
  {
    size_t item_size = sizeof(ros_message.fuel_consumption_rate_cm3pm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: estimated_consumed_fuel_volume_cm3
  {
    size_t item_size = sizeof(ros_message.estimated_consumed_fuel_volume_cm3);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: throttle_position_percent
  {
    size_t item_size = sizeof(ros_message.throttle_position_percent);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ecu_index
  {
    size_t item_size = sizeof(ros_message.ecu_index);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: spark_plug_usage
  {
    size_t item_size = sizeof(ros_message.spark_plug_usage);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ignition_timing_deg
  {
    size_t item_size = sizeof(ros_message.ignition_timing_deg);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: injection_time_ms
  {
    size_t item_size = sizeof(ros_message.injection_time_ms);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: cylinder_head_temperature
  {
    size_t item_size = sizeof(ros_message.cylinder_head_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: exhaust_gas_temperature
  {
    size_t item_size = sizeof(ros_message.exhaust_gas_temperature);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: lambda_coefficient
  {
    size_t item_size = sizeof(ros_message.lambda_coefficient);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_InternalCombustionEngineStatus(
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


  // Member: timestamp
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint64_t);
    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: state
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flags
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: engine_load_percent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: engine_speed_rpm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: spark_dwell_time_ms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: atmospheric_pressure_kpa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: intake_manifold_pressure_kpa
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: intake_manifold_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: coolant_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: oil_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: oil_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fuel_pressure
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: fuel_consumption_rate_cm3pm
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: estimated_consumed_fuel_volume_cm3
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: throttle_position_percent
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ecu_index
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: spark_plug_usage
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: ignition_timing_deg
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: injection_time_ms
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: cylinder_head_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: exhaust_gas_temperature
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: lambda_coefficient
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
    using DataType = px4_msgs::msg::InternalCombustionEngineStatus;
    is_plain =
      (
      offsetof(DataType, lambda_coefficient) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _InternalCombustionEngineStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::InternalCombustionEngineStatus *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _InternalCombustionEngineStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::InternalCombustionEngineStatus *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _InternalCombustionEngineStatus__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::InternalCombustionEngineStatus *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _InternalCombustionEngineStatus__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_InternalCombustionEngineStatus(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _InternalCombustionEngineStatus__callbacks = {
  "px4_msgs::msg",
  "InternalCombustionEngineStatus",
  _InternalCombustionEngineStatus__cdr_serialize,
  _InternalCombustionEngineStatus__cdr_deserialize,
  _InternalCombustionEngineStatus__get_serialized_size,
  _InternalCombustionEngineStatus__max_serialized_size
};

static rosidl_message_type_support_t _InternalCombustionEngineStatus__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_InternalCombustionEngineStatus__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::InternalCombustionEngineStatus>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_InternalCombustionEngineStatus__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, InternalCombustionEngineStatus)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_InternalCombustionEngineStatus__handle;
}

#ifdef __cplusplus
}
#endif
