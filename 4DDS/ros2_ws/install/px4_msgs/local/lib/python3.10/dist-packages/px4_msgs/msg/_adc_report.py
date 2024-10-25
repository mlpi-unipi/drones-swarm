# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/AdcReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'channel_id'
# Member 'raw_data'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AdcReport(type):
    """Metaclass of message 'AdcReport'."""

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
                'px4_msgs.msg.AdcReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__adc_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__adc_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__adc_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__adc_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__adc_report

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class AdcReport(metaclass=Metaclass_AdcReport):
    """Message class 'AdcReport'."""

    __slots__ = [
        '_timestamp',
        '_device_id',
        '_channel_id',
        '_raw_data',
        '_resolution',
        '_v_ref',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'device_id': 'uint32',
        'channel_id': 'int16[12]',
        'raw_data': 'int32[12]',
        'resolution': 'uint32',
        'v_ref': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 12),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int32'), 12),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.device_id = kwargs.get('device_id', int())
        if 'channel_id' not in kwargs:
            self.channel_id = numpy.zeros(12, dtype=numpy.int16)
        else:
            self.channel_id = numpy.array(kwargs.get('channel_id'), dtype=numpy.int16)
            assert self.channel_id.shape == (12, )
        if 'raw_data' not in kwargs:
            self.raw_data = numpy.zeros(12, dtype=numpy.int32)
        else:
            self.raw_data = numpy.array(kwargs.get('raw_data'), dtype=numpy.int32)
            assert self.raw_data.shape == (12, )
        self.resolution = kwargs.get('resolution', int())
        self.v_ref = kwargs.get('v_ref', float())

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
        if all(self.channel_id != other.channel_id):
            return False
        if all(self.raw_data != other.raw_data):
            return False
        if self.resolution != other.resolution:
            return False
        if self.v_ref != other.v_ref:
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
    def channel_id(self):
        """Message field 'channel_id'."""
        return self._channel_id

    @channel_id.setter
    def channel_id(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'channel_id' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 12, \
                "The 'channel_id' numpy.ndarray() must have a size of 12"
            self._channel_id = value
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
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'channel_id' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-32768, 32767]"
        self._channel_id = numpy.array(value, dtype=numpy.int16)

    @builtins.property
    def raw_data(self):
        """Message field 'raw_data'."""
        return self._raw_data

    @raw_data.setter
    def raw_data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int32, \
                "The 'raw_data' numpy.ndarray() must have the dtype of 'numpy.int32'"
            assert value.size == 12, \
                "The 'raw_data' numpy.ndarray() must have a size of 12"
            self._raw_data = value
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
                 len(value) == 12 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -2147483648 and val < 2147483648 for val in value)), \
                "The 'raw_data' field must be a set or sequence with length 12 and each value of type 'int' and each integer in [-2147483648, 2147483647]"
        self._raw_data = numpy.array(value, dtype=numpy.int32)

    @builtins.property
    def resolution(self):
        """Message field 'resolution'."""
        return self._resolution

    @resolution.setter
    def resolution(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'resolution' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'resolution' field must be an unsigned integer in [0, 4294967295]"
        self._resolution = value

    @builtins.property
    def v_ref(self):
        """Message field 'v_ref'."""
        return self._v_ref

    @v_ref.setter
    def v_ref(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'v_ref' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'v_ref' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._v_ref = value
