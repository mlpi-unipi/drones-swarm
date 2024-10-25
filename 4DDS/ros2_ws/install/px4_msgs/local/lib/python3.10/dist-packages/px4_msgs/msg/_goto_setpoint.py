# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/GotoSetpoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GotoSetpoint(type):
    """Metaclass of message 'GotoSetpoint'."""

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
                'px4_msgs.msg.GotoSetpoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__goto_setpoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__goto_setpoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__goto_setpoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__goto_setpoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__goto_setpoint

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GotoSetpoint(metaclass=Metaclass_GotoSetpoint):
    """Message class 'GotoSetpoint'."""

    __slots__ = [
        '_timestamp',
        '_position',
        '_flag_control_heading',
        '_heading',
        '_flag_set_max_horizontal_speed',
        '_max_horizontal_speed',
        '_flag_set_max_vertical_speed',
        '_max_vertical_speed',
        '_flag_set_max_heading_rate',
        '_max_heading_rate',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'position': 'float[3]',
        'flag_control_heading': 'boolean',
        'heading': 'float',
        'flag_set_max_horizontal_speed': 'boolean',
        'max_horizontal_speed': 'float',
        'flag_set_max_vertical_speed': 'boolean',
        'max_vertical_speed': 'float',
        'flag_set_max_heading_rate': 'boolean',
        'max_heading_rate': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        if 'position' not in kwargs:
            self.position = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.position = numpy.array(kwargs.get('position'), dtype=numpy.float32)
            assert self.position.shape == (3, )
        self.flag_control_heading = kwargs.get('flag_control_heading', bool())
        self.heading = kwargs.get('heading', float())
        self.flag_set_max_horizontal_speed = kwargs.get('flag_set_max_horizontal_speed', bool())
        self.max_horizontal_speed = kwargs.get('max_horizontal_speed', float())
        self.flag_set_max_vertical_speed = kwargs.get('flag_set_max_vertical_speed', bool())
        self.max_vertical_speed = kwargs.get('max_vertical_speed', float())
        self.flag_set_max_heading_rate = kwargs.get('flag_set_max_heading_rate', bool())
        self.max_heading_rate = kwargs.get('max_heading_rate', float())

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
        if all(self.position != other.position):
            return False
        if self.flag_control_heading != other.flag_control_heading:
            return False
        if self.heading != other.heading:
            return False
        if self.flag_set_max_horizontal_speed != other.flag_set_max_horizontal_speed:
            return False
        if self.max_horizontal_speed != other.max_horizontal_speed:
            return False
        if self.flag_set_max_vertical_speed != other.flag_set_max_vertical_speed:
            return False
        if self.max_vertical_speed != other.max_vertical_speed:
            return False
        if self.flag_set_max_heading_rate != other.flag_set_max_heading_rate:
            return False
        if self.max_heading_rate != other.max_heading_rate:
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
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'position' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'position' numpy.ndarray() must have a size of 3"
            self._position = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'position' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._position = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def flag_control_heading(self):
        """Message field 'flag_control_heading'."""
        return self._flag_control_heading

    @flag_control_heading.setter
    def flag_control_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_control_heading' field must be of type 'bool'"
        self._flag_control_heading = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading = value

    @builtins.property
    def flag_set_max_horizontal_speed(self):
        """Message field 'flag_set_max_horizontal_speed'."""
        return self._flag_set_max_horizontal_speed

    @flag_set_max_horizontal_speed.setter
    def flag_set_max_horizontal_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_set_max_horizontal_speed' field must be of type 'bool'"
        self._flag_set_max_horizontal_speed = value

    @builtins.property
    def max_horizontal_speed(self):
        """Message field 'max_horizontal_speed'."""
        return self._max_horizontal_speed

    @max_horizontal_speed.setter
    def max_horizontal_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_horizontal_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_horizontal_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_horizontal_speed = value

    @builtins.property
    def flag_set_max_vertical_speed(self):
        """Message field 'flag_set_max_vertical_speed'."""
        return self._flag_set_max_vertical_speed

    @flag_set_max_vertical_speed.setter
    def flag_set_max_vertical_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_set_max_vertical_speed' field must be of type 'bool'"
        self._flag_set_max_vertical_speed = value

    @builtins.property
    def max_vertical_speed(self):
        """Message field 'max_vertical_speed'."""
        return self._max_vertical_speed

    @max_vertical_speed.setter
    def max_vertical_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_vertical_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_vertical_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_vertical_speed = value

    @builtins.property
    def flag_set_max_heading_rate(self):
        """Message field 'flag_set_max_heading_rate'."""
        return self._flag_set_max_heading_rate

    @flag_set_max_heading_rate.setter
    def flag_set_max_heading_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flag_set_max_heading_rate' field must be of type 'bool'"
        self._flag_set_max_heading_rate = value

    @builtins.property
    def max_heading_rate(self):
        """Message field 'max_heading_rate'."""
        return self._max_heading_rate

    @max_heading_rate.setter
    def max_heading_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_heading_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_heading_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_heading_rate = value
