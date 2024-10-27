# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/InputRc.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'values'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_InputRc(type):
    """Metaclass of message 'InputRc'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RC_INPUT_SOURCE_UNKNOWN': 0,
        'RC_INPUT_SOURCE_PX4FMU_PPM': 1,
        'RC_INPUT_SOURCE_PX4IO_PPM': 2,
        'RC_INPUT_SOURCE_PX4IO_SPEKTRUM': 3,
        'RC_INPUT_SOURCE_PX4IO_SBUS': 4,
        'RC_INPUT_SOURCE_PX4IO_ST24': 5,
        'RC_INPUT_SOURCE_MAVLINK': 6,
        'RC_INPUT_SOURCE_QURT': 7,
        'RC_INPUT_SOURCE_PX4FMU_SPEKTRUM': 8,
        'RC_INPUT_SOURCE_PX4FMU_SBUS': 9,
        'RC_INPUT_SOURCE_PX4FMU_ST24': 10,
        'RC_INPUT_SOURCE_PX4FMU_SUMD': 11,
        'RC_INPUT_SOURCE_PX4FMU_DSM': 12,
        'RC_INPUT_SOURCE_PX4IO_SUMD': 13,
        'RC_INPUT_SOURCE_PX4FMU_CRSF': 14,
        'RC_INPUT_SOURCE_PX4FMU_GHST': 15,
        'RC_INPUT_MAX_CHANNELS': 18,
        'RSSI_MAX': 100,
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
                'px4_msgs.msg.InputRc')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__input_rc
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__input_rc
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__input_rc
            cls._TYPE_SUPPORT = module.type_support_msg__msg__input_rc
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__input_rc

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RC_INPUT_SOURCE_UNKNOWN': cls.__constants['RC_INPUT_SOURCE_UNKNOWN'],
            'RC_INPUT_SOURCE_PX4FMU_PPM': cls.__constants['RC_INPUT_SOURCE_PX4FMU_PPM'],
            'RC_INPUT_SOURCE_PX4IO_PPM': cls.__constants['RC_INPUT_SOURCE_PX4IO_PPM'],
            'RC_INPUT_SOURCE_PX4IO_SPEKTRUM': cls.__constants['RC_INPUT_SOURCE_PX4IO_SPEKTRUM'],
            'RC_INPUT_SOURCE_PX4IO_SBUS': cls.__constants['RC_INPUT_SOURCE_PX4IO_SBUS'],
            'RC_INPUT_SOURCE_PX4IO_ST24': cls.__constants['RC_INPUT_SOURCE_PX4IO_ST24'],
            'RC_INPUT_SOURCE_MAVLINK': cls.__constants['RC_INPUT_SOURCE_MAVLINK'],
            'RC_INPUT_SOURCE_QURT': cls.__constants['RC_INPUT_SOURCE_QURT'],
            'RC_INPUT_SOURCE_PX4FMU_SPEKTRUM': cls.__constants['RC_INPUT_SOURCE_PX4FMU_SPEKTRUM'],
            'RC_INPUT_SOURCE_PX4FMU_SBUS': cls.__constants['RC_INPUT_SOURCE_PX4FMU_SBUS'],
            'RC_INPUT_SOURCE_PX4FMU_ST24': cls.__constants['RC_INPUT_SOURCE_PX4FMU_ST24'],
            'RC_INPUT_SOURCE_PX4FMU_SUMD': cls.__constants['RC_INPUT_SOURCE_PX4FMU_SUMD'],
            'RC_INPUT_SOURCE_PX4FMU_DSM': cls.__constants['RC_INPUT_SOURCE_PX4FMU_DSM'],
            'RC_INPUT_SOURCE_PX4IO_SUMD': cls.__constants['RC_INPUT_SOURCE_PX4IO_SUMD'],
            'RC_INPUT_SOURCE_PX4FMU_CRSF': cls.__constants['RC_INPUT_SOURCE_PX4FMU_CRSF'],
            'RC_INPUT_SOURCE_PX4FMU_GHST': cls.__constants['RC_INPUT_SOURCE_PX4FMU_GHST'],
            'RC_INPUT_MAX_CHANNELS': cls.__constants['RC_INPUT_MAX_CHANNELS'],
            'RSSI_MAX': cls.__constants['RSSI_MAX'],
        }

    @property
    def RC_INPUT_SOURCE_UNKNOWN(self):
        """Message constant 'RC_INPUT_SOURCE_UNKNOWN'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_UNKNOWN']

    @property
    def RC_INPUT_SOURCE_PX4FMU_PPM(self):
        """Message constant 'RC_INPUT_SOURCE_PX4FMU_PPM'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_PX4FMU_PPM']

    @property
    def RC_INPUT_SOURCE_PX4IO_PPM(self):
        """Message constant 'RC_INPUT_SOURCE_PX4IO_PPM'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_PX4IO_PPM']

    @property
    def RC_INPUT_SOURCE_PX4IO_SPEKTRUM(self):
        """Message constant 'RC_INPUT_SOURCE_PX4IO_SPEKTRUM'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_PX4IO_SPEKTRUM']

    @property
    def RC_INPUT_SOURCE_PX4IO_SBUS(self):
        """Message constant 'RC_INPUT_SOURCE_PX4IO_SBUS'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_PX4IO_SBUS']

    @property
    def RC_INPUT_SOURCE_PX4IO_ST24(self):
        """Message constant 'RC_INPUT_SOURCE_PX4IO_ST24'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_PX4IO_ST24']

    @property
    def RC_INPUT_SOURCE_MAVLINK(self):
        """Message constant 'RC_INPUT_SOURCE_MAVLINK'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_MAVLINK']

    @property
    def RC_INPUT_SOURCE_QURT(self):
        """Message constant 'RC_INPUT_SOURCE_QURT'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_QURT']

    @property
    def RC_INPUT_SOURCE_PX4FMU_SPEKTRUM(self):
        """Message constant 'RC_INPUT_SOURCE_PX4FMU_SPEKTRUM'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_PX4FMU_SPEKTRUM']

    @property
    def RC_INPUT_SOURCE_PX4FMU_SBUS(self):
        """Message constant 'RC_INPUT_SOURCE_PX4FMU_SBUS'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_PX4FMU_SBUS']

    @property
    def RC_INPUT_SOURCE_PX4FMU_ST24(self):
        """Message constant 'RC_INPUT_SOURCE_PX4FMU_ST24'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_PX4FMU_ST24']

    @property
    def RC_INPUT_SOURCE_PX4FMU_SUMD(self):
        """Message constant 'RC_INPUT_SOURCE_PX4FMU_SUMD'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_PX4FMU_SUMD']

    @property
    def RC_INPUT_SOURCE_PX4FMU_DSM(self):
        """Message constant 'RC_INPUT_SOURCE_PX4FMU_DSM'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_PX4FMU_DSM']

    @property
    def RC_INPUT_SOURCE_PX4IO_SUMD(self):
        """Message constant 'RC_INPUT_SOURCE_PX4IO_SUMD'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_PX4IO_SUMD']

    @property
    def RC_INPUT_SOURCE_PX4FMU_CRSF(self):
        """Message constant 'RC_INPUT_SOURCE_PX4FMU_CRSF'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_PX4FMU_CRSF']

    @property
    def RC_INPUT_SOURCE_PX4FMU_GHST(self):
        """Message constant 'RC_INPUT_SOURCE_PX4FMU_GHST'."""
        return Metaclass_InputRc.__constants['RC_INPUT_SOURCE_PX4FMU_GHST']

    @property
    def RC_INPUT_MAX_CHANNELS(self):
        """Message constant 'RC_INPUT_MAX_CHANNELS'."""
        return Metaclass_InputRc.__constants['RC_INPUT_MAX_CHANNELS']

    @property
    def RSSI_MAX(self):
        """Message constant 'RSSI_MAX'."""
        return Metaclass_InputRc.__constants['RSSI_MAX']


class InputRc(metaclass=Metaclass_InputRc):
    """
    Message class 'InputRc'.

    Constants:
      RC_INPUT_SOURCE_UNKNOWN
      RC_INPUT_SOURCE_PX4FMU_PPM
      RC_INPUT_SOURCE_PX4IO_PPM
      RC_INPUT_SOURCE_PX4IO_SPEKTRUM
      RC_INPUT_SOURCE_PX4IO_SBUS
      RC_INPUT_SOURCE_PX4IO_ST24
      RC_INPUT_SOURCE_MAVLINK
      RC_INPUT_SOURCE_QURT
      RC_INPUT_SOURCE_PX4FMU_SPEKTRUM
      RC_INPUT_SOURCE_PX4FMU_SBUS
      RC_INPUT_SOURCE_PX4FMU_ST24
      RC_INPUT_SOURCE_PX4FMU_SUMD
      RC_INPUT_SOURCE_PX4FMU_DSM
      RC_INPUT_SOURCE_PX4IO_SUMD
      RC_INPUT_SOURCE_PX4FMU_CRSF
      RC_INPUT_SOURCE_PX4FMU_GHST
      RC_INPUT_MAX_CHANNELS
      RSSI_MAX
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_last_signal',
        '_channel_count',
        '_rssi',
        '_rc_failsafe',
        '_rc_lost',
        '_rc_lost_frame_count',
        '_rc_total_frame_count',
        '_rc_ppm_frame_length',
        '_input_source',
        '_values',
        '_link_quality',
        '_rssi_dbm',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_last_signal': 'uint64',
        'channel_count': 'uint8',
        'rssi': 'int32',
        'rc_failsafe': 'boolean',
        'rc_lost': 'boolean',
        'rc_lost_frame_count': 'uint16',
        'rc_total_frame_count': 'uint16',
        'rc_ppm_frame_length': 'uint16',
        'input_source': 'uint8',
        'values': 'uint16[18]',
        'link_quality': 'int8',
        'rssi_dbm': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint16'), 18),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_last_signal = kwargs.get('timestamp_last_signal', int())
        self.channel_count = kwargs.get('channel_count', int())
        self.rssi = kwargs.get('rssi', int())
        self.rc_failsafe = kwargs.get('rc_failsafe', bool())
        self.rc_lost = kwargs.get('rc_lost', bool())
        self.rc_lost_frame_count = kwargs.get('rc_lost_frame_count', int())
        self.rc_total_frame_count = kwargs.get('rc_total_frame_count', int())
        self.rc_ppm_frame_length = kwargs.get('rc_ppm_frame_length', int())
        self.input_source = kwargs.get('input_source', int())
        if 'values' not in kwargs:
            self.values = numpy.zeros(18, dtype=numpy.uint16)
        else:
            self.values = numpy.array(kwargs.get('values'), dtype=numpy.uint16)
            assert self.values.shape == (18, )
        self.link_quality = kwargs.get('link_quality', int())
        self.rssi_dbm = kwargs.get('rssi_dbm', float())

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
        if self.timestamp_last_signal != other.timestamp_last_signal:
            return False
        if self.channel_count != other.channel_count:
            return False
        if self.rssi != other.rssi:
            return False
        if self.rc_failsafe != other.rc_failsafe:
            return False
        if self.rc_lost != other.rc_lost:
            return False
        if self.rc_lost_frame_count != other.rc_lost_frame_count:
            return False
        if self.rc_total_frame_count != other.rc_total_frame_count:
            return False
        if self.rc_ppm_frame_length != other.rc_ppm_frame_length:
            return False
        if self.input_source != other.input_source:
            return False
        if all(self.values != other.values):
            return False
        if self.link_quality != other.link_quality:
            return False
        if self.rssi_dbm != other.rssi_dbm:
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
    def timestamp_last_signal(self):
        """Message field 'timestamp_last_signal'."""
        return self._timestamp_last_signal

    @timestamp_last_signal.setter
    def timestamp_last_signal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_last_signal' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_last_signal' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_last_signal = value

    @builtins.property
    def channel_count(self):
        """Message field 'channel_count'."""
        return self._channel_count

    @channel_count.setter
    def channel_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'channel_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'channel_count' field must be an unsigned integer in [0, 255]"
        self._channel_count = value

    @builtins.property
    def rssi(self):
        """Message field 'rssi'."""
        return self._rssi

    @rssi.setter
    def rssi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rssi' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'rssi' field must be an integer in [-2147483648, 2147483647]"
        self._rssi = value

    @builtins.property
    def rc_failsafe(self):
        """Message field 'rc_failsafe'."""
        return self._rc_failsafe

    @rc_failsafe.setter
    def rc_failsafe(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rc_failsafe' field must be of type 'bool'"
        self._rc_failsafe = value

    @builtins.property
    def rc_lost(self):
        """Message field 'rc_lost'."""
        return self._rc_lost

    @rc_lost.setter
    def rc_lost(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rc_lost' field must be of type 'bool'"
        self._rc_lost = value

    @builtins.property
    def rc_lost_frame_count(self):
        """Message field 'rc_lost_frame_count'."""
        return self._rc_lost_frame_count

    @rc_lost_frame_count.setter
    def rc_lost_frame_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc_lost_frame_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'rc_lost_frame_count' field must be an unsigned integer in [0, 65535]"
        self._rc_lost_frame_count = value

    @builtins.property
    def rc_total_frame_count(self):
        """Message field 'rc_total_frame_count'."""
        return self._rc_total_frame_count

    @rc_total_frame_count.setter
    def rc_total_frame_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc_total_frame_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'rc_total_frame_count' field must be an unsigned integer in [0, 65535]"
        self._rc_total_frame_count = value

    @builtins.property
    def rc_ppm_frame_length(self):
        """Message field 'rc_ppm_frame_length'."""
        return self._rc_ppm_frame_length

    @rc_ppm_frame_length.setter
    def rc_ppm_frame_length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc_ppm_frame_length' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'rc_ppm_frame_length' field must be an unsigned integer in [0, 65535]"
        self._rc_ppm_frame_length = value

    @builtins.property
    def input_source(self):
        """Message field 'input_source'."""
        return self._input_source

    @input_source.setter
    def input_source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'input_source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'input_source' field must be an unsigned integer in [0, 255]"
        self._input_source = value

    @builtins.property
    def values(self):
        """Message field 'values'."""
        return self._values

    @values.setter
    def values(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint16, \
                "The 'values' numpy.ndarray() must have the dtype of 'numpy.uint16'"
            assert value.size == 18, \
                "The 'values' numpy.ndarray() must have a size of 18"
            self._values = value
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
                 len(value) == 18 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 65536 for val in value)), \
                "The 'values' field must be a set or sequence with length 18 and each value of type 'int' and each unsigned integer in [0, 65535]"
        self._values = numpy.array(value, dtype=numpy.uint16)

    @builtins.property
    def link_quality(self):
        """Message field 'link_quality'."""
        return self._link_quality

    @link_quality.setter
    def link_quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'link_quality' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'link_quality' field must be an integer in [-128, 127]"
        self._link_quality = value

    @builtins.property
    def rssi_dbm(self):
        """Message field 'rssi_dbm'."""
        return self._rssi_dbm

    @rssi_dbm.setter
    def rssi_dbm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rssi_dbm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rssi_dbm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rssi_dbm = value
