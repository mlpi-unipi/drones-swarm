# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/DifferentialDriveSetpoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DifferentialDriveSetpoint(type):
    """Metaclass of message 'DifferentialDriveSetpoint'."""

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
                'px4_msgs.msg.DifferentialDriveSetpoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__differential_drive_setpoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__differential_drive_setpoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__differential_drive_setpoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__differential_drive_setpoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__differential_drive_setpoint

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class DifferentialDriveSetpoint(metaclass=Metaclass_DifferentialDriveSetpoint):
    """Message class 'DifferentialDriveSetpoint'."""

    __slots__ = [
        '_timestamp',
        '_speed',
        '_closed_loop_speed_control',
        '_yaw_rate',
        '_closed_loop_yaw_rate_control',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'speed': 'float',
        'closed_loop_speed_control': 'boolean',
        'yaw_rate': 'float',
        'closed_loop_yaw_rate_control': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.speed = kwargs.get('speed', float())
        self.closed_loop_speed_control = kwargs.get('closed_loop_speed_control', bool())
        self.yaw_rate = kwargs.get('yaw_rate', float())
        self.closed_loop_yaw_rate_control = kwargs.get('closed_loop_yaw_rate_control', bool())

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
        if self.speed != other.speed:
            return False
        if self.closed_loop_speed_control != other.closed_loop_speed_control:
            return False
        if self.yaw_rate != other.yaw_rate:
            return False
        if self.closed_loop_yaw_rate_control != other.closed_loop_yaw_rate_control:
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
    def speed(self):
        """Message field 'speed'."""
        return self._speed

    @speed.setter
    def speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed = value

    @builtins.property
    def closed_loop_speed_control(self):
        """Message field 'closed_loop_speed_control'."""
        return self._closed_loop_speed_control

    @closed_loop_speed_control.setter
    def closed_loop_speed_control(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'closed_loop_speed_control' field must be of type 'bool'"
        self._closed_loop_speed_control = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_rate = value

    @builtins.property
    def closed_loop_yaw_rate_control(self):
        """Message field 'closed_loop_yaw_rate_control'."""
        return self._closed_loop_yaw_rate_control

    @closed_loop_yaw_rate_control.setter
    def closed_loop_yaw_rate_control(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'closed_loop_yaw_rate_control' field must be of type 'bool'"
        self._closed_loop_yaw_rate_control = value
