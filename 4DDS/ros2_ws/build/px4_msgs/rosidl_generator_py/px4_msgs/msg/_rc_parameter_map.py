# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/RcParameterMap.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'param_index'
# Member 'param_id'
# Member 'scale'
# Member 'value0'
# Member 'value_min'
# Member 'value_max'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RcParameterMap(type):
    """Metaclass of message 'RcParameterMap'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RC_PARAM_MAP_NCHAN': 3,
        'PARAM_ID_LEN': 16,
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
                'px4_msgs.msg.RcParameterMap')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rc_parameter_map
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rc_parameter_map
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rc_parameter_map
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rc_parameter_map
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rc_parameter_map

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RC_PARAM_MAP_NCHAN': cls.__constants['RC_PARAM_MAP_NCHAN'],
            'PARAM_ID_LEN': cls.__constants['PARAM_ID_LEN'],
        }

    @property
    def RC_PARAM_MAP_NCHAN(self):
        """Message constant 'RC_PARAM_MAP_NCHAN'."""
        return Metaclass_RcParameterMap.__constants['RC_PARAM_MAP_NCHAN']

    @property
    def PARAM_ID_LEN(self):
        """Message constant 'PARAM_ID_LEN'."""
        return Metaclass_RcParameterMap.__constants['PARAM_ID_LEN']


class RcParameterMap(metaclass=Metaclass_RcParameterMap):
    """
    Message class 'RcParameterMap'.

    Constants:
      RC_PARAM_MAP_NCHAN
      PARAM_ID_LEN
    """

    __slots__ = [
        '_timestamp',
        '_valid',
        '_param_index',
        '_param_id',
        '_scale',
        '_value0',
        '_value_min',
        '_value_max',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'valid': 'boolean[3]',
        'param_index': 'int32[3]',
        'param_id': 'uint8[51]',
        'scale': 'float[3]',
        'value0': 'float[3]',
        'value_min': 'float[3]',
        'value_max': 'float[3]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 51),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.valid = kwargs.get(
            'valid',
            [bool() for x in range(3)]
        )
        if 'param_index' not in kwargs:
            self.param_index = numpy.zeros(3, dtype=numpy.int32)
        else:
            self.param_index = numpy.array(kwargs.get('param_index'), dtype=numpy.int32)
            assert self.param_index.shape == (3, )
        if 'param_id' not in kwargs:
            self.param_id = numpy.zeros(51, dtype=numpy.uint8)
        else:
            self.param_id = numpy.array(kwargs.get('param_id'), dtype=numpy.uint8)
            assert self.param_id.shape == (51, )
        if 'scale' not in kwargs:
            self.scale = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.scale = numpy.array(kwargs.get('scale'), dtype=numpy.float32)
            assert self.scale.shape == (3, )
        if 'value0' not in kwargs:
            self.value0 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.value0 = numpy.array(kwargs.get('value0'), dtype=numpy.float32)
            assert self.value0.shape == (3, )
        if 'value_min' not in kwargs:
            self.value_min = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.value_min = numpy.array(kwargs.get('value_min'), dtype=numpy.float32)
            assert self.value_min.shape == (3, )
        if 'value_max' not in kwargs:
            self.value_max = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.value_max = numpy.array(kwargs.get('value_max'), dtype=numpy.float32)
            assert self.value_max.shape == (3, )

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
        if self.valid != other.valid:
            return False
        if all(self.param_index != other.param_index):
            return False
        if all(self.param_id != other.param_id):
            return False
        if all(self.scale != other.scale):
            return False
        if all(self.value0 != other.value0):
            return False
        if all(self.value_min != other.value_min):
            return False
        if all(self.value_max != other.value_max):
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
                 len(value) == 3 and
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'valid' field must be a set or sequence with length 3 and each value of type 'bool'"
        self._valid = value

    @builtins.property
    def param_index(self):
        """Message field 'param_index'."""
        return self._param_index

    @param_index.setter
    def param_index(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'param_index' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 3, \
                "The 'param_index' numpy.ndarray() must have a size of 3"
            self._param_index = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'param_index' field must be a set or sequence with length 3 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._param_index = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def param_id(self):
        """Message field 'param_id'."""
        return self._param_id

    @param_id.setter
    def param_id(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'param_id' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 51, \
                "The 'param_id' numpy.ndarray() must have a size of 51"
            self._param_id = value
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
                 len(value) == 51 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'param_id' field must be a set or sequence with length 51 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._param_id = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def scale(self):
        """Message field 'scale'."""
        return self._scale

    @scale.setter
    def scale(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'scale' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'scale' numpy.ndarray() must have a size of 3"
            self._scale = value
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
                "The 'scale' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._scale = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def value0(self):
        """Message field 'value0'."""
        return self._value0

    @value0.setter
    def value0(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'value0' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'value0' numpy.ndarray() must have a size of 3"
            self._value0 = value
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
                "The 'value0' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._value0 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def value_min(self):
        """Message field 'value_min'."""
        return self._value_min

    @value_min.setter
    def value_min(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'value_min' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'value_min' numpy.ndarray() must have a size of 3"
            self._value_min = value
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
                "The 'value_min' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._value_min = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def value_max(self):
        """Message field 'value_max'."""
        return self._value_max

    @value_max.setter
    def value_max(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'value_max' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'value_max' numpy.ndarray() must have a size of 3"
            self._value_max = value
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
                "The 'value_max' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._value_max = numpy.array(value, dtype=numpy.float32)
