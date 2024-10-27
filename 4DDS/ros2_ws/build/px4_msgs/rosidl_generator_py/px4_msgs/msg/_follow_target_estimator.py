# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/FollowTargetEstimator.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'pos_est'
# Member 'vel_est'
# Member 'acc_est'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FollowTargetEstimator(type):
    """Metaclass of message 'FollowTargetEstimator'."""

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
                'px4_msgs.msg.FollowTargetEstimator')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__follow_target_estimator
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__follow_target_estimator
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__follow_target_estimator
            cls._TYPE_SUPPORT = module.type_support_msg__msg__follow_target_estimator
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__follow_target_estimator

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FollowTargetEstimator(metaclass=Metaclass_FollowTargetEstimator):
    """Message class 'FollowTargetEstimator'."""

    __slots__ = [
        '_timestamp',
        '_last_filter_reset_timestamp',
        '_valid',
        '_stale',
        '_lat_est',
        '_lon_est',
        '_alt_est',
        '_pos_est',
        '_vel_est',
        '_acc_est',
        '_prediction_count',
        '_fusion_count',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'last_filter_reset_timestamp': 'uint64',
        'valid': 'boolean',
        'stale': 'boolean',
        'lat_est': 'double',
        'lon_est': 'double',
        'alt_est': 'float',
        'pos_est': 'float[3]',
        'vel_est': 'float[3]',
        'acc_est': 'float[3]',
        'prediction_count': 'uint64',
        'fusion_count': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.last_filter_reset_timestamp = kwargs.get('last_filter_reset_timestamp', int())
        self.valid = kwargs.get('valid', bool())
        self.stale = kwargs.get('stale', bool())
        self.lat_est = kwargs.get('lat_est', float())
        self.lon_est = kwargs.get('lon_est', float())
        self.alt_est = kwargs.get('alt_est', float())
        if 'pos_est' not in kwargs:
            self.pos_est = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.pos_est = numpy.array(kwargs.get('pos_est'), dtype=numpy.float32)
            assert self.pos_est.shape == (3, )
        if 'vel_est' not in kwargs:
            self.vel_est = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.vel_est = numpy.array(kwargs.get('vel_est'), dtype=numpy.float32)
            assert self.vel_est.shape == (3, )
        if 'acc_est' not in kwargs:
            self.acc_est = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.acc_est = numpy.array(kwargs.get('acc_est'), dtype=numpy.float32)
            assert self.acc_est.shape == (3, )
        self.prediction_count = kwargs.get('prediction_count', int())
        self.fusion_count = kwargs.get('fusion_count', int())

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
        if self.last_filter_reset_timestamp != other.last_filter_reset_timestamp:
            return False
        if self.valid != other.valid:
            return False
        if self.stale != other.stale:
            return False
        if self.lat_est != other.lat_est:
            return False
        if self.lon_est != other.lon_est:
            return False
        if self.alt_est != other.alt_est:
            return False
        if all(self.pos_est != other.pos_est):
            return False
        if all(self.vel_est != other.vel_est):
            return False
        if all(self.acc_est != other.acc_est):
            return False
        if self.prediction_count != other.prediction_count:
            return False
        if self.fusion_count != other.fusion_count:
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
    def last_filter_reset_timestamp(self):
        """Message field 'last_filter_reset_timestamp'."""
        return self._last_filter_reset_timestamp

    @last_filter_reset_timestamp.setter
    def last_filter_reset_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_filter_reset_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'last_filter_reset_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._last_filter_reset_timestamp = value

    @builtins.property
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid' field must be of type 'bool'"
        self._valid = value

    @builtins.property
    def stale(self):
        """Message field 'stale'."""
        return self._stale

    @stale.setter
    def stale(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'stale' field must be of type 'bool'"
        self._stale = value

    @builtins.property
    def lat_est(self):
        """Message field 'lat_est'."""
        return self._lat_est

    @lat_est.setter
    def lat_est(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat_est' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lat_est' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lat_est = value

    @builtins.property
    def lon_est(self):
        """Message field 'lon_est'."""
        return self._lon_est

    @lon_est.setter
    def lon_est(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon_est' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lon_est' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lon_est = value

    @builtins.property
    def alt_est(self):
        """Message field 'alt_est'."""
        return self._alt_est

    @alt_est.setter
    def alt_est(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alt_est' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alt_est' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alt_est = value

    @builtins.property
    def pos_est(self):
        """Message field 'pos_est'."""
        return self._pos_est

    @pos_est.setter
    def pos_est(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'pos_est' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'pos_est' numpy.ndarray() must have a size of 3"
            self._pos_est = value
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
                "The 'pos_est' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._pos_est = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def vel_est(self):
        """Message field 'vel_est'."""
        return self._vel_est

    @vel_est.setter
    def vel_est(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'vel_est' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'vel_est' numpy.ndarray() must have a size of 3"
            self._vel_est = value
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
                "The 'vel_est' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._vel_est = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def acc_est(self):
        """Message field 'acc_est'."""
        return self._acc_est

    @acc_est.setter
    def acc_est(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'acc_est' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'acc_est' numpy.ndarray() must have a size of 3"
            self._acc_est = value
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
                "The 'acc_est' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._acc_est = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def prediction_count(self):
        """Message field 'prediction_count'."""
        return self._prediction_count

    @prediction_count.setter
    def prediction_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'prediction_count' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'prediction_count' field must be an unsigned integer in [0, 18446744073709551615]"
        self._prediction_count = value

    @builtins.property
    def fusion_count(self):
        """Message field 'fusion_count'."""
        return self._fusion_count

    @fusion_count.setter
    def fusion_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fusion_count' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'fusion_count' field must be an unsigned integer in [0, 18446744073709551615]"
        self._fusion_count = value
