# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleCommand.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleCommand(type):
    """Metaclass of message 'VehicleCommand'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VEHICLE_CMD_CUSTOM_0': 0,
        'VEHICLE_CMD_CUSTOM_1': 1,
        'VEHICLE_CMD_CUSTOM_2': 2,
        'VEHICLE_CMD_NAV_WAYPOINT': 16,
        'VEHICLE_CMD_NAV_LOITER_UNLIM': 17,
        'VEHICLE_CMD_NAV_LOITER_TURNS': 18,
        'VEHICLE_CMD_NAV_LOITER_TIME': 19,
        'VEHICLE_CMD_NAV_RETURN_TO_LAUNCH': 20,
        'VEHICLE_CMD_NAV_LAND': 21,
        'VEHICLE_CMD_NAV_TAKEOFF': 22,
        'VEHICLE_CMD_NAV_PRECLAND': 23,
        'VEHICLE_CMD_DO_ORBIT': 34,
        'VEHICLE_CMD_DO_FIGUREEIGHT': 35,
        'VEHICLE_CMD_NAV_ROI': 80,
        'VEHICLE_CMD_NAV_PATHPLANNING': 81,
        'VEHICLE_CMD_NAV_VTOL_TAKEOFF': 84,
        'VEHICLE_CMD_NAV_VTOL_LAND': 85,
        'VEHICLE_CMD_NAV_GUIDED_LIMITS': 90,
        'VEHICLE_CMD_NAV_GUIDED_MASTER': 91,
        'VEHICLE_CMD_NAV_DELAY': 93,
        'VEHICLE_CMD_NAV_LAST': 95,
        'VEHICLE_CMD_CONDITION_DELAY': 112,
        'VEHICLE_CMD_CONDITION_CHANGE_ALT': 113,
        'VEHICLE_CMD_CONDITION_DISTANCE': 114,
        'VEHICLE_CMD_CONDITION_YAW': 115,
        'VEHICLE_CMD_CONDITION_LAST': 159,
        'VEHICLE_CMD_CONDITION_GATE': 4501,
        'VEHICLE_CMD_DO_SET_MODE': 176,
        'VEHICLE_CMD_DO_JUMP': 177,
        'VEHICLE_CMD_DO_CHANGE_SPEED': 178,
        'VEHICLE_CMD_DO_SET_HOME': 179,
        'VEHICLE_CMD_DO_SET_PARAMETER': 180,
        'VEHICLE_CMD_DO_SET_RELAY': 181,
        'VEHICLE_CMD_DO_REPEAT_RELAY': 182,
        'VEHICLE_CMD_DO_REPEAT_SERVO': 184,
        'VEHICLE_CMD_DO_FLIGHTTERMINATION': 185,
        'VEHICLE_CMD_DO_CHANGE_ALTITUDE': 186,
        'VEHICLE_CMD_DO_SET_ACTUATOR': 187,
        'VEHICLE_CMD_DO_LAND_START': 189,
        'VEHICLE_CMD_DO_GO_AROUND': 191,
        'VEHICLE_CMD_DO_REPOSITION': 192,
        'VEHICLE_CMD_DO_PAUSE_CONTINUE': 193,
        'VEHICLE_CMD_DO_SET_ROI_LOCATION': 195,
        'VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET': 196,
        'VEHICLE_CMD_DO_SET_ROI_NONE': 197,
        'VEHICLE_CMD_DO_CONTROL_VIDEO': 200,
        'VEHICLE_CMD_DO_SET_ROI': 201,
        'VEHICLE_CMD_DO_DIGICAM_CONTROL': 203,
        'VEHICLE_CMD_DO_MOUNT_CONFIGURE': 204,
        'VEHICLE_CMD_DO_MOUNT_CONTROL': 205,
        'VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST': 206,
        'VEHICLE_CMD_DO_FENCE_ENABLE': 207,
        'VEHICLE_CMD_DO_PARACHUTE': 208,
        'VEHICLE_CMD_DO_MOTOR_TEST': 209,
        'VEHICLE_CMD_DO_INVERTED_FLIGHT': 210,
        'VEHICLE_CMD_DO_GRIPPER': 211,
        'VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL': 214,
        'VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT': 220,
        'VEHICLE_CMD_DO_GUIDED_MASTER': 221,
        'VEHICLE_CMD_DO_GUIDED_LIMITS': 222,
        'VEHICLE_CMD_DO_LAST': 240,
        'VEHICLE_CMD_PREFLIGHT_CALIBRATION': 241,
        'PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION': 3,
        'VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS': 242,
        'VEHICLE_CMD_PREFLIGHT_UAVCAN': 243,
        'VEHICLE_CMD_PREFLIGHT_STORAGE': 245,
        'VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN': 246,
        'VEHICLE_CMD_OBLIQUE_SURVEY': 260,
        'VEHICLE_CMD_DO_SET_STANDARD_MODE': 262,
        'VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION': 283,
        'VEHICLE_CMD_MISSION_START': 300,
        'VEHICLE_CMD_ACTUATOR_TEST': 310,
        'VEHICLE_CMD_CONFIGURE_ACTUATOR': 311,
        'VEHICLE_CMD_COMPONENT_ARM_DISARM': 400,
        'VEHICLE_CMD_RUN_PREARM_CHECKS': 401,
        'VEHICLE_CMD_INJECT_FAILURE': 420,
        'VEHICLE_CMD_START_RX_PAIR': 500,
        'VEHICLE_CMD_REQUEST_MESSAGE': 512,
        'VEHICLE_CMD_SET_CAMERA_MODE': 530,
        'VEHICLE_CMD_SET_CAMERA_ZOOM': 531,
        'VEHICLE_CMD_SET_CAMERA_FOCUS': 532,
        'VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW': 1000,
        'VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE': 1001,
        'VEHICLE_CMD_IMAGE_START_CAPTURE': 2000,
        'VEHICLE_CMD_DO_TRIGGER_CONTROL': 2003,
        'VEHICLE_CMD_VIDEO_START_CAPTURE': 2500,
        'VEHICLE_CMD_VIDEO_STOP_CAPTURE': 2501,
        'VEHICLE_CMD_LOGGING_START': 2510,
        'VEHICLE_CMD_LOGGING_STOP': 2511,
        'VEHICLE_CMD_CONTROL_HIGH_LATENCY': 2600,
        'VEHICLE_CMD_DO_VTOL_TRANSITION': 3000,
        'VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST': 3001,
        'VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY': 30001,
        'VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY': 30002,
        'VEHICLE_CMD_FIXED_MAG_CAL_YAW': 42006,
        'VEHICLE_CMD_DO_WINCH': 42600,
        'VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE': 43003,
        'VEHICLE_CMD_PX4_INTERNAL_START': 65537,
        'VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN': 100000,
        'VEHICLE_CMD_SET_NAV_STATE': 100001,
        'VEHICLE_MOUNT_MODE_RETRACT': 0,
        'VEHICLE_MOUNT_MODE_NEUTRAL': 1,
        'VEHICLE_MOUNT_MODE_MAVLINK_TARGETING': 2,
        'VEHICLE_MOUNT_MODE_RC_TARGETING': 3,
        'VEHICLE_MOUNT_MODE_GPS_POINT': 4,
        'VEHICLE_MOUNT_MODE_ENUM_END': 5,
        'VEHICLE_ROI_NONE': 0,
        'VEHICLE_ROI_WPNEXT': 1,
        'VEHICLE_ROI_WPINDEX': 2,
        'VEHICLE_ROI_LOCATION': 3,
        'VEHICLE_ROI_TARGET': 4,
        'VEHICLE_ROI_ENUM_END': 5,
        'PARACHUTE_ACTION_DISABLE': 0,
        'PARACHUTE_ACTION_ENABLE': 1,
        'PARACHUTE_ACTION_RELEASE': 2,
        'FAILURE_UNIT_SENSOR_GYRO': 0,
        'FAILURE_UNIT_SENSOR_ACCEL': 1,
        'FAILURE_UNIT_SENSOR_MAG': 2,
        'FAILURE_UNIT_SENSOR_BARO': 3,
        'FAILURE_UNIT_SENSOR_GPS': 4,
        'FAILURE_UNIT_SENSOR_OPTICAL_FLOW': 5,
        'FAILURE_UNIT_SENSOR_VIO': 6,
        'FAILURE_UNIT_SENSOR_DISTANCE_SENSOR': 7,
        'FAILURE_UNIT_SENSOR_AIRSPEED': 8,
        'FAILURE_UNIT_SYSTEM_BATTERY': 100,
        'FAILURE_UNIT_SYSTEM_MOTOR': 101,
        'FAILURE_UNIT_SYSTEM_SERVO': 102,
        'FAILURE_UNIT_SYSTEM_AVOIDANCE': 103,
        'FAILURE_UNIT_SYSTEM_RC_SIGNAL': 104,
        'FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL': 105,
        'FAILURE_TYPE_OK': 0,
        'FAILURE_TYPE_OFF': 1,
        'FAILURE_TYPE_STUCK': 2,
        'FAILURE_TYPE_GARBAGE': 3,
        'FAILURE_TYPE_WRONG': 4,
        'FAILURE_TYPE_SLOW': 5,
        'FAILURE_TYPE_DELAYED': 6,
        'FAILURE_TYPE_INTERMITTENT': 7,
        'SPEED_TYPE_AIRSPEED': 0,
        'SPEED_TYPE_GROUNDSPEED': 1,
        'SPEED_TYPE_CLIMB_SPEED': 2,
        'SPEED_TYPE_DESCEND_SPEED': 3,
        'ARMING_ACTION_DISARM': 0,
        'ARMING_ACTION_ARM': 1,
        'GRIPPER_ACTION_RELEASE': 0,
        'GRIPPER_ACTION_GRAB': 1,
        'ORB_QUEUE_LENGTH': 8,
        'COMPONENT_MODE_EXECUTOR_START': 1000,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('px4_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'px4_msgs.msg.VehicleCommand')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_command
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_command
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_command
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_command
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_command

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VEHICLE_CMD_CUSTOM_0': cls.__constants['VEHICLE_CMD_CUSTOM_0'],
            'VEHICLE_CMD_CUSTOM_1': cls.__constants['VEHICLE_CMD_CUSTOM_1'],
            'VEHICLE_CMD_CUSTOM_2': cls.__constants['VEHICLE_CMD_CUSTOM_2'],
            'VEHICLE_CMD_NAV_WAYPOINT': cls.__constants['VEHICLE_CMD_NAV_WAYPOINT'],
            'VEHICLE_CMD_NAV_LOITER_UNLIM': cls.__constants['VEHICLE_CMD_NAV_LOITER_UNLIM'],
            'VEHICLE_CMD_NAV_LOITER_TURNS': cls.__constants['VEHICLE_CMD_NAV_LOITER_TURNS'],
            'VEHICLE_CMD_NAV_LOITER_TIME': cls.__constants['VEHICLE_CMD_NAV_LOITER_TIME'],
            'VEHICLE_CMD_NAV_RETURN_TO_LAUNCH': cls.__constants['VEHICLE_CMD_NAV_RETURN_TO_LAUNCH'],
            'VEHICLE_CMD_NAV_LAND': cls.__constants['VEHICLE_CMD_NAV_LAND'],
            'VEHICLE_CMD_NAV_TAKEOFF': cls.__constants['VEHICLE_CMD_NAV_TAKEOFF'],
            'VEHICLE_CMD_NAV_PRECLAND': cls.__constants['VEHICLE_CMD_NAV_PRECLAND'],
            'VEHICLE_CMD_DO_ORBIT': cls.__constants['VEHICLE_CMD_DO_ORBIT'],
            'VEHICLE_CMD_DO_FIGUREEIGHT': cls.__constants['VEHICLE_CMD_DO_FIGUREEIGHT'],
            'VEHICLE_CMD_NAV_ROI': cls.__constants['VEHICLE_CMD_NAV_ROI'],
            'VEHICLE_CMD_NAV_PATHPLANNING': cls.__constants['VEHICLE_CMD_NAV_PATHPLANNING'],
            'VEHICLE_CMD_NAV_VTOL_TAKEOFF': cls.__constants['VEHICLE_CMD_NAV_VTOL_TAKEOFF'],
            'VEHICLE_CMD_NAV_VTOL_LAND': cls.__constants['VEHICLE_CMD_NAV_VTOL_LAND'],
            'VEHICLE_CMD_NAV_GUIDED_LIMITS': cls.__constants['VEHICLE_CMD_NAV_GUIDED_LIMITS'],
            'VEHICLE_CMD_NAV_GUIDED_MASTER': cls.__constants['VEHICLE_CMD_NAV_GUIDED_MASTER'],
            'VEHICLE_CMD_NAV_DELAY': cls.__constants['VEHICLE_CMD_NAV_DELAY'],
            'VEHICLE_CMD_NAV_LAST': cls.__constants['VEHICLE_CMD_NAV_LAST'],
            'VEHICLE_CMD_CONDITION_DELAY': cls.__constants['VEHICLE_CMD_CONDITION_DELAY'],
            'VEHICLE_CMD_CONDITION_CHANGE_ALT': cls.__constants['VEHICLE_CMD_CONDITION_CHANGE_ALT'],
            'VEHICLE_CMD_CONDITION_DISTANCE': cls.__constants['VEHICLE_CMD_CONDITION_DISTANCE'],
            'VEHICLE_CMD_CONDITION_YAW': cls.__constants['VEHICLE_CMD_CONDITION_YAW'],
            'VEHICLE_CMD_CONDITION_LAST': cls.__constants['VEHICLE_CMD_CONDITION_LAST'],
            'VEHICLE_CMD_CONDITION_GATE': cls.__constants['VEHICLE_CMD_CONDITION_GATE'],
            'VEHICLE_CMD_DO_SET_MODE': cls.__constants['VEHICLE_CMD_DO_SET_MODE'],
            'VEHICLE_CMD_DO_JUMP': cls.__constants['VEHICLE_CMD_DO_JUMP'],
            'VEHICLE_CMD_DO_CHANGE_SPEED': cls.__constants['VEHICLE_CMD_DO_CHANGE_SPEED'],
            'VEHICLE_CMD_DO_SET_HOME': cls.__constants['VEHICLE_CMD_DO_SET_HOME'],
            'VEHICLE_CMD_DO_SET_PARAMETER': cls.__constants['VEHICLE_CMD_DO_SET_PARAMETER'],
            'VEHICLE_CMD_DO_SET_RELAY': cls.__constants['VEHICLE_CMD_DO_SET_RELAY'],
            'VEHICLE_CMD_DO_REPEAT_RELAY': cls.__constants['VEHICLE_CMD_DO_REPEAT_RELAY'],
            'VEHICLE_CMD_DO_REPEAT_SERVO': cls.__constants['VEHICLE_CMD_DO_REPEAT_SERVO'],
            'VEHICLE_CMD_DO_FLIGHTTERMINATION': cls.__constants['VEHICLE_CMD_DO_FLIGHTTERMINATION'],
            'VEHICLE_CMD_DO_CHANGE_ALTITUDE': cls.__constants['VEHICLE_CMD_DO_CHANGE_ALTITUDE'],
            'VEHICLE_CMD_DO_SET_ACTUATOR': cls.__constants['VEHICLE_CMD_DO_SET_ACTUATOR'],
            'VEHICLE_CMD_DO_LAND_START': cls.__constants['VEHICLE_CMD_DO_LAND_START'],
            'VEHICLE_CMD_DO_GO_AROUND': cls.__constants['VEHICLE_CMD_DO_GO_AROUND'],
            'VEHICLE_CMD_DO_REPOSITION': cls.__constants['VEHICLE_CMD_DO_REPOSITION'],
            'VEHICLE_CMD_DO_PAUSE_CONTINUE': cls.__constants['VEHICLE_CMD_DO_PAUSE_CONTINUE'],
            'VEHICLE_CMD_DO_SET_ROI_LOCATION': cls.__constants['VEHICLE_CMD_DO_SET_ROI_LOCATION'],
            'VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET': cls.__constants['VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET'],
            'VEHICLE_CMD_DO_SET_ROI_NONE': cls.__constants['VEHICLE_CMD_DO_SET_ROI_NONE'],
            'VEHICLE_CMD_DO_CONTROL_VIDEO': cls.__constants['VEHICLE_CMD_DO_CONTROL_VIDEO'],
            'VEHICLE_CMD_DO_SET_ROI': cls.__constants['VEHICLE_CMD_DO_SET_ROI'],
            'VEHICLE_CMD_DO_DIGICAM_CONTROL': cls.__constants['VEHICLE_CMD_DO_DIGICAM_CONTROL'],
            'VEHICLE_CMD_DO_MOUNT_CONFIGURE': cls.__constants['VEHICLE_CMD_DO_MOUNT_CONFIGURE'],
            'VEHICLE_CMD_DO_MOUNT_CONTROL': cls.__constants['VEHICLE_CMD_DO_MOUNT_CONTROL'],
            'VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST': cls.__constants['VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST'],
            'VEHICLE_CMD_DO_FENCE_ENABLE': cls.__constants['VEHICLE_CMD_DO_FENCE_ENABLE'],
            'VEHICLE_CMD_DO_PARACHUTE': cls.__constants['VEHICLE_CMD_DO_PARACHUTE'],
            'VEHICLE_CMD_DO_MOTOR_TEST': cls.__constants['VEHICLE_CMD_DO_MOTOR_TEST'],
            'VEHICLE_CMD_DO_INVERTED_FLIGHT': cls.__constants['VEHICLE_CMD_DO_INVERTED_FLIGHT'],
            'VEHICLE_CMD_DO_GRIPPER': cls.__constants['VEHICLE_CMD_DO_GRIPPER'],
            'VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL': cls.__constants['VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL'],
            'VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT': cls.__constants['VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT'],
            'VEHICLE_CMD_DO_GUIDED_MASTER': cls.__constants['VEHICLE_CMD_DO_GUIDED_MASTER'],
            'VEHICLE_CMD_DO_GUIDED_LIMITS': cls.__constants['VEHICLE_CMD_DO_GUIDED_LIMITS'],
            'VEHICLE_CMD_DO_LAST': cls.__constants['VEHICLE_CMD_DO_LAST'],
            'VEHICLE_CMD_PREFLIGHT_CALIBRATION': cls.__constants['VEHICLE_CMD_PREFLIGHT_CALIBRATION'],
            'PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION': cls.__constants['PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION'],
            'VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS': cls.__constants['VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS'],
            'VEHICLE_CMD_PREFLIGHT_UAVCAN': cls.__constants['VEHICLE_CMD_PREFLIGHT_UAVCAN'],
            'VEHICLE_CMD_PREFLIGHT_STORAGE': cls.__constants['VEHICLE_CMD_PREFLIGHT_STORAGE'],
            'VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN': cls.__constants['VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN'],
            'VEHICLE_CMD_OBLIQUE_SURVEY': cls.__constants['VEHICLE_CMD_OBLIQUE_SURVEY'],
            'VEHICLE_CMD_DO_SET_STANDARD_MODE': cls.__constants['VEHICLE_CMD_DO_SET_STANDARD_MODE'],
            'VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION': cls.__constants['VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION'],
            'VEHICLE_CMD_MISSION_START': cls.__constants['VEHICLE_CMD_MISSION_START'],
            'VEHICLE_CMD_ACTUATOR_TEST': cls.__constants['VEHICLE_CMD_ACTUATOR_TEST'],
            'VEHICLE_CMD_CONFIGURE_ACTUATOR': cls.__constants['VEHICLE_CMD_CONFIGURE_ACTUATOR'],
            'VEHICLE_CMD_COMPONENT_ARM_DISARM': cls.__constants['VEHICLE_CMD_COMPONENT_ARM_DISARM'],
            'VEHICLE_CMD_RUN_PREARM_CHECKS': cls.__constants['VEHICLE_CMD_RUN_PREARM_CHECKS'],
            'VEHICLE_CMD_INJECT_FAILURE': cls.__constants['VEHICLE_CMD_INJECT_FAILURE'],
            'VEHICLE_CMD_START_RX_PAIR': cls.__constants['VEHICLE_CMD_START_RX_PAIR'],
            'VEHICLE_CMD_REQUEST_MESSAGE': cls.__constants['VEHICLE_CMD_REQUEST_MESSAGE'],
            'VEHICLE_CMD_SET_CAMERA_MODE': cls.__constants['VEHICLE_CMD_SET_CAMERA_MODE'],
            'VEHICLE_CMD_SET_CAMERA_ZOOM': cls.__constants['VEHICLE_CMD_SET_CAMERA_ZOOM'],
            'VEHICLE_CMD_SET_CAMERA_FOCUS': cls.__constants['VEHICLE_CMD_SET_CAMERA_FOCUS'],
            'VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW': cls.__constants['VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW'],
            'VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE': cls.__constants['VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE'],
            'VEHICLE_CMD_IMAGE_START_CAPTURE': cls.__constants['VEHICLE_CMD_IMAGE_START_CAPTURE'],
            'VEHICLE_CMD_DO_TRIGGER_CONTROL': cls.__constants['VEHICLE_CMD_DO_TRIGGER_CONTROL'],
            'VEHICLE_CMD_VIDEO_START_CAPTURE': cls.__constants['VEHICLE_CMD_VIDEO_START_CAPTURE'],
            'VEHICLE_CMD_VIDEO_STOP_CAPTURE': cls.__constants['VEHICLE_CMD_VIDEO_STOP_CAPTURE'],
            'VEHICLE_CMD_LOGGING_START': cls.__constants['VEHICLE_CMD_LOGGING_START'],
            'VEHICLE_CMD_LOGGING_STOP': cls.__constants['VEHICLE_CMD_LOGGING_STOP'],
            'VEHICLE_CMD_CONTROL_HIGH_LATENCY': cls.__constants['VEHICLE_CMD_CONTROL_HIGH_LATENCY'],
            'VEHICLE_CMD_DO_VTOL_TRANSITION': cls.__constants['VEHICLE_CMD_DO_VTOL_TRANSITION'],
            'VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST': cls.__constants['VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST'],
            'VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY': cls.__constants['VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY'],
            'VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY': cls.__constants['VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY'],
            'VEHICLE_CMD_FIXED_MAG_CAL_YAW': cls.__constants['VEHICLE_CMD_FIXED_MAG_CAL_YAW'],
            'VEHICLE_CMD_DO_WINCH': cls.__constants['VEHICLE_CMD_DO_WINCH'],
            'VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE': cls.__constants['VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE'],
            'VEHICLE_CMD_PX4_INTERNAL_START': cls.__constants['VEHICLE_CMD_PX4_INTERNAL_START'],
            'VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN': cls.__constants['VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN'],
            'VEHICLE_CMD_SET_NAV_STATE': cls.__constants['VEHICLE_CMD_SET_NAV_STATE'],
            'VEHICLE_MOUNT_MODE_RETRACT': cls.__constants['VEHICLE_MOUNT_MODE_RETRACT'],
            'VEHICLE_MOUNT_MODE_NEUTRAL': cls.__constants['VEHICLE_MOUNT_MODE_NEUTRAL'],
            'VEHICLE_MOUNT_MODE_MAVLINK_TARGETING': cls.__constants['VEHICLE_MOUNT_MODE_MAVLINK_TARGETING'],
            'VEHICLE_MOUNT_MODE_RC_TARGETING': cls.__constants['VEHICLE_MOUNT_MODE_RC_TARGETING'],
            'VEHICLE_MOUNT_MODE_GPS_POINT': cls.__constants['VEHICLE_MOUNT_MODE_GPS_POINT'],
            'VEHICLE_MOUNT_MODE_ENUM_END': cls.__constants['VEHICLE_MOUNT_MODE_ENUM_END'],
            'VEHICLE_ROI_NONE': cls.__constants['VEHICLE_ROI_NONE'],
            'VEHICLE_ROI_WPNEXT': cls.__constants['VEHICLE_ROI_WPNEXT'],
            'VEHICLE_ROI_WPINDEX': cls.__constants['VEHICLE_ROI_WPINDEX'],
            'VEHICLE_ROI_LOCATION': cls.__constants['VEHICLE_ROI_LOCATION'],
            'VEHICLE_ROI_TARGET': cls.__constants['VEHICLE_ROI_TARGET'],
            'VEHICLE_ROI_ENUM_END': cls.__constants['VEHICLE_ROI_ENUM_END'],
            'PARACHUTE_ACTION_DISABLE': cls.__constants['PARACHUTE_ACTION_DISABLE'],
            'PARACHUTE_ACTION_ENABLE': cls.__constants['PARACHUTE_ACTION_ENABLE'],
            'PARACHUTE_ACTION_RELEASE': cls.__constants['PARACHUTE_ACTION_RELEASE'],
            'FAILURE_UNIT_SENSOR_GYRO': cls.__constants['FAILURE_UNIT_SENSOR_GYRO'],
            'FAILURE_UNIT_SENSOR_ACCEL': cls.__constants['FAILURE_UNIT_SENSOR_ACCEL'],
            'FAILURE_UNIT_SENSOR_MAG': cls.__constants['FAILURE_UNIT_SENSOR_MAG'],
            'FAILURE_UNIT_SENSOR_BARO': cls.__constants['FAILURE_UNIT_SENSOR_BARO'],
            'FAILURE_UNIT_SENSOR_GPS': cls.__constants['FAILURE_UNIT_SENSOR_GPS'],
            'FAILURE_UNIT_SENSOR_OPTICAL_FLOW': cls.__constants['FAILURE_UNIT_SENSOR_OPTICAL_FLOW'],
            'FAILURE_UNIT_SENSOR_VIO': cls.__constants['FAILURE_UNIT_SENSOR_VIO'],
            'FAILURE_UNIT_SENSOR_DISTANCE_SENSOR': cls.__constants['FAILURE_UNIT_SENSOR_DISTANCE_SENSOR'],
            'FAILURE_UNIT_SENSOR_AIRSPEED': cls.__constants['FAILURE_UNIT_SENSOR_AIRSPEED'],
            'FAILURE_UNIT_SYSTEM_BATTERY': cls.__constants['FAILURE_UNIT_SYSTEM_BATTERY'],
            'FAILURE_UNIT_SYSTEM_MOTOR': cls.__constants['FAILURE_UNIT_SYSTEM_MOTOR'],
            'FAILURE_UNIT_SYSTEM_SERVO': cls.__constants['FAILURE_UNIT_SYSTEM_SERVO'],
            'FAILURE_UNIT_SYSTEM_AVOIDANCE': cls.__constants['FAILURE_UNIT_SYSTEM_AVOIDANCE'],
            'FAILURE_UNIT_SYSTEM_RC_SIGNAL': cls.__constants['FAILURE_UNIT_SYSTEM_RC_SIGNAL'],
            'FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL': cls.__constants['FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL'],
            'FAILURE_TYPE_OK': cls.__constants['FAILURE_TYPE_OK'],
            'FAILURE_TYPE_OFF': cls.__constants['FAILURE_TYPE_OFF'],
            'FAILURE_TYPE_STUCK': cls.__constants['FAILURE_TYPE_STUCK'],
            'FAILURE_TYPE_GARBAGE': cls.__constants['FAILURE_TYPE_GARBAGE'],
            'FAILURE_TYPE_WRONG': cls.__constants['FAILURE_TYPE_WRONG'],
            'FAILURE_TYPE_SLOW': cls.__constants['FAILURE_TYPE_SLOW'],
            'FAILURE_TYPE_DELAYED': cls.__constants['FAILURE_TYPE_DELAYED'],
            'FAILURE_TYPE_INTERMITTENT': cls.__constants['FAILURE_TYPE_INTERMITTENT'],
            'SPEED_TYPE_AIRSPEED': cls.__constants['SPEED_TYPE_AIRSPEED'],
            'SPEED_TYPE_GROUNDSPEED': cls.__constants['SPEED_TYPE_GROUNDSPEED'],
            'SPEED_TYPE_CLIMB_SPEED': cls.__constants['SPEED_TYPE_CLIMB_SPEED'],
            'SPEED_TYPE_DESCEND_SPEED': cls.__constants['SPEED_TYPE_DESCEND_SPEED'],
            'ARMING_ACTION_DISARM': cls.__constants['ARMING_ACTION_DISARM'],
            'ARMING_ACTION_ARM': cls.__constants['ARMING_ACTION_ARM'],
            'GRIPPER_ACTION_RELEASE': cls.__constants['GRIPPER_ACTION_RELEASE'],
            'GRIPPER_ACTION_GRAB': cls.__constants['GRIPPER_ACTION_GRAB'],
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
            'COMPONENT_MODE_EXECUTOR_START': cls.__constants['COMPONENT_MODE_EXECUTOR_START'],
        }

    @property
    def VEHICLE_CMD_CUSTOM_0(self):
        """Message constant 'VEHICLE_CMD_CUSTOM_0'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_CUSTOM_0']

    @property
    def VEHICLE_CMD_CUSTOM_1(self):
        """Message constant 'VEHICLE_CMD_CUSTOM_1'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_CUSTOM_1']

    @property
    def VEHICLE_CMD_CUSTOM_2(self):
        """Message constant 'VEHICLE_CMD_CUSTOM_2'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_CUSTOM_2']

    @property
    def VEHICLE_CMD_NAV_WAYPOINT(self):
        """Message constant 'VEHICLE_CMD_NAV_WAYPOINT'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_WAYPOINT']

    @property
    def VEHICLE_CMD_NAV_LOITER_UNLIM(self):
        """Message constant 'VEHICLE_CMD_NAV_LOITER_UNLIM'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_LOITER_UNLIM']

    @property
    def VEHICLE_CMD_NAV_LOITER_TURNS(self):
        """Message constant 'VEHICLE_CMD_NAV_LOITER_TURNS'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_LOITER_TURNS']

    @property
    def VEHICLE_CMD_NAV_LOITER_TIME(self):
        """Message constant 'VEHICLE_CMD_NAV_LOITER_TIME'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_LOITER_TIME']

    @property
    def VEHICLE_CMD_NAV_RETURN_TO_LAUNCH(self):
        """Message constant 'VEHICLE_CMD_NAV_RETURN_TO_LAUNCH'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_RETURN_TO_LAUNCH']

    @property
    def VEHICLE_CMD_NAV_LAND(self):
        """Message constant 'VEHICLE_CMD_NAV_LAND'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_LAND']

    @property
    def VEHICLE_CMD_NAV_TAKEOFF(self):
        """Message constant 'VEHICLE_CMD_NAV_TAKEOFF'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_TAKEOFF']

    @property
    def VEHICLE_CMD_NAV_PRECLAND(self):
        """Message constant 'VEHICLE_CMD_NAV_PRECLAND'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_PRECLAND']

    @property
    def VEHICLE_CMD_DO_ORBIT(self):
        """Message constant 'VEHICLE_CMD_DO_ORBIT'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_ORBIT']

    @property
    def VEHICLE_CMD_DO_FIGUREEIGHT(self):
        """Message constant 'VEHICLE_CMD_DO_FIGUREEIGHT'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_FIGUREEIGHT']

    @property
    def VEHICLE_CMD_NAV_ROI(self):
        """Message constant 'VEHICLE_CMD_NAV_ROI'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_ROI']

    @property
    def VEHICLE_CMD_NAV_PATHPLANNING(self):
        """Message constant 'VEHICLE_CMD_NAV_PATHPLANNING'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_PATHPLANNING']

    @property
    def VEHICLE_CMD_NAV_VTOL_TAKEOFF(self):
        """Message constant 'VEHICLE_CMD_NAV_VTOL_TAKEOFF'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_VTOL_TAKEOFF']

    @property
    def VEHICLE_CMD_NAV_VTOL_LAND(self):
        """Message constant 'VEHICLE_CMD_NAV_VTOL_LAND'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_VTOL_LAND']

    @property
    def VEHICLE_CMD_NAV_GUIDED_LIMITS(self):
        """Message constant 'VEHICLE_CMD_NAV_GUIDED_LIMITS'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_GUIDED_LIMITS']

    @property
    def VEHICLE_CMD_NAV_GUIDED_MASTER(self):
        """Message constant 'VEHICLE_CMD_NAV_GUIDED_MASTER'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_GUIDED_MASTER']

    @property
    def VEHICLE_CMD_NAV_DELAY(self):
        """Message constant 'VEHICLE_CMD_NAV_DELAY'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_DELAY']

    @property
    def VEHICLE_CMD_NAV_LAST(self):
        """Message constant 'VEHICLE_CMD_NAV_LAST'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_NAV_LAST']

    @property
    def VEHICLE_CMD_CONDITION_DELAY(self):
        """Message constant 'VEHICLE_CMD_CONDITION_DELAY'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_CONDITION_DELAY']

    @property
    def VEHICLE_CMD_CONDITION_CHANGE_ALT(self):
        """Message constant 'VEHICLE_CMD_CONDITION_CHANGE_ALT'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_CONDITION_CHANGE_ALT']

    @property
    def VEHICLE_CMD_CONDITION_DISTANCE(self):
        """Message constant 'VEHICLE_CMD_CONDITION_DISTANCE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_CONDITION_DISTANCE']

    @property
    def VEHICLE_CMD_CONDITION_YAW(self):
        """Message constant 'VEHICLE_CMD_CONDITION_YAW'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_CONDITION_YAW']

    @property
    def VEHICLE_CMD_CONDITION_LAST(self):
        """Message constant 'VEHICLE_CMD_CONDITION_LAST'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_CONDITION_LAST']

    @property
    def VEHICLE_CMD_CONDITION_GATE(self):
        """Message constant 'VEHICLE_CMD_CONDITION_GATE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_CONDITION_GATE']

    @property
    def VEHICLE_CMD_DO_SET_MODE(self):
        """Message constant 'VEHICLE_CMD_DO_SET_MODE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_SET_MODE']

    @property
    def VEHICLE_CMD_DO_JUMP(self):
        """Message constant 'VEHICLE_CMD_DO_JUMP'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_JUMP']

    @property
    def VEHICLE_CMD_DO_CHANGE_SPEED(self):
        """Message constant 'VEHICLE_CMD_DO_CHANGE_SPEED'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_CHANGE_SPEED']

    @property
    def VEHICLE_CMD_DO_SET_HOME(self):
        """Message constant 'VEHICLE_CMD_DO_SET_HOME'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_SET_HOME']

    @property
    def VEHICLE_CMD_DO_SET_PARAMETER(self):
        """Message constant 'VEHICLE_CMD_DO_SET_PARAMETER'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_SET_PARAMETER']

    @property
    def VEHICLE_CMD_DO_SET_RELAY(self):
        """Message constant 'VEHICLE_CMD_DO_SET_RELAY'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_SET_RELAY']

    @property
    def VEHICLE_CMD_DO_REPEAT_RELAY(self):
        """Message constant 'VEHICLE_CMD_DO_REPEAT_RELAY'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_REPEAT_RELAY']

    @property
    def VEHICLE_CMD_DO_REPEAT_SERVO(self):
        """Message constant 'VEHICLE_CMD_DO_REPEAT_SERVO'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_REPEAT_SERVO']

    @property
    def VEHICLE_CMD_DO_FLIGHTTERMINATION(self):
        """Message constant 'VEHICLE_CMD_DO_FLIGHTTERMINATION'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_FLIGHTTERMINATION']

    @property
    def VEHICLE_CMD_DO_CHANGE_ALTITUDE(self):
        """Message constant 'VEHICLE_CMD_DO_CHANGE_ALTITUDE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_CHANGE_ALTITUDE']

    @property
    def VEHICLE_CMD_DO_SET_ACTUATOR(self):
        """Message constant 'VEHICLE_CMD_DO_SET_ACTUATOR'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_SET_ACTUATOR']

    @property
    def VEHICLE_CMD_DO_LAND_START(self):
        """Message constant 'VEHICLE_CMD_DO_LAND_START'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_LAND_START']

    @property
    def VEHICLE_CMD_DO_GO_AROUND(self):
        """Message constant 'VEHICLE_CMD_DO_GO_AROUND'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_GO_AROUND']

    @property
    def VEHICLE_CMD_DO_REPOSITION(self):
        """Message constant 'VEHICLE_CMD_DO_REPOSITION'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_REPOSITION']

    @property
    def VEHICLE_CMD_DO_PAUSE_CONTINUE(self):
        """Message constant 'VEHICLE_CMD_DO_PAUSE_CONTINUE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_PAUSE_CONTINUE']

    @property
    def VEHICLE_CMD_DO_SET_ROI_LOCATION(self):
        """Message constant 'VEHICLE_CMD_DO_SET_ROI_LOCATION'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_SET_ROI_LOCATION']

    @property
    def VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET(self):
        """Message constant 'VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET']

    @property
    def VEHICLE_CMD_DO_SET_ROI_NONE(self):
        """Message constant 'VEHICLE_CMD_DO_SET_ROI_NONE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_SET_ROI_NONE']

    @property
    def VEHICLE_CMD_DO_CONTROL_VIDEO(self):
        """Message constant 'VEHICLE_CMD_DO_CONTROL_VIDEO'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_CONTROL_VIDEO']

    @property
    def VEHICLE_CMD_DO_SET_ROI(self):
        """Message constant 'VEHICLE_CMD_DO_SET_ROI'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_SET_ROI']

    @property
    def VEHICLE_CMD_DO_DIGICAM_CONTROL(self):
        """Message constant 'VEHICLE_CMD_DO_DIGICAM_CONTROL'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_DIGICAM_CONTROL']

    @property
    def VEHICLE_CMD_DO_MOUNT_CONFIGURE(self):
        """Message constant 'VEHICLE_CMD_DO_MOUNT_CONFIGURE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_MOUNT_CONFIGURE']

    @property
    def VEHICLE_CMD_DO_MOUNT_CONTROL(self):
        """Message constant 'VEHICLE_CMD_DO_MOUNT_CONTROL'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_MOUNT_CONTROL']

    @property
    def VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST(self):
        """Message constant 'VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST']

    @property
    def VEHICLE_CMD_DO_FENCE_ENABLE(self):
        """Message constant 'VEHICLE_CMD_DO_FENCE_ENABLE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_FENCE_ENABLE']

    @property
    def VEHICLE_CMD_DO_PARACHUTE(self):
        """Message constant 'VEHICLE_CMD_DO_PARACHUTE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_PARACHUTE']

    @property
    def VEHICLE_CMD_DO_MOTOR_TEST(self):
        """Message constant 'VEHICLE_CMD_DO_MOTOR_TEST'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_MOTOR_TEST']

    @property
    def VEHICLE_CMD_DO_INVERTED_FLIGHT(self):
        """Message constant 'VEHICLE_CMD_DO_INVERTED_FLIGHT'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_INVERTED_FLIGHT']

    @property
    def VEHICLE_CMD_DO_GRIPPER(self):
        """Message constant 'VEHICLE_CMD_DO_GRIPPER'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_GRIPPER']

    @property
    def VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL(self):
        """Message constant 'VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL']

    @property
    def VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT(self):
        """Message constant 'VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT']

    @property
    def VEHICLE_CMD_DO_GUIDED_MASTER(self):
        """Message constant 'VEHICLE_CMD_DO_GUIDED_MASTER'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_GUIDED_MASTER']

    @property
    def VEHICLE_CMD_DO_GUIDED_LIMITS(self):
        """Message constant 'VEHICLE_CMD_DO_GUIDED_LIMITS'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_GUIDED_LIMITS']

    @property
    def VEHICLE_CMD_DO_LAST(self):
        """Message constant 'VEHICLE_CMD_DO_LAST'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_LAST']

    @property
    def VEHICLE_CMD_PREFLIGHT_CALIBRATION(self):
        """Message constant 'VEHICLE_CMD_PREFLIGHT_CALIBRATION'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_PREFLIGHT_CALIBRATION']

    @property
    def PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION(self):
        """Message constant 'PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION'."""
        return Metaclass_VehicleCommand.__constants['PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION']

    @property
    def VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS(self):
        """Message constant 'VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS']

    @property
    def VEHICLE_CMD_PREFLIGHT_UAVCAN(self):
        """Message constant 'VEHICLE_CMD_PREFLIGHT_UAVCAN'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_PREFLIGHT_UAVCAN']

    @property
    def VEHICLE_CMD_PREFLIGHT_STORAGE(self):
        """Message constant 'VEHICLE_CMD_PREFLIGHT_STORAGE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_PREFLIGHT_STORAGE']

    @property
    def VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN(self):
        """Message constant 'VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN']

    @property
    def VEHICLE_CMD_OBLIQUE_SURVEY(self):
        """Message constant 'VEHICLE_CMD_OBLIQUE_SURVEY'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_OBLIQUE_SURVEY']

    @property
    def VEHICLE_CMD_DO_SET_STANDARD_MODE(self):
        """Message constant 'VEHICLE_CMD_DO_SET_STANDARD_MODE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_SET_STANDARD_MODE']

    @property
    def VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION(self):
        """Message constant 'VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION']

    @property
    def VEHICLE_CMD_MISSION_START(self):
        """Message constant 'VEHICLE_CMD_MISSION_START'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_MISSION_START']

    @property
    def VEHICLE_CMD_ACTUATOR_TEST(self):
        """Message constant 'VEHICLE_CMD_ACTUATOR_TEST'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_ACTUATOR_TEST']

    @property
    def VEHICLE_CMD_CONFIGURE_ACTUATOR(self):
        """Message constant 'VEHICLE_CMD_CONFIGURE_ACTUATOR'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_CONFIGURE_ACTUATOR']

    @property
    def VEHICLE_CMD_COMPONENT_ARM_DISARM(self):
        """Message constant 'VEHICLE_CMD_COMPONENT_ARM_DISARM'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_COMPONENT_ARM_DISARM']

    @property
    def VEHICLE_CMD_RUN_PREARM_CHECKS(self):
        """Message constant 'VEHICLE_CMD_RUN_PREARM_CHECKS'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_RUN_PREARM_CHECKS']

    @property
    def VEHICLE_CMD_INJECT_FAILURE(self):
        """Message constant 'VEHICLE_CMD_INJECT_FAILURE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_INJECT_FAILURE']

    @property
    def VEHICLE_CMD_START_RX_PAIR(self):
        """Message constant 'VEHICLE_CMD_START_RX_PAIR'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_START_RX_PAIR']

    @property
    def VEHICLE_CMD_REQUEST_MESSAGE(self):
        """Message constant 'VEHICLE_CMD_REQUEST_MESSAGE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_REQUEST_MESSAGE']

    @property
    def VEHICLE_CMD_SET_CAMERA_MODE(self):
        """Message constant 'VEHICLE_CMD_SET_CAMERA_MODE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_SET_CAMERA_MODE']

    @property
    def VEHICLE_CMD_SET_CAMERA_ZOOM(self):
        """Message constant 'VEHICLE_CMD_SET_CAMERA_ZOOM'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_SET_CAMERA_ZOOM']

    @property
    def VEHICLE_CMD_SET_CAMERA_FOCUS(self):
        """Message constant 'VEHICLE_CMD_SET_CAMERA_FOCUS'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_SET_CAMERA_FOCUS']

    @property
    def VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW(self):
        """Message constant 'VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW']

    @property
    def VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE(self):
        """Message constant 'VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE']

    @property
    def VEHICLE_CMD_IMAGE_START_CAPTURE(self):
        """Message constant 'VEHICLE_CMD_IMAGE_START_CAPTURE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_IMAGE_START_CAPTURE']

    @property
    def VEHICLE_CMD_DO_TRIGGER_CONTROL(self):
        """Message constant 'VEHICLE_CMD_DO_TRIGGER_CONTROL'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_TRIGGER_CONTROL']

    @property
    def VEHICLE_CMD_VIDEO_START_CAPTURE(self):
        """Message constant 'VEHICLE_CMD_VIDEO_START_CAPTURE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_VIDEO_START_CAPTURE']

    @property
    def VEHICLE_CMD_VIDEO_STOP_CAPTURE(self):
        """Message constant 'VEHICLE_CMD_VIDEO_STOP_CAPTURE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_VIDEO_STOP_CAPTURE']

    @property
    def VEHICLE_CMD_LOGGING_START(self):
        """Message constant 'VEHICLE_CMD_LOGGING_START'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_LOGGING_START']

    @property
    def VEHICLE_CMD_LOGGING_STOP(self):
        """Message constant 'VEHICLE_CMD_LOGGING_STOP'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_LOGGING_STOP']

    @property
    def VEHICLE_CMD_CONTROL_HIGH_LATENCY(self):
        """Message constant 'VEHICLE_CMD_CONTROL_HIGH_LATENCY'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_CONTROL_HIGH_LATENCY']

    @property
    def VEHICLE_CMD_DO_VTOL_TRANSITION(self):
        """Message constant 'VEHICLE_CMD_DO_VTOL_TRANSITION'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_VTOL_TRANSITION']

    @property
    def VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST(self):
        """Message constant 'VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST']

    @property
    def VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY(self):
        """Message constant 'VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY']

    @property
    def VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY(self):
        """Message constant 'VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY']

    @property
    def VEHICLE_CMD_FIXED_MAG_CAL_YAW(self):
        """Message constant 'VEHICLE_CMD_FIXED_MAG_CAL_YAW'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_FIXED_MAG_CAL_YAW']

    @property
    def VEHICLE_CMD_DO_WINCH(self):
        """Message constant 'VEHICLE_CMD_DO_WINCH'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_DO_WINCH']

    @property
    def VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE(self):
        """Message constant 'VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE']

    @property
    def VEHICLE_CMD_PX4_INTERNAL_START(self):
        """Message constant 'VEHICLE_CMD_PX4_INTERNAL_START'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_PX4_INTERNAL_START']

    @property
    def VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN(self):
        """Message constant 'VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN']

    @property
    def VEHICLE_CMD_SET_NAV_STATE(self):
        """Message constant 'VEHICLE_CMD_SET_NAV_STATE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_CMD_SET_NAV_STATE']

    @property
    def VEHICLE_MOUNT_MODE_RETRACT(self):
        """Message constant 'VEHICLE_MOUNT_MODE_RETRACT'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_MOUNT_MODE_RETRACT']

    @property
    def VEHICLE_MOUNT_MODE_NEUTRAL(self):
        """Message constant 'VEHICLE_MOUNT_MODE_NEUTRAL'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_MOUNT_MODE_NEUTRAL']

    @property
    def VEHICLE_MOUNT_MODE_MAVLINK_TARGETING(self):
        """Message constant 'VEHICLE_MOUNT_MODE_MAVLINK_TARGETING'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_MOUNT_MODE_MAVLINK_TARGETING']

    @property
    def VEHICLE_MOUNT_MODE_RC_TARGETING(self):
        """Message constant 'VEHICLE_MOUNT_MODE_RC_TARGETING'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_MOUNT_MODE_RC_TARGETING']

    @property
    def VEHICLE_MOUNT_MODE_GPS_POINT(self):
        """Message constant 'VEHICLE_MOUNT_MODE_GPS_POINT'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_MOUNT_MODE_GPS_POINT']

    @property
    def VEHICLE_MOUNT_MODE_ENUM_END(self):
        """Message constant 'VEHICLE_MOUNT_MODE_ENUM_END'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_MOUNT_MODE_ENUM_END']

    @property
    def VEHICLE_ROI_NONE(self):
        """Message constant 'VEHICLE_ROI_NONE'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_ROI_NONE']

    @property
    def VEHICLE_ROI_WPNEXT(self):
        """Message constant 'VEHICLE_ROI_WPNEXT'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_ROI_WPNEXT']

    @property
    def VEHICLE_ROI_WPINDEX(self):
        """Message constant 'VEHICLE_ROI_WPINDEX'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_ROI_WPINDEX']

    @property
    def VEHICLE_ROI_LOCATION(self):
        """Message constant 'VEHICLE_ROI_LOCATION'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_ROI_LOCATION']

    @property
    def VEHICLE_ROI_TARGET(self):
        """Message constant 'VEHICLE_ROI_TARGET'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_ROI_TARGET']

    @property
    def VEHICLE_ROI_ENUM_END(self):
        """Message constant 'VEHICLE_ROI_ENUM_END'."""
        return Metaclass_VehicleCommand.__constants['VEHICLE_ROI_ENUM_END']

    @property
    def PARACHUTE_ACTION_DISABLE(self):
        """Message constant 'PARACHUTE_ACTION_DISABLE'."""
        return Metaclass_VehicleCommand.__constants['PARACHUTE_ACTION_DISABLE']

    @property
    def PARACHUTE_ACTION_ENABLE(self):
        """Message constant 'PARACHUTE_ACTION_ENABLE'."""
        return Metaclass_VehicleCommand.__constants['PARACHUTE_ACTION_ENABLE']

    @property
    def PARACHUTE_ACTION_RELEASE(self):
        """Message constant 'PARACHUTE_ACTION_RELEASE'."""
        return Metaclass_VehicleCommand.__constants['PARACHUTE_ACTION_RELEASE']

    @property
    def FAILURE_UNIT_SENSOR_GYRO(self):
        """Message constant 'FAILURE_UNIT_SENSOR_GYRO'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SENSOR_GYRO']

    @property
    def FAILURE_UNIT_SENSOR_ACCEL(self):
        """Message constant 'FAILURE_UNIT_SENSOR_ACCEL'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SENSOR_ACCEL']

    @property
    def FAILURE_UNIT_SENSOR_MAG(self):
        """Message constant 'FAILURE_UNIT_SENSOR_MAG'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SENSOR_MAG']

    @property
    def FAILURE_UNIT_SENSOR_BARO(self):
        """Message constant 'FAILURE_UNIT_SENSOR_BARO'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SENSOR_BARO']

    @property
    def FAILURE_UNIT_SENSOR_GPS(self):
        """Message constant 'FAILURE_UNIT_SENSOR_GPS'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SENSOR_GPS']

    @property
    def FAILURE_UNIT_SENSOR_OPTICAL_FLOW(self):
        """Message constant 'FAILURE_UNIT_SENSOR_OPTICAL_FLOW'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SENSOR_OPTICAL_FLOW']

    @property
    def FAILURE_UNIT_SENSOR_VIO(self):
        """Message constant 'FAILURE_UNIT_SENSOR_VIO'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SENSOR_VIO']

    @property
    def FAILURE_UNIT_SENSOR_DISTANCE_SENSOR(self):
        """Message constant 'FAILURE_UNIT_SENSOR_DISTANCE_SENSOR'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SENSOR_DISTANCE_SENSOR']

    @property
    def FAILURE_UNIT_SENSOR_AIRSPEED(self):
        """Message constant 'FAILURE_UNIT_SENSOR_AIRSPEED'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SENSOR_AIRSPEED']

    @property
    def FAILURE_UNIT_SYSTEM_BATTERY(self):
        """Message constant 'FAILURE_UNIT_SYSTEM_BATTERY'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SYSTEM_BATTERY']

    @property
    def FAILURE_UNIT_SYSTEM_MOTOR(self):
        """Message constant 'FAILURE_UNIT_SYSTEM_MOTOR'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SYSTEM_MOTOR']

    @property
    def FAILURE_UNIT_SYSTEM_SERVO(self):
        """Message constant 'FAILURE_UNIT_SYSTEM_SERVO'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SYSTEM_SERVO']

    @property
    def FAILURE_UNIT_SYSTEM_AVOIDANCE(self):
        """Message constant 'FAILURE_UNIT_SYSTEM_AVOIDANCE'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SYSTEM_AVOIDANCE']

    @property
    def FAILURE_UNIT_SYSTEM_RC_SIGNAL(self):
        """Message constant 'FAILURE_UNIT_SYSTEM_RC_SIGNAL'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SYSTEM_RC_SIGNAL']

    @property
    def FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL(self):
        """Message constant 'FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL']

    @property
    def FAILURE_TYPE_OK(self):
        """Message constant 'FAILURE_TYPE_OK'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_TYPE_OK']

    @property
    def FAILURE_TYPE_OFF(self):
        """Message constant 'FAILURE_TYPE_OFF'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_TYPE_OFF']

    @property
    def FAILURE_TYPE_STUCK(self):
        """Message constant 'FAILURE_TYPE_STUCK'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_TYPE_STUCK']

    @property
    def FAILURE_TYPE_GARBAGE(self):
        """Message constant 'FAILURE_TYPE_GARBAGE'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_TYPE_GARBAGE']

    @property
    def FAILURE_TYPE_WRONG(self):
        """Message constant 'FAILURE_TYPE_WRONG'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_TYPE_WRONG']

    @property
    def FAILURE_TYPE_SLOW(self):
        """Message constant 'FAILURE_TYPE_SLOW'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_TYPE_SLOW']

    @property
    def FAILURE_TYPE_DELAYED(self):
        """Message constant 'FAILURE_TYPE_DELAYED'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_TYPE_DELAYED']

    @property
    def FAILURE_TYPE_INTERMITTENT(self):
        """Message constant 'FAILURE_TYPE_INTERMITTENT'."""
        return Metaclass_VehicleCommand.__constants['FAILURE_TYPE_INTERMITTENT']

    @property
    def SPEED_TYPE_AIRSPEED(self):
        """Message constant 'SPEED_TYPE_AIRSPEED'."""
        return Metaclass_VehicleCommand.__constants['SPEED_TYPE_AIRSPEED']

    @property
    def SPEED_TYPE_GROUNDSPEED(self):
        """Message constant 'SPEED_TYPE_GROUNDSPEED'."""
        return Metaclass_VehicleCommand.__constants['SPEED_TYPE_GROUNDSPEED']

    @property
    def SPEED_TYPE_CLIMB_SPEED(self):
        """Message constant 'SPEED_TYPE_CLIMB_SPEED'."""
        return Metaclass_VehicleCommand.__constants['SPEED_TYPE_CLIMB_SPEED']

    @property
    def SPEED_TYPE_DESCEND_SPEED(self):
        """Message constant 'SPEED_TYPE_DESCEND_SPEED'."""
        return Metaclass_VehicleCommand.__constants['SPEED_TYPE_DESCEND_SPEED']

    @property
    def ARMING_ACTION_DISARM(self):
        """Message constant 'ARMING_ACTION_DISARM'."""
        return Metaclass_VehicleCommand.__constants['ARMING_ACTION_DISARM']

    @property
    def ARMING_ACTION_ARM(self):
        """Message constant 'ARMING_ACTION_ARM'."""
        return Metaclass_VehicleCommand.__constants['ARMING_ACTION_ARM']

    @property
    def GRIPPER_ACTION_RELEASE(self):
        """Message constant 'GRIPPER_ACTION_RELEASE'."""
        return Metaclass_VehicleCommand.__constants['GRIPPER_ACTION_RELEASE']

    @property
    def GRIPPER_ACTION_GRAB(self):
        """Message constant 'GRIPPER_ACTION_GRAB'."""
        return Metaclass_VehicleCommand.__constants['GRIPPER_ACTION_GRAB']

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_VehicleCommand.__constants['ORB_QUEUE_LENGTH']

    @property
    def COMPONENT_MODE_EXECUTOR_START(self):
        """Message constant 'COMPONENT_MODE_EXECUTOR_START'."""
        return Metaclass_VehicleCommand.__constants['COMPONENT_MODE_EXECUTOR_START']


class VehicleCommand(metaclass=Metaclass_VehicleCommand):
    """
    Message class 'VehicleCommand'.

    Constants:
      VEHICLE_CMD_CUSTOM_0
      VEHICLE_CMD_CUSTOM_1
      VEHICLE_CMD_CUSTOM_2
      VEHICLE_CMD_NAV_WAYPOINT
      VEHICLE_CMD_NAV_LOITER_UNLIM
      VEHICLE_CMD_NAV_LOITER_TURNS
      VEHICLE_CMD_NAV_LOITER_TIME
      VEHICLE_CMD_NAV_RETURN_TO_LAUNCH
      VEHICLE_CMD_NAV_LAND
      VEHICLE_CMD_NAV_TAKEOFF
      VEHICLE_CMD_NAV_PRECLAND
      VEHICLE_CMD_DO_ORBIT
      VEHICLE_CMD_DO_FIGUREEIGHT
      VEHICLE_CMD_NAV_ROI
      VEHICLE_CMD_NAV_PATHPLANNING
      VEHICLE_CMD_NAV_VTOL_TAKEOFF
      VEHICLE_CMD_NAV_VTOL_LAND
      VEHICLE_CMD_NAV_GUIDED_LIMITS
      VEHICLE_CMD_NAV_GUIDED_MASTER
      VEHICLE_CMD_NAV_DELAY
      VEHICLE_CMD_NAV_LAST
      VEHICLE_CMD_CONDITION_DELAY
      VEHICLE_CMD_CONDITION_CHANGE_ALT
      VEHICLE_CMD_CONDITION_DISTANCE
      VEHICLE_CMD_CONDITION_YAW
      VEHICLE_CMD_CONDITION_LAST
      VEHICLE_CMD_CONDITION_GATE
      VEHICLE_CMD_DO_SET_MODE
      VEHICLE_CMD_DO_JUMP
      VEHICLE_CMD_DO_CHANGE_SPEED
      VEHICLE_CMD_DO_SET_HOME
      VEHICLE_CMD_DO_SET_PARAMETER
      VEHICLE_CMD_DO_SET_RELAY
      VEHICLE_CMD_DO_REPEAT_RELAY
      VEHICLE_CMD_DO_REPEAT_SERVO
      VEHICLE_CMD_DO_FLIGHTTERMINATION
      VEHICLE_CMD_DO_CHANGE_ALTITUDE
      VEHICLE_CMD_DO_SET_ACTUATOR
      VEHICLE_CMD_DO_LAND_START
      VEHICLE_CMD_DO_GO_AROUND
      VEHICLE_CMD_DO_REPOSITION
      VEHICLE_CMD_DO_PAUSE_CONTINUE
      VEHICLE_CMD_DO_SET_ROI_LOCATION
      VEHICLE_CMD_DO_SET_ROI_WPNEXT_OFFSET
      VEHICLE_CMD_DO_SET_ROI_NONE
      VEHICLE_CMD_DO_CONTROL_VIDEO
      VEHICLE_CMD_DO_SET_ROI
      VEHICLE_CMD_DO_DIGICAM_CONTROL
      VEHICLE_CMD_DO_MOUNT_CONFIGURE
      VEHICLE_CMD_DO_MOUNT_CONTROL
      VEHICLE_CMD_DO_SET_CAM_TRIGG_DIST
      VEHICLE_CMD_DO_FENCE_ENABLE
      VEHICLE_CMD_DO_PARACHUTE
      VEHICLE_CMD_DO_MOTOR_TEST
      VEHICLE_CMD_DO_INVERTED_FLIGHT
      VEHICLE_CMD_DO_GRIPPER
      VEHICLE_CMD_DO_SET_CAM_TRIGG_INTERVAL
      VEHICLE_CMD_DO_MOUNT_CONTROL_QUAT
      VEHICLE_CMD_DO_GUIDED_MASTER
      VEHICLE_CMD_DO_GUIDED_LIMITS
      VEHICLE_CMD_DO_LAST
      VEHICLE_CMD_PREFLIGHT_CALIBRATION
      PREFLIGHT_CALIBRATION_TEMPERATURE_CALIBRATION
      VEHICLE_CMD_PREFLIGHT_SET_SENSOR_OFFSETS
      VEHICLE_CMD_PREFLIGHT_UAVCAN
      VEHICLE_CMD_PREFLIGHT_STORAGE
      VEHICLE_CMD_PREFLIGHT_REBOOT_SHUTDOWN
      VEHICLE_CMD_OBLIQUE_SURVEY
      VEHICLE_CMD_DO_SET_STANDARD_MODE
      VEHICLE_CMD_GIMBAL_DEVICE_INFORMATION
      VEHICLE_CMD_MISSION_START
      VEHICLE_CMD_ACTUATOR_TEST
      VEHICLE_CMD_CONFIGURE_ACTUATOR
      VEHICLE_CMD_COMPONENT_ARM_DISARM
      VEHICLE_CMD_RUN_PREARM_CHECKS
      VEHICLE_CMD_INJECT_FAILURE
      VEHICLE_CMD_START_RX_PAIR
      VEHICLE_CMD_REQUEST_MESSAGE
      VEHICLE_CMD_SET_CAMERA_MODE
      VEHICLE_CMD_SET_CAMERA_ZOOM
      VEHICLE_CMD_SET_CAMERA_FOCUS
      VEHICLE_CMD_DO_GIMBAL_MANAGER_PITCHYAW
      VEHICLE_CMD_DO_GIMBAL_MANAGER_CONFIGURE
      VEHICLE_CMD_IMAGE_START_CAPTURE
      VEHICLE_CMD_DO_TRIGGER_CONTROL
      VEHICLE_CMD_VIDEO_START_CAPTURE
      VEHICLE_CMD_VIDEO_STOP_CAPTURE
      VEHICLE_CMD_LOGGING_START
      VEHICLE_CMD_LOGGING_STOP
      VEHICLE_CMD_CONTROL_HIGH_LATENCY
      VEHICLE_CMD_DO_VTOL_TRANSITION
      VEHICLE_CMD_ARM_AUTHORIZATION_REQUEST
      VEHICLE_CMD_PAYLOAD_PREPARE_DEPLOY
      VEHICLE_CMD_PAYLOAD_CONTROL_DEPLOY
      VEHICLE_CMD_FIXED_MAG_CAL_YAW
      VEHICLE_CMD_DO_WINCH
      VEHICLE_CMD_EXTERNAL_POSITION_ESTIMATE
      VEHICLE_CMD_PX4_INTERNAL_START
      VEHICLE_CMD_SET_GPS_GLOBAL_ORIGIN
      VEHICLE_CMD_SET_NAV_STATE
      VEHICLE_MOUNT_MODE_RETRACT
      VEHICLE_MOUNT_MODE_NEUTRAL
      VEHICLE_MOUNT_MODE_MAVLINK_TARGETING
      VEHICLE_MOUNT_MODE_RC_TARGETING
      VEHICLE_MOUNT_MODE_GPS_POINT
      VEHICLE_MOUNT_MODE_ENUM_END
      VEHICLE_ROI_NONE
      VEHICLE_ROI_WPNEXT
      VEHICLE_ROI_WPINDEX
      VEHICLE_ROI_LOCATION
      VEHICLE_ROI_TARGET
      VEHICLE_ROI_ENUM_END
      PARACHUTE_ACTION_DISABLE
      PARACHUTE_ACTION_ENABLE
      PARACHUTE_ACTION_RELEASE
      FAILURE_UNIT_SENSOR_GYRO
      FAILURE_UNIT_SENSOR_ACCEL
      FAILURE_UNIT_SENSOR_MAG
      FAILURE_UNIT_SENSOR_BARO
      FAILURE_UNIT_SENSOR_GPS
      FAILURE_UNIT_SENSOR_OPTICAL_FLOW
      FAILURE_UNIT_SENSOR_VIO
      FAILURE_UNIT_SENSOR_DISTANCE_SENSOR
      FAILURE_UNIT_SENSOR_AIRSPEED
      FAILURE_UNIT_SYSTEM_BATTERY
      FAILURE_UNIT_SYSTEM_MOTOR
      FAILURE_UNIT_SYSTEM_SERVO
      FAILURE_UNIT_SYSTEM_AVOIDANCE
      FAILURE_UNIT_SYSTEM_RC_SIGNAL
      FAILURE_UNIT_SYSTEM_MAVLINK_SIGNAL
      FAILURE_TYPE_OK
      FAILURE_TYPE_OFF
      FAILURE_TYPE_STUCK
      FAILURE_TYPE_GARBAGE
      FAILURE_TYPE_WRONG
      FAILURE_TYPE_SLOW
      FAILURE_TYPE_DELAYED
      FAILURE_TYPE_INTERMITTENT
      SPEED_TYPE_AIRSPEED
      SPEED_TYPE_GROUNDSPEED
      SPEED_TYPE_CLIMB_SPEED
      SPEED_TYPE_DESCEND_SPEED
      ARMING_ACTION_DISARM
      ARMING_ACTION_ARM
      GRIPPER_ACTION_RELEASE
      GRIPPER_ACTION_GRAB
      ORB_QUEUE_LENGTH
      COMPONENT_MODE_EXECUTOR_START
    """

    __slots__ = [
        '_timestamp',
        '_param1',
        '_param2',
        '_param3',
        '_param4',
        '_param5',
        '_param6',
        '_param7',
        '_command',
        '_target_system',
        '_target_component',
        '_source_system',
        '_source_component',
        '_confirmation',
        '_from_external',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'param1': 'float',
        'param2': 'float',
        'param3': 'float',
        'param4': 'float',
        'param5': 'double',
        'param6': 'double',
        'param7': 'float',
        'command': 'uint32',
        'target_system': 'uint8',
        'target_component': 'uint8',
        'source_system': 'uint8',
        'source_component': 'uint16',
        'confirmation': 'uint8',
        'from_external': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.param1 = kwargs.get('param1', float())
        self.param2 = kwargs.get('param2', float())
        self.param3 = kwargs.get('param3', float())
        self.param4 = kwargs.get('param4', float())
        self.param5 = kwargs.get('param5', float())
        self.param6 = kwargs.get('param6', float())
        self.param7 = kwargs.get('param7', float())
        self.command = kwargs.get('command', int())
        self.target_system = kwargs.get('target_system', int())
        self.target_component = kwargs.get('target_component', int())
        self.source_system = kwargs.get('source_system', int())
        self.source_component = kwargs.get('source_component', int())
        self.confirmation = kwargs.get('confirmation', int())
        self.from_external = kwargs.get('from_external', bool())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.param1 != other.param1:
            return False
        if self.param2 != other.param2:
            return False
        if self.param3 != other.param3:
            return False
        if self.param4 != other.param4:
            return False
        if self.param5 != other.param5:
            return False
        if self.param6 != other.param6:
            return False
        if self.param7 != other.param7:
            return False
        if self.command != other.command:
            return False
        if self.target_system != other.target_system:
            return False
        if self.target_component != other.target_component:
            return False
        if self.source_system != other.source_system:
            return False
        if self.source_component != other.source_component:
            return False
        if self.confirmation != other.confirmation:
            return False
        if self.from_external != other.from_external:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def timestamp(self):
        """Message field 'timestamp'."""
        return self._timestamp

    @timestamp.setter
    def timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp = value

    @builtins.property
    def param1(self):
        """Message field 'param1'."""
        return self._param1

    @param1.setter
    def param1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'param1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._param1 = value

    @builtins.property
    def param2(self):
        """Message field 'param2'."""
        return self._param2

    @param2.setter
    def param2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'param2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._param2 = value

    @builtins.property
    def param3(self):
        """Message field 'param3'."""
        return self._param3

    @param3.setter
    def param3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'param3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._param3 = value

    @builtins.property
    def param4(self):
        """Message field 'param4'."""
        return self._param4

    @param4.setter
    def param4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'param4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._param4 = value

    @builtins.property
    def param5(self):
        """Message field 'param5'."""
        return self._param5

    @param5.setter
    def param5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param5' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'param5' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._param5 = value

    @builtins.property
    def param6(self):
        """Message field 'param6'."""
        return self._param6

    @param6.setter
    def param6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param6' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'param6' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._param6 = value

    @builtins.property
    def param7(self):
        """Message field 'param7'."""
        return self._param7

    @param7.setter
    def param7(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'param7' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'param7' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._param7 = value

    @builtins.property
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'command' field must be an unsigned integer in [0, 4294967295]"
        self._command = value

    @builtins.property
    def target_system(self):
        """Message field 'target_system'."""
        return self._target_system

    @target_system.setter
    def target_system(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_system' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target_system' field must be an unsigned integer in [0, 255]"
        self._target_system = value

    @builtins.property
    def target_component(self):
        """Message field 'target_component'."""
        return self._target_component

    @target_component.setter
    def target_component(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_component' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target_component' field must be an unsigned integer in [0, 255]"
        self._target_component = value

    @builtins.property
    def source_system(self):
        """Message field 'source_system'."""
        return self._source_system

    @source_system.setter
    def source_system(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_system' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source_system' field must be an unsigned integer in [0, 255]"
        self._source_system = value

    @builtins.property
    def source_component(self):
        """Message field 'source_component'."""
        return self._source_component

    @source_component.setter
    def source_component(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_component' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'source_component' field must be an unsigned integer in [0, 65535]"
        self._source_component = value

    @builtins.property
    def confirmation(self):
        """Message field 'confirmation'."""
        return self._confirmation

    @confirmation.setter
    def confirmation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'confirmation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'confirmation' field must be an unsigned integer in [0, 255]"
        self._confirmation = value

    @builtins.property
    def from_external(self):
        """Message field 'from_external'."""
        return self._from_external

    @from_external.setter
    def from_external(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'from_external' field must be of type 'bool'"
        self._from_external = value
