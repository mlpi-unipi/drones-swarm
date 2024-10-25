// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'GPS_CHECK_FAIL_GPS_FIX'.
/**
  * bits are true when corresponding test has failed
  * 0 : insufficient fix type (no 3D solution)
 */
enum
{
  px4_msgs__msg__EstimatorStatus__GPS_CHECK_FAIL_GPS_FIX = 0
};

/// Constant 'GPS_CHECK_FAIL_MIN_SAT_COUNT'.
/**
  * 1 : minimum required sat count fail
 */
enum
{
  px4_msgs__msg__EstimatorStatus__GPS_CHECK_FAIL_MIN_SAT_COUNT = 1
};

/// Constant 'GPS_CHECK_FAIL_MAX_PDOP'.
/**
  * 2 : maximum allowed PDOP fail
 */
enum
{
  px4_msgs__msg__EstimatorStatus__GPS_CHECK_FAIL_MAX_PDOP = 2
};

/// Constant 'GPS_CHECK_FAIL_MAX_HORZ_ERR'.
/**
  * 3 : maximum allowed horizontal position error fail
 */
enum
{
  px4_msgs__msg__EstimatorStatus__GPS_CHECK_FAIL_MAX_HORZ_ERR = 3
};

/// Constant 'GPS_CHECK_FAIL_MAX_VERT_ERR'.
/**
  * 4 : maximum allowed vertical position error fail
 */
enum
{
  px4_msgs__msg__EstimatorStatus__GPS_CHECK_FAIL_MAX_VERT_ERR = 4
};

/// Constant 'GPS_CHECK_FAIL_MAX_SPD_ERR'.
/**
  * 5 : maximum allowed speed error fail
 */
enum
{
  px4_msgs__msg__EstimatorStatus__GPS_CHECK_FAIL_MAX_SPD_ERR = 5
};

/// Constant 'GPS_CHECK_FAIL_MAX_HORZ_DRIFT'.
/**
  * 6 : maximum allowed horizontal position drift fail - requires stationary vehicle
 */
enum
{
  px4_msgs__msg__EstimatorStatus__GPS_CHECK_FAIL_MAX_HORZ_DRIFT = 6
};

/// Constant 'GPS_CHECK_FAIL_MAX_VERT_DRIFT'.
/**
  * 7 : maximum allowed vertical position drift fail - requires stationary vehicle
 */
enum
{
  px4_msgs__msg__EstimatorStatus__GPS_CHECK_FAIL_MAX_VERT_DRIFT = 7
};

/// Constant 'GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR'.
/**
  * 8 : maximum allowed horizontal speed fail - requires stationary vehicle
 */
enum
{
  px4_msgs__msg__EstimatorStatus__GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR = 8
};

/// Constant 'GPS_CHECK_FAIL_MAX_VERT_SPD_ERR'.
/**
  * 9 : maximum allowed vertical velocity discrepancy fail
 */
enum
{
  px4_msgs__msg__EstimatorStatus__GPS_CHECK_FAIL_MAX_VERT_SPD_ERR = 9
};

/// Constant 'CS_TILT_ALIGN'.
/**
  * 0 - true if the filter tilt alignment is complete
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_TILT_ALIGN = 0
};

/// Constant 'CS_YAW_ALIGN'.
/**
  * 1 - true if the filter yaw alignment is complete
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_YAW_ALIGN = 1
};

/// Constant 'CS_GPS'.
/**
  * 2 - true if GPS measurements are being fused
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_GPS = 2
};

/// Constant 'CS_OPT_FLOW'.
/**
  * 3 - true if optical flow measurements are being fused
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_OPT_FLOW = 3
};

/// Constant 'CS_MAG_HDG'.
/**
  * 4 - true if a simple magnetic yaw heading is being fused
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_MAG_HDG = 4
};

/// Constant 'CS_MAG_3D'.
/**
  * 5 - true if 3-axis magnetometer measurement are being fused
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_MAG_3D = 5
};

/// Constant 'CS_MAG_DEC'.
/**
  * 6 - true if synthetic magnetic declination measurements are being fused
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_MAG_DEC = 6
};

/// Constant 'CS_IN_AIR'.
/**
  * 7 - true when thought to be airborne
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_IN_AIR = 7
};

/// Constant 'CS_WIND'.
/**
  * 8 - true when wind velocity is being estimated
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_WIND = 8
};

/// Constant 'CS_BARO_HGT'.
/**
  * 9 - true when baro height is being fused as a primary height reference
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_BARO_HGT = 9
};

/// Constant 'CS_RNG_HGT'.
/**
  * 10 - true when range finder height is being fused as a primary height reference
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_RNG_HGT = 10
};

/// Constant 'CS_GPS_HGT'.
/**
  * 11 - true when GPS height is being fused as a primary height reference
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_GPS_HGT = 11
};

/// Constant 'CS_EV_POS'.
/**
  * 12 - true when local position data from external vision is being fused
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_EV_POS = 12
};

/// Constant 'CS_EV_YAW'.
/**
  * 13 - true when yaw data from external vision measurements is being fused
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_EV_YAW = 13
};

/// Constant 'CS_EV_HGT'.
/**
  * 14 - true when height data from external vision measurements is being fused
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_EV_HGT = 14
};

/// Constant 'CS_BETA'.
/**
  * 15 - true when synthetic sideslip measurements are being fused
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_BETA = 15
};

/// Constant 'CS_MAG_FIELD'.
/**
  * 16 - true when only the magnetic field states are updated by the magnetometer
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_MAG_FIELD = 16
};

/// Constant 'CS_FIXED_WING'.
/**
  * 17 - true when thought to be operating as a fixed wing vehicle with constrained sideslip
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_FIXED_WING = 17
};

/// Constant 'CS_MAG_FAULT'.
/**
  * 18 - true when the magnetometer has been declared faulty and is no longer being used
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_MAG_FAULT = 18
};

/// Constant 'CS_ASPD'.
/**
  * 19 - true when airspeed measurements are being fused
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_ASPD = 19
};

/// Constant 'CS_GND_EFFECT'.
/**
  * 20 - true when when protection from ground effect induced static pressure rise is active
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_GND_EFFECT = 20
};

/// Constant 'CS_RNG_STUCK'.
/**
  * 21 - true when a stuck range finder sensor has been detected
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_RNG_STUCK = 21
};

/// Constant 'CS_GPS_YAW'.
/**
  * 22 - true when yaw (not ground course) data from a GPS receiver is being fused
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_GPS_YAW = 22
};

/// Constant 'CS_MAG_ALIGNED'.
/**
  * 23 - true when the in-flight mag field alignment has been completed
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_MAG_ALIGNED = 23
};

/// Constant 'CS_EV_VEL'.
/**
  * 24 - true when local frame velocity data fusion from external vision measurements is intended
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_EV_VEL = 24
};

/// Constant 'CS_SYNTHETIC_MAG_Z'.
/**
  * 25 - true when we are using a synthesized measurement for the magnetometer Z component
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_SYNTHETIC_MAG_Z = 25
};

/// Constant 'CS_VEHICLE_AT_REST'.
/**
  * 26 - true when the vehicle is at rest
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_VEHICLE_AT_REST = 26
};

/// Constant 'CS_GPS_YAW_FAULT'.
/**
  * 27 - true when the GNSS heading has been declared faulty and is no longer being used
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_GPS_YAW_FAULT = 27
};

/// Constant 'CS_RNG_FAULT'.
/**
  * 28 - true when the range finder has been declared faulty and is no longer being used
 */
enum
{
  px4_msgs__msg__EstimatorStatus__CS_RNG_FAULT = 28
};

/// Struct defined in msg/EstimatorStatus in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// the timestamp of the raw data (microseconds)
  uint64_t timestamp_sample;
  /// return a vector containing the output predictor angular, velocity and position tracking error magnitudes (rad), (m/s), (m)
  float output_tracking_error[3];
  /// Bitmask to indicate status of GPS checks - see definition below
  uint16_t gps_check_fail_flags;
  /// Bitmask to indicate EKF logic state
  uint64_t control_mode_flags;
  /// Bitmask to indicate EKF internal faults
  uint32_t filter_fault_flags;
  /// 0 - true if the fusion of the magnetometer X-axis has encountered a numerical error
  /// 1 - true if the fusion of the magnetometer Y-axis has encountered a numerical error
  /// 2 - true if the fusion of the magnetometer Z-axis has encountered a numerical error
  /// 3 - true if the fusion of the magnetic heading has encountered a numerical error
  /// 4 - true if the fusion of the magnetic declination has encountered a numerical error
  /// 5 - true if fusion of the airspeed has encountered a numerical error
  /// 6 - true if fusion of the synthetic sideslip constraint has encountered a numerical error
  /// 7 - true if fusion of the optical flow X axis has encountered a numerical error
  /// 8 - true if fusion of the optical flow Y axis has encountered a numerical error
  /// 9 - true if fusion of the North velocity has encountered a numerical error
  /// 10 - true if fusion of the East velocity has encountered a numerical error
  /// 11 - true if fusion of the Down velocity has encountered a numerical error
  /// 12 - true if fusion of the North position has encountered a numerical error
  /// 13 - true if fusion of the East position has encountered a numerical error
  /// 14 - true if fusion of the Down position has encountered a numerical error
  /// 15 - true if bad delta velocity bias estimates have been detected
  /// 16 - true if bad vertical accelerometer data has been detected
  /// 17 - true if delta velocity data contains clipping (asymmetric railing)
  /// 1-Sigma estimated horizontal position accuracy relative to the estimators origin (m)
  float pos_horiz_accuracy;
  /// 1-Sigma estimated vertical position accuracy relative to the estimators origin (m)
  float pos_vert_accuracy;
  /// Bitmask to indicate pass/fail status of innovation consistency checks
  uint16_t innovation_check_flags;
  /// 0 - true if velocity observations have been rejected
  /// 1 - true if horizontal position observations have been rejected
  /// 2 - true if true if vertical position observations have been rejected
  /// 3 - true if the X magnetometer observation has been rejected
  /// 4 - true if the Y magnetometer observation has been rejected
  /// 5 - true if the Z magnetometer observation has been rejected
  /// 6 - true if the yaw observation has been rejected
  /// 7 - true if the airspeed observation has been rejected
  /// 8 - true if the synthetic sideslip observation has been rejected
  /// 9 - true if the height above ground observation has been rejected
  /// 10 - true if the X optical flow observation has been rejected
  /// 11 - true if the Y optical flow observation has been rejected
  /// ratio of the largest magnetometer innovation component to the innovation test limit
  float mag_test_ratio;
  /// ratio of the largest velocity innovation component to the innovation test limit
  float vel_test_ratio;
  /// ratio of the largest horizontal position innovation component to the innovation test limit
  float pos_test_ratio;
  /// ratio of the vertical position innovation to the innovation test limit
  float hgt_test_ratio;
  /// ratio of the true airspeed innovation to the innovation test limit
  float tas_test_ratio;
  /// ratio of the height above ground innovation to the innovation test limit
  float hagl_test_ratio;
  /// ratio of the synthetic sideslip innovation to the innovation test limit
  float beta_test_ratio;
  /// Bitmask indicating which filter kinematic state outputs are valid for flight control use.
  uint16_t solution_status_flags;
  /// 0 - True if the attitude estimate is good
  /// 1 - True if the horizontal velocity estimate is good
  /// 2 - True if the vertical velocity estimate is good
  /// 3 - True if the horizontal position (relative) estimate is good
  /// 4 - True if the horizontal position (absolute) estimate is good
  /// 5 - True if the vertical position (absolute) estimate is good
  /// 6 - True if the vertical position (above ground) estimate is good
  /// 7 - True if the EKF is in a constant position mode and is not using external measurements (eg GPS or optical flow)
  /// 8 - True if the EKF has sufficient data to enter a mode that will provide a (relative) position estimate
  /// 9 - True if the EKF has sufficient data to enter a mode that will provide a (absolute) position estimate
  /// 10 - True if the EKF has detected a GPS glitch
  /// 11 - True if the EKF has detected bad accelerometer data
  /// number of horizontal position reset events (allow to wrap if count exceeds 255)
  uint8_t reset_count_vel_ne;
  /// number of vertical velocity reset events (allow to wrap if count exceeds 255)
  uint8_t reset_count_vel_d;
  /// number of horizontal position reset events (allow to wrap if count exceeds 255)
  uint8_t reset_count_pos_ne;
  /// number of vertical position reset events (allow to wrap if count exceeds 255)
  uint8_t reset_count_pod_d;
  /// number of quaternion reset events (allow to wrap if count exceeds 255)
  uint8_t reset_count_quat;
  /// cumulative amount of time in seconds that the EKF inertial calculation has slipped relative to system time
  float time_slip;
  bool pre_flt_fail_innov_heading;
  bool pre_flt_fail_innov_vel_horiz;
  bool pre_flt_fail_innov_vel_vert;
  bool pre_flt_fail_innov_height;
  bool pre_flt_fail_mag_field_disturbed;
  uint32_t accel_device_id;
  uint32_t gyro_device_id;
  uint32_t baro_device_id;
  uint32_t mag_device_id;
  /// legacy local position estimator (LPE) flags
  /// Bitmask to indicate sensor health states (vel, pos, hgt)
  uint8_t health_flags;
  /// Bitmask to indicate timeout flags (vel, pos, hgt)
  uint8_t timeout_flags;
  float mag_inclination_deg;
  float mag_inclination_ref_deg;
  float mag_strength_gs;
  float mag_strength_ref_gs;
} px4_msgs__msg__EstimatorStatus;

// Struct for a sequence of px4_msgs__msg__EstimatorStatus.
typedef struct px4_msgs__msg__EstimatorStatus__Sequence
{
  px4_msgs__msg__EstimatorStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_STATUS__STRUCT_H_
