// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/GeneratorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'STATUS_FLAG_OFF'.
/**
  * Generator is off.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_OFF = 1ull
};

/// Constant 'STATUS_FLAG_READY'.
/**
  * Generator is ready to start generating power.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_READY = 2ull
};

/// Constant 'STATUS_FLAG_GENERATING'.
/**
  * Generator is generating power.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_GENERATING = 4ull
};

/// Constant 'STATUS_FLAG_CHARGING'.
/**
  * Generator is charging the batteries (generating enough power to charge and provide the load).
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_CHARGING = 8ull
};

/// Constant 'STATUS_FLAG_REDUCED_POWER'.
/**
  * Generator is operating at a reduced maximum power.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_REDUCED_POWER = 16ull
};

/// Constant 'STATUS_FLAG_MAXPOWER'.
/**
  * Generator is providing the maximum output.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_MAXPOWER = 32ull
};

/// Constant 'STATUS_FLAG_OVERTEMP_WARNING'.
/**
  * Generator is near the maximum operating temperature, cooling is insufficient.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_OVERTEMP_WARNING = 64ull
};

/// Constant 'STATUS_FLAG_OVERTEMP_FAULT'.
/**
  * Generator hit the maximum operating temperature and shutdown.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_OVERTEMP_FAULT = 128ull
};

/// Constant 'STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING'.
/**
  * Power electronics are near the maximum operating temperature, cooling is insufficient.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_ELECTRONICS_OVERTEMP_WARNING = 256ull
};

/// Constant 'STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT'.
/**
  * Power electronics hit the maximum operating temperature and shutdown.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_ELECTRONICS_OVERTEMP_FAULT = 512ull
};

/// Constant 'STATUS_FLAG_ELECTRONICS_FAULT'.
/**
  * Power electronics experienced a fault and shutdown.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_ELECTRONICS_FAULT = 1024ull
};

/// Constant 'STATUS_FLAG_POWERSOURCE_FAULT'.
/**
  * The power source supplying the generator failed e.g. mechanical generator stopped, tether is no longer providing power, solar cell is in shade, hydrogen reaction no longer happening.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_POWERSOURCE_FAULT = 2048ull
};

/// Constant 'STATUS_FLAG_COMMUNICATION_WARNING'.
/**
  * Generator controller having communication problems.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_COMMUNICATION_WARNING = 4096ull
};

/// Constant 'STATUS_FLAG_COOLING_WARNING'.
/**
  * Power electronic or generator cooling system error.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_COOLING_WARNING = 8192ull
};

/// Constant 'STATUS_FLAG_POWER_RAIL_FAULT'.
/**
  * Generator controller power rail experienced a fault.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_POWER_RAIL_FAULT = 16384ull
};

/// Constant 'STATUS_FLAG_OVERCURRENT_FAULT'.
/**
  * Generator controller exceeded the overcurrent threshold and shutdown to prevent damage.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_OVERCURRENT_FAULT = 32768ull
};

/// Constant 'STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT'.
/**
  * Generator controller detected a high current going into the batteries and shutdown to prevent battery damage. |
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_BATTERY_OVERCHARGE_CURRENT_FAULT = 65536ull
};

/// Constant 'STATUS_FLAG_OVERVOLTAGE_FAULT'.
/**
  * Generator controller exceeded it's overvoltage threshold and shutdown to prevent it exceeding the voltage rating.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_OVERVOLTAGE_FAULT = 131072ull
};

/// Constant 'STATUS_FLAG_BATTERY_UNDERVOLT_FAULT'.
/**
  * Batteries are under voltage (generator will not start).
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_BATTERY_UNDERVOLT_FAULT = 262144ull
};

/// Constant 'STATUS_FLAG_START_INHIBITED'.
/**
  * Generator start is inhibited by e.g. a safety switch.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_START_INHIBITED = 524288ull
};

/// Constant 'STATUS_FLAG_MAINTENANCE_REQUIRED'.
/**
  * Generator requires maintenance.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_MAINTENANCE_REQUIRED = 1048576ull
};

/// Constant 'STATUS_FLAG_WARMING_UP'.
/**
  * Generator is not ready to generate yet.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_WARMING_UP = 2097152ull
};

/// Constant 'STATUS_FLAG_IDLE'.
/**
  * Generator is idle.
 */
enum
{
  px4_msgs__msg__GeneratorStatus__STATUS_FLAG_IDLE = 4194304ull
};

/// Struct defined in msg/GeneratorStatus in the package px4_msgs.
typedef struct px4_msgs__msg__GeneratorStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Status flags
  uint64_t status;
  /// Current into/out of battery. Positive for out. Negative for in. NaN: field not provided.
  float battery_current;
  /// Current going to the UAV. If battery current not available this is the DC current from the generator. Positive for out. Negative for in. NaN: field not provided
  float load_current;
  /// The power being generated. NaN: field not provided
  float power_generated;
  /// Voltage of the bus seen at the generator, or battery bus if battery bus is controlled by generator and at a different voltage to main bus.
  float bus_voltage;
  /// The target battery current. Positive for out. Negative for in. NaN: field not provided
  float bat_current_setpoint;
  /// Seconds this generator has run since it was rebooted. UINT32_MAX: field not provided.
  uint32_t runtime;
  /// Seconds until this generator requires maintenance.  A negative value indicates maintenance is past-due. INT32_MAX: field not provided.
  int32_t time_until_maintenance;
  /// Speed of electrical generator or alternator. UINT16_MAX: field not provided.
  uint16_t generator_speed;
  /// The temperature of the rectifier or power converter. INT16_MAX: field not provided.
  int16_t rectifier_temperature;
  /// The temperature of the mechanical motor, fuel cell core or generator. INT16_MAX: field not provided.
  int16_t generator_temperature;
} px4_msgs__msg__GeneratorStatus;

// Struct for a sequence of px4_msgs__msg__GeneratorStatus.
typedef struct px4_msgs__msg__GeneratorStatus__Sequence
{
  px4_msgs__msg__GeneratorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__GeneratorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__GENERATOR_STATUS__STRUCT_H_
