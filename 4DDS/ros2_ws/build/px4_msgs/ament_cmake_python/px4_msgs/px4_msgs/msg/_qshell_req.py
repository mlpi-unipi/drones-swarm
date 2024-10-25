# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/QshellReq.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'cmd'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_QshellReq(type):
    """Metaclass of message 'QshellReq'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAX_STRLEN': 100,
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
                'px4_msgs.msg.QshellReq')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__qshell_req
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__qshell_req
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__qshell_req
            cls._TYPE_SUPPORT = module.type_support_msg__msg__qshell_req
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__qshell_req

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAX_STRLEN': cls.__constants['MAX_STRLEN'],
        }

    @property
    def MAX_STRLEN(self):
        """Message constant 'MAX_STRLEN'."""
        return Metaclass_QshellReq.__constants['MAX_STRLEN']


class QshellReq(metaclass=Metaclass_QshellReq):
    """
    Message class 'QshellReq'.

    Constants:
      MAX_STRLEN
    """

    __slots__ = [
        '_timestamp',
        '_cmd',
        '_strlen',
        '_request_sequence',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'cmd': 'uint8[100]',
        'strlen': 'uint32',
        'request_sequence': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 100),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        if 'cmd' not in kwargs:
            self.cmd = numpy.zeros(100, dtype=numpy.uint8)
        else:
            self.cmd = numpy.array(kwargs.get('cmd'), dtype=numpy.uint8)
            assert self.cmd.shape == (100, )
        self.strlen = kwargs.get('strlen', int())
        self.request_sequence = kwargs.get('request_sequence', int())

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
        if all(self.cmd != other.cmd):
            return False
        if self.strlen != other.strlen:
            return False
        if self.request_sequence != other.request_sequence:
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
    def cmd(self):
        """Message field 'cmd'."""
        return self._cmd

    @cmd.setter
    def cmd(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'cmd' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 100, \
                "The 'cmd' numpy.ndarray() must have a size of 100"
            self._cmd = value
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
                 len(value) == 100 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'cmd' field must be a set or sequence with length 100 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._cmd = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def strlen(self):
        """Message field 'strlen'."""
        return self._strlen

    @strlen.setter
    def strlen(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'strlen' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'strlen' field must be an unsigned integer in [0, 4294967295]"
        self._strlen = value

    @builtins.property
    def request_sequence(self):
        """Message field 'request_sequence'."""
        return self._request_sequence

    @request_sequence.setter
    def request_sequence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'request_sequence' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'request_sequence' field must be an unsigned integer in [0, 4294967295]"
        self._request_sequence = value
