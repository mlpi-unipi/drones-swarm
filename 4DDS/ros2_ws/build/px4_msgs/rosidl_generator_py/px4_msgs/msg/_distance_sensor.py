# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/DistanceSensor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'q'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_DistanceSensor(type):
    """Metaclass of message 'DistanceSensor'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAV_DISTANCE_SENSOR_LASER': 0,
        'MAV_DISTANCE_SENSOR_ULTRASOUND': 1,
        'MAV_DISTANCE_SENSOR_INFRARED': 2,
        'MAV_DISTANCE_SENSOR_RADAR': 3,
        'ROTATION_YAW_0': 0,
        'ROTATION_YAW_45': 1,
        'ROTATION_YAW_90': 2,
        'ROTATION_YAW_135': 3,
        'ROTATION_YAW_180': 4,
        'ROTATION_YAW_225': 5,
        'ROTATION_YAW_270': 6,
        'ROTATION_YAW_315': 7,
        'ROTATION_FORWARD_FACING': 0,
        'ROTATION_RIGHT_FACING': 2,
        'ROTATION_BACKWARD_FACING': 4,
        'ROTATION_LEFT_FACING': 6,
        'ROTATION_UPWARD_FACING': 24,
        'ROTATION_DOWNWARD_FACING': 25,
        'ROTATION_CUSTOM': 100,
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
                'px4_msgs.msg.DistanceSensor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__distance_sensor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__distance_sensor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__distance_sensor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__distance_sensor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__distance_sensor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAV_DISTANCE_SENSOR_LASER': cls.__constants['MAV_DISTANCE_SENSOR_LASER'],
            'MAV_DISTANCE_SENSOR_ULTRASOUND': cls.__constants['MAV_DISTANCE_SENSOR_ULTRASOUND'],
            'MAV_DISTANCE_SENSOR_INFRARED': cls.__constants['MAV_DISTANCE_SENSOR_INFRARED'],
            'MAV_DISTANCE_SENSOR_RADAR': cls.__constants['MAV_DISTANCE_SENSOR_RADAR'],
            'ROTATION_YAW_0': cls.__constants['ROTATION_YAW_0'],
            'ROTATION_YAW_45': cls.__constants['ROTATION_YAW_45'],
            'ROTATION_YAW_90': cls.__constants['ROTATION_YAW_90'],
            'ROTATION_YAW_135': cls.__constants['ROTATION_YAW_135'],
            'ROTATION_YAW_180': cls.__constants['ROTATION_YAW_180'],
            'ROTATION_YAW_225': cls.__constants['ROTATION_YAW_225'],
            'ROTATION_YAW_270': cls.__constants['ROTATION_YAW_270'],
            'ROTATION_YAW_315': cls.__constants['ROTATION_YAW_315'],
            'ROTATION_FORWARD_FACING': cls.__constants['ROTATION_FORWARD_FACING'],
            'ROTATION_RIGHT_FACING': cls.__constants['ROTATION_RIGHT_FACING'],
            'ROTATION_BACKWARD_FACING': cls.__constants['ROTATION_BACKWARD_FACING'],
            'ROTATION_LEFT_FACING': cls.__constants['ROTATION_LEFT_FACING'],
            'ROTATION_UPWARD_FACING': cls.__constants['ROTATION_UPWARD_FACING'],
            'ROTATION_DOWNWARD_FACING': cls.__constants['ROTATION_DOWNWARD_FACING'],
            'ROTATION_CUSTOM': cls.__constants['ROTATION_CUSTOM'],
        }

    @property
    def MAV_DISTANCE_SENSOR_LASER(self):
        """Message constant 'MAV_DISTANCE_SENSOR_LASER'."""
        return Metaclass_DistanceSensor.__constants['MAV_DISTANCE_SENSOR_LASER']

    @property
    def MAV_DISTANCE_SENSOR_ULTRASOUND(self):
        """Message constant 'MAV_DISTANCE_SENSOR_ULTRASOUND'."""
        return Metaclass_DistanceSensor.__constants['MAV_DISTANCE_SENSOR_ULTRASOUND']

    @property
    def MAV_DISTANCE_SENSOR_INFRARED(self):
        """Message constant 'MAV_DISTANCE_SENSOR_INFRARED'."""
        return Metaclass_DistanceSensor.__constants['MAV_DISTANCE_SENSOR_INFRARED']

    @property
    def MAV_DISTANCE_SENSOR_RADAR(self):
        """Message constant 'MAV_DISTANCE_SENSOR_RADAR'."""
        return Metaclass_DistanceSensor.__constants['MAV_DISTANCE_SENSOR_RADAR']

    @property
    def ROTATION_YAW_0(self):
        """Message constant 'ROTATION_YAW_0'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_YAW_0']

    @property
    def ROTATION_YAW_45(self):
        """Message constant 'ROTATION_YAW_45'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_YAW_45']

    @property
    def ROTATION_YAW_90(self):
        """Message constant 'ROTATION_YAW_90'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_YAW_90']

    @property
    def ROTATION_YAW_135(self):
        """Message constant 'ROTATION_YAW_135'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_YAW_135']

    @property
    def ROTATION_YAW_180(self):
        """Message constant 'ROTATION_YAW_180'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_YAW_180']

    @property
    def ROTATION_YAW_225(self):
        """Message constant 'ROTATION_YAW_225'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_YAW_225']

    @property
    def ROTATION_YAW_270(self):
        """Message constant 'ROTATION_YAW_270'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_YAW_270']

    @property
    def ROTATION_YAW_315(self):
        """Message constant 'ROTATION_YAW_315'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_YAW_315']

    @property
    def ROTATION_FORWARD_FACING(self):
        """Message constant 'ROTATION_FORWARD_FACING'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_FORWARD_FACING']

    @property
    def ROTATION_RIGHT_FACING(self):
        """Message constant 'ROTATION_RIGHT_FACING'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_RIGHT_FACING']

    @property
    def ROTATION_BACKWARD_FACING(self):
        """Message constant 'ROTATION_BACKWARD_FACING'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_BACKWARD_FACING']

    @property
    def ROTATION_LEFT_FACING(self):
        """Message constant 'ROTATION_LEFT_FACING'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_LEFT_FACING']

    @property
    def ROTATION_UPWARD_FACING(self):
        """Message constant 'ROTATION_UPWARD_FACING'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_UPWARD_FACING']

    @property
    def ROTATION_DOWNWARD_FACING(self):
        """Message constant 'ROTATION_DOWNWARD_FACING'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_DOWNWARD_FACING']

    @property
    def ROTATION_CUSTOM(self):
        """Message constant 'ROTATION_CUSTOM'."""
        return Metaclass_DistanceSensor.__constants['ROTATION_CUSTOM']


class DistanceSensor(metaclass=Metaclass_DistanceSensor):
    """
    Message class 'DistanceSensor'.

    Constants:
      MAV_DISTANCE_SENSOR_LASER
      MAV_DISTANCE_SENSOR_ULTRASOUND
      MAV_DISTANCE_SENSOR_INFRARED
      MAV_DISTANCE_SENSOR_RADAR
      ROTATION_YAW_0
      ROTATION_YAW_45
      ROTATION_YAW_90
      ROTATION_YAW_135
      ROTATION_YAW_180
      ROTATION_YAW_225
      ROTATION_YAW_270
      ROTATION_YAW_315
      ROTATION_FORWARD_FACING
      ROTATION_RIGHT_FACING
      ROTATION_BACKWARD_FACING
      ROTATION_LEFT_FACING
      ROTATION_UPWARD_FACING
      ROTATION_DOWNWARD_FACING
      ROTATION_CUSTOM
    """

    __slots__ = [
        '_timestamp',
        '_device_id',
        '_min_distance',
        '_max_distance',
        '_current_distance',
        '_variance',
        '_signal_quality',
        '_type',
        '_h_fov',
        '_v_fov',
        '_q',
        '_orientation',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'device_id': 'uint32',
        'min_distance': 'float',
        'max_distance': 'float',
        'current_distance': 'float',
        'variance': 'float',
        'signal_quality': 'int8',
        'type': 'uint8',
        'h_fov': 'float',
        'v_fov': 'float',
        'q': 'float[4]',
        'orientation': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.device_id = kwargs.get('device_id', int())
        self.min_distance = kwargs.get('min_distance', float())
        self.max_distance = kwargs.get('max_distance', float())
        self.current_distance = kwargs.get('current_distance', float())
        self.variance = kwargs.get('variance', float())
        self.signal_quality = kwargs.get('signal_quality', int())
        self.type = kwargs.get('type', int())
        self.h_fov = kwargs.get('h_fov', float())
        self.v_fov = kwargs.get('v_fov', float())
        if 'q' not in kwargs:
            self.q = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.q = numpy.array(kwargs.get('q'), dtype=numpy.float32)
            assert self.q.shape == (4, )
        self.orientation = kwargs.get('orientation', int())

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
        if self.device_id != other.device_id:
            return False
        if self.min_distance != other.min_distance:
            return False
        if self.max_distance != other.max_distance:
            return False
        if self.current_distance != other.current_distance:
            return False
        if self.variance != other.variance:
            return False
        if self.signal_quality != other.signal_quality:
            return False
        if self.type != other.type:
            return False
        if self.h_fov != other.h_fov:
            return False
        if self.v_fov != other.v_fov:
            return False
        if all(self.q != other.q):
            return False
        if self.orientation != other.orientation:
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
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'device_id' field must be an unsigned integer in [0, 4294967295]"
        self._device_id = value

    @builtins.property
    def min_distance(self):
        """Message field 'min_distance'."""
        return self._min_distance

    @min_distance.setter
    def min_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_distance = value

    @builtins.property
    def max_distance(self):
        """Message field 'max_distance'."""
        return self._max_distance

    @max_distance.setter
    def max_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_distance = value

    @builtins.property
    def current_distance(self):
        """Message field 'current_distance'."""
        return self._current_distance

    @current_distance.setter
    def current_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_distance = value

    @builtins.property
    def variance(self):
        """Message field 'variance'."""
        return self._variance

    @variance.setter
    def variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'variance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'variance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._variance = value

    @builtins.property
    def signal_quality(self):
        """Message field 'signal_quality'."""
        return self._signal_quality

    @signal_quality.setter
    def signal_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signal_quality' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'signal_quality' field must be an integer in [-128, 127]"
        self._signal_quality = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def h_fov(self):
        """Message field 'h_fov'."""
        return self._h_fov

    @h_fov.setter
    def h_fov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'h_fov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'h_fov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._h_fov = value

    @builtins.property
    def v_fov(self):
        """Message field 'v_fov'."""
        return self._v_fov

    @v_fov.setter
    def v_fov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_fov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'v_fov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._v_fov = value

    @builtins.property
    def q(self):
        """Message field 'q'."""
        return self._q

    @q.setter
    def q(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'q' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'q' numpy.ndarray() must have a size of 4"
            self._q = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'q' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._q = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'orientation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'orientation' field must be an unsigned integer in [0, 255]"
        self._orientation = value
