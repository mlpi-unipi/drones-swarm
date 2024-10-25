// NOLINT: This file starts with a BOM since it contain non-ASCII characters
// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/BatteryStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'BATTERY_SOURCE_POWER_MODULE'.
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_SOURCE_POWER_MODULE = 0
};

/// Constant 'BATTERY_SOURCE_EXTERNAL'.
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_SOURCE_EXTERNAL = 1
};

/// Constant 'BATTERY_SOURCE_ESCS'.
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_SOURCE_ESCS = 2
};

/// Constant 'BATTERY_WARNING_NONE'.
/**
  * no battery low voltage warning active
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_WARNING_NONE = 0
};

/// Constant 'BATTERY_WARNING_LOW'.
/**
  * warning of low voltage
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_WARNING_LOW = 1
};

/// Constant 'BATTERY_WARNING_CRITICAL'.
/**
  * critical voltage, return / abort immediately
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_WARNING_CRITICAL = 2
};

/// Constant 'BATTERY_WARNING_EMERGENCY'.
/**
  * immediate landing required
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_WARNING_EMERGENCY = 3
};

/// Constant 'BATTERY_WARNING_FAILED'.
/**
  * the battery has failed completely
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_WARNING_FAILED = 4
};

/// Constant 'BATTERY_STATE_UNHEALTHY'.
/**
  * Battery is diagnosed to be defective or an error occurred, usage is discouraged / prohibited. Possible causes (faults) are listed in faults field.
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_STATE_UNHEALTHY = 6
};

/// Constant 'BATTERY_STATE_CHARGING'.
/**
  * Battery is charging
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_STATE_CHARGING = 7
};

/// Constant 'BATTERY_FAULT_DEEP_DISCHARGE'.
/**
  * Battery has deep discharged
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_FAULT_DEEP_DISCHARGE = 0
};

/// Constant 'BATTERY_FAULT_SPIKES'.
/**
  * Voltage spikes
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_FAULT_SPIKES = 1
};

/// Constant 'BATTERY_FAULT_CELL_FAIL'.
/**
  * One or more cells have failed
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_FAULT_CELL_FAIL = 2
};

/// Constant 'BATTERY_FAULT_OVER_CURRENT'.
/**
  * Over-current
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_FAULT_OVER_CURRENT = 3
};

/// Constant 'BATTERY_FAULT_OVER_TEMPERATURE'.
/**
  * Over-temperature
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_FAULT_OVER_TEMPERATURE = 4
};

/// Constant 'BATTERY_FAULT_UNDER_TEMPERATURE'.
/**
  * Under-temperature fault
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_FAULT_UNDER_TEMPERATURE = 5
};

/// Constant 'BATTERY_FAULT_INCOMPATIBLE_VOLTAGE'.
/**
  * Vehicle voltage is not compatible with battery one
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_FAULT_INCOMPATIBLE_VOLTAGE = 6
};

/// Constant 'BATTERY_FAULT_INCOMPATIBLE_FIRMWARE'.
/**
  * Battery firmware is not compatible with current autopilot firmware
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_FAULT_INCOMPATIBLE_FIRMWARE = 7
};

/// Constant 'BATTERY_FAULT_INCOMPATIBLE_MODEL'.
/**
  * Battery model is not supported by the system
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_FAULT_INCOMPATIBLE_MODEL = 8
};

/// Constant 'BATTERY_FAULT_HARDWARE_FAILURE'.
/**
  * hardware problem
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_FAULT_HARDWARE_FAILURE = 9
};

/// Constant 'BATTERY_WARNING_OVER_TEMPERATURE'.
/**
  * Over-temperature
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_WARNING_OVER_TEMPERATURE = 10
};

/// Constant 'BATTERY_FAULT_COUNT'.
/**
  * Counter - keep it as last element!
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_FAULT_COUNT = 11
};

/// Constant 'BATTERY_MODE_UNKNOWN'.
/**
  * Battery does not support a mode, or if it does, is operational
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_MODE_UNKNOWN = 0
};

/// Constant 'BATTERY_MODE_AUTO_DISCHARGING'.
/**
  * Battery is auto discharging (towards storage level)
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_MODE_AUTO_DISCHARGING = 1
};

/// Constant 'BATTERY_MODE_HOT_SWAP'.
/**
  * Battery in hot-swap mode
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_MODE_HOT_SWAP = 2
};

/// Constant 'BATTERY_MODE_COUNT'.
/**
  * Counter - keep it as last element (once we're fully migrated to events interface we can just comment this)!
 */
enum
{
  px4_msgs__msg__BatteryStatus__BATTERY_MODE_COUNT = 3
};

/// Constant 'MAX_INSTANCES'.
enum
{
  px4_msgs__msg__BatteryStatus__MAX_INSTANCES = 4
};

/// Struct defined in msg/BatteryStatus in the package px4_msgs.
typedef struct px4_msgs__msg__BatteryStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Whether or not a battery is connected, based on a voltage threshold
  bool connected;
  /// Battery voltage in volts, 0 if unknown
  float voltage_v;
  /// Battery voltage in volts, filtered, 0 if unknown
  float voltage_filtered_v;
  /// Battery current in amperes, -1 if unknown
  float current_a;
  /// Battery current in amperes, filtered, 0 if unknown
  float current_filtered_a;
  /// Battery current average in amperes (for FW average in level flight), -1 if unknown
  float current_average_a;
  /// Discharged amount in mAh, -1 if unknown
  float discharged_mah;
  /// From 1 to 0, -1 if unknown
  float remaining;
  /// Power scaling factor, >= 1, or -1 if unknown
  float scale;
  /// predicted time in seconds remaining until battery is empty under previous averaged load, NAN if unknown
  float time_remaining_s;
  /// temperature of the battery. NaN if unknown
  float temperature;
  /// Number of cells, 0 if unknown
  uint8_t cell_count;
  /// Battery source
  uint8_t source;
  /// Zero based priority is the connection on the Power Controller V1..Vn AKA BrickN-1
  uint8_t priority;
  /// actual capacity of the battery
  uint16_t capacity;
  /// number of discharge cycles the battery has experienced
  uint16_t cycle_count;
  /// predicted remaining battery capacity based on the average rate of discharge in min
  uint16_t average_time_to_empty;
  /// serial number of the battery pack
  uint16_t serial_number;
  /// manufacture date, part of serial number of the battery pack. Formatted as: Day + Month×32 + (Year–1980)×512
  uint16_t manufacture_date;
  /// state of health. FullChargeCapacity/DesignCapacity, 0-100%.
  uint16_t state_of_health;
  /// max error, expected margin of error in % in the state-of-charge calculation with a range of 1 to 100%
  uint16_t max_error;
  /// ID number of a battery. Should be unique and consistent for the lifetime of a vehicle. 1-indexed.
  uint8_t id;
  /// interface error counter
  uint16_t interface_error;
  /// Battery individual cell voltages, 0 if unknown
  float voltage_cell_v[14];
  /// Max difference between individual cell voltages
  float max_cell_voltage_delta;
  /// Power off event imminent indication, false if unknown
  bool is_powering_off;
  /// Set if the battery is explicitly required before arming
  bool is_required;
  /// Smart battery supply status/fault flags (bitmask) for health indication.
  uint16_t faults;
  /// Bitmask indicating smart battery internal manufacturer faults, those are not user actionable.
  uint32_t custom_faults;
  /// Current battery warning
  uint8_t warning;
  /// Battery mode. Note, the normal operation mode
  uint8_t mode;
  /// The average power of the current discharge
  float average_power;
  /// The predicted charge or energy remaining in the battery
  float available_energy;
  /// The compensated battery capacity
  float full_charge_capacity_wh;
  /// The compensated battery capacity remaining
  float remaining_capacity_wh;
  /// The design capacity of the battery
  float design_capacity;
  /// The predicted remaining time until the battery reaches full charge, in minutes
  uint16_t average_time_to_full;
  /// Number of battery overdischarge
  uint16_t over_discharge_count;
  /// Nominal voltage of the battery pack
  float nominal_voltage;
} px4_msgs__msg__BatteryStatus;

// Struct for a sequence of px4_msgs__msg__BatteryStatus.
typedef struct px4_msgs__msg__BatteryStatus__Sequence
{
  px4_msgs__msg__BatteryStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__BatteryStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__BATTERY_STATUS__STRUCT_H_
