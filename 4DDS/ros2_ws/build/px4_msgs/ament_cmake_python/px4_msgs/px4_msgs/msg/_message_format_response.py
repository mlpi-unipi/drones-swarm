# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/MessageFormatResponse.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'topic_name'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_MessageFormatResponse(type):
    """Metaclass of message 'MessageFormatResponse'."""

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
                'px4_msgs.msg.MessageFormatResponse')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__message_format_response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__message_format_response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__message_format_response
            cls._TYPE_SUPPORT = module.type_support_msg__msg__message_format_response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__message_format_response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class MessageFormatResponse(metaclass=Metaclass_MessageFormatResponse):
    """Message class 'MessageFormatResponse'."""

    __slots__ = [
        '_timestamp',
        '_protocol_version',
        '_topic_name',
        '_success',
        '_message_hash',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'protocol_version': 'uint16',
        'topic_name': 'uint8[50]',
        'success': 'boolean',
        'message_hash': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 50),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.protocol_version = kwargs.get('protocol_version', int())
        if 'topic_name' not in kwargs:
            self.topic_name = numpy.zeros(50, dtype=numpy.uint8)
        else:
            self.topic_name = numpy.array(kwargs.get('topic_name'), dtype=numpy.uint8)
            assert self.topic_name.shape == (50, )
        self.success = kwargs.get('success', bool())
        self.message_hash = kwargs.get('message_hash', int())

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
        if self.protocol_version != other.protocol_version:
            return False
        if all(self.topic_name != other.topic_name):
            return False
        if self.success != other.success:
            return False
        if self.message_hash != other.message_hash:
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
    def protocol_version(self):
        """Message field 'protocol_version'."""
        return self._protocol_version

    @protocol_version.setter
    def protocol_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'protocol_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'protocol_version' field must be an unsigned integer in [0, 65535]"
        self._protocol_version = value

    @builtins.property
    def topic_name(self):
        """Message field 'topic_name'."""
        return self._topic_name

    @topic_name.setter
    def topic_name(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'topic_name' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 50, \
                "The 'topic_name' numpy.ndarray() must have a size of 50"
            self._topic_name = value
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
                 len(value) == 50 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'topic_name' field must be a set or sequence with length 50 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._topic_name = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def message_hash(self):
        """Message field 'message_hash'."""
        return self._message_hash

    @message_hash.setter
    def message_hash(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'message_hash' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'message_hash' field must be an unsigned integer in [0, 4294967295]"
        self._message_hash = value
