# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/CollisionReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CollisionReport(type):
    """Metaclass of message 'CollisionReport'."""

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
                'px4_msgs.msg.CollisionReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__collision_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__collision_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__collision_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__collision_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__collision_report

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class CollisionReport(metaclass=Metaclass_CollisionReport):
    """Message class 'CollisionReport'."""

    __slots__ = [
        '_timestamp',
        '_src',
        '_id',
        '_action',
        '_threat_level',
        '_time_to_minimum_delta',
        '_altitude_minimum_delta',
        '_horizontal_minimum_delta',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'src': 'uint8',
        'id': 'uint32',
        'action': 'uint8',
        'threat_level': 'uint8',
        'time_to_minimum_delta': 'float',
        'altitude_minimum_delta': 'float',
        'horizontal_minimum_delta': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.src = kwargs.get('src', int())
        self.id = kwargs.get('id', int())
        self.action = kwargs.get('action', int())
        self.threat_level = kwargs.get('threat_level', int())
        self.time_to_minimum_delta = kwargs.get('time_to_minimum_delta', float())
        self.altitude_minimum_delta = kwargs.get('altitude_minimum_delta', float())
        self.horizontal_minimum_delta = kwargs.get('horizontal_minimum_delta', float())

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
        if self.src != other.src:
            return False
        if self.id != other.id:
            return False
        if self.action != other.action:
            return False
        if self.threat_level != other.threat_level:
            return False
        if self.time_to_minimum_delta != other.time_to_minimum_delta:
            return False
        if self.altitude_minimum_delta != other.altitude_minimum_delta:
            return False
        if self.horizontal_minimum_delta != other.horizontal_minimum_delta:
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
    def src(self):
        """Message field 'src'."""
        return self._src

    @src.setter
    def src(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'src' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'src' field must be an unsigned integer in [0, 255]"
        self._src = value

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @builtins.property
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'action' field must be an unsigned integer in [0, 255]"
        self._action = value

    @builtins.property
    def threat_level(self):
        """Message field 'threat_level'."""
        return self._threat_level

    @threat_level.setter
    def threat_level(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'threat_level' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'threat_level' field must be an unsigned integer in [0, 255]"
        self._threat_level = value

    @builtins.property
    def time_to_minimum_delta(self):
        """Message field 'time_to_minimum_delta'."""
        return self._time_to_minimum_delta

    @time_to_minimum_delta.setter
    def time_to_minimum_delta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_to_minimum_delta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_to_minimum_delta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_to_minimum_delta = value

    @builtins.property
    def altitude_minimum_delta(self):
        """Message field 'altitude_minimum_delta'."""
        return self._altitude_minimum_delta

    @altitude_minimum_delta.setter
    def altitude_minimum_delta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude_minimum_delta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'altitude_minimum_delta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._altitude_minimum_delta = value

    @builtins.property
    def horizontal_minimum_delta(self):
        """Message field 'horizontal_minimum_delta'."""
        return self._horizontal_minimum_delta

    @horizontal_minimum_delta.setter
    def horizontal_minimum_delta(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'horizontal_minimum_delta' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'horizontal_minimum_delta' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._horizontal_minimum_delta = value
