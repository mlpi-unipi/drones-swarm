# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/FollowTargetStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'desired_position_raw'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FollowTargetStatus(type):
    """Metaclass of message 'FollowTargetStatus'."""

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
                'px4_msgs.msg.FollowTargetStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__follow_target_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__follow_target_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__follow_target_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__follow_target_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__follow_target_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FollowTargetStatus(metaclass=Metaclass_FollowTargetStatus):
    """Message class 'FollowTargetStatus'."""

    __slots__ = [
        '_timestamp',
        '_tracked_target_course',
        '_follow_angle',
        '_orbit_angle_setpoint',
        '_angular_rate_setpoint',
        '_desired_position_raw',
        '_in_emergency_ascent',
        '_gimbal_pitch',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'tracked_target_course': 'float',
        'follow_angle': 'float',
        'orbit_angle_setpoint': 'float',
        'angular_rate_setpoint': 'float',
        'desired_position_raw': 'float[3]',
        'in_emergency_ascent': 'boolean',
        'gimbal_pitch': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.tracked_target_course = kwargs.get('tracked_target_course', float())
        self.follow_angle = kwargs.get('follow_angle', float())
        self.orbit_angle_setpoint = kwargs.get('orbit_angle_setpoint', float())
        self.angular_rate_setpoint = kwargs.get('angular_rate_setpoint', float())
        if 'desired_position_raw' not in kwargs:
            self.desired_position_raw = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.desired_position_raw = numpy.array(kwargs.get('desired_position_raw'), dtype=numpy.float32)
            assert self.desired_position_raw.shape == (3, )
        self.in_emergency_ascent = kwargs.get('in_emergency_ascent', bool())
        self.gimbal_pitch = kwargs.get('gimbal_pitch', float())

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
        if self.tracked_target_course != other.tracked_target_course:
            return False
        if self.follow_angle != other.follow_angle:
            return False
        if self.orbit_angle_setpoint != other.orbit_angle_setpoint:
            return False
        if self.angular_rate_setpoint != other.angular_rate_setpoint:
            return False
        if all(self.desired_position_raw != other.desired_position_raw):
            return False
        if self.in_emergency_ascent != other.in_emergency_ascent:
            return False
        if self.gimbal_pitch != other.gimbal_pitch:
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
    def tracked_target_course(self):
        """Message field 'tracked_target_course'."""
        return self._tracked_target_course

    @tracked_target_course.setter
    def tracked_target_course(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tracked_target_course' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tracked_target_course' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tracked_target_course = value

    @builtins.property
    def follow_angle(self):
        """Message field 'follow_angle'."""
        return self._follow_angle

    @follow_angle.setter
    def follow_angle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'follow_angle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'follow_angle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._follow_angle = value

    @builtins.property
    def orbit_angle_setpoint(self):
        """Message field 'orbit_angle_setpoint'."""
        return self._orbit_angle_setpoint

    @orbit_angle_setpoint.setter
    def orbit_angle_setpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'orbit_angle_setpoint' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'orbit_angle_setpoint' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._orbit_angle_setpoint = value

    @builtins.property
    def angular_rate_setpoint(self):
        """Message field 'angular_rate_setpoint'."""
        return self._angular_rate_setpoint

    @angular_rate_setpoint.setter
    def angular_rate_setpoint(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_rate_setpoint' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angular_rate_setpoint' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angular_rate_setpoint = value

    @builtins.property
    def desired_position_raw(self):
        """Message field 'desired_position_raw'."""
        return self._desired_position_raw

    @desired_position_raw.setter
    def desired_position_raw(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'desired_position_raw' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'desired_position_raw' numpy.ndarray() must have a size of 3"
            self._desired_position_raw = value
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
                "The 'desired_position_raw' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._desired_position_raw = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def in_emergency_ascent(self):
        """Message field 'in_emergency_ascent'."""
        return self._in_emergency_ascent

    @in_emergency_ascent.setter
    def in_emergency_ascent(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'in_emergency_ascent' field must be of type 'bool'"
        self._in_emergency_ascent = value

    @builtins.property
    def gimbal_pitch(self):
        """Message field 'gimbal_pitch'."""
        return self._gimbal_pitch

    @gimbal_pitch.setter
    def gimbal_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gimbal_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gimbal_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gimbal_pitch = value
