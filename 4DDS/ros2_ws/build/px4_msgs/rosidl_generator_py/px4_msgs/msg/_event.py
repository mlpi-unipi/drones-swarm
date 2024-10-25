# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/Event.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'arguments'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Event(type):
    """Metaclass of message 'Event'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
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
                'px4_msgs.msg.Event')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__event
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__event
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__event
            cls._TYPE_SUPPORT = module.type_support_msg__msg__event
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__event

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_Event.__constants['ORB_QUEUE_LENGTH']


class Event(metaclass=Metaclass_Event):
    """
    Message class 'Event'.

    Constants:
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_id',
        '_event_sequence',
        '_arguments',
        '_log_levels',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'id': 'uint32',
        'event_sequence': 'uint16',
        'arguments': 'uint8[25]',
        'log_levels': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 25),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.id = kwargs.get('id', int())
        self.event_sequence = kwargs.get('event_sequence', int())
        if 'arguments' not in kwargs:
            self.arguments = numpy.zeros(25, dtype=numpy.uint8)
        else:
            self.arguments = numpy.array(kwargs.get('arguments'), dtype=numpy.uint8)
            assert self.arguments.shape == (25, )
        self.log_levels = kwargs.get('log_levels', int())

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
        if self.id != other.id:
            return False
        if self.event_sequence != other.event_sequence:
            return False
        if all(self.arguments != other.arguments):
            return False
        if self.log_levels != other.log_levels:
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

    @builtins.property  # noqa: A003
    def id(self):  # noqa: A003
        """Message field 'id'."""
        return self._id

    @id.setter  # noqa: A003
    def id(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'id' field must be an unsigned integer in [0, 4294967295]"
        self._id = value

    @builtins.property
    def event_sequence(self):
        """Message field 'event_sequence'."""
        return self._event_sequence

    @event_sequence.setter
    def event_sequence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'event_sequence' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'event_sequence' field must be an unsigned integer in [0, 65535]"
        self._event_sequence = value

    @builtins.property
    def arguments(self):
        """Message field 'arguments'."""
        return self._arguments

    @arguments.setter
    def arguments(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'arguments' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 25, \
                "The 'arguments' numpy.ndarray() must have a size of 25"
            self._arguments = value
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
                 len(value) == 25 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'arguments' field must be a set or sequence with length 25 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._arguments = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def log_levels(self):
        """Message field 'log_levels'."""
        return self._log_levels

    @log_levels.setter
    def log_levels(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'log_levels' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'log_levels' field must be an unsigned integer in [0, 255]"
        self._log_levels = value
