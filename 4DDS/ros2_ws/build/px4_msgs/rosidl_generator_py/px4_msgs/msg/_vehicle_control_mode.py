# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleControlMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleControlMode(type):
    """Metaclass of message 'VehicleControlMode'."""

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
                'px4_msgs.msg.VehicleControlMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_control_mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_control_mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_control_mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_control_mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_control_mode

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleControlMode(metaclass=Metaclass_VehicleControlMode):
    """Message class 'VehicleControlMode'."""

    __slots__ = [
        '_timestamp',
        '_flag_armed',
        '_flag_multicopter_position_control_enabled',
        '_flag_control_manual_enabled',
        '_flag_control_auto_enabled',
        '_flag_control_offboard_enabled',
        '_flag_control_position_enabled',
        '_flag_control_velocity_enabled',
        '_flag_control_altitude_enabled',
        '_flag_control_climb_rate_enabled',
        '_flag_control_acceleration_enabled',
        '_flag_control_attitude_enabled',
        '_flag_control_rates_enabled',
        '_flag_control_allocation_enabled',
        '_flag_control_termination_enabled',
        '_source_id',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'flag_armed': 'boolean',
        'flag_multicopter_position_control_enabled': 'boolean',
        'flag_control_manual_enabled': 'boolean',
        'flag_control_auto_enabled': 'boolean',
        'flag_control_offboard_enabled': 'boolean',
        'flag_control_position_enabled': 'boolean',
        'flag_control_velocity_enabled': 'boolean',
        'flag_control_altitude_enabled': 'boolean',
        'flag_control_climb_rate_enabled': 'boolean',
        'flag_control_acceleration_enabled': 'boolean',
        'flag_control_attitude_enabled': 'boolean',
        'flag_control_rates_enabled': 'boolean',
        'flag_control_allocation_enabled': 'boolean',
        'flag_control_termination_enabled': 'boolean',
        'source_id': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.flag_armed = kwargs.get('flag_armed', bool())
        self.flag_multicopter_position_control_enabled = kwargs.get('flag_multicopter_position_control_enabled', bool())
        self.flag_control_manual_enabled = kwargs.get('flag_control_manual_enabled', bool())
        self.flag_control_auto_enabled = kwargs.get('flag_control_auto_enabled', bool())
        self.flag_control_offboard_enabled = kwargs.get('flag_control_offboard_enabled', bool())
        self.flag_control_position_enabled = kwargs.get('flag_control_position_enabled', bool())
        self.flag_control_velocity_enabled = kwargs.get('flag_control_velocity_enabled', bool())
        self.flag_control_altitude_enabled = kwargs.get('flag_control_altitude_enabled', bool())
        self.flag_control_climb_rate_enabled = kwargs.get('flag_control_climb_rate_enabled', bool())
        self.flag_control_acceleration_enabled = kwargs.get('flag_control_acceleration_enabled', bool())
        self.flag_control_attitude_enabled = kwargs.get('flag_control_attitude_enabled', bool())
        self.flag_control_rates_enabled = kwargs.get('flag_control_rates_enabled', bool())
        self.flag_control_allocation_enabled = kwargs.get('flag_control_allocation_enabled', bool())
        self.flag_control_termination_enabled = kwargs.get('flag_control_termination_enabled', bool())
        self.source_id = kwargs.get('source_id', int())

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
        if self.flag_armed != other.flag_armed:
            return False
        if self.flag_multicopter_position_control_enabled != other.flag_multicopter_position_control_enabled:
            return False
        if self.flag_control_manual_enabled != other.flag_control_manual_enabled:
            return False
        if self.flag_control_auto_enabled != other.flag_control_auto_enabled:
            return False
        if self.flag_control_offboard_enabled != other.flag_control_offboard_enabled:
            return False
        if self.flag_control_position_enabled != other.flag_control_position_enabled:
            return False
        if self.flag_control_velocity_enabled != other.flag_control_velocity_enabled:
            return False
        if self.flag_control_altitude_enabled != other.flag_control_altitude_enabled:
            return False
        if self.flag_control_climb_rate_enabled != other.flag_control_climb_rate_enabled:
            return False
        if self.flag_control_acceleration_enabled != other.flag_control_acceleration_enabled:
            return False
        if self.flag_control_attitude_enabled != other.flag_control_attitude_enabled:
            return False
        if self.flag_control_rates_enabled != other.flag_control_rates_enabled:
            return False
        if self.flag_control_allocation_enabled != other.flag_control_allocation_enabled:
            return False
        if self.flag_control_termination_enabled != other.flag_control_termination_enabled:
            return False
        if self.source_id != other.source_id:
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
    def flag_armed(self):
        """Message field 'flag_armed'."""
        return self._flag_armed

    @flag_armed.setter
    def flag_armed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_armed' field must be of type 'bool'"
        self._flag_armed = value

    @builtins.property
    def flag_multicopter_position_control_enabled(self):
        """Message field 'flag_multicopter_position_control_enabled'."""
        return self._flag_multicopter_position_control_enabled

    @flag_multicopter_position_control_enabled.setter
    def flag_multicopter_position_control_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_multicopter_position_control_enabled' field must be of type 'bool'"
        self._flag_multicopter_position_control_enabled = value

    @builtins.property
    def flag_control_manual_enabled(self):
        """Message field 'flag_control_manual_enabled'."""
        return self._flag_control_manual_enabled

    @flag_control_manual_enabled.setter
    def flag_control_manual_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_control_manual_enabled' field must be of type 'bool'"
        self._flag_control_manual_enabled = value

    @builtins.property
    def flag_control_auto_enabled(self):
        """Message field 'flag_control_auto_enabled'."""
        return self._flag_control_auto_enabled

    @flag_control_auto_enabled.setter
    def flag_control_auto_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_control_auto_enabled' field must be of type 'bool'"
        self._flag_control_auto_enabled = value

    @builtins.property
    def flag_control_offboard_enabled(self):
        """Message field 'flag_control_offboard_enabled'."""
        return self._flag_control_offboard_enabled

    @flag_control_offboard_enabled.setter
    def flag_control_offboard_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_control_offboard_enabled' field must be of type 'bool'"
        self._flag_control_offboard_enabled = value

    @builtins.property
    def flag_control_position_enabled(self):
        """Message field 'flag_control_position_enabled'."""
        return self._flag_control_position_enabled

    @flag_control_position_enabled.setter
    def flag_control_position_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_control_position_enabled' field must be of type 'bool'"
        self._flag_control_position_enabled = value

    @builtins.property
    def flag_control_velocity_enabled(self):
        """Message field 'flag_control_velocity_enabled'."""
        return self._flag_control_velocity_enabled

    @flag_control_velocity_enabled.setter
    def flag_control_velocity_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_control_velocity_enabled' field must be of type 'bool'"
        self._flag_control_velocity_enabled = value

    @builtins.property
    def flag_control_altitude_enabled(self):
        """Message field 'flag_control_altitude_enabled'."""
        return self._flag_control_altitude_enabled

    @flag_control_altitude_enabled.setter
    def flag_control_altitude_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_control_altitude_enabled' field must be of type 'bool'"
        self._flag_control_altitude_enabled = value

    @builtins.property
    def flag_control_climb_rate_enabled(self):
        """Message field 'flag_control_climb_rate_enabled'."""
        return self._flag_control_climb_rate_enabled

    @flag_control_climb_rate_enabled.setter
    def flag_control_climb_rate_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_control_climb_rate_enabled' field must be of type 'bool'"
        self._flag_control_climb_rate_enabled = value

    @builtins.property
    def flag_control_acceleration_enabled(self):
        """Message field 'flag_control_acceleration_enabled'."""
        return self._flag_control_acceleration_enabled

    @flag_control_acceleration_enabled.setter
    def flag_control_acceleration_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_control_acceleration_enabled' field must be of type 'bool'"
        self._flag_control_acceleration_enabled = value

    @builtins.property
    def flag_control_attitude_enabled(self):
        """Message field 'flag_control_attitude_enabled'."""
        return self._flag_control_attitude_enabled

    @flag_control_attitude_enabled.setter
    def flag_control_attitude_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_control_attitude_enabled' field must be of type 'bool'"
        self._flag_control_attitude_enabled = value

    @builtins.property
    def flag_control_rates_enabled(self):
        """Message field 'flag_control_rates_enabled'."""
        return self._flag_control_rates_enabled

    @flag_control_rates_enabled.setter
    def flag_control_rates_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_control_rates_enabled' field must be of type 'bool'"
        self._flag_control_rates_enabled = value

    @builtins.property
    def flag_control_allocation_enabled(self):
        """Message field 'flag_control_allocation_enabled'."""
        return self._flag_control_allocation_enabled

    @flag_control_allocation_enabled.setter
    def flag_control_allocation_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_control_allocation_enabled' field must be of type 'bool'"
        self._flag_control_allocation_enabled = value

    @builtins.property
    def flag_control_termination_enabled(self):
        """Message field 'flag_control_termination_enabled'."""
        return self._flag_control_termination_enabled

    @flag_control_termination_enabled.setter
    def flag_control_termination_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_control_termination_enabled' field must be of type 'bool'"
        self._flag_control_termination_enabled = value

    @builtins.property
    def source_id(self):
        """Message field 'source_id'."""
        return self._source_id

    @source_id.setter
    def source_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source_id' field must be an unsigned integer in [0, 255]"
        self._source_id = value
