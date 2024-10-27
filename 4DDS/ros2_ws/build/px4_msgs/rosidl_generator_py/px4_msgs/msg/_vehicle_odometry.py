# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleOdometry.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position'
# Member 'q'
# Member 'velocity'
# Member 'angular_velocity'
# Member 'position_variance'
# Member 'orientation_variance'
# Member 'velocity_variance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleOdometry(type):
    """Metaclass of message 'VehicleOdometry'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'POSE_FRAME_UNKNOWN': 0,
        'POSE_FRAME_NED': 1,
        'POSE_FRAME_FRD': 2,
        'VELOCITY_FRAME_UNKNOWN': 0,
        'VELOCITY_FRAME_NED': 1,
        'VELOCITY_FRAME_FRD': 2,
        'VELOCITY_FRAME_BODY_FRD': 3,
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
                'px4_msgs.msg.VehicleOdometry')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_odometry
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_odometry
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_odometry
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_odometry
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_odometry

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'POSE_FRAME_UNKNOWN': cls.__constants['POSE_FRAME_UNKNOWN'],
            'POSE_FRAME_NED': cls.__constants['POSE_FRAME_NED'],
            'POSE_FRAME_FRD': cls.__constants['POSE_FRAME_FRD'],
            'VELOCITY_FRAME_UNKNOWN': cls.__constants['VELOCITY_FRAME_UNKNOWN'],
            'VELOCITY_FRAME_NED': cls.__constants['VELOCITY_FRAME_NED'],
            'VELOCITY_FRAME_FRD': cls.__constants['VELOCITY_FRAME_FRD'],
            'VELOCITY_FRAME_BODY_FRD': cls.__constants['VELOCITY_FRAME_BODY_FRD'],
        }

    @property
    def POSE_FRAME_UNKNOWN(self):
        """Message constant 'POSE_FRAME_UNKNOWN'."""
        return Metaclass_VehicleOdometry.__constants['POSE_FRAME_UNKNOWN']

    @property
    def POSE_FRAME_NED(self):
        """Message constant 'POSE_FRAME_NED'."""
        return Metaclass_VehicleOdometry.__constants['POSE_FRAME_NED']

    @property
    def POSE_FRAME_FRD(self):
        """Message constant 'POSE_FRAME_FRD'."""
        return Metaclass_VehicleOdometry.__constants['POSE_FRAME_FRD']

    @property
    def VELOCITY_FRAME_UNKNOWN(self):
        """Message constant 'VELOCITY_FRAME_UNKNOWN'."""
        return Metaclass_VehicleOdometry.__constants['VELOCITY_FRAME_UNKNOWN']

    @property
    def VELOCITY_FRAME_NED(self):
        """Message constant 'VELOCITY_FRAME_NED'."""
        return Metaclass_VehicleOdometry.__constants['VELOCITY_FRAME_NED']

    @property
    def VELOCITY_FRAME_FRD(self):
        """Message constant 'VELOCITY_FRAME_FRD'."""
        return Metaclass_VehicleOdometry.__constants['VELOCITY_FRAME_FRD']

    @property
    def VELOCITY_FRAME_BODY_FRD(self):
        """Message constant 'VELOCITY_FRAME_BODY_FRD'."""
        return Metaclass_VehicleOdometry.__constants['VELOCITY_FRAME_BODY_FRD']


class VehicleOdometry(metaclass=Metaclass_VehicleOdometry):
    """
    Message class 'VehicleOdometry'.

    Constants:
      POSE_FRAME_UNKNOWN
      POSE_FRAME_NED
      POSE_FRAME_FRD
      VELOCITY_FRAME_UNKNOWN
      VELOCITY_FRAME_NED
      VELOCITY_FRAME_FRD
      VELOCITY_FRAME_BODY_FRD
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_pose_frame',
        '_position',
        '_q',
        '_velocity_frame',
        '_velocity',
        '_angular_velocity',
        '_position_variance',
        '_orientation_variance',
        '_velocity_variance',
        '_reset_counter',
        '_quality',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'pose_frame': 'uint8',
        'position': 'float[3]',
        'q': 'float[4]',
        'velocity_frame': 'uint8',
        'velocity': 'float[3]',
        'angular_velocity': 'float[3]',
        'position_variance': 'float[3]',
        'orientation_variance': 'float[3]',
        'velocity_variance': 'float[3]',
        'reset_counter': 'uint8',
        'quality': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.pose_frame = kwargs.get('pose_frame', int())
        if 'position' not in kwargs:
            self.position = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.position = numpy.array(kwargs.get('position'), dtype=numpy.float32)
            assert self.position.shape == (3, )
        if 'q' not in kwargs:
            self.q = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.q = numpy.array(kwargs.get('q'), dtype=numpy.float32)
            assert self.q.shape == (4, )
        self.velocity_frame = kwargs.get('velocity_frame', int())
        if 'velocity' not in kwargs:
            self.velocity = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.velocity = numpy.array(kwargs.get('velocity'), dtype=numpy.float32)
            assert self.velocity.shape == (3, )
        if 'angular_velocity' not in kwargs:
            self.angular_velocity = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.angular_velocity = numpy.array(kwargs.get('angular_velocity'), dtype=numpy.float32)
            assert self.angular_velocity.shape == (3, )
        if 'position_variance' not in kwargs:
            self.position_variance = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.position_variance = numpy.array(kwargs.get('position_variance'), dtype=numpy.float32)
            assert self.position_variance.shape == (3, )
        if 'orientation_variance' not in kwargs:
            self.orientation_variance = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.orientation_variance = numpy.array(kwargs.get('orientation_variance'), dtype=numpy.float32)
            assert self.orientation_variance.shape == (3, )
        if 'velocity_variance' not in kwargs:
            self.velocity_variance = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.velocity_variance = numpy.array(kwargs.get('velocity_variance'), dtype=numpy.float32)
            assert self.velocity_variance.shape == (3, )
        self.reset_counter = kwargs.get('reset_counter', int())
        self.quality = kwargs.get('quality', int())

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
        if self.timestamp_sample != other.timestamp_sample:
            return False
        if self.pose_frame != other.pose_frame:
            return False
        if all(self.position != other.position):
            return False
        if all(self.q != other.q):
            return False
        if self.velocity_frame != other.velocity_frame:
            return False
        if all(self.velocity != other.velocity):
            return False
        if all(self.angular_velocity != other.angular_velocity):
            return False
        if all(self.position_variance != other.position_variance):
            return False
        if all(self.orientation_variance != other.orientation_variance):
            return False
        if all(self.velocity_variance != other.velocity_variance):
            return False
        if self.reset_counter != other.reset_counter:
            return False
        if self.quality != other.quality:
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
    def timestamp_sample(self):
        """Message field 'timestamp_sample'."""
        return self._timestamp_sample

    @timestamp_sample.setter
    def timestamp_sample(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_sample' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_sample' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_sample = value

    @builtins.property
    def pose_frame(self):
        """Message field 'pose_frame'."""
        return self._pose_frame

    @pose_frame.setter
    def pose_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pose_frame' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pose_frame' field must be an unsigned integer in [0, 255]"
        self._pose_frame = value

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
    def velocity_frame(self):
        """Message field 'velocity_frame'."""
        return self._velocity_frame

    @velocity_frame.setter
    def velocity_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'velocity_frame' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'velocity_frame' field must be an unsigned integer in [0, 255]"
        self._velocity_frame = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'velocity' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'velocity' numpy.ndarray() must have a size of 3"
            self._velocity = value
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
                "The 'velocity' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._velocity = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def angular_velocity(self):
        """Message field 'angular_velocity'."""
        return self._angular_velocity

    @angular_velocity.setter
    def angular_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'angular_velocity' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'angular_velocity' numpy.ndarray() must have a size of 3"
            self._angular_velocity = value
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
                "The 'angular_velocity' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._angular_velocity = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def position_variance(self):
        """Message field 'position_variance'."""
        return self._position_variance

    @position_variance.setter
    def position_variance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'position_variance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'position_variance' numpy.ndarray() must have a size of 3"
            self._position_variance = value
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
                "The 'position_variance' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._position_variance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def orientation_variance(self):
        """Message field 'orientation_variance'."""
        return self._orientation_variance

    @orientation_variance.setter
    def orientation_variance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'orientation_variance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'orientation_variance' numpy.ndarray() must have a size of 3"
            self._orientation_variance = value
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
                "The 'orientation_variance' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._orientation_variance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def velocity_variance(self):
        """Message field 'velocity_variance'."""
        return self._velocity_variance

    @velocity_variance.setter
    def velocity_variance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'velocity_variance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'velocity_variance' numpy.ndarray() must have a size of 3"
            self._velocity_variance = value
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
                "The 'velocity_variance' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._velocity_variance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def reset_counter(self):
        """Message field 'reset_counter'."""
        return self._reset_counter

    @reset_counter.setter
    def reset_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reset_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reset_counter' field must be an unsigned integer in [0, 255]"
        self._reset_counter = value

    @builtins.property
    def quality(self):
        """Message field 'quality'."""
        return self._quality

    @quality.setter
    def quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quality' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'quality' field must be an integer in [-128, 127]"
        self._quality = value
