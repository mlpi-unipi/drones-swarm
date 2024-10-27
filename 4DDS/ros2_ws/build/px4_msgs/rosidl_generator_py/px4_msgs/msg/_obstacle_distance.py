# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/ObstacleDistance.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'distances'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ObstacleDistance(type):
    """Metaclass of message 'ObstacleDistance'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAV_FRAME_GLOBAL': 0,
        'MAV_FRAME_LOCAL_NED': 1,
        'MAV_FRAME_BODY_FRD': 12,
        'MAV_DISTANCE_SENSOR_LASER': 0,
        'MAV_DISTANCE_SENSOR_ULTRASOUND': 1,
        'MAV_DISTANCE_SENSOR_INFRARED': 2,
        'MAV_DISTANCE_SENSOR_RADAR': 3,
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
                'px4_msgs.msg.ObstacleDistance')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__obstacle_distance
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__obstacle_distance
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__obstacle_distance
            cls._TYPE_SUPPORT = module.type_support_msg__msg__obstacle_distance
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__obstacle_distance

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAV_FRAME_GLOBAL': cls.__constants['MAV_FRAME_GLOBAL'],
            'MAV_FRAME_LOCAL_NED': cls.__constants['MAV_FRAME_LOCAL_NED'],
            'MAV_FRAME_BODY_FRD': cls.__constants['MAV_FRAME_BODY_FRD'],
            'MAV_DISTANCE_SENSOR_LASER': cls.__constants['MAV_DISTANCE_SENSOR_LASER'],
            'MAV_DISTANCE_SENSOR_ULTRASOUND': cls.__constants['MAV_DISTANCE_SENSOR_ULTRASOUND'],
            'MAV_DISTANCE_SENSOR_INFRARED': cls.__constants['MAV_DISTANCE_SENSOR_INFRARED'],
            'MAV_DISTANCE_SENSOR_RADAR': cls.__constants['MAV_DISTANCE_SENSOR_RADAR'],
        }

    @property
    def MAV_FRAME_GLOBAL(self):
        """Message constant 'MAV_FRAME_GLOBAL'."""
        return Metaclass_ObstacleDistance.__constants['MAV_FRAME_GLOBAL']

    @property
    def MAV_FRAME_LOCAL_NED(self):
        """Message constant 'MAV_FRAME_LOCAL_NED'."""
        return Metaclass_ObstacleDistance.__constants['MAV_FRAME_LOCAL_NED']

    @property
    def MAV_FRAME_BODY_FRD(self):
        """Message constant 'MAV_FRAME_BODY_FRD'."""
        return Metaclass_ObstacleDistance.__constants['MAV_FRAME_BODY_FRD']

    @property
    def MAV_DISTANCE_SENSOR_LASER(self):
        """Message constant 'MAV_DISTANCE_SENSOR_LASER'."""
        return Metaclass_ObstacleDistance.__constants['MAV_DISTANCE_SENSOR_LASER']

    @property
    def MAV_DISTANCE_SENSOR_ULTRASOUND(self):
        """Message constant 'MAV_DISTANCE_SENSOR_ULTRASOUND'."""
        return Metaclass_ObstacleDistance.__constants['MAV_DISTANCE_SENSOR_ULTRASOUND']

    @property
    def MAV_DISTANCE_SENSOR_INFRARED(self):
        """Message constant 'MAV_DISTANCE_SENSOR_INFRARED'."""
        return Metaclass_ObstacleDistance.__constants['MAV_DISTANCE_SENSOR_INFRARED']

    @property
    def MAV_DISTANCE_SENSOR_RADAR(self):
        """Message constant 'MAV_DISTANCE_SENSOR_RADAR'."""
        return Metaclass_ObstacleDistance.__constants['MAV_DISTANCE_SENSOR_RADAR']


class ObstacleDistance(metaclass=Metaclass_ObstacleDistance):
    """
    Message class 'ObstacleDistance'.

    Constants:
      MAV_FRAME_GLOBAL
      MAV_FRAME_LOCAL_NED
      MAV_FRAME_BODY_FRD
      MAV_DISTANCE_SENSOR_LASER
      MAV_DISTANCE_SENSOR_ULTRASOUND
      MAV_DISTANCE_SENSOR_INFRARED
      MAV_DISTANCE_SENSOR_RADAR
    """

    __slots__ = [
        '_timestamp',
        '_frame',
        '_sensor_type',
        '_distances',
        '_increment',
        '_min_distance',
        '_max_distance',
        '_angle_offset',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'frame': 'uint8',
        'sensor_type': 'uint8',
        'distances': 'uint16[72]',
        'increment': 'float',
        'min_distance': 'uint16',
        'max_distance': 'uint16',
        'angle_offset': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 72),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.frame = kwargs.get('frame', int())
        self.sensor_type = kwargs.get('sensor_type', int())
        if 'distances' not in kwargs:
            self.distances = numpy.zeros(72, dtype=numpy.uint16)
        else:
            self.distances = numpy.array(kwargs.get('distances'), dtype=numpy.uint16)
            assert self.distances.shape == (72, )
        self.increment = kwargs.get('increment', float())
        self.min_distance = kwargs.get('min_distance', int())
        self.max_distance = kwargs.get('max_distance', int())
        self.angle_offset = kwargs.get('angle_offset', float())

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
        if self.frame != other.frame:
            return False
        if self.sensor_type != other.sensor_type:
            return False
        if all(self.distances != other.distances):
            return False
        if self.increment != other.increment:
            return False
        if self.min_distance != other.min_distance:
            return False
        if self.max_distance != other.max_distance:
            return False
        if self.angle_offset != other.angle_offset:
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
    def frame(self):
        """Message field 'frame'."""
        return self._frame

    @frame.setter
    def frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'frame' field must be an unsigned integer in [0, 255]"
        self._frame = value

    @builtins.property
    def sensor_type(self):
        """Message field 'sensor_type'."""
        return self._sensor_type

    @sensor_type.setter
    def sensor_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensor_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensor_type' field must be an unsigned integer in [0, 255]"
        self._sensor_type = value

    @builtins.property
    def distances(self):
        """Message field 'distances'."""
        return self._distances

    @distances.setter
    def distances(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint16, \
                "The 'distances' numpy.ndarray() must have the dtype of 'numpy.uint16'"
            assert value.size == 72, \
                "The 'distances' numpy.ndarray() must have a size of 72"
            self._distances = value
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
                 len(value) == 72 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'distances' field must be a set or sequence with length 72 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._distances = numpy.array(value, dtype=numpy.uint16)

    @builtins.property
    def increment(self):
        """Message field 'increment'."""
        return self._increment

    @increment.setter
    def increment(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'increment' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'increment' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._increment = value

    @builtins.property
    def min_distance(self):
        """Message field 'min_distance'."""
        return self._min_distance

    @min_distance.setter
    def min_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'min_distance' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'min_distance' field must be an unsigned integer in [0, 65535]"
        self._min_distance = value

    @builtins.property
    def max_distance(self):
        """Message field 'max_distance'."""
        return self._max_distance

    @max_distance.setter
    def max_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_distance' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'max_distance' field must be an unsigned integer in [0, 65535]"
        self._max_distance = value

    @builtins.property
    def angle_offset(self):
        """Message field 'angle_offset'."""
        return self._angle_offset

    @angle_offset.setter
    def angle_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angle_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angle_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angle_offset = value
