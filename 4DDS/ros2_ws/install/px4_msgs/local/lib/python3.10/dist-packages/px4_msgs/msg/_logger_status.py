# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/LoggerStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LoggerStatus(type):
    """Metaclass of message 'LoggerStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LOGGER_TYPE_FULL': 0,
        'LOGGER_TYPE_MISSION': 1,
        'BACKEND_FILE': 1,
        'BACKEND_MAVLINK': 2,
        'BACKEND_ALL': 3,
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
                'px4_msgs.msg.LoggerStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__logger_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__logger_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__logger_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__logger_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__logger_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LOGGER_TYPE_FULL': cls.__constants['LOGGER_TYPE_FULL'],
            'LOGGER_TYPE_MISSION': cls.__constants['LOGGER_TYPE_MISSION'],
            'BACKEND_FILE': cls.__constants['BACKEND_FILE'],
            'BACKEND_MAVLINK': cls.__constants['BACKEND_MAVLINK'],
            'BACKEND_ALL': cls.__constants['BACKEND_ALL'],
        }

    @property
    def LOGGER_TYPE_FULL(self):
        """Message constant 'LOGGER_TYPE_FULL'."""
        return Metaclass_LoggerStatus.__constants['LOGGER_TYPE_FULL']

    @property
    def LOGGER_TYPE_MISSION(self):
        """Message constant 'LOGGER_TYPE_MISSION'."""
        return Metaclass_LoggerStatus.__constants['LOGGER_TYPE_MISSION']

    @property
    def BACKEND_FILE(self):
        """Message constant 'BACKEND_FILE'."""
        return Metaclass_LoggerStatus.__constants['BACKEND_FILE']

    @property
    def BACKEND_MAVLINK(self):
        """Message constant 'BACKEND_MAVLINK'."""
        return Metaclass_LoggerStatus.__constants['BACKEND_MAVLINK']

    @property
    def BACKEND_ALL(self):
        """Message constant 'BACKEND_ALL'."""
        return Metaclass_LoggerStatus.__constants['BACKEND_ALL']


class LoggerStatus(metaclass=Metaclass_LoggerStatus):
    """
    Message class 'LoggerStatus'.

    Constants:
      LOGGER_TYPE_FULL
      LOGGER_TYPE_MISSION
      BACKEND_FILE
      BACKEND_MAVLINK
      BACKEND_ALL
    """

    __slots__ = [
        '_timestamp',
        '_type',
        '_backend',
        '_total_written_kb',
        '_write_rate_kb_s',
        '_dropouts',
        '_message_gaps',
        '_buffer_used_bytes',
        '_buffer_size_bytes',
        '_num_messages',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'type': 'uint8',
        'backend': 'uint8',
        'total_written_kb': 'float',
        'write_rate_kb_s': 'float',
        'dropouts': 'uint32',
        'message_gaps': 'uint32',
        'buffer_used_bytes': 'uint32',
        'buffer_size_bytes': 'uint32',
        'num_messages': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.type = kwargs.get('type', int())
        self.backend = kwargs.get('backend', int())
        self.total_written_kb = kwargs.get('total_written_kb', float())
        self.write_rate_kb_s = kwargs.get('write_rate_kb_s', float())
        self.dropouts = kwargs.get('dropouts', int())
        self.message_gaps = kwargs.get('message_gaps', int())
        self.buffer_used_bytes = kwargs.get('buffer_used_bytes', int())
        self.buffer_size_bytes = kwargs.get('buffer_size_bytes', int())
        self.num_messages = kwargs.get('num_messages', int())

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
        if self.type != other.type:
            return False
        if self.backend != other.backend:
            return False
        if self.total_written_kb != other.total_written_kb:
            return False
        if self.write_rate_kb_s != other.write_rate_kb_s:
            return False
        if self.dropouts != other.dropouts:
            return False
        if self.message_gaps != other.message_gaps:
            return False
        if self.buffer_used_bytes != other.buffer_used_bytes:
            return False
        if self.buffer_size_bytes != other.buffer_size_bytes:
            return False
        if self.num_messages != other.num_messages:
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
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def backend(self):
        """Message field 'backend'."""
        return self._backend

    @backend.setter
    def backend(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'backend' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'backend' field must be an unsigned integer in [0, 255]"
        self._backend = value

    @builtins.property
    def total_written_kb(self):
        """Message field 'total_written_kb'."""
        return self._total_written_kb

    @total_written_kb.setter
    def total_written_kb(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'total_written_kb' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'total_written_kb' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._total_written_kb = value

    @builtins.property
    def write_rate_kb_s(self):
        """Message field 'write_rate_kb_s'."""
        return self._write_rate_kb_s

    @write_rate_kb_s.setter
    def write_rate_kb_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'write_rate_kb_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'write_rate_kb_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._write_rate_kb_s = value

    @builtins.property
    def dropouts(self):
        """Message field 'dropouts'."""
        return self._dropouts

    @dropouts.setter
    def dropouts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dropouts' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'dropouts' field must be an unsigned integer in [0, 4294967295]"
        self._dropouts = value

    @builtins.property
    def message_gaps(self):
        """Message field 'message_gaps'."""
        return self._message_gaps

    @message_gaps.setter
    def message_gaps(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'message_gaps' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'message_gaps' field must be an unsigned integer in [0, 4294967295]"
        self._message_gaps = value

    @builtins.property
    def buffer_used_bytes(self):
        """Message field 'buffer_used_bytes'."""
        return self._buffer_used_bytes

    @buffer_used_bytes.setter
    def buffer_used_bytes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'buffer_used_bytes' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'buffer_used_bytes' field must be an unsigned integer in [0, 4294967295]"
        self._buffer_used_bytes = value

    @builtins.property
    def buffer_size_bytes(self):
        """Message field 'buffer_size_bytes'."""
        return self._buffer_size_bytes

    @buffer_size_bytes.setter
    def buffer_size_bytes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'buffer_size_bytes' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'buffer_size_bytes' field must be an unsigned integer in [0, 4294967295]"
        self._buffer_size_bytes = value

    @builtins.property
    def num_messages(self):
        """Message field 'num_messages'."""
        return self._num_messages

    @num_messages.setter
    def num_messages(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_messages' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_messages' field must be an unsigned integer in [0, 255]"
        self._num_messages = value
