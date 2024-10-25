# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleStatus(type):
    """Metaclass of message 'VehicleStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ARMING_STATE_DISARMED': 1,
        'ARMING_STATE_ARMED': 2,
        'ARM_DISARM_REASON_TRANSITION_TO_STANDBY': 0,
        'ARM_DISARM_REASON_RC_STICK': 1,
        'ARM_DISARM_REASON_RC_SWITCH': 2,
        'ARM_DISARM_REASON_COMMAND_INTERNAL': 3,
        'ARM_DISARM_REASON_COMMAND_EXTERNAL': 4,
        'ARM_DISARM_REASON_MISSION_START': 5,
        'ARM_DISARM_REASON_SAFETY_BUTTON': 6,
        'ARM_DISARM_REASON_AUTO_DISARM_LAND': 7,
        'ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT': 8,
        'ARM_DISARM_REASON_KILL_SWITCH': 9,
        'ARM_DISARM_REASON_LOCKDOWN': 10,
        'ARM_DISARM_REASON_FAILURE_DETECTOR': 11,
        'ARM_DISARM_REASON_SHUTDOWN': 12,
        'ARM_DISARM_REASON_UNIT_TEST': 13,
        'NAVIGATION_STATE_MANUAL': 0,
        'NAVIGATION_STATE_ALTCTL': 1,
        'NAVIGATION_STATE_POSCTL': 2,
        'NAVIGATION_STATE_AUTO_MISSION': 3,
        'NAVIGATION_STATE_AUTO_LOITER': 4,
        'NAVIGATION_STATE_AUTO_RTL': 5,
        'NAVIGATION_STATE_POSITION_SLOW': 6,
        'NAVIGATION_STATE_FREE5': 7,
        'NAVIGATION_STATE_FREE4': 8,
        'NAVIGATION_STATE_FREE3': 9,
        'NAVIGATION_STATE_ACRO': 10,
        'NAVIGATION_STATE_FREE2': 11,
        'NAVIGATION_STATE_DESCEND': 12,
        'NAVIGATION_STATE_TERMINATION': 13,
        'NAVIGATION_STATE_OFFBOARD': 14,
        'NAVIGATION_STATE_STAB': 15,
        'NAVIGATION_STATE_FREE1': 16,
        'NAVIGATION_STATE_AUTO_TAKEOFF': 17,
        'NAVIGATION_STATE_AUTO_LAND': 18,
        'NAVIGATION_STATE_AUTO_FOLLOW_TARGET': 19,
        'NAVIGATION_STATE_AUTO_PRECLAND': 20,
        'NAVIGATION_STATE_ORBIT': 21,
        'NAVIGATION_STATE_AUTO_VTOL_TAKEOFF': 22,
        'NAVIGATION_STATE_EXTERNAL1': 23,
        'NAVIGATION_STATE_EXTERNAL2': 24,
        'NAVIGATION_STATE_EXTERNAL3': 25,
        'NAVIGATION_STATE_EXTERNAL4': 26,
        'NAVIGATION_STATE_EXTERNAL5': 27,
        'NAVIGATION_STATE_EXTERNAL6': 28,
        'NAVIGATION_STATE_EXTERNAL7': 29,
        'NAVIGATION_STATE_EXTERNAL8': 30,
        'NAVIGATION_STATE_MAX': 31,
        'FAILURE_NONE': 0,
        'FAILURE_ROLL': 1,
        'FAILURE_PITCH': 2,
        'FAILURE_ALT': 4,
        'FAILURE_EXT': 8,
        'FAILURE_ARM_ESC': 16,
        'FAILURE_BATTERY': 32,
        'FAILURE_IMBALANCED_PROP': 64,
        'FAILURE_MOTOR': 128,
        'HIL_STATE_OFF': 0,
        'HIL_STATE_ON': 1,
        'VEHICLE_TYPE_UNKNOWN': 0,
        'VEHICLE_TYPE_ROTARY_WING': 1,
        'VEHICLE_TYPE_FIXED_WING': 2,
        'VEHICLE_TYPE_ROVER': 3,
        'VEHICLE_TYPE_AIRSHIP': 4,
        'FAILSAFE_DEFER_STATE_DISABLED': 0,
        'FAILSAFE_DEFER_STATE_ENABLED': 1,
        'FAILSAFE_DEFER_STATE_WOULD_FAILSAFE': 2,
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
                'px4_msgs.msg.VehicleStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ARMING_STATE_DISARMED': cls.__constants['ARMING_STATE_DISARMED'],
            'ARMING_STATE_ARMED': cls.__constants['ARMING_STATE_ARMED'],
            'ARM_DISARM_REASON_TRANSITION_TO_STANDBY': cls.__constants['ARM_DISARM_REASON_TRANSITION_TO_STANDBY'],
            'ARM_DISARM_REASON_RC_STICK': cls.__constants['ARM_DISARM_REASON_RC_STICK'],
            'ARM_DISARM_REASON_RC_SWITCH': cls.__constants['ARM_DISARM_REASON_RC_SWITCH'],
            'ARM_DISARM_REASON_COMMAND_INTERNAL': cls.__constants['ARM_DISARM_REASON_COMMAND_INTERNAL'],
            'ARM_DISARM_REASON_COMMAND_EXTERNAL': cls.__constants['ARM_DISARM_REASON_COMMAND_EXTERNAL'],
            'ARM_DISARM_REASON_MISSION_START': cls.__constants['ARM_DISARM_REASON_MISSION_START'],
            'ARM_DISARM_REASON_SAFETY_BUTTON': cls.__constants['ARM_DISARM_REASON_SAFETY_BUTTON'],
            'ARM_DISARM_REASON_AUTO_DISARM_LAND': cls.__constants['ARM_DISARM_REASON_AUTO_DISARM_LAND'],
            'ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT': cls.__constants['ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT'],
            'ARM_DISARM_REASON_KILL_SWITCH': cls.__constants['ARM_DISARM_REASON_KILL_SWITCH'],
            'ARM_DISARM_REASON_LOCKDOWN': cls.__constants['ARM_DISARM_REASON_LOCKDOWN'],
            'ARM_DISARM_REASON_FAILURE_DETECTOR': cls.__constants['ARM_DISARM_REASON_FAILURE_DETECTOR'],
            'ARM_DISARM_REASON_SHUTDOWN': cls.__constants['ARM_DISARM_REASON_SHUTDOWN'],
            'ARM_DISARM_REASON_UNIT_TEST': cls.__constants['ARM_DISARM_REASON_UNIT_TEST'],
            'NAVIGATION_STATE_MANUAL': cls.__constants['NAVIGATION_STATE_MANUAL'],
            'NAVIGATION_STATE_ALTCTL': cls.__constants['NAVIGATION_STATE_ALTCTL'],
            'NAVIGATION_STATE_POSCTL': cls.__constants['NAVIGATION_STATE_POSCTL'],
            'NAVIGATION_STATE_AUTO_MISSION': cls.__constants['NAVIGATION_STATE_AUTO_MISSION'],
            'NAVIGATION_STATE_AUTO_LOITER': cls.__constants['NAVIGATION_STATE_AUTO_LOITER'],
            'NAVIGATION_STATE_AUTO_RTL': cls.__constants['NAVIGATION_STATE_AUTO_RTL'],
            'NAVIGATION_STATE_POSITION_SLOW': cls.__constants['NAVIGATION_STATE_POSITION_SLOW'],
            'NAVIGATION_STATE_FREE5': cls.__constants['NAVIGATION_STATE_FREE5'],
            'NAVIGATION_STATE_FREE4': cls.__constants['NAVIGATION_STATE_FREE4'],
            'NAVIGATION_STATE_FREE3': cls.__constants['NAVIGATION_STATE_FREE3'],
            'NAVIGATION_STATE_ACRO': cls.__constants['NAVIGATION_STATE_ACRO'],
            'NAVIGATION_STATE_FREE2': cls.__constants['NAVIGATION_STATE_FREE2'],
            'NAVIGATION_STATE_DESCEND': cls.__constants['NAVIGATION_STATE_DESCEND'],
            'NAVIGATION_STATE_TERMINATION': cls.__constants['NAVIGATION_STATE_TERMINATION'],
            'NAVIGATION_STATE_OFFBOARD': cls.__constants['NAVIGATION_STATE_OFFBOARD'],
            'NAVIGATION_STATE_STAB': cls.__constants['NAVIGATION_STATE_STAB'],
            'NAVIGATION_STATE_FREE1': cls.__constants['NAVIGATION_STATE_FREE1'],
            'NAVIGATION_STATE_AUTO_TAKEOFF': cls.__constants['NAVIGATION_STATE_AUTO_TAKEOFF'],
            'NAVIGATION_STATE_AUTO_LAND': cls.__constants['NAVIGATION_STATE_AUTO_LAND'],
            'NAVIGATION_STATE_AUTO_FOLLOW_TARGET': cls.__constants['NAVIGATION_STATE_AUTO_FOLLOW_TARGET'],
            'NAVIGATION_STATE_AUTO_PRECLAND': cls.__constants['NAVIGATION_STATE_AUTO_PRECLAND'],
            'NAVIGATION_STATE_ORBIT': cls.__constants['NAVIGATION_STATE_ORBIT'],
            'NAVIGATION_STATE_AUTO_VTOL_TAKEOFF': cls.__constants['NAVIGATION_STATE_AUTO_VTOL_TAKEOFF'],
            'NAVIGATION_STATE_EXTERNAL1': cls.__constants['NAVIGATION_STATE_EXTERNAL1'],
            'NAVIGATION_STATE_EXTERNAL2': cls.__constants['NAVIGATION_STATE_EXTERNAL2'],
            'NAVIGATION_STATE_EXTERNAL3': cls.__constants['NAVIGATION_STATE_EXTERNAL3'],
            'NAVIGATION_STATE_EXTERNAL4': cls.__constants['NAVIGATION_STATE_EXTERNAL4'],
            'NAVIGATION_STATE_EXTERNAL5': cls.__constants['NAVIGATION_STATE_EXTERNAL5'],
            'NAVIGATION_STATE_EXTERNAL6': cls.__constants['NAVIGATION_STATE_EXTERNAL6'],
            'NAVIGATION_STATE_EXTERNAL7': cls.__constants['NAVIGATION_STATE_EXTERNAL7'],
            'NAVIGATION_STATE_EXTERNAL8': cls.__constants['NAVIGATION_STATE_EXTERNAL8'],
            'NAVIGATION_STATE_MAX': cls.__constants['NAVIGATION_STATE_MAX'],
            'FAILURE_NONE': cls.__constants['FAILURE_NONE'],
            'FAILURE_ROLL': cls.__constants['FAILURE_ROLL'],
            'FAILURE_PITCH': cls.__constants['FAILURE_PITCH'],
            'FAILURE_ALT': cls.__constants['FAILURE_ALT'],
            'FAILURE_EXT': cls.__constants['FAILURE_EXT'],
            'FAILURE_ARM_ESC': cls.__constants['FAILURE_ARM_ESC'],
            'FAILURE_BATTERY': cls.__constants['FAILURE_BATTERY'],
            'FAILURE_IMBALANCED_PROP': cls.__constants['FAILURE_IMBALANCED_PROP'],
            'FAILURE_MOTOR': cls.__constants['FAILURE_MOTOR'],
            'HIL_STATE_OFF': cls.__constants['HIL_STATE_OFF'],
            'HIL_STATE_ON': cls.__constants['HIL_STATE_ON'],
            'VEHICLE_TYPE_UNKNOWN': cls.__constants['VEHICLE_TYPE_UNKNOWN'],
            'VEHICLE_TYPE_ROTARY_WING': cls.__constants['VEHICLE_TYPE_ROTARY_WING'],
            'VEHICLE_TYPE_FIXED_WING': cls.__constants['VEHICLE_TYPE_FIXED_WING'],
            'VEHICLE_TYPE_ROVER': cls.__constants['VEHICLE_TYPE_ROVER'],
            'VEHICLE_TYPE_AIRSHIP': cls.__constants['VEHICLE_TYPE_AIRSHIP'],
            'FAILSAFE_DEFER_STATE_DISABLED': cls.__constants['FAILSAFE_DEFER_STATE_DISABLED'],
            'FAILSAFE_DEFER_STATE_ENABLED': cls.__constants['FAILSAFE_DEFER_STATE_ENABLED'],
            'FAILSAFE_DEFER_STATE_WOULD_FAILSAFE': cls.__constants['FAILSAFE_DEFER_STATE_WOULD_FAILSAFE'],
        }

    @property
    def ARMING_STATE_DISARMED(self):
        """Message constant 'ARMING_STATE_DISARMED'."""
        return Metaclass_VehicleStatus.__constants['ARMING_STATE_DISARMED']

    @property
    def ARMING_STATE_ARMED(self):
        """Message constant 'ARMING_STATE_ARMED'."""
        return Metaclass_VehicleStatus.__constants['ARMING_STATE_ARMED']

    @property
    def ARM_DISARM_REASON_TRANSITION_TO_STANDBY(self):
        """Message constant 'ARM_DISARM_REASON_TRANSITION_TO_STANDBY'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_TRANSITION_TO_STANDBY']

    @property
    def ARM_DISARM_REASON_RC_STICK(self):
        """Message constant 'ARM_DISARM_REASON_RC_STICK'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_RC_STICK']

    @property
    def ARM_DISARM_REASON_RC_SWITCH(self):
        """Message constant 'ARM_DISARM_REASON_RC_SWITCH'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_RC_SWITCH']

    @property
    def ARM_DISARM_REASON_COMMAND_INTERNAL(self):
        """Message constant 'ARM_DISARM_REASON_COMMAND_INTERNAL'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_COMMAND_INTERNAL']

    @property
    def ARM_DISARM_REASON_COMMAND_EXTERNAL(self):
        """Message constant 'ARM_DISARM_REASON_COMMAND_EXTERNAL'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_COMMAND_EXTERNAL']

    @property
    def ARM_DISARM_REASON_MISSION_START(self):
        """Message constant 'ARM_DISARM_REASON_MISSION_START'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_MISSION_START']

    @property
    def ARM_DISARM_REASON_SAFETY_BUTTON(self):
        """Message constant 'ARM_DISARM_REASON_SAFETY_BUTTON'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_SAFETY_BUTTON']

    @property
    def ARM_DISARM_REASON_AUTO_DISARM_LAND(self):
        """Message constant 'ARM_DISARM_REASON_AUTO_DISARM_LAND'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_AUTO_DISARM_LAND']

    @property
    def ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT(self):
        """Message constant 'ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT']

    @property
    def ARM_DISARM_REASON_KILL_SWITCH(self):
        """Message constant 'ARM_DISARM_REASON_KILL_SWITCH'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_KILL_SWITCH']

    @property
    def ARM_DISARM_REASON_LOCKDOWN(self):
        """Message constant 'ARM_DISARM_REASON_LOCKDOWN'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_LOCKDOWN']

    @property
    def ARM_DISARM_REASON_FAILURE_DETECTOR(self):
        """Message constant 'ARM_DISARM_REASON_FAILURE_DETECTOR'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_FAILURE_DETECTOR']

    @property
    def ARM_DISARM_REASON_SHUTDOWN(self):
        """Message constant 'ARM_DISARM_REASON_SHUTDOWN'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_SHUTDOWN']

    @property
    def ARM_DISARM_REASON_UNIT_TEST(self):
        """Message constant 'ARM_DISARM_REASON_UNIT_TEST'."""
        return Metaclass_VehicleStatus.__constants['ARM_DISARM_REASON_UNIT_TEST']

    @property
    def NAVIGATION_STATE_MANUAL(self):
        """Message constant 'NAVIGATION_STATE_MANUAL'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_MANUAL']

    @property
    def NAVIGATION_STATE_ALTCTL(self):
        """Message constant 'NAVIGATION_STATE_ALTCTL'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_ALTCTL']

    @property
    def NAVIGATION_STATE_POSCTL(self):
        """Message constant 'NAVIGATION_STATE_POSCTL'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_POSCTL']

    @property
    def NAVIGATION_STATE_AUTO_MISSION(self):
        """Message constant 'NAVIGATION_STATE_AUTO_MISSION'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_AUTO_MISSION']

    @property
    def NAVIGATION_STATE_AUTO_LOITER(self):
        """Message constant 'NAVIGATION_STATE_AUTO_LOITER'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_AUTO_LOITER']

    @property
    def NAVIGATION_STATE_AUTO_RTL(self):
        """Message constant 'NAVIGATION_STATE_AUTO_RTL'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_AUTO_RTL']

    @property
    def NAVIGATION_STATE_POSITION_SLOW(self):
        """Message constant 'NAVIGATION_STATE_POSITION_SLOW'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_POSITION_SLOW']

    @property
    def NAVIGATION_STATE_FREE5(self):
        """Message constant 'NAVIGATION_STATE_FREE5'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_FREE5']

    @property
    def NAVIGATION_STATE_FREE4(self):
        """Message constant 'NAVIGATION_STATE_FREE4'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_FREE4']

    @property
    def NAVIGATION_STATE_FREE3(self):
        """Message constant 'NAVIGATION_STATE_FREE3'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_FREE3']

    @property
    def NAVIGATION_STATE_ACRO(self):
        """Message constant 'NAVIGATION_STATE_ACRO'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_ACRO']

    @property
    def NAVIGATION_STATE_FREE2(self):
        """Message constant 'NAVIGATION_STATE_FREE2'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_FREE2']

    @property
    def NAVIGATION_STATE_DESCEND(self):
        """Message constant 'NAVIGATION_STATE_DESCEND'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_DESCEND']

    @property
    def NAVIGATION_STATE_TERMINATION(self):
        """Message constant 'NAVIGATION_STATE_TERMINATION'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_TERMINATION']

    @property
    def NAVIGATION_STATE_OFFBOARD(self):
        """Message constant 'NAVIGATION_STATE_OFFBOARD'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_OFFBOARD']

    @property
    def NAVIGATION_STATE_STAB(self):
        """Message constant 'NAVIGATION_STATE_STAB'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_STAB']

    @property
    def NAVIGATION_STATE_FREE1(self):
        """Message constant 'NAVIGATION_STATE_FREE1'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_FREE1']

    @property
    def NAVIGATION_STATE_AUTO_TAKEOFF(self):
        """Message constant 'NAVIGATION_STATE_AUTO_TAKEOFF'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_AUTO_TAKEOFF']

    @property
    def NAVIGATION_STATE_AUTO_LAND(self):
        """Message constant 'NAVIGATION_STATE_AUTO_LAND'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_AUTO_LAND']

    @property
    def NAVIGATION_STATE_AUTO_FOLLOW_TARGET(self):
        """Message constant 'NAVIGATION_STATE_AUTO_FOLLOW_TARGET'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_AUTO_FOLLOW_TARGET']

    @property
    def NAVIGATION_STATE_AUTO_PRECLAND(self):
        """Message constant 'NAVIGATION_STATE_AUTO_PRECLAND'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_AUTO_PRECLAND']

    @property
    def NAVIGATION_STATE_ORBIT(self):
        """Message constant 'NAVIGATION_STATE_ORBIT'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_ORBIT']

    @property
    def NAVIGATION_STATE_AUTO_VTOL_TAKEOFF(self):
        """Message constant 'NAVIGATION_STATE_AUTO_VTOL_TAKEOFF'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_AUTO_VTOL_TAKEOFF']

    @property
    def NAVIGATION_STATE_EXTERNAL1(self):
        """Message constant 'NAVIGATION_STATE_EXTERNAL1'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_EXTERNAL1']

    @property
    def NAVIGATION_STATE_EXTERNAL2(self):
        """Message constant 'NAVIGATION_STATE_EXTERNAL2'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_EXTERNAL2']

    @property
    def NAVIGATION_STATE_EXTERNAL3(self):
        """Message constant 'NAVIGATION_STATE_EXTERNAL3'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_EXTERNAL3']

    @property
    def NAVIGATION_STATE_EXTERNAL4(self):
        """Message constant 'NAVIGATION_STATE_EXTERNAL4'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_EXTERNAL4']

    @property
    def NAVIGATION_STATE_EXTERNAL5(self):
        """Message constant 'NAVIGATION_STATE_EXTERNAL5'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_EXTERNAL5']

    @property
    def NAVIGATION_STATE_EXTERNAL6(self):
        """Message constant 'NAVIGATION_STATE_EXTERNAL6'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_EXTERNAL6']

    @property
    def NAVIGATION_STATE_EXTERNAL7(self):
        """Message constant 'NAVIGATION_STATE_EXTERNAL7'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_EXTERNAL7']

    @property
    def NAVIGATION_STATE_EXTERNAL8(self):
        """Message constant 'NAVIGATION_STATE_EXTERNAL8'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_EXTERNAL8']

    @property
    def NAVIGATION_STATE_MAX(self):
        """Message constant 'NAVIGATION_STATE_MAX'."""
        return Metaclass_VehicleStatus.__constants['NAVIGATION_STATE_MAX']

    @property
    def FAILURE_NONE(self):
        """Message constant 'FAILURE_NONE'."""
        return Metaclass_VehicleStatus.__constants['FAILURE_NONE']

    @property
    def FAILURE_ROLL(self):
        """Message constant 'FAILURE_ROLL'."""
        return Metaclass_VehicleStatus.__constants['FAILURE_ROLL']

    @property
    def FAILURE_PITCH(self):
        """Message constant 'FAILURE_PITCH'."""
        return Metaclass_VehicleStatus.__constants['FAILURE_PITCH']

    @property
    def FAILURE_ALT(self):
        """Message constant 'FAILURE_ALT'."""
        return Metaclass_VehicleStatus.__constants['FAILURE_ALT']

    @property
    def FAILURE_EXT(self):
        """Message constant 'FAILURE_EXT'."""
        return Metaclass_VehicleStatus.__constants['FAILURE_EXT']

    @property
    def FAILURE_ARM_ESC(self):
        """Message constant 'FAILURE_ARM_ESC'."""
        return Metaclass_VehicleStatus.__constants['FAILURE_ARM_ESC']

    @property
    def FAILURE_BATTERY(self):
        """Message constant 'FAILURE_BATTERY'."""
        return Metaclass_VehicleStatus.__constants['FAILURE_BATTERY']

    @property
    def FAILURE_IMBALANCED_PROP(self):
        """Message constant 'FAILURE_IMBALANCED_PROP'."""
        return Metaclass_VehicleStatus.__constants['FAILURE_IMBALANCED_PROP']

    @property
    def FAILURE_MOTOR(self):
        """Message constant 'FAILURE_MOTOR'."""
        return Metaclass_VehicleStatus.__constants['FAILURE_MOTOR']

    @property
    def HIL_STATE_OFF(self):
        """Message constant 'HIL_STATE_OFF'."""
        return Metaclass_VehicleStatus.__constants['HIL_STATE_OFF']

    @property
    def HIL_STATE_ON(self):
        """Message constant 'HIL_STATE_ON'."""
        return Metaclass_VehicleStatus.__constants['HIL_STATE_ON']

    @property
    def VEHICLE_TYPE_UNKNOWN(self):
        """Message constant 'VEHICLE_TYPE_UNKNOWN'."""
        return Metaclass_VehicleStatus.__constants['VEHICLE_TYPE_UNKNOWN']

    @property
    def VEHICLE_TYPE_ROTARY_WING(self):
        """Message constant 'VEHICLE_TYPE_ROTARY_WING'."""
        return Metaclass_VehicleStatus.__constants['VEHICLE_TYPE_ROTARY_WING']

    @property
    def VEHICLE_TYPE_FIXED_WING(self):
        """Message constant 'VEHICLE_TYPE_FIXED_WING'."""
        return Metaclass_VehicleStatus.__constants['VEHICLE_TYPE_FIXED_WING']

    @property
    def VEHICLE_TYPE_ROVER(self):
        """Message constant 'VEHICLE_TYPE_ROVER'."""
        return Metaclass_VehicleStatus.__constants['VEHICLE_TYPE_ROVER']

    @property
    def VEHICLE_TYPE_AIRSHIP(self):
        """Message constant 'VEHICLE_TYPE_AIRSHIP'."""
        return Metaclass_VehicleStatus.__constants['VEHICLE_TYPE_AIRSHIP']

    @property
    def FAILSAFE_DEFER_STATE_DISABLED(self):
        """Message constant 'FAILSAFE_DEFER_STATE_DISABLED'."""
        return Metaclass_VehicleStatus.__constants['FAILSAFE_DEFER_STATE_DISABLED']

    @property
    def FAILSAFE_DEFER_STATE_ENABLED(self):
        """Message constant 'FAILSAFE_DEFER_STATE_ENABLED'."""
        return Metaclass_VehicleStatus.__constants['FAILSAFE_DEFER_STATE_ENABLED']

    @property
    def FAILSAFE_DEFER_STATE_WOULD_FAILSAFE(self):
        """Message constant 'FAILSAFE_DEFER_STATE_WOULD_FAILSAFE'."""
        return Metaclass_VehicleStatus.__constants['FAILSAFE_DEFER_STATE_WOULD_FAILSAFE']


class VehicleStatus(metaclass=Metaclass_VehicleStatus):
    """
    Message class 'VehicleStatus'.

    Constants:
      ARMING_STATE_DISARMED
      ARMING_STATE_ARMED
      ARM_DISARM_REASON_TRANSITION_TO_STANDBY
      ARM_DISARM_REASON_RC_STICK
      ARM_DISARM_REASON_RC_SWITCH
      ARM_DISARM_REASON_COMMAND_INTERNAL
      ARM_DISARM_REASON_COMMAND_EXTERNAL
      ARM_DISARM_REASON_MISSION_START
      ARM_DISARM_REASON_SAFETY_BUTTON
      ARM_DISARM_REASON_AUTO_DISARM_LAND
      ARM_DISARM_REASON_AUTO_DISARM_PREFLIGHT
      ARM_DISARM_REASON_KILL_SWITCH
      ARM_DISARM_REASON_LOCKDOWN
      ARM_DISARM_REASON_FAILURE_DETECTOR
      ARM_DISARM_REASON_SHUTDOWN
      ARM_DISARM_REASON_UNIT_TEST
      NAVIGATION_STATE_MANUAL
      NAVIGATION_STATE_ALTCTL
      NAVIGATION_STATE_POSCTL
      NAVIGATION_STATE_AUTO_MISSION
      NAVIGATION_STATE_AUTO_LOITER
      NAVIGATION_STATE_AUTO_RTL
      NAVIGATION_STATE_POSITION_SLOW
      NAVIGATION_STATE_FREE5
      NAVIGATION_STATE_FREE4
      NAVIGATION_STATE_FREE3
      NAVIGATION_STATE_ACRO
      NAVIGATION_STATE_FREE2
      NAVIGATION_STATE_DESCEND
      NAVIGATION_STATE_TERMINATION
      NAVIGATION_STATE_OFFBOARD
      NAVIGATION_STATE_STAB
      NAVIGATION_STATE_FREE1
      NAVIGATION_STATE_AUTO_TAKEOFF
      NAVIGATION_STATE_AUTO_LAND
      NAVIGATION_STATE_AUTO_FOLLOW_TARGET
      NAVIGATION_STATE_AUTO_PRECLAND
      NAVIGATION_STATE_ORBIT
      NAVIGATION_STATE_AUTO_VTOL_TAKEOFF
      NAVIGATION_STATE_EXTERNAL1
      NAVIGATION_STATE_EXTERNAL2
      NAVIGATION_STATE_EXTERNAL3
      NAVIGATION_STATE_EXTERNAL4
      NAVIGATION_STATE_EXTERNAL5
      NAVIGATION_STATE_EXTERNAL6
      NAVIGATION_STATE_EXTERNAL7
      NAVIGATION_STATE_EXTERNAL8
      NAVIGATION_STATE_MAX
      FAILURE_NONE
      FAILURE_ROLL
      FAILURE_PITCH
      FAILURE_ALT
      FAILURE_EXT
      FAILURE_ARM_ESC
      FAILURE_BATTERY
      FAILURE_IMBALANCED_PROP
      FAILURE_MOTOR
      HIL_STATE_OFF
      HIL_STATE_ON
      VEHICLE_TYPE_UNKNOWN
      VEHICLE_TYPE_ROTARY_WING
      VEHICLE_TYPE_FIXED_WING
      VEHICLE_TYPE_ROVER
      VEHICLE_TYPE_AIRSHIP
      FAILSAFE_DEFER_STATE_DISABLED
      FAILSAFE_DEFER_STATE_ENABLED
      FAILSAFE_DEFER_STATE_WOULD_FAILSAFE
    """

    __slots__ = [
        '_timestamp',
        '_armed_time',
        '_takeoff_time',
        '_arming_state',
        '_latest_arming_reason',
        '_latest_disarming_reason',
        '_nav_state_timestamp',
        '_nav_state_user_intention',
        '_nav_state',
        '_executor_in_charge',
        '_valid_nav_states_mask',
        '_can_set_nav_states_mask',
        '_failure_detector_status',
        '_hil_state',
        '_vehicle_type',
        '_failsafe',
        '_failsafe_and_user_took_over',
        '_failsafe_defer_state',
        '_gcs_connection_lost',
        '_gcs_connection_lost_counter',
        '_high_latency_data_link_lost',
        '_is_vtol',
        '_is_vtol_tailsitter',
        '_in_transition_mode',
        '_in_transition_to_fw',
        '_system_type',
        '_system_id',
        '_component_id',
        '_safety_button_available',
        '_safety_off',
        '_power_input_valid',
        '_usb_connected',
        '_open_drone_id_system_present',
        '_open_drone_id_system_healthy',
        '_parachute_system_present',
        '_parachute_system_healthy',
        '_avoidance_system_required',
        '_avoidance_system_valid',
        '_rc_calibration_in_progress',
        '_calibration_enabled',
        '_pre_flight_checks_pass',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'armed_time': 'uint64',
        'takeoff_time': 'uint64',
        'arming_state': 'uint8',
        'latest_arming_reason': 'uint8',
        'latest_disarming_reason': 'uint8',
        'nav_state_timestamp': 'uint64',
        'nav_state_user_intention': 'uint8',
        'nav_state': 'uint8',
        'executor_in_charge': 'uint8',
        'valid_nav_states_mask': 'uint32',
        'can_set_nav_states_mask': 'uint32',
        'failure_detector_status': 'uint16',
        'hil_state': 'uint8',
        'vehicle_type': 'uint8',
        'failsafe': 'boolean',
        'failsafe_and_user_took_over': 'boolean',
        'failsafe_defer_state': 'uint8',
        'gcs_connection_lost': 'boolean',
        'gcs_connection_lost_counter': 'uint8',
        'high_latency_data_link_lost': 'boolean',
        'is_vtol': 'boolean',
        'is_vtol_tailsitter': 'boolean',
        'in_transition_mode': 'boolean',
        'in_transition_to_fw': 'boolean',
        'system_type': 'uint8',
        'system_id': 'uint8',
        'component_id': 'uint8',
        'safety_button_available': 'boolean',
        'safety_off': 'boolean',
        'power_input_valid': 'boolean',
        'usb_connected': 'boolean',
        'open_drone_id_system_present': 'boolean',
        'open_drone_id_system_healthy': 'boolean',
        'parachute_system_present': 'boolean',
        'parachute_system_healthy': 'boolean',
        'avoidance_system_required': 'boolean',
        'avoidance_system_valid': 'boolean',
        'rc_calibration_in_progress': 'boolean',
        'calibration_enabled': 'boolean',
        'pre_flight_checks_pass': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.armed_time = kwargs.get('armed_time', int())
        self.takeoff_time = kwargs.get('takeoff_time', int())
        self.arming_state = kwargs.get('arming_state', int())
        self.latest_arming_reason = kwargs.get('latest_arming_reason', int())
        self.latest_disarming_reason = kwargs.get('latest_disarming_reason', int())
        self.nav_state_timestamp = kwargs.get('nav_state_timestamp', int())
        self.nav_state_user_intention = kwargs.get('nav_state_user_intention', int())
        self.nav_state = kwargs.get('nav_state', int())
        self.executor_in_charge = kwargs.get('executor_in_charge', int())
        self.valid_nav_states_mask = kwargs.get('valid_nav_states_mask', int())
        self.can_set_nav_states_mask = kwargs.get('can_set_nav_states_mask', int())
        self.failure_detector_status = kwargs.get('failure_detector_status', int())
        self.hil_state = kwargs.get('hil_state', int())
        self.vehicle_type = kwargs.get('vehicle_type', int())
        self.failsafe = kwargs.get('failsafe', bool())
        self.failsafe_and_user_took_over = kwargs.get('failsafe_and_user_took_over', bool())
        self.failsafe_defer_state = kwargs.get('failsafe_defer_state', int())
        self.gcs_connection_lost = kwargs.get('gcs_connection_lost', bool())
        self.gcs_connection_lost_counter = kwargs.get('gcs_connection_lost_counter', int())
        self.high_latency_data_link_lost = kwargs.get('high_latency_data_link_lost', bool())
        self.is_vtol = kwargs.get('is_vtol', bool())
        self.is_vtol_tailsitter = kwargs.get('is_vtol_tailsitter', bool())
        self.in_transition_mode = kwargs.get('in_transition_mode', bool())
        self.in_transition_to_fw = kwargs.get('in_transition_to_fw', bool())
        self.system_type = kwargs.get('system_type', int())
        self.system_id = kwargs.get('system_id', int())
        self.component_id = kwargs.get('component_id', int())
        self.safety_button_available = kwargs.get('safety_button_available', bool())
        self.safety_off = kwargs.get('safety_off', bool())
        self.power_input_valid = kwargs.get('power_input_valid', bool())
        self.usb_connected = kwargs.get('usb_connected', bool())
        self.open_drone_id_system_present = kwargs.get('open_drone_id_system_present', bool())
        self.open_drone_id_system_healthy = kwargs.get('open_drone_id_system_healthy', bool())
        self.parachute_system_present = kwargs.get('parachute_system_present', bool())
        self.parachute_system_healthy = kwargs.get('parachute_system_healthy', bool())
        self.avoidance_system_required = kwargs.get('avoidance_system_required', bool())
        self.avoidance_system_valid = kwargs.get('avoidance_system_valid', bool())
        self.rc_calibration_in_progress = kwargs.get('rc_calibration_in_progress', bool())
        self.calibration_enabled = kwargs.get('calibration_enabled', bool())
        self.pre_flight_checks_pass = kwargs.get('pre_flight_checks_pass', bool())

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
        if self.armed_time != other.armed_time:
            return False
        if self.takeoff_time != other.takeoff_time:
            return False
        if self.arming_state != other.arming_state:
            return False
        if self.latest_arming_reason != other.latest_arming_reason:
            return False
        if self.latest_disarming_reason != other.latest_disarming_reason:
            return False
        if self.nav_state_timestamp != other.nav_state_timestamp:
            return False
        if self.nav_state_user_intention != other.nav_state_user_intention:
            return False
        if self.nav_state != other.nav_state:
            return False
        if self.executor_in_charge != other.executor_in_charge:
            return False
        if self.valid_nav_states_mask != other.valid_nav_states_mask:
            return False
        if self.can_set_nav_states_mask != other.can_set_nav_states_mask:
            return False
        if self.failure_detector_status != other.failure_detector_status:
            return False
        if self.hil_state != other.hil_state:
            return False
        if self.vehicle_type != other.vehicle_type:
            return False
        if self.failsafe != other.failsafe:
            return False
        if self.failsafe_and_user_took_over != other.failsafe_and_user_took_over:
            return False
        if self.failsafe_defer_state != other.failsafe_defer_state:
            return False
        if self.gcs_connection_lost != other.gcs_connection_lost:
            return False
        if self.gcs_connection_lost_counter != other.gcs_connection_lost_counter:
            return False
        if self.high_latency_data_link_lost != other.high_latency_data_link_lost:
            return False
        if self.is_vtol != other.is_vtol:
            return False
        if self.is_vtol_tailsitter != other.is_vtol_tailsitter:
            return False
        if self.in_transition_mode != other.in_transition_mode:
            return False
        if self.in_transition_to_fw != other.in_transition_to_fw:
            return False
        if self.system_type != other.system_type:
            return False
        if self.system_id != other.system_id:
            return False
        if self.component_id != other.component_id:
            return False
        if self.safety_button_available != other.safety_button_available:
            return False
        if self.safety_off != other.safety_off:
            return False
        if self.power_input_valid != other.power_input_valid:
            return False
        if self.usb_connected != other.usb_connected:
            return False
        if self.open_drone_id_system_present != other.open_drone_id_system_present:
            return False
        if self.open_drone_id_system_healthy != other.open_drone_id_system_healthy:
            return False
        if self.parachute_system_present != other.parachute_system_present:
            return False
        if self.parachute_system_healthy != other.parachute_system_healthy:
            return False
        if self.avoidance_system_required != other.avoidance_system_required:
            return False
        if self.avoidance_system_valid != other.avoidance_system_valid:
            return False
        if self.rc_calibration_in_progress != other.rc_calibration_in_progress:
            return False
        if self.calibration_enabled != other.calibration_enabled:
            return False
        if self.pre_flight_checks_pass != other.pre_flight_checks_pass:
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
    def armed_time(self):
        """Message field 'armed_time'."""
        return self._armed_time

    @armed_time.setter
    def armed_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'armed_time' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'armed_time' field must be an unsigned integer in [0, 18446744073709551615]"
        self._armed_time = value

    @builtins.property
    def takeoff_time(self):
        """Message field 'takeoff_time'."""
        return self._takeoff_time

    @takeoff_time.setter
    def takeoff_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'takeoff_time' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'takeoff_time' field must be an unsigned integer in [0, 18446744073709551615]"
        self._takeoff_time = value

    @builtins.property
    def arming_state(self):
        """Message field 'arming_state'."""
        return self._arming_state

    @arming_state.setter
    def arming_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arming_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'arming_state' field must be an unsigned integer in [0, 255]"
        self._arming_state = value

    @builtins.property
    def latest_arming_reason(self):
        """Message field 'latest_arming_reason'."""
        return self._latest_arming_reason

    @latest_arming_reason.setter
    def latest_arming_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'latest_arming_reason' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'latest_arming_reason' field must be an unsigned integer in [0, 255]"
        self._latest_arming_reason = value

    @builtins.property
    def latest_disarming_reason(self):
        """Message field 'latest_disarming_reason'."""
        return self._latest_disarming_reason

    @latest_disarming_reason.setter
    def latest_disarming_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'latest_disarming_reason' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'latest_disarming_reason' field must be an unsigned integer in [0, 255]"
        self._latest_disarming_reason = value

    @builtins.property
    def nav_state_timestamp(self):
        """Message field 'nav_state_timestamp'."""
        return self._nav_state_timestamp

    @nav_state_timestamp.setter
    def nav_state_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nav_state_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'nav_state_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._nav_state_timestamp = value

    @builtins.property
    def nav_state_user_intention(self):
        """Message field 'nav_state_user_intention'."""
        return self._nav_state_user_intention

    @nav_state_user_intention.setter
    def nav_state_user_intention(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nav_state_user_intention' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nav_state_user_intention' field must be an unsigned integer in [0, 255]"
        self._nav_state_user_intention = value

    @builtins.property
    def nav_state(self):
        """Message field 'nav_state'."""
        return self._nav_state

    @nav_state.setter
    def nav_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nav_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nav_state' field must be an unsigned integer in [0, 255]"
        self._nav_state = value

    @builtins.property
    def executor_in_charge(self):
        """Message field 'executor_in_charge'."""
        return self._executor_in_charge

    @executor_in_charge.setter
    def executor_in_charge(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'executor_in_charge' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'executor_in_charge' field must be an unsigned integer in [0, 255]"
        self._executor_in_charge = value

    @builtins.property
    def valid_nav_states_mask(self):
        """Message field 'valid_nav_states_mask'."""
        return self._valid_nav_states_mask

    @valid_nav_states_mask.setter
    def valid_nav_states_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'valid_nav_states_mask' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'valid_nav_states_mask' field must be an unsigned integer in [0, 4294967295]"
        self._valid_nav_states_mask = value

    @builtins.property
    def can_set_nav_states_mask(self):
        """Message field 'can_set_nav_states_mask'."""
        return self._can_set_nav_states_mask

    @can_set_nav_states_mask.setter
    def can_set_nav_states_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_set_nav_states_mask' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'can_set_nav_states_mask' field must be an unsigned integer in [0, 4294967295]"
        self._can_set_nav_states_mask = value

    @builtins.property
    def failure_detector_status(self):
        """Message field 'failure_detector_status'."""
        return self._failure_detector_status

    @failure_detector_status.setter
    def failure_detector_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'failure_detector_status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'failure_detector_status' field must be an unsigned integer in [0, 65535]"
        self._failure_detector_status = value

    @builtins.property
    def hil_state(self):
        """Message field 'hil_state'."""
        return self._hil_state

    @hil_state.setter
    def hil_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hil_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hil_state' field must be an unsigned integer in [0, 255]"
        self._hil_state = value

    @builtins.property
    def vehicle_type(self):
        """Message field 'vehicle_type'."""
        return self._vehicle_type

    @vehicle_type.setter
    def vehicle_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vehicle_type' field must be an unsigned integer in [0, 255]"
        self._vehicle_type = value

    @builtins.property
    def failsafe(self):
        """Message field 'failsafe'."""
        return self._failsafe

    @failsafe.setter
    def failsafe(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'failsafe' field must be of type 'bool'"
        self._failsafe = value

    @builtins.property
    def failsafe_and_user_took_over(self):
        """Message field 'failsafe_and_user_took_over'."""
        return self._failsafe_and_user_took_over

    @failsafe_and_user_took_over.setter
    def failsafe_and_user_took_over(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'failsafe_and_user_took_over' field must be of type 'bool'"
        self._failsafe_and_user_took_over = value

    @builtins.property
    def failsafe_defer_state(self):
        """Message field 'failsafe_defer_state'."""
        return self._failsafe_defer_state

    @failsafe_defer_state.setter
    def failsafe_defer_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'failsafe_defer_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'failsafe_defer_state' field must be an unsigned integer in [0, 255]"
        self._failsafe_defer_state = value

    @builtins.property
    def gcs_connection_lost(self):
        """Message field 'gcs_connection_lost'."""
        return self._gcs_connection_lost

    @gcs_connection_lost.setter
    def gcs_connection_lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gcs_connection_lost' field must be of type 'bool'"
        self._gcs_connection_lost = value

    @builtins.property
    def gcs_connection_lost_counter(self):
        """Message field 'gcs_connection_lost_counter'."""
        return self._gcs_connection_lost_counter

    @gcs_connection_lost_counter.setter
    def gcs_connection_lost_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gcs_connection_lost_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gcs_connection_lost_counter' field must be an unsigned integer in [0, 255]"
        self._gcs_connection_lost_counter = value

    @builtins.property
    def high_latency_data_link_lost(self):
        """Message field 'high_latency_data_link_lost'."""
        return self._high_latency_data_link_lost

    @high_latency_data_link_lost.setter
    def high_latency_data_link_lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'high_latency_data_link_lost' field must be of type 'bool'"
        self._high_latency_data_link_lost = value

    @builtins.property
    def is_vtol(self):
        """Message field 'is_vtol'."""
        return self._is_vtol

    @is_vtol.setter
    def is_vtol(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_vtol' field must be of type 'bool'"
        self._is_vtol = value

    @builtins.property
    def is_vtol_tailsitter(self):
        """Message field 'is_vtol_tailsitter'."""
        return self._is_vtol_tailsitter

    @is_vtol_tailsitter.setter
    def is_vtol_tailsitter(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_vtol_tailsitter' field must be of type 'bool'"
        self._is_vtol_tailsitter = value

    @builtins.property
    def in_transition_mode(self):
        """Message field 'in_transition_mode'."""
        return self._in_transition_mode

    @in_transition_mode.setter
    def in_transition_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_transition_mode' field must be of type 'bool'"
        self._in_transition_mode = value

    @builtins.property
    def in_transition_to_fw(self):
        """Message field 'in_transition_to_fw'."""
        return self._in_transition_to_fw

    @in_transition_to_fw.setter
    def in_transition_to_fw(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_transition_to_fw' field must be of type 'bool'"
        self._in_transition_to_fw = value

    @builtins.property
    def system_type(self):
        """Message field 'system_type'."""
        return self._system_type

    @system_type.setter
    def system_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'system_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'system_type' field must be an unsigned integer in [0, 255]"
        self._system_type = value

    @builtins.property
    def system_id(self):
        """Message field 'system_id'."""
        return self._system_id

    @system_id.setter
    def system_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'system_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'system_id' field must be an unsigned integer in [0, 255]"
        self._system_id = value

    @builtins.property
    def component_id(self):
        """Message field 'component_id'."""
        return self._component_id

    @component_id.setter
    def component_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'component_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'component_id' field must be an unsigned integer in [0, 255]"
        self._component_id = value

    @builtins.property
    def safety_button_available(self):
        """Message field 'safety_button_available'."""
        return self._safety_button_available

    @safety_button_available.setter
    def safety_button_available(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safety_button_available' field must be of type 'bool'"
        self._safety_button_available = value

    @builtins.property
    def safety_off(self):
        """Message field 'safety_off'."""
        return self._safety_off

    @safety_off.setter
    def safety_off(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'safety_off' field must be of type 'bool'"
        self._safety_off = value

    @builtins.property
    def power_input_valid(self):
        """Message field 'power_input_valid'."""
        return self._power_input_valid

    @power_input_valid.setter
    def power_input_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'power_input_valid' field must be of type 'bool'"
        self._power_input_valid = value

    @builtins.property
    def usb_connected(self):
        """Message field 'usb_connected'."""
        return self._usb_connected

    @usb_connected.setter
    def usb_connected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'usb_connected' field must be of type 'bool'"
        self._usb_connected = value

    @builtins.property
    def open_drone_id_system_present(self):
        """Message field 'open_drone_id_system_present'."""
        return self._open_drone_id_system_present

    @open_drone_id_system_present.setter
    def open_drone_id_system_present(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'open_drone_id_system_present' field must be of type 'bool'"
        self._open_drone_id_system_present = value

    @builtins.property
    def open_drone_id_system_healthy(self):
        """Message field 'open_drone_id_system_healthy'."""
        return self._open_drone_id_system_healthy

    @open_drone_id_system_healthy.setter
    def open_drone_id_system_healthy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'open_drone_id_system_healthy' field must be of type 'bool'"
        self._open_drone_id_system_healthy = value

    @builtins.property
    def parachute_system_present(self):
        """Message field 'parachute_system_present'."""
        return self._parachute_system_present

    @parachute_system_present.setter
    def parachute_system_present(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'parachute_system_present' field must be of type 'bool'"
        self._parachute_system_present = value

    @builtins.property
    def parachute_system_healthy(self):
        """Message field 'parachute_system_healthy'."""
        return self._parachute_system_healthy

    @parachute_system_healthy.setter
    def parachute_system_healthy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'parachute_system_healthy' field must be of type 'bool'"
        self._parachute_system_healthy = value

    @builtins.property
    def avoidance_system_required(self):
        """Message field 'avoidance_system_required'."""
        return self._avoidance_system_required

    @avoidance_system_required.setter
    def avoidance_system_required(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'avoidance_system_required' field must be of type 'bool'"
        self._avoidance_system_required = value

    @builtins.property
    def avoidance_system_valid(self):
        """Message field 'avoidance_system_valid'."""
        return self._avoidance_system_valid

    @avoidance_system_valid.setter
    def avoidance_system_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'avoidance_system_valid' field must be of type 'bool'"
        self._avoidance_system_valid = value

    @builtins.property
    def rc_calibration_in_progress(self):
        """Message field 'rc_calibration_in_progress'."""
        return self._rc_calibration_in_progress

    @rc_calibration_in_progress.setter
    def rc_calibration_in_progress(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rc_calibration_in_progress' field must be of type 'bool'"
        self._rc_calibration_in_progress = value

    @builtins.property
    def calibration_enabled(self):
        """Message field 'calibration_enabled'."""
        return self._calibration_enabled

    @calibration_enabled.setter
    def calibration_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'calibration_enabled' field must be of type 'bool'"
        self._calibration_enabled = value

    @builtins.property
    def pre_flight_checks_pass(self):
        """Message field 'pre_flight_checks_pass'."""
        return self._pre_flight_checks_pass

    @pre_flight_checks_pass.setter
    def pre_flight_checks_pass(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pre_flight_checks_pass' field must be of type 'bool'"
        self._pre_flight_checks_pass = value
