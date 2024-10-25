# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/MagWorkerData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'calibration_counter_total'
# Member 'x'
# Member 'y'
# Member 'z'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MagWorkerData(type):
    """Metaclass of message 'MagWorkerData'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAX_MAGS': 4,
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
                'px4_msgs.msg.MagWorkerData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mag_worker_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mag_worker_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mag_worker_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mag_worker_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mag_worker_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAX_MAGS': cls.__constants['MAX_MAGS'],
        }

    @property
    def MAX_MAGS(self):
        """Message constant 'MAX_MAGS'."""
        return Metaclass_MagWorkerData.__constants['MAX_MAGS']


class MagWorkerData(metaclass=Metaclass_MagWorkerData):
    """
    Message class 'MagWorkerData'.

    Constants:
      MAX_MAGS
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_done_count',
        '_calibration_points_perside',
        '_calibration_interval_perside_us',
        '_calibration_counter_total',
        '_side_data_collected',
        '_x',
        '_y',
        '_z',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'done_count': 'uint32',
        'calibration_points_perside': 'uint32',
        'calibration_interval_perside_us': 'uint64',
        'calibration_counter_total': 'uint32[4]',
        'side_data_collected': 'boolean[4]',
        'x': 'float[4]',
        'y': 'float[4]',
        'z': 'float[4]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.done_count = kwargs.get('done_count', int())
        self.calibration_points_perside = kwargs.get('calibration_points_perside', int())
        self.calibration_interval_perside_us = kwargs.get('calibration_interval_perside_us', int())
        if 'calibration_counter_total' not in kwargs:
            self.calibration_counter_total = numpy.zeros(4, dtype=numpy.uint32)
        else:
            self.calibration_counter_total = numpy.array(kwargs.get('calibration_counter_total'), dtype=numpy.uint32)
            assert self.calibration_counter_total.shape == (4, )
        self.side_data_collected = kwargs.get(
            'side_data_collected',
            [bool() for x in range(4)]
        )
        if 'x' not in kwargs:
            self.x = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.x = numpy.array(kwargs.get('x'), dtype=numpy.float32)
            assert self.x.shape == (4, )
        if 'y' not in kwargs:
            self.y = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.y = numpy.array(kwargs.get('y'), dtype=numpy.float32)
            assert self.y.shape == (4, )
        if 'z' not in kwargs:
            self.z = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.z = numpy.array(kwargs.get('z'), dtype=numpy.float32)
            assert self.z.shape == (4, )

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
        if self.done_count != other.done_count:
            return False
        if self.calibration_points_perside != other.calibration_points_perside:
            return False
        if self.calibration_interval_perside_us != other.calibration_interval_perside_us:
            return False
        if all(self.calibration_counter_total != other.calibration_counter_total):
            return False
        if self.side_data_collected != other.side_data_collected:
            return False
        if all(self.x != other.x):
            return False
        if all(self.y != other.y):
            return False
        if all(self.z != other.z):
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
    def done_count(self):
        """Message field 'done_count'."""
        return self._done_count

    @done_count.setter
    def done_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'done_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'done_count' field must be an unsigned integer in [0, 4294967295]"
        self._done_count = value

    @builtins.property
    def calibration_points_perside(self):
        """Message field 'calibration_points_perside'."""
        return self._calibration_points_perside

    @calibration_points_perside.setter
    def calibration_points_perside(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'calibration_points_perside' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'calibration_points_perside' field must be an unsigned integer in [0, 4294967295]"
        self._calibration_points_perside = value

    @builtins.property
    def calibration_interval_perside_us(self):
        """Message field 'calibration_interval_perside_us'."""
        return self._calibration_interval_perside_us

    @calibration_interval_perside_us.setter
    def calibration_interval_perside_us(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'calibration_interval_perside_us' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'calibration_interval_perside_us' field must be an unsigned integer in [0, 18446744073709551615]"
        self._calibration_interval_perside_us = value

    @builtins.property
    def calibration_counter_total(self):
        """Message field 'calibration_counter_total'."""
        return self._calibration_counter_total

    @calibration_counter_total.setter
    def calibration_counter_total(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'calibration_counter_total' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 4, \
                "The 'calibration_counter_total' numpy.ndarray() must have a size of 4"
            self._calibration_counter_total = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'calibration_counter_total' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._calibration_counter_total = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def side_data_collected(self):
        """Message field 'side_data_collected'."""
        return self._side_data_collected

    @side_data_collected.setter
    def side_data_collected(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'side_data_collected' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._side_data_collected = value

    @builtins.property
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'x' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'x' numpy.ndarray() must have a size of 4"
            self._x = value
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
                "The 'x' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._x = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'y' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'y' numpy.ndarray() must have a size of 4"
            self._y = value
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
                "The 'y' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._y = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'z' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'z' numpy.ndarray() must have a size of 4"
            self._z = value
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
                "The 'z' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._z = numpy.array(value, dtype=numpy.float32)
