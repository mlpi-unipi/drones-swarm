# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/YawEstimatorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'yaw'
# Member 'innov_vn'
# Member 'innov_ve'
# Member 'weight'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_YawEstimatorStatus(type):
    """Metaclass of message 'YawEstimatorStatus'."""

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
                'px4_msgs.msg.YawEstimatorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__yaw_estimator_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__yaw_estimator_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__yaw_estimator_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__yaw_estimator_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__yaw_estimator_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class YawEstimatorStatus(metaclass=Metaclass_YawEstimatorStatus):
    """Message class 'YawEstimatorStatus'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_yaw_composite',
        '_yaw_variance',
        '_yaw_composite_valid',
        '_yaw',
        '_innov_vn',
        '_innov_ve',
        '_weight',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'yaw_composite': 'float',
        'yaw_variance': 'float',
        'yaw_composite_valid': 'boolean',
        'yaw': 'float[5]',
        'innov_vn': 'float[5]',
        'innov_ve': 'float[5]',
        'weight': 'float[5]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 5),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.yaw_composite = kwargs.get('yaw_composite', float())
        self.yaw_variance = kwargs.get('yaw_variance', float())
        self.yaw_composite_valid = kwargs.get('yaw_composite_valid', bool())
        if 'yaw' not in kwargs:
            self.yaw = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.yaw = numpy.array(kwargs.get('yaw'), dtype=numpy.float32)
            assert self.yaw.shape == (5, )
        if 'innov_vn' not in kwargs:
            self.innov_vn = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.innov_vn = numpy.array(kwargs.get('innov_vn'), dtype=numpy.float32)
            assert self.innov_vn.shape == (5, )
        if 'innov_ve' not in kwargs:
            self.innov_ve = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.innov_ve = numpy.array(kwargs.get('innov_ve'), dtype=numpy.float32)
            assert self.innov_ve.shape == (5, )
        if 'weight' not in kwargs:
            self.weight = numpy.zeros(5, dtype=numpy.float32)
        else:
            self.weight = numpy.array(kwargs.get('weight'), dtype=numpy.float32)
            assert self.weight.shape == (5, )

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
        if self.yaw_composite != other.yaw_composite:
            return False
        if self.yaw_variance != other.yaw_variance:
            return False
        if self.yaw_composite_valid != other.yaw_composite_valid:
            return False
        if all(self.yaw != other.yaw):
            return False
        if all(self.innov_vn != other.innov_vn):
            return False
        if all(self.innov_ve != other.innov_ve):
            return False
        if all(self.weight != other.weight):
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
    def yaw_composite(self):
        """Message field 'yaw_composite'."""
        return self._yaw_composite

    @yaw_composite.setter
    def yaw_composite(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_composite' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_composite' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_composite = value

    @builtins.property
    def yaw_variance(self):
        """Message field 'yaw_variance'."""
        return self._yaw_variance

    @yaw_variance.setter
    def yaw_variance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_variance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_variance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_variance = value

    @builtins.property
    def yaw_composite_valid(self):
        """Message field 'yaw_composite_valid'."""
        return self._yaw_composite_valid

    @yaw_composite_valid.setter
    def yaw_composite_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'yaw_composite_valid' field must be of type 'bool'"
        self._yaw_composite_valid = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'yaw' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'yaw' numpy.ndarray() must have a size of 5"
            self._yaw = value
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
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'yaw' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._yaw = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def innov_vn(self):
        """Message field 'innov_vn'."""
        return self._innov_vn

    @innov_vn.setter
    def innov_vn(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'innov_vn' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'innov_vn' numpy.ndarray() must have a size of 5"
            self._innov_vn = value
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
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'innov_vn' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._innov_vn = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def innov_ve(self):
        """Message field 'innov_ve'."""
        return self._innov_ve

    @innov_ve.setter
    def innov_ve(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'innov_ve' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'innov_ve' numpy.ndarray() must have a size of 5"
            self._innov_ve = value
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
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'innov_ve' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._innov_ve = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def weight(self):
        """Message field 'weight'."""
        return self._weight

    @weight.setter
    def weight(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'weight' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 5, \
                "The 'weight' numpy.ndarray() must have a size of 5"
            self._weight = value
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
                 len(value) == 5 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'weight' field must be a set or sequence with length 5 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._weight = numpy.array(value, dtype=numpy.float32)
