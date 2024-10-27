// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleCommand.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_CMD_CUSTOM_0'.
/**
  * test command
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CUSTOM_0 = 0
};

/// Constant 'VEHICLE_CMD_CUSTOM_1'.
/**
  * test command
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CUSTOM_1 = 1
};

/// Constant 'VEHICLE_CMD_CUSTOM_2'.
/**
  * test command
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CUSTOM_2 = 2
};

/// Constant 'VEHICLE_CMD_NAV_WAYPOINT'.
/**
  * Navigate to MISSION. |Hold time in decimal seconds. (ignored by fixed wing, time to stay at MISSION for rotary wing)| Acceptance radius in meters (if the sphere with this radius is hit, the MISSION counts as reached)| 0 to pass through the WP, if > 0 radius in meters to pass by WP. Positive value for clockwise orbit, negative value for counter-clockwise orbit. Allows trajectory control.| Desired yaw angle at MISSION (rotary wing)| Latitude| Longitude| Altitude|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_WAYPOINT = 16
};

/// Constant 'VEHICLE_CMD_NAV_LOITER_UNLIM'.
/**
  * Loiter around this MISSION an unlimited amount of time |Empty| Empty| Radius around MISSION, in meters. If positive loiter clockwise, else counter-clockwise| Desired yaw angle.| Latitude| Longitude| Altitude|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_LOITER_UNLIM = 17
};

/// Constant 'VEHICLE_CMD_NAV_LOITER_TURNS'.
/**
  * Loiter around this MISSION for X turns |Turns| Empty| Radius around MISSION, in meters. If positive loiter clockwise, else counter-clockwise| Desired yaw angle.| Latitude| Longitude| Altitude|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_LOITER_TURNS = 18
};

/// Constant 'VEHICLE_CMD_NAV_LOITER_TIME'.
/**
  * Loiter around this MISSION for X seconds |Seconds (decimal)| Empty| Radius around MISSION, in meters. If positive loiter clockwise, else counter-clockwise| Desired yaw angle.| Latitude| Longitude| Altitude|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_LOITER_TIME = 19
};

/// Constant 'VEHICLE_CMD_NAV_RETURN_TO_LAUNCH'.
/**
  * Return to launch location |Empty| Empty| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_RETURN_TO_LAUNCH = 20
};

/// Constant 'VEHICLE_CMD_NAV_LAND'.
/**
  * Land at location |Empty| Empty| Empty| Desired yaw angle.| Latitude| Longitude| Altitude|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_LAND = 21
};

/// Constant 'VEHICLE_CMD_NAV_TAKEOFF'.
/**
  * Takeoff from ground / hand |Minimum pitch (if airspeed sensor present), desired pitch without sensor| Empty| Empty| Yaw angle (if magnetometer present), ignored without magnetometer| Latitude| Longitude| Altitude|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_TAKEOFF = 22
};

/// Constant 'VEHICLE_CMD_NAV_PRECLAND'.
/**
  * Attempt a precision landing
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_PRECLAND = 23
};

/// Constant 'VEHICLE_CMD_DO_ORBIT'.
/**
  * Start orbiting on the circumference of a circle defined by the parameters. |Radius [m] |Velocity [m/s] |Yaw behaviour |Empty |Latitude/X |Longitude/Y |Altitude/Z |
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_ORBIT = 34
};

/// Constant 'VEHICLE_CMD_DO_FIGUREEIGHT'.
/**
  * Start flying on the outline of a figure eight defined by the parameters. |Major Radius [m] |Minor Radius [m] |Velocity [m/s] |Orientation |Latitude/X |Longitude/Y |Altitude/Z |
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_FIGUREEIGHT = 35
};

/// Constant 'VEHICLE_CMD_NAV_ROI'.
/**
  * Sets the region of interest (ROI) for a sensor set or the vehicle itself. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Region of interest mode. (see MAV_ROI enum)| MISSION index/ target ID. (see MAV_ROI enum)| ROI index (allows a vehicle to manage multiple ROI's)| Empty| x the location of the fixed ROI (see MAV_FRAME)| y| z|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_ROI = 80
};

/// Constant 'VEHICLE_CMD_NAV_PATHPLANNING'.
/**
  * Control autonomous path planning on the MAV. |0: Disable local obstacle avoidance / local path planning (without resetting map), 1: Enable local path planning, 2: Enable and reset local path planning| 0: Disable full path planning (without resetting map), 1: Enable, 2: Enable and reset map/occupancy grid, 3: Enable and reset planned route, but not occupancy grid| Empty| Yaw angle at goal, in compass degrees,| Latitude/X of goal| Longitude/Y of goal| Altitude/Z of goal|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_PATHPLANNING = 81
};

/// Constant 'VEHICLE_CMD_NAV_VTOL_TAKEOFF'.
/**
  * Takeoff from ground / hand and transition to fixed wing |Minimum pitch (if airspeed sensor present), desired pitch without sensor| Empty| Empty| Yaw angle (if magnetometer present), ignored without magnetometer| Latitude| Longitude| Altitude|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_VTOL_TAKEOFF = 84
};

/// Constant 'VEHICLE_CMD_NAV_VTOL_LAND'.
/**
  * Transition to MC and land at location |Empty| Empty| Empty| Desired yaw angle.| Latitude| Longitude| Altitude|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_VTOL_LAND = 85
};

/// Constant 'VEHICLE_CMD_NAV_GUIDED_LIMITS'.
/**
  * set limits for external control |timeout - maximum time (in seconds) that external controller will be allowed to control vehicle. 0 means no timeout| absolute altitude min (in meters, AMSL) - if vehicle moves below this alt, the command will be aborted and the mission will continue.  0 means no lower altitude limit| absolute altitude max (in meters)- if vehicle moves above this alt, the command will be aborted and the mission will continue.  0 means no upper altitude limit| horizontal move limit (in meters, AMSL) - if vehicle moves more than this distance from it's location at the moment the command was executed, the command will be aborted and the mission will continue. 0 means no horizontal altitude limit| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_GUIDED_LIMITS = 90
};

/// Constant 'VEHICLE_CMD_NAV_GUIDED_MASTER'.
/**
  * set id of master controller |System ID| Component ID| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_GUIDED_MASTER = 91
};

/// Constant 'VEHICLE_CMD_NAV_DELAY'.
/**
  * Delay the next navigation command a number of seconds or until a specified time |Delay in seconds (decimal, -1 to enable time-of-day fields)| hour (24h format, UTC, -1 to ignore)| minute (24h format, UTC, -1 to ignore)| second (24h format, UTC)| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_DELAY = 93
};

/// Constant 'VEHICLE_CMD_NAV_LAST'.
/**
  * NOP - This command is only used to mark the upper limit of the NAV/ACTION commands in the enumeration |Empty| Empty| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_NAV_LAST = 95
};

/// Constant 'VEHICLE_CMD_CONDITION_DELAY'.
/**
  * Delay mission state machine. |Delay in seconds (decimal)| Empty| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONDITION_DELAY = 112
};

/// Constant 'VEHICLE_CMD_CONDITION_CHANGE_ALT'.
/**
  * Ascend/descend at rate.  Delay mission state machine until desired altitude reached. |Descent / Ascend rate (m/s)| Empty| Empty| Empty| Empty| Empty| Finish Altitude|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONDITION_CHANGE_ALT = 113
};

/// Constant 'VEHICLE_CMD_CONDITION_DISTANCE'.
/**
  * Delay mission state machine until within desired distance of next NAV point. |Distance (meters)| Empty| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONDITION_DISTANCE = 114
};

/// Constant 'VEHICLE_CMD_CONDITION_YAW'.
/**
  * Reach a certain target angle. |target angle: [0-360], 0 is north| speed during yaw change:[deg per second]| direction: negative: counter clockwise, positive: clockwise [-1,1]| relative offset or absolute angle: [ 1,0]| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONDITION_YAW = 115
};

/// Constant 'VEHICLE_CMD_CONDITION_LAST'.
/**
  * NOP - This command is only used to mark the upper limit of the CONDITION commands in the enumeration |Empty| Empty| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONDITION_LAST = 159
};

/// Constant 'VEHICLE_CMD_CONDITION_GATE'.
/**
  * Wait until passing a threshold |2D coord mode: 0: Orthogonal to planned route | Altitude mode: 0: Ignore altitude| Empty| Empty| Lat| Lon| Alt|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONDITION_GATE = 4501
};

/// Constant 'VEHICLE_CMD_DO_SET_MODE'.
/**
  * Set system mode. |Mode, as defined by ENUM MAV_MODE| Empty| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_MODE = 176
};

/// Constant 'VEHICLE_CMD_DO_JUMP'.
/**
  * Jump to the desired command in the mission list.  Repeat this action only the specified number of times |Sequence number| Repeat count| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_JUMP = 177
};

/// Constant 'VEHICLE_CMD_DO_CHANGE_SPEED'.
/**
  * Change speed and/or throttle set points. |Speed type (0=Airspeed, 1=Ground Speed)| Speed  (m/s, -1 indicates no change)| Throttle  ( Percent, -1 indicates no change)| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_CHANGE_SPEED = 178
};

/// Constant 'VEHICLE_CMD_DO_SET_HOME'.
/**
  * Changes the home location either to the current location or a specified location. |Use current (1=use current location, 0=use specified location)| Empty| Empty| Empty| Latitude| Longitude| Altitude|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_HOME = 179
};

/// Constant 'VEHICLE_CMD_DO_SET_PARAMETER'.
/**
  * Set a system parameter.  Caution!  Use of this command requires knowledge of the numeric enumeration value of the parameter. |Parameter number| Parameter value| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_PARAMETER = 180
};

/// Constant 'VEHICLE_CMD_DO_SET_RELAY'.
/**
  * Set a relay to a condition. |Relay number| Setting (1=on, 0=off, others possible depending on system hardware)| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_RELAY = 181
};

/// Constant 'VEHICLE_CMD_DO_REPEAT_RELAY'.
/**
  * Cycle a relay on and off for a desired number of cycles with a desired period. |Relay number| Cycle count| Cycle time (seconds, decimal)| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_REPEAT_RELAY = 182
};

/// Constant 'VEHICLE_CMD_DO_REPEAT_SERVO'.
/**
  * Cycle a between its nominal setting and a desired PWM for a desired number of cycles with a desired period. |Servo number| PWM (microseconds, 1000 to 2000 typical)| Cycle count| Cycle time (seconds)| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_REPEAT_SERVO = 184
};

/// Constant 'VEHICLE_CMD_DO_FLIGHTTERMINATION'.
/**
  * Terminate flight immediately |Flight termination activated if > 0.5| Empty| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_FLIGHTTERMINATION = 185
};

/// Constant 'VEHICLE_CMD_DO_CHANGE_ALTITUDE'.
/**
  * Set the vehicle to Loiter mode and change the altitude to specified value |Altitude| Frame of new altitude | Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_CHANGE_ALTITUDE = 186
};

/// Constant 'VEHICLE_CMD_DO_SET_ACTUATOR'.
/**
  * Sets actuators (e.g. servos) to a desired value. |Actuator 1| Actuator 2| Actuator 3| Actuator 4| Actuator 5| Actuator 6| Index|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_ACTUATOR = 187
};

/// Constant 'VEHICLE_CMD_DO_LAND_START'.
/**
  * Mission command to perform a landing. This is used as a marker in a mission to tell the autopilot where a sequence of mission items that represents a landing starts. It may also be sent via a COMMAND_LONG to trigger a landing, in which case the nearest (geographically) landing sequence in the mission will be used. The Latitude/Longitude is optional, and may be set to 0/0 if not needed. If specified then it will be used to help find the closest landing sequence. |Empty| Empty| Empty| Empty| Latitude| Longitude| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_LAND_START = 189
};

/// Constant 'VEHICLE_CMD_DO_GO_AROUND'.
/**
  * Mission command to safely abort an autonomous landing. |Altitude (meters)| Empty| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_GO_AROUND = 191
};

/// Constant 'VEHICLE_CMD_DO_REPOSITION'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_REPOSITION = 192
};

/// Constant 'VEHICLE_CMD_DO_PAUSE_CONTINUE'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_PAUSE_CONTINUE = 193
};

/// Constant 'VEHICLE_CMD_DO_SET_ROI_LOCATION'.
/**
  * Sets the region of interest (ROI) to a location. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Empty| Empty| Empty| Empty| Latitude| Longitude| Altitude|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_ROI_LOCATION = 195
};

/// Constant 'VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET'.
/**
  * Sets the region of interest (ROI) to be toward next waypoint, with optional pitch/roll/yaw offset. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Empty| Empty| Empty| Empty| pitch offset from next waypoint| roll offset from next waypoint| yaw offset from next waypoint|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET = 196
};

/// Constant 'VEHICLE_CMD_DO_SET_ROI_NONE'.
/**
  * Cancels any previous ROI command returning the vehicle/sensors to default flight characteristics. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Empty| Empty| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_ROI_NONE = 197
};

/// Constant 'VEHICLE_CMD_DO_CONTROL_VIDEO'.
/**
  * Control onboard camera system. |Camera ID (-1 for all)| Transmission: 0: disabled, 1: enabled compressed, 2: enabled raw| Transmission mode: 0: video stream, >0: single images every n seconds (decimal)| Recording: 0: disabled, 1: enabled compressed, 2: enabled raw| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_CONTROL_VIDEO = 200
};

/// Constant 'VEHICLE_CMD_DO_SET_ROI'.
/**
  * Sets the region of interest (ROI) for a sensor set or the vehicle itself. This can then be used by the vehicles control system to control the vehicle attitude and the attitude of various sensors such as cameras. |Region of interest mode. (see MAV_ROI enum)| MISSION index/ target ID. (see MAV_ROI enum)| ROI index (allows a vehicle to manage multiple ROI's)| Empty| x the location of the fixed ROI (see MAV_FRAME)| y| z|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_ROI = 201
};

/// Constant 'VEHICLE_CMD_DO_DIGICAM_CONTROL'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_DIGICAM_CONTROL = 203
};

/// Constant 'VEHICLE_CMD_DO_MOUNT_CONFIGURE'.
/**
  * Mission command to configure a camera or antenna mount |Mount operation mode (see MAV_MOUNT_MODE enum)| stabilize roll? (1 = yes, 0 = no)| stabilize pitch? (1 = yes, 0 = no)| stabilize yaw? (1 = yes, 0 = no)| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_MOUNT_CONFIGURE = 204
};

/// Constant 'VEHICLE_CMD_DO_MOUNT_CONTROL'.
/**
  * Mission command to control a camera or antenna mount |pitch or lat in degrees, depending on mount mode.| roll or lon in degrees depending on mount mode| yaw or alt (in meters) depending on mount mode| reserved| reserved| reserved| MAV_MOUNT_MODE enum value|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_MOUNT_CONTROL = 205
};

/// Constant 'VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST'.
/**
  * Mission command to set TRIG_DIST for this flight |Camera trigger distance (meters)| Shutter integration time (ms)| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST = 206
};

/// Constant 'VEHICLE_CMD_DO_FENCE_ENABLE'.
/**
  * Mission command to enable the geofence |enable? (0=disable, 1=enable)| Empty| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_FENCE_ENABLE = 207
};

/// Constant 'VEHICLE_CMD_DO_PARACHUTE'.
/**
  * Mission command to trigger a parachute |action (0=disable, 1=enable, 2=release, for some systems see PARACHUTE_ACTION enum, not in general message set.)| Empty| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_PARACHUTE = 208
};

/// Constant 'VEHICLE_CMD_DO_MOTOR_TEST'.
/**
  * motor test command |Instance (1, ...)| throttle type| throttle| timeout| Motor count | Test order| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_MOTOR_TEST = 209
};

/// Constant 'VEHICLE_CMD_DO_INVERTED_FLIGHT'.
/**
  * Change to/from inverted flight |inverted (0=normal, 1=inverted)| Empty| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_INVERTED_FLIGHT = 210
};

/// Constant 'VEHICLE_CMD_DO_GRIPPER'.
/**
  * Command to operate a gripper
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_GRIPPER = 211
};

/// Constant 'VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL'.
/**
  * Mission command to set TRIG_INTERVAL for this flight |Camera trigger distance (meters)| Shutter integration time (ms)| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL = 214
};

/// Constant 'VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT'.
/**
  * Mission command to control a camera or antenna mount, using a quaternion as reference. |q1 - quaternion param #1, w (1 in null-rotation)| q2 - quaternion param #2, x (0 in null-rotation)| q3 - quaternion param #3, y (0 in null-rotation)| q4 - quaternion param #4, z (0 in null-rotation)| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT = 220
};

/// Constant 'VEHICLE_CMD_DO_GUIDED_MASTER'.
/**
  * set id of master controller |System ID| Component ID| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_GUIDED_MASTER = 221
};

/// Constant 'VEHICLE_CMD_DO_GUIDED_LIMITS'.
/**
  * set limits for external control |timeout - maximum time (in seconds) that external controller will be allowed to control vehicle. 0 means no timeout| absolute altitude min (in meters, AMSL) - if vehicle moves below this alt, the command will be aborted and the mission will continue.  0 means no lower altitude limit| absolute altitude max (in meters)- if vehicle moves above this alt, the command will be aborted and the mission will continue.  0 means no upper altitude limit| horizontal move limit (in meters, AMSL) - if vehicle moves more than this distance from it's location at the moment the command was executed, the command will be aborted and the mission will continue. 0 means no horizontal altitude limit| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_GUIDED_LIMITS = 222
};

/// Constant 'VEHICLE_CMD_DO_LAST'.
/**
  * NOP - This command is only used to mark the upper limit of the DO commands in the enumeration |Empty| Empty| Empty| Empty| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_LAST = 240
};

/// Constant 'VEHICLE_CMD_PREFLIGHT_CALIBRATION'.
/**
  * Trigger calibration. This command will be only accepted if in pre-flight mode. See mavlink spec MAV_CMD_PREFLIGHT_CALIBRATION
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PREFLIGHT_CALIBRATION = 241
};

/// Constant 'PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION'.
/**
  * param value for VEHICLE_CMD_PREFLIGHT_CALIBRATION to start temperature calibration
 */
enum
{
  px4_msgs__msg__VehicleCommand__PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION = 3
};

/// Constant 'VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS'.
/**
  * Set sensor offsets. This command will be only accepted if in pre-flight mode. |Sensor to adjust the offsets for: 0: gyros, 1: accelerometer, 2: magnetometer, 3: barometer, 4: optical flow| X axis offset (or generic dimension 1), in the sensor's raw units| Y axis offset (or generic dimension 2), in the sensor's raw units| Z axis offset (or generic dimension 3), in the sensor's raw units| Generic dimension 4, in the sensor's raw units| Generic dimension 5, in the sensor's raw units| Generic dimension 6, in the sensor's raw units|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS = 242
};

/// Constant 'VEHICLE_CMD_PREFLIGHT_UAVCAN'.
/**
  * UAVCAN configuration. If param 1 == 1 actuator mapping and direction assignment should be started
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PREFLIGHT_UAVCAN = 243
};

/// Constant 'VEHICLE_CMD_PREFLIGHT_STORAGE'.
/**
  * Request storage of different parameter values and logs. This command will be only accepted if in pre-flight mode. |Parameter storage: 0: READ FROM FLASH/EEPROM, 1: WRITE CURRENT TO FLASH/EEPROM| Mission storage: 0: READ FROM FLASH/EEPROM, 1: WRITE CURRENT TO FLASH/EEPROM| Reserved| Reserved| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PREFLIGHT_STORAGE = 245
};

/// Constant 'VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN'.
/**
  * Request the reboot or shutdown of system components. |0: Do nothing for autopilot, 1: Reboot autopilot, 2: Shutdown autopilot.| 0: Do nothing for onboard computer, 1: Reboot onboard computer, 2: Shutdown onboard computer.| Reserved| Reserved| Empty| Empty| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN = 246
};

/// Constant 'VEHICLE_CMD_OBLIQUE_SURVEY'.
/**
  * Mission command to set a Camera Auto Mount Pivoting Oblique Survey for this flight|Camera trigger distance (meters)| Shutter integration time (ms)| Camera minimum trigger interval| Number of positions| Roll| Pitch| Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_OBLIQUE_SURVEY = 260
};

/// Constant 'VEHICLE_CMD_DO_SET_STANDARD_MODE'.
/**
  * Enable the specified standard MAVLink mode |MAV_STANDARD_MODE|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_SET_STANDARD_MODE = 262
};

/// Constant 'VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION'.
/**
  * Command to ask information about a low level gimbal
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION = 283
};

/// Constant 'VEHICLE_CMD_MISSION_START'.
/**
  * start running a mission |first_item: the first mission item to run| last_item:  the last mission item to run (after this item is run, the mission ends)|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_MISSION_START = 300
};

/// Constant 'VEHICLE_CMD_ACTUATOR_TEST'.
/**
  * Actuator testing command|value [-1,1]|timeout|Empty|Empty|output function|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_ACTUATOR_TEST = 310
};

/// Constant 'VEHICLE_CMD_CONFIGURE_ACTUATOR'.
/**
  * Actuator configuration command|configuration|Empty|Empty|Empty|output function|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONFIGURE_ACTUATOR = 311
};

/// Constant 'VEHICLE_CMD_COMPONENT_ARM_DISARM'.
/**
  * Arms / Disarms a component |1 to arm, 0 to disarm
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_COMPONENT_ARM_DISARM = 400
};

/// Constant 'VEHICLE_CMD_RUN_PREARM_CHECKS'.
/**
  * Instructs a target system to run pre-arm checks.
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_RUN_PREARM_CHECKS = 401
};

/// Constant 'VEHICLE_CMD_INJECT_FAILURE'.
/**
  * Inject artificial failure for testing purposes
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_INJECT_FAILURE = 420
};

/// Constant 'VEHICLE_CMD_START_RX_PAIR'.
/**
  * Starts receiver pairing |0:Spektrum| 0:Spektrum DSM2, 1:Spektrum DSMX|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_START_RX_PAIR = 500
};

/// Constant 'VEHICLE_CMD_REQUEST_MESSAGE'.
/**
  * Request to send a single instance of the specified message
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_REQUEST_MESSAGE = 512
};

/// Constant 'VEHICLE_CMD_SET_CAMERA_MODE'.
/**
  * Set camera capture mode (photo, video, etc.)
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_SET_CAMERA_MODE = 530
};

/// Constant 'VEHICLE_CMD_SET_CAMERA_ZOOM'.
/**
  * Set camera zoom
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_SET_CAMERA_ZOOM = 531
};

/// Constant 'VEHICLE_CMD_SET_CAMERA_FOCUS'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_SET_CAMERA_FOCUS = 532
};

/// Constant 'VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW'.
/**
  * Setpoint to be sent to a gimbal manager to set a gimbal pitch and yaw
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW = 1000
};

/// Constant 'VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE'.
/**
  * Gimbal configuration to set which sysid/compid is in primary and secondary control
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE = 1001
};

/// Constant 'VEHICLE_CMD_IMAGE_START_CAPTURE'.
/**
  * Start image capture sequence.
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_IMAGE_START_CAPTURE = 2000
};

/// Constant 'VEHICLE_CMD_DO_TRIGGER_CONTROL'.
/**
  * Enable or disable on-board camera triggering system
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_TRIGGER_CONTROL = 2003
};

/// Constant 'VEHICLE_CMD_VIDEO_START_CAPTURE'.
/**
  * Start a video capture.
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_VIDEO_START_CAPTURE = 2500
};

/// Constant 'VEHICLE_CMD_VIDEO_STOP_CAPTURE'.
/**
  * Stop the current video capture.
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_VIDEO_STOP_CAPTURE = 2501
};

/// Constant 'VEHICLE_CMD_LOGGING_START'.
/**
  * start streaming ULog data
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_LOGGING_START = 2510
};

/// Constant 'VEHICLE_CMD_LOGGING_STOP'.
/**
  * stop streaming ULog data
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_LOGGING_STOP = 2511
};

/// Constant 'VEHICLE_CMD_CONTROL_HIGH_LATENCY'.
/**
  * control starting/stopping transmitting data over the high latency link
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_CONTROL_HIGH_LATENCY = 2600
};

/// Constant 'VEHICLE_CMD_DO_VTOL_TRANSITION'.
/**
  * Command VTOL transition
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_VTOL_TRANSITION = 3000
};

/// Constant 'VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST'.
/**
  * Request arm authorization
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST = 3001
};

/// Constant 'VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY'.
/**
  * Prepare a payload deployment in the flight plan
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY = 30001
};

/// Constant 'VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY'.
/**
  * Control a pre-programmed payload deployment
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY = 30002
};

/// Constant 'VEHICLE_CMD_FIXED_MAG_CAL_YAW'.
/**
  * Magnetometer calibration based on provided known yaw. This allows for fast calibration using WMM field tables in the vehicle, given only the known yaw of the vehicle. If Latitude and longitude are both zero then use the current vehicle location.
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_FIXED_MAG_CAL_YAW = 42006
};

/// Constant 'VEHICLE_CMD_DO_WINCH'.
/**
  * Command to operate winch.
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_DO_WINCH = 42600
};

/// Constant 'VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE'.
/**
  * external reset of estimator global position when deadreckoning
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE = 43003
};

/// Constant 'VEHICLE_CMD_PX4_INTERNAL_START'.
/**
  * PX4 vehicle commands (beyond 16 bit mavlink commands)
  * start of PX4 internal only vehicle commands (> UINT16_MAX)
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_PX4_INTERNAL_START = 65537ul
};

/// Constant 'VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN'.
/**
  * Sets the GPS coordinates of the vehicle local origin (0,0,0) position. |Empty|Empty|Empty|Empty|Latitude|Longitude|Altitude|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN = 100000ul
};

/// Constant 'VEHICLE_CMD_SET_NAV_STATE'.
/**
  * Change mode by specifying nav_state directly. |nav_state|Empty|Empty|Empty|Empty|Empty|Empty|
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_CMD_SET_NAV_STATE = 100001ul
};

/// Constant 'VEHICLE_MOUNT_MODE_RETRACT'.
/**
  * Load and keep safe position (Roll,Pitch,Yaw) from permanent memory and stop stabilization |
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_MOUNT_MODE_RETRACT = 0
};

/// Constant 'VEHICLE_MOUNT_MODE_NEUTRAL'.
/**
  * Load and keep neutral position (Roll,Pitch,Yaw) from permanent memory. |
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_MOUNT_MODE_NEUTRAL = 1
};

/// Constant 'VEHICLE_MOUNT_MODE_MAVLINK_TARGETING'.
/**
  * Load neutral position and start MAVLink Roll,Pitch,Yaw control with stabilization |
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_MOUNT_MODE_MAVLINK_TARGETING = 2
};

/// Constant 'VEHICLE_MOUNT_MODE_RC_TARGETING'.
/**
  * Load neutral position and start RC Roll,Pitch,Yaw control with stabilization |
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_MOUNT_MODE_RC_TARGETING = 3
};

/// Constant 'VEHICLE_MOUNT_MODE_GPS_POINT'.
/**
  * Load neutral position and start to point to Lat,Lon,Alt |
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_MOUNT_MODE_GPS_POINT = 4
};

/// Constant 'VEHICLE_MOUNT_MODE_ENUM_END'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_MOUNT_MODE_ENUM_END = 5
};

/// Constant 'VEHICLE_ROI_NONE'.
/**
  * No region of interest |
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_ROI_NONE = 0
};

/// Constant 'VEHICLE_ROI_WPNEXT'.
/**
  * Point toward next MISSION |
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_ROI_WPNEXT = 1
};

/// Constant 'VEHICLE_ROI_WPINDEX'.
/**
  * Point toward given MISSION |
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_ROI_WPINDEX = 2
};

/// Constant 'VEHICLE_ROI_LOCATION'.
/**
  * Point toward fixed location |
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_ROI_LOCATION = 3
};

/// Constant 'VEHICLE_ROI_TARGET'.
/**
  * Point toward target
 */
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_ROI_TARGET = 4
};

/// Constant 'VEHICLE_ROI_ENUM_END'.
enum
{
  px4_msgs__msg__VehicleCommand__VEHICLE_ROI_ENUM_END = 5
};

/// Constant 'PARACHUTE_ACTION_DISABLE'.
enum
{
  px4_msgs__msg__VehicleCommand__PARACHUTE_ACTION_DISABLE = 0
};

/// Constant 'PARACHUTE_ACTION_ENABLE'.
enum
{
  px4_msgs__msg__VehicleCommand__PARACHUTE_ACTION_ENABLE = 1
};

/// Constant 'PARACHUTE_ACTION_RELEASE'.
enum
{
  px4_msgs__msg__VehicleCommand__PARACHUTE_ACTION_RELEASE = 2
};

/// Constant 'FAILURE_UNIT_SENSOR_GYRO'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_GYRO = 0
};

/// Constant 'FAILURE_UNIT_SENSOR_ACCEL'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_ACCEL = 1
};

/// Constant 'FAILURE_UNIT_SENSOR_MAG'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_MAG = 2
};

/// Constant 'FAILURE_UNIT_SENSOR_BARO'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_BARO = 3
};

/// Constant 'FAILURE_UNIT_SENSOR_GPS'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_GPS = 4
};

/// Constant 'FAILURE_UNIT_SENSOR_OPTICAL_FLOW'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_OPTICAL_FLOW = 5
};

/// Constant 'FAILURE_UNIT_SENSOR_VIO'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_VIO = 6
};

/// Constant 'FAILURE_UNIT_SENSOR_DISTANCE_SENSOR'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_DISTANCE_SENSOR = 7
};

/// Constant 'FAILURE_UNIT_SENSOR_AIRSPEED'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SENSOR_AIRSPEED = 8
};

/// Constant 'FAILURE_UNIT_SYSTEM_BATTERY'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SYSTEM_BATTERY = 100
};

/// Constant 'FAILURE_UNIT_SYSTEM_MOTOR'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SYSTEM_MOTOR = 101
};

/// Constant 'FAILURE_UNIT_SYSTEM_SERVO'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SYSTEM_SERVO = 102
};

/// Constant 'FAILURE_UNIT_SYSTEM_AVOIDANCE'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SYSTEM_AVOIDANCE = 103
};

/// Constant 'FAILURE_UNIT_SYSTEM_RC_SIGNAL'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SYSTEM_RC_SIGNAL = 104
};

/// Constant 'FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL = 105
};

/// Constant 'FAILURE_TYPE_OK'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_OK = 0
};

/// Constant 'FAILURE_TYPE_OFF'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_OFF = 1
};

/// Constant 'FAILURE_TYPE_STUCK'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_STUCK = 2
};

/// Constant 'FAILURE_TYPE_GARBAGE'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_GARBAGE = 3
};

/// Constant 'FAILURE_TYPE_WRONG'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_WRONG = 4
};

/// Constant 'FAILURE_TYPE_SLOW'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_SLOW = 5
};

/// Constant 'FAILURE_TYPE_DELAYED'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_DELAYED = 6
};

/// Constant 'FAILURE_TYPE_INTERMITTENT'.
enum
{
  px4_msgs__msg__VehicleCommand__FAILURE_TYPE_INTERMITTENT = 7
};

/// Constant 'SPEED_TYPE_AIRSPEED'.
/**
  * used as param1 in DO_CHANGE_SPEED command
 */
enum
{
  px4_msgs__msg__VehicleCommand__SPEED_TYPE_AIRSPEED = 0
};

/// Constant 'SPEED_TYPE_GROUNDSPEED'.
enum
{
  px4_msgs__msg__VehicleCommand__SPEED_TYPE_GROUNDSPEED = 1
};

/// Constant 'SPEED_TYPE_CLIMB_SPEED'.
enum
{
  px4_msgs__msg__VehicleCommand__SPEED_TYPE_CLIMB_SPEED = 2
};

/// Constant 'SPEED_TYPE_DESCEND_SPEED'.
enum
{
  px4_msgs__msg__VehicleCommand__SPEED_TYPE_DESCEND_SPEED = 3
};

/// Constant 'ARMING_ACTION_DISARM'.
/**
  * used as param1 in ARM_DISARM command
 */
enum
{
  px4_msgs__msg__VehicleCommand__ARMING_ACTION_DISARM = 0
};

/// Constant 'ARMING_ACTION_ARM'.
enum
{
  px4_msgs__msg__VehicleCommand__ARMING_ACTION_ARM = 1
};

/// Constant 'GRIPPER_ACTION_RELEASE'.
/**
  * param2 in VEHICLE_CMD_DO_GRIPPER
 */
enum
{
  px4_msgs__msg__VehicleCommand__GRIPPER_ACTION_RELEASE = 0
};

/// Constant 'GRIPPER_ACTION_GRAB'.
enum
{
  px4_msgs__msg__VehicleCommand__GRIPPER_ACTION_GRAB = 1
};

/// Constant 'ORB_QUEUE_LENGTH'.
enum
{
  px4_msgs__msg__VehicleCommand__ORB_QUEUE_LENGTH = 8
};

/// Constant 'COMPONENT_MODE_EXECUTOR_START'.
enum
{
  px4_msgs__msg__VehicleCommand__COMPONENT_MODE_EXECUTOR_START = 1000
};

/// Struct defined in msg/VehicleCommand in the package px4_msgs.
/**
  * Vehicle Command uORB message. Used for commanding a mission / action / etc.
  * Follows the MAVLink COMMAND_INT / COMMAND_LONG definition
 */
typedef struct px4_msgs__msg__VehicleCommand
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// Parameter 1, as defined by MAVLink uint16 VEHICLE_CMD enum.
  float param1;
  /// Parameter 2, as defined by MAVLink uint16 VEHICLE_CMD enum.
  float param2;
  /// Parameter 3, as defined by MAVLink uint16 VEHICLE_CMD enum.
  float param3;
  /// Parameter 4, as defined by MAVLink uint16 VEHICLE_CMD enum.
  float param4;
  /// Parameter 5, as defined by MAVLink uint16 VEHICLE_CMD enum.
  double param5;
  /// Parameter 6, as defined by MAVLink uint16 VEHICLE_CMD enum.
  double param6;
  /// Parameter 7, as defined by MAVLink uint16 VEHICLE_CMD enum.
  float param7;
  /// Command ID
  uint32_t command;
  /// System which should execute the command
  uint8_t target_system;
  /// Component which should execute the command, 0 for all components
  uint8_t target_component;
  /// System sending the command
  uint8_t source_system;
  /// Component / mode executor sending the command
  uint16_t source_component;
  /// 0: First transmission of this command. 1-255: Confirmation transmissions (e.g. for kill command)
  uint8_t confirmation;
  bool from_external;
} px4_msgs__msg__VehicleCommand;

// Struct for a sequence of px4_msgs__msg__VehicleCommand.
typedef struct px4_msgs__msg__VehicleCommand__Sequence
{
  px4_msgs__msg__VehicleCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_COMMAND__STRUCT_H_
