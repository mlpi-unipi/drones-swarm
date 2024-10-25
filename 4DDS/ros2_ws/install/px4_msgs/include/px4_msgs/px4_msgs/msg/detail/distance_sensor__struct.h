// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/DistanceSensor.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MAV_DISTANCE_SENSOR_LASER'.
enum
{
  px4_msgs__msg__DistanceSensor__MAV_DISTANCE_SENSOR_LASER = 0
};

/// Constant 'MAV_DISTANCE_SENSOR_ULTRASOUND'.
enum
{
  px4_msgs__msg__DistanceSensor__MAV_DISTANCE_SENSOR_ULTRASOUND = 1
};

/// Constant 'MAV_DISTANCE_SENSOR_INFRARED'.
enum
{
  px4_msgs__msg__DistanceSensor__MAV_DISTANCE_SENSOR_INFRARED = 2
};

/// Constant 'MAV_DISTANCE_SENSOR_RADAR'.
enum
{
  px4_msgs__msg__DistanceSensor__MAV_DISTANCE_SENSOR_RADAR = 3
};

/// Constant 'ROTATION_YAW_0'.
/**
  * MAV_SENSOR_ROTATION_NONE
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_YAW_0 = 0
};

/// Constant 'ROTATION_YAW_45'.
/**
  * MAV_SENSOR_ROTATION_YAW_45
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_YAW_45 = 1
};

/// Constant 'ROTATION_YAW_90'.
/**
  * MAV_SENSOR_ROTATION_YAW_90
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_YAW_90 = 2
};

/// Constant 'ROTATION_YAW_135'.
/**
  * MAV_SENSOR_ROTATION_YAW_135
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_YAW_135 = 3
};

/// Constant 'ROTATION_YAW_180'.
/**
  * MAV_SENSOR_ROTATION_YAW_180
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_YAW_180 = 4
};

/// Constant 'ROTATION_YAW_225'.
/**
  * MAV_SENSOR_ROTATION_YAW_225
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_YAW_225 = 5
};

/// Constant 'ROTATION_YAW_270'.
/**
  * MAV_SENSOR_ROTATION_YAW_270
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_YAW_270 = 6
};

/// Constant 'ROTATION_YAW_315'.
/**
  * MAV_SENSOR_ROTATION_YAW_315
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_YAW_315 = 7
};

/// Constant 'ROTATION_FORWARD_FACING'.
/**
  * MAV_SENSOR_ROTATION_NONE
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_FORWARD_FACING = 0
};

/// Constant 'ROTATION_RIGHT_FACING'.
/**
  * MAV_SENSOR_ROTATION_YAW_90
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_RIGHT_FACING = 2
};

/// Constant 'ROTATION_BACKWARD_FACING'.
/**
  * MAV_SENSOR_ROTATION_YAW_180
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_BACKWARD_FACING = 4
};

/// Constant 'ROTATION_LEFT_FACING'.
/**
  * MAV_SENSOR_ROTATION_YAW_270
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_LEFT_FACING = 6
};

/// Constant 'ROTATION_UPWARD_FACING'.
/**
  * MAV_SENSOR_ROTATION_PITCH_90
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_UPWARD_FACING = 24
};

/// Constant 'ROTATION_DOWNWARD_FACING'.
/**
  * MAV_SENSOR_ROTATION_PITCH_270
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_DOWNWARD_FACING = 25
};

/// Constant 'ROTATION_CUSTOM'.
/**
  * MAV_SENSOR_ROTATION_CUSTOM
 */
enum
{
  px4_msgs__msg__DistanceSensor__ROTATION_CUSTOM = 100
};

/// Struct defined in msg/DistanceSensor in the package px4_msgs.
/**
  * DISTANCE_SENSOR message data
 */
typedef struct px4_msgs__msg__DistanceSensor
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// unique device ID for the sensor that does not change between power cycles
  uint32_t device_id;
  /// Minimum distance the sensor can measure (in m)
  float min_distance;
  /// Maximum distance the sensor can measure (in m)
  float max_distance;
  /// Current distance reading (in m)
  float current_distance;
  /// Measurement variance (in m^2), 0 for unknown / invalid readings
  float variance;
  /// Signal quality in percent (0...100%), where 0 = invalid signal, 100 = perfect signal, and -1 = unknown signal quality.
  int8_t signal_quality;
  /// Type from MAV_DISTANCE_SENSOR enum
  uint8_t type;
  /// Sensor horizontal field of view (rad)
  float h_fov;
  /// Sensor vertical field of view (rad)
  float v_fov;
  /// Quaterion sensor orientation with respect to the vehicle body frame to specify the orientation ROTATION_CUSTOM
  float q[4];
  /// Direction the sensor faces from MAV_SENSOR_ORIENTATION enum
  uint8_t orientation;
} px4_msgs__msg__DistanceSensor;

// Struct for a sequence of px4_msgs__msg__DistanceSensor.
typedef struct px4_msgs__msg__DistanceSensor__Sequence
{
  px4_msgs__msg__DistanceSensor * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__DistanceSensor__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__DISTANCE_SENSOR__STRUCT_H_
