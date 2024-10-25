# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/MagnetometerBiasEstimate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'bias_x'
# Member 'bias_y'
# Member 'bias_z'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MagnetometerBiasEstimate(type):
    """Metaclass of message 'MagnetometerBiasEstimate'."""

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
                'px4_msgs.msg.MagnetometerBiasEstimate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__magnetometer_bias_estimate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__magnetometer_bias_estimate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__magnetometer_bias_estimate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__magnetometer_bias_estimate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__magnetometer_bias_estimate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MagnetometerBiasEstimate(metaclass=Metaclass_MagnetometerBiasEstimate):
    """Message class 'MagnetometerBiasEstimate'."""

    __slots__ = [
        '_timestamp',
        '_bias_x',
        '_bias_y',
        '_bias_z',
        '_valid',
        '_stable',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'bias_x': 'float[4]',
        'bias_y': 'float[4]',
        'bias_z': 'float[4]',
        'valid': 'boolean[4]',
        'stable': 'boolean[4]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        if 'bias_x' not in kwargs:
            self.bias_x = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.bias_x = numpy.array(kwargs.get('bias_x'), dtype=numpy.float32)
            assert self.bias_x.shape == (4, )
        if 'bias_y' not in kwargs:
            self.bias_y = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.bias_y = numpy.array(kwargs.get('bias_y'), dtype=numpy.float32)
            assert self.bias_y.shape == (4, )
        if 'bias_z' not in kwargs:
            self.bias_z = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.bias_z = numpy.array(kwargs.get('bias_z'), dtype=numpy.float32)
            assert self.bias_z.shape == (4, )
        self.valid = kwargs.get(
            'valid',
            [bool() for x in range(4)]
        )
        self.stable = kwargs.get(
            'stable',
            [bool() for x in range(4)]
        )

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
        if all(self.bias_x != other.bias_x):
            return False
        if all(self.bias_y != other.bias_y):
            return False
        if all(self.bias_z != other.bias_z):
            return False
        if self.valid != other.valid:
            return False
        if self.stable != other.stable:
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
    def bias_x(self):
        """Message field 'bias_x'."""
        return self._bias_x

    @bias_x.setter
    def bias_x(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'bias_x' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'bias_x' numpy.ndarray() must have a size of 4"
            self._bias_x = value
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
                "The 'bias_x' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._bias_x = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def bias_y(self):
        """Message field 'bias_y'."""
        return self._bias_y

    @bias_y.setter
    def bias_y(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'bias_y' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'bias_y' numpy.ndarray() must have a size of 4"
            self._bias_y = value
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
                "The 'bias_y' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._bias_y = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def bias_z(self):
        """Message field 'bias_z'."""
        return self._bias_z

    @bias_z.setter
    def bias_z(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'bias_z' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'bias_z' numpy.ndarray() must have a size of 4"
            self._bias_z = value
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
                "The 'bias_z' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._bias_z = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
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
                "The 'valid' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._valid = value

    @builtins.property
    def stable(self):
        """Message field 'stable'."""
        return self._stable

    @stable.setter
    def stable(self, value):
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
                "The 'stable' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._stable = value
