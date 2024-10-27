# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/UlogStream.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'data'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UlogStream(type):
    """Metaclass of message 'UlogStream'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FLAGS_NEED_ACK': 1,
        'ORB_QUEUE_LENGTH': 16,
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
                'px4_msgs.msg.UlogStream')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ulog_stream
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ulog_stream
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ulog_stream
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ulog_stream
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ulog_stream

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FLAGS_NEED_ACK': cls.__constants['FLAGS_NEED_ACK'],
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def FLAGS_NEED_ACK(self):
        """Message constant 'FLAGS_NEED_ACK'."""
        return Metaclass_UlogStream.__constants['FLAGS_NEED_ACK']

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_UlogStream.__constants['ORB_QUEUE_LENGTH']


class UlogStream(metaclass=Metaclass_UlogStream):
    """
    Message class 'UlogStream'.

    Constants:
      FLAGS_NEED_ACK
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_length',
        '_first_message_offset',
        '_msg_sequence',
        '_flags',
        '_data',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'length': 'uint8',
        'first_message_offset': 'uint8',
        'msg_sequence': 'uint16',
        'flags': 'uint8',
        'data': 'uint8[249]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 249),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.length = kwargs.get('length', int())
        self.first_message_offset = kwargs.get('first_message_offset', int())
        self.msg_sequence = kwargs.get('msg_sequence', int())
        self.flags = kwargs.get('flags', int())
        if 'data' not in kwargs:
            self.data = numpy.zeros(249, dtype=numpy.uint8)
        else:
            self.data = numpy.array(kwargs.get('data'), dtype=numpy.uint8)
            assert self.data.shape == (249, )

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
        if self.length != other.length:
            return False
        if self.first_message_offset != other.first_message_offset:
            return False
        if self.msg_sequence != other.msg_sequence:
            return False
        if self.flags != other.flags:
            return False
        if all(self.data != other.data):
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
    def length(self):
        """Message field 'length'."""
        return self._length

    @length.setter
    def length(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'length' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'length' field must be an unsigned integer in [0, 255]"
        self._length = value

    @builtins.property
    def first_message_offset(self):
        """Message field 'first_message_offset'."""
        return self._first_message_offset

    @first_message_offset.setter
    def first_message_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'first_message_offset' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'first_message_offset' field must be an unsigned integer in [0, 255]"
        self._first_message_offset = value

    @builtins.property
    def msg_sequence(self):
        """Message field 'msg_sequence'."""
        return self._msg_sequence

    @msg_sequence.setter
    def msg_sequence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'msg_sequence' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'msg_sequence' field must be an unsigned integer in [0, 65535]"
        self._msg_sequence = value

    @builtins.property
    def flags(self):
        """Message field 'flags'."""
        return self._flags

    @flags.setter
    def flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'flags' field must be an unsigned integer in [0, 255]"
        self._flags = value

    @builtins.property
    def data(self):
        """Message field 'data'."""
        return self._data

    @data.setter
    def data(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'data' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 249, \
                "The 'data' numpy.ndarray() must have a size of 249"
            self._data = value
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
                 len(value) == 249 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'data' field must be a set or sequence with length 249 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._data = numpy.array(value, dtype=numpy.uint8)
