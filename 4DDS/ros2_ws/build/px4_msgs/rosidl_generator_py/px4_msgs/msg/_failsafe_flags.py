# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/FailsafeFlags.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FailsafeFlags(type):
    """Metaclass of message 'FailsafeFlags'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'px4_msgs.msg.FailsafeFlags')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__failsafe_flags
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__failsafe_flags
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__failsafe_flags
            cls._TYPE_SUPPORT = module.type_support_msg__msg__failsafe_flags
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__failsafe_flags

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FailsafeFlags(metaclass=Metaclass_FailsafeFlags):
    """Message class 'FailsafeFlags'."""

    __slots__ = [
        '_timestamp',
        '_mode_req_angular_velocity',
        '_mode_req_attitude',
        '_mode_req_local_alt',
        '_mode_req_local_position',
        '_mode_req_local_position_relaxed',
        '_mode_req_global_position',
        '_mode_req_mission',
        '_mode_req_offboard_signal',
        '_mode_req_home_position',
        '_mode_req_wind_and_flight_time_compliance',
        '_mode_req_prevent_arming',
        '_mode_req_manual_control',
        '_mode_req_other',
        '_angular_velocity_invalid',
        '_attitude_invalid',
        '_local_altitude_invalid',
        '_local_position_invalid',
        '_local_position_invalid_relaxed',
        '_local_velocity_invalid',
        '_global_position_invalid',
        '_auto_mission_missing',
        '_offboard_control_signal_lost',
        '_home_position_invalid',
        '_manual_control_signal_lost',
        '_gcs_connection_lost',
        '_battery_warning',
        '_battery_low_remaining_time',
        '_battery_unhealthy',
        '_geofence_breached',
        '_mission_failure',
        '_vtol_fixed_wing_system_failure',
        '_wind_limit_exceeded',
        '_flight_time_limit_exceeded',
        '_local_position_accuracy_low',
        '_fd_critical_failure',
        '_fd_esc_arming_failure',
        '_fd_imbalanced_prop',
        '_fd_motor_failure',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'mode_req_angular_velocity': 'uint32',
        'mode_req_attitude': 'uint32',
        'mode_req_local_alt': 'uint32',
        'mode_req_local_position': 'uint32',
        'mode_req_local_position_relaxed': 'uint32',
        'mode_req_global_position': 'uint32',
        'mode_req_mission': 'uint32',
        'mode_req_offboard_signal': 'uint32',
        'mode_req_home_position': 'uint32',
        'mode_req_wind_and_flight_time_compliance': 'uint32',
        'mode_req_prevent_arming': 'uint32',
        'mode_req_manual_control': 'uint32',
        'mode_req_other': 'uint32',
        'angular_velocity_invalid': 'boolean',
        'attitude_invalid': 'boolean',
        'local_altitude_invalid': 'boolean',
        'local_position_invalid': 'boolean',
        'local_position_invalid_relaxed': 'boolean',
        'local_velocity_invalid': 'boolean',
        'global_position_invalid': 'boolean',
        'auto_mission_missing': 'boolean',
        'offboard_control_signal_lost': 'boolean',
        'home_position_invalid': 'boolean',
        'manual_control_signal_lost': 'boolean',
        'gcs_connection_lost': 'boolean',
        'battery_warning': 'uint8',
        'battery_low_remaining_time': 'boolean',
        'battery_unhealthy': 'boolean',
        'geofence_breached': 'boolean',
        'mission_failure': 'boolean',
        'vtol_fixed_wing_system_failure': 'boolean',
        'wind_limit_exceeded': 'boolean',
        'flight_time_limit_exceeded': 'boolean',
        'local_position_accuracy_low': 'boolean',
        'fd_critical_failure': 'boolean',
        'fd_esc_arming_failure': 'boolean',
        'fd_imbalanced_prop': 'boolean',
        'fd_motor_failure': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.mode_req_angular_velocity = kwargs.get('mode_req_angular_velocity', int())
        self.mode_req_attitude = kwargs.get('mode_req_attitude', int())
        self.mode_req_local_alt = kwargs.get('mode_req_local_alt', int())
        self.mode_req_local_position = kwargs.get('mode_req_local_position', int())
        self.mode_req_local_position_relaxed = kwargs.get('mode_req_local_position_relaxed', int())
        self.mode_req_global_position = kwargs.get('mode_req_global_position', int())
        self.mode_req_mission = kwargs.get('mode_req_mission', int())
        self.mode_req_offboard_signal = kwargs.get('mode_req_offboard_signal', int())
        self.mode_req_home_position = kwargs.get('mode_req_home_position', int())
        self.mode_req_wind_and_flight_time_compliance = kwargs.get('mode_req_wind_and_flight_time_compliance', int())
        self.mode_req_prevent_arming = kwargs.get('mode_req_prevent_arming', int())
        self.mode_req_manual_control = kwargs.get('mode_req_manual_control', int())
        self.mode_req_other = kwargs.get('mode_req_other', int())
        self.angular_velocity_invalid = kwargs.get('angular_velocity_invalid', bool())
        self.attitude_invalid = kwargs.get('attitude_invalid', bool())
        self.local_altitude_invalid = kwargs.get('local_altitude_invalid', bool())
        self.local_position_invalid = kwargs.get('local_position_invalid', bool())
        self.local_position_invalid_relaxed = kwargs.get('local_position_invalid_relaxed', bool())
        self.local_velocity_invalid = kwargs.get('local_velocity_invalid', bool())
        self.global_position_invalid = kwargs.get('global_position_invalid', bool())
        self.auto_mission_missing = kwargs.get('auto_mission_missing', bool())
        self.offboard_control_signal_lost = kwargs.get('offboard_control_signal_lost', bool())
        self.home_position_invalid = kwargs.get('home_position_invalid', bool())
        self.manual_control_signal_lost = kwargs.get('manual_control_signal_lost', bool())
        self.gcs_connection_lost = kwargs.get('gcs_connection_lost', bool())
        self.battery_warning = kwargs.get('battery_warning', int())
        self.battery_low_remaining_time = kwargs.get('battery_low_remaining_time', bool())
        self.battery_unhealthy = kwargs.get('battery_unhealthy', bool())
        self.geofence_breached = kwargs.get('geofence_breached', bool())
        self.mission_failure = kwargs.get('mission_failure', bool())
        self.vtol_fixed_wing_system_failure = kwargs.get('vtol_fixed_wing_system_failure', bool())
        self.wind_limit_exceeded = kwargs.get('wind_limit_exceeded', bool())
        self.flight_time_limit_exceeded = kwargs.get('flight_time_limit_exceeded', bool())
        self.local_position_accuracy_low = kwargs.get('local_position_accuracy_low', bool())
        self.fd_critical_failure = kwargs.get('fd_critical_failure', bool())
        self.fd_esc_arming_failure = kwargs.get('fd_esc_arming_failure', bool())
        self.fd_imbalanced_prop = kwargs.get('fd_imbalanced_prop', bool())
        self.fd_motor_failure = kwargs.get('fd_motor_failure', bool())

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
        if self.mode_req_angular_velocity != other.mode_req_angular_velocity:
            return False
        if self.mode_req_attitude != other.mode_req_attitude:
            return False
        if self.mode_req_local_alt != other.mode_req_local_alt:
            return False
        if self.mode_req_local_position != other.mode_req_local_position:
            return False
        if self.mode_req_local_position_relaxed != other.mode_req_local_position_relaxed:
            return False
        if self.mode_req_global_position != other.mode_req_global_position:
            return False
        if self.mode_req_mission != other.mode_req_mission:
            return False
        if self.mode_req_offboard_signal != other.mode_req_offboard_signal:
            return False
        if self.mode_req_home_position != other.mode_req_home_position:
            return False
        if self.mode_req_wind_and_flight_time_compliance != other.mode_req_wind_and_flight_time_compliance:
            return False
        if self.mode_req_prevent_arming != other.mode_req_prevent_arming:
            return False
        if self.mode_req_manual_control != other.mode_req_manual_control:
            return False
        if self.mode_req_other != other.mode_req_other:
            return False
        if self.angular_velocity_invalid != other.angular_velocity_invalid:
            return False
        if self.attitude_invalid != other.attitude_invalid:
            return False
        if self.local_altitude_invalid != other.local_altitude_invalid:
            return False
        if self.local_position_invalid != other.local_position_invalid:
            return False
        if self.local_position_invalid_relaxed != other.local_position_invalid_relaxed:
            return False
        if self.local_velocity_invalid != other.local_velocity_invalid:
            return False
        if self.global_position_invalid != other.global_position_invalid:
            return False
        if self.auto_mission_missing != other.auto_mission_missing:
            return False
        if self.offboard_control_signal_lost != other.offboard_control_signal_lost:
            return False
        if self.home_position_invalid != other.home_position_invalid:
            return False
        if self.manual_control_signal_lost != other.manual_control_signal_lost:
            return False
        if self.gcs_connection_lost != other.gcs_connection_lost:
            return False
        if self.battery_warning != other.battery_warning:
            return False
        if self.battery_low_remaining_time != other.battery_low_remaining_time:
            return False
        if self.battery_unhealthy != other.battery_unhealthy:
            return False
        if self.geofence_breached != other.geofence_breached:
            return False
        if self.mission_failure != other.mission_failure:
            return False
        if self.vtol_fixed_wing_system_failure != other.vtol_fixed_wing_system_failure:
            return False
        if self.wind_limit_exceeded != other.wind_limit_exceeded:
            return False
        if self.flight_time_limit_exceeded != other.flight_time_limit_exceeded:
            return False
        if self.local_position_accuracy_low != other.local_position_accuracy_low:
            return False
        if self.fd_critical_failure != other.fd_critical_failure:
            return False
        if self.fd_esc_arming_failure != other.fd_esc_arming_failure:
            return False
        if self.fd_imbalanced_prop != other.fd_imbalanced_prop:
            return False
        if self.fd_motor_failure != other.fd_motor_failure:
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
    def mode_req_angular_velocity(self):
        """Message field 'mode_req_angular_velocity'."""
        return self._mode_req_angular_velocity

    @mode_req_angular_velocity.setter
    def mode_req_angular_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_angular_velocity' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_angular_velocity' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_angular_velocity = value

    @builtins.property
    def mode_req_attitude(self):
        """Message field 'mode_req_attitude'."""
        return self._mode_req_attitude

    @mode_req_attitude.setter
    def mode_req_attitude(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_attitude' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_attitude' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_attitude = value

    @builtins.property
    def mode_req_local_alt(self):
        """Message field 'mode_req_local_alt'."""
        return self._mode_req_local_alt

    @mode_req_local_alt.setter
    def mode_req_local_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_local_alt' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_local_alt' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_local_alt = value

    @builtins.property
    def mode_req_local_position(self):
        """Message field 'mode_req_local_position'."""
        return self._mode_req_local_position

    @mode_req_local_position.setter
    def mode_req_local_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_local_position' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_local_position' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_local_position = value

    @builtins.property
    def mode_req_local_position_relaxed(self):
        """Message field 'mode_req_local_position_relaxed'."""
        return self._mode_req_local_position_relaxed

    @mode_req_local_position_relaxed.setter
    def mode_req_local_position_relaxed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_local_position_relaxed' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_local_position_relaxed' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_local_position_relaxed = value

    @builtins.property
    def mode_req_global_position(self):
        """Message field 'mode_req_global_position'."""
        return self._mode_req_global_position

    @mode_req_global_position.setter
    def mode_req_global_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_global_position' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_global_position' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_global_position = value

    @builtins.property
    def mode_req_mission(self):
        """Message field 'mode_req_mission'."""
        return self._mode_req_mission

    @mode_req_mission.setter
    def mode_req_mission(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_mission' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_mission' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_mission = value

    @builtins.property
    def mode_req_offboard_signal(self):
        """Message field 'mode_req_offboard_signal'."""
        return self._mode_req_offboard_signal

    @mode_req_offboard_signal.setter
    def mode_req_offboard_signal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_offboard_signal' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_offboard_signal' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_offboard_signal = value

    @builtins.property
    def mode_req_home_position(self):
        """Message field 'mode_req_home_position'."""
        return self._mode_req_home_position

    @mode_req_home_position.setter
    def mode_req_home_position(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_home_position' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_home_position' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_home_position = value

    @builtins.property
    def mode_req_wind_and_flight_time_compliance(self):
        """Message field 'mode_req_wind_and_flight_time_compliance'."""
        return self._mode_req_wind_and_flight_time_compliance

    @mode_req_wind_and_flight_time_compliance.setter
    def mode_req_wind_and_flight_time_compliance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_wind_and_flight_time_compliance' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_wind_and_flight_time_compliance' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_wind_and_flight_time_compliance = value

    @builtins.property
    def mode_req_prevent_arming(self):
        """Message field 'mode_req_prevent_arming'."""
        return self._mode_req_prevent_arming

    @mode_req_prevent_arming.setter
    def mode_req_prevent_arming(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_prevent_arming' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_prevent_arming' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_prevent_arming = value

    @builtins.property
    def mode_req_manual_control(self):
        """Message field 'mode_req_manual_control'."""
        return self._mode_req_manual_control

    @mode_req_manual_control.setter
    def mode_req_manual_control(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_manual_control' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_manual_control' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_manual_control = value

    @builtins.property
    def mode_req_other(self):
        """Message field 'mode_req_other'."""
        return self._mode_req_other

    @mode_req_other.setter
    def mode_req_other(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_req_other' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mode_req_other' field must be an unsigned integer in [0, 4294967295]"
        self._mode_req_other = value

    @builtins.property
    def angular_velocity_invalid(self):
        """Message field 'angular_velocity_invalid'."""
        return self._angular_velocity_invalid

    @angular_velocity_invalid.setter
    def angular_velocity_invalid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'angular_velocity_invalid' field must be of type 'bool'"
        self._angular_velocity_invalid = value

    @builtins.property
    def attitude_invalid(self):
        """Message field 'attitude_invalid'."""
        return self._attitude_invalid

    @attitude_invalid.setter
    def attitude_invalid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'attitude_invalid' field must be of type 'bool'"
        self._attitude_invalid = value

    @builtins.property
    def local_altitude_invalid(self):
        """Message field 'local_altitude_invalid'."""
        return self._local_altitude_invalid

    @local_altitude_invalid.setter
    def local_altitude_invalid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_altitude_invalid' field must be of type 'bool'"
        self._local_altitude_invalid = value

    @builtins.property
    def local_position_invalid(self):
        """Message field 'local_position_invalid'."""
        return self._local_position_invalid

    @local_position_invalid.setter
    def local_position_invalid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_position_invalid' field must be of type 'bool'"
        self._local_position_invalid = value

    @builtins.property
    def local_position_invalid_relaxed(self):
        """Message field 'local_position_invalid_relaxed'."""
        return self._local_position_invalid_relaxed

    @local_position_invalid_relaxed.setter
    def local_position_invalid_relaxed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_position_invalid_relaxed' field must be of type 'bool'"
        self._local_position_invalid_relaxed = value

    @builtins.property
    def local_velocity_invalid(self):
        """Message field 'local_velocity_invalid'."""
        return self._local_velocity_invalid

    @local_velocity_invalid.setter
    def local_velocity_invalid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_velocity_invalid' field must be of type 'bool'"
        self._local_velocity_invalid = value

    @builtins.property
    def global_position_invalid(self):
        """Message field 'global_position_invalid'."""
        return self._global_position_invalid

    @global_position_invalid.setter
    def global_position_invalid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'global_position_invalid' field must be of type 'bool'"
        self._global_position_invalid = value

    @builtins.property
    def auto_mission_missing(self):
        """Message field 'auto_mission_missing'."""
        return self._auto_mission_missing

    @auto_mission_missing.setter
    def auto_mission_missing(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_mission_missing' field must be of type 'bool'"
        self._auto_mission_missing = value

    @builtins.property
    def offboard_control_signal_lost(self):
        """Message field 'offboard_control_signal_lost'."""
        return self._offboard_control_signal_lost

    @offboard_control_signal_lost.setter
    def offboard_control_signal_lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'offboard_control_signal_lost' field must be of type 'bool'"
        self._offboard_control_signal_lost = value

    @builtins.property
    def home_position_invalid(self):
        """Message field 'home_position_invalid'."""
        return self._home_position_invalid

    @home_position_invalid.setter
    def home_position_invalid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'home_position_invalid' field must be of type 'bool'"
        self._home_position_invalid = value

    @builtins.property
    def manual_control_signal_lost(self):
        """Message field 'manual_control_signal_lost'."""
        return self._manual_control_signal_lost

    @manual_control_signal_lost.setter
    def manual_control_signal_lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'manual_control_signal_lost' field must be of type 'bool'"
        self._manual_control_signal_lost = value

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
    def battery_warning(self):
        """Message field 'battery_warning'."""
        return self._battery_warning

    @battery_warning.setter
    def battery_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'battery_warning' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'battery_warning' field must be an unsigned integer in [0, 255]"
        self._battery_warning = value

    @builtins.property
    def battery_low_remaining_time(self):
        """Message field 'battery_low_remaining_time'."""
        return self._battery_low_remaining_time

    @battery_low_remaining_time.setter
    def battery_low_remaining_time(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'battery_low_remaining_time' field must be of type 'bool'"
        self._battery_low_remaining_time = value

    @builtins.property
    def battery_unhealthy(self):
        """Message field 'battery_unhealthy'."""
        return self._battery_unhealthy

    @battery_unhealthy.setter
    def battery_unhealthy(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'battery_unhealthy' field must be of type 'bool'"
        self._battery_unhealthy = value

    @builtins.property
    def geofence_breached(self):
        """Message field 'geofence_breached'."""
        return self._geofence_breached

    @geofence_breached.setter
    def geofence_breached(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'geofence_breached' field must be of type 'bool'"
        self._geofence_breached = value

    @builtins.property
    def mission_failure(self):
        """Message field 'mission_failure'."""
        return self._mission_failure

    @mission_failure.setter
    def mission_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mission_failure' field must be of type 'bool'"
        self._mission_failure = value

    @builtins.property
    def vtol_fixed_wing_system_failure(self):
        """Message field 'vtol_fixed_wing_system_failure'."""
        return self._vtol_fixed_wing_system_failure

    @vtol_fixed_wing_system_failure.setter
    def vtol_fixed_wing_system_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vtol_fixed_wing_system_failure' field must be of type 'bool'"
        self._vtol_fixed_wing_system_failure = value

    @builtins.property
    def wind_limit_exceeded(self):
        """Message field 'wind_limit_exceeded'."""
        return self._wind_limit_exceeded

    @wind_limit_exceeded.setter
    def wind_limit_exceeded(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'wind_limit_exceeded' field must be of type 'bool'"
        self._wind_limit_exceeded = value

    @builtins.property
    def flight_time_limit_exceeded(self):
        """Message field 'flight_time_limit_exceeded'."""
        return self._flight_time_limit_exceeded

    @flight_time_limit_exceeded.setter
    def flight_time_limit_exceeded(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flight_time_limit_exceeded' field must be of type 'bool'"
        self._flight_time_limit_exceeded = value

    @builtins.property
    def local_position_accuracy_low(self):
        """Message field 'local_position_accuracy_low'."""
        return self._local_position_accuracy_low

    @local_position_accuracy_low.setter
    def local_position_accuracy_low(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'local_position_accuracy_low' field must be of type 'bool'"
        self._local_position_accuracy_low = value

    @builtins.property
    def fd_critical_failure(self):
        """Message field 'fd_critical_failure'."""
        return self._fd_critical_failure

    @fd_critical_failure.setter
    def fd_critical_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fd_critical_failure' field must be of type 'bool'"
        self._fd_critical_failure = value

    @builtins.property
    def fd_esc_arming_failure(self):
        """Message field 'fd_esc_arming_failure'."""
        return self._fd_esc_arming_failure

    @fd_esc_arming_failure.setter
    def fd_esc_arming_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fd_esc_arming_failure' field must be of type 'bool'"
        self._fd_esc_arming_failure = value

    @builtins.property
    def fd_imbalanced_prop(self):
        """Message field 'fd_imbalanced_prop'."""
        return self._fd_imbalanced_prop

    @fd_imbalanced_prop.setter
    def fd_imbalanced_prop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fd_imbalanced_prop' field must be of type 'bool'"
        self._fd_imbalanced_prop = value

    @builtins.property
    def fd_motor_failure(self):
        """Message field 'fd_motor_failure'."""
        return self._fd_motor_failure

    @fd_motor_failure.setter
    def fd_motor_failure(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fd_motor_failure' field must be of type 'bool'"
        self._fd_motor_failure = value
