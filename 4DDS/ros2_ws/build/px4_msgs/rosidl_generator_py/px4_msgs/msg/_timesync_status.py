# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/TimesyncStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TimesyncStatus(type):
    """Metaclass of message 'TimesyncStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SOURCE_PROTOCOL_UNKNOWN': 0,
        'SOURCE_PROTOCOL_MAVLINK': 1,
        'SOURCE_PROTOCOL_DDS': 2,
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
                'px4_msgs.msg.TimesyncStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__timesync_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__timesync_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__timesync_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__timesync_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__timesync_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SOURCE_PROTOCOL_UNKNOWN': cls.__constants['SOURCE_PROTOCOL_UNKNOWN'],
            'SOURCE_PROTOCOL_MAVLINK': cls.__constants['SOURCE_PROTOCOL_MAVLINK'],
            'SOURCE_PROTOCOL_DDS': cls.__constants['SOURCE_PROTOCOL_DDS'],
        }

    @property
    def SOURCE_PROTOCOL_UNKNOWN(self):
        """Message constant 'SOURCE_PROTOCOL_UNKNOWN'."""
        return Metaclass_TimesyncStatus.__constants['SOURCE_PROTOCOL_UNKNOWN']

    @property
    def SOURCE_PROTOCOL_MAVLINK(self):
        """Message constant 'SOURCE_PROTOCOL_MAVLINK'."""
        return Metaclass_TimesyncStatus.__constants['SOURCE_PROTOCOL_MAVLINK']

    @property
    def SOURCE_PROTOCOL_DDS(self):
        """Message constant 'SOURCE_PROTOCOL_DDS'."""
        return Metaclass_TimesyncStatus.__constants['SOURCE_PROTOCOL_DDS']


class TimesyncStatus(metaclass=Metaclass_TimesyncStatus):
    """
    Message class 'TimesyncStatus'.

    Constants:
      SOURCE_PROTOCOL_UNKNOWN
      SOURCE_PROTOCOL_MAVLINK
      SOURCE_PROTOCOL_DDS
    """

    __slots__ = [
        '_timestamp',
        '_source_protocol',
        '_remote_timestamp',
        '_observed_offset',
        '_estimated_offset',
        '_round_trip_time',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'source_protocol': 'uint8',
        'remote_timestamp': 'uint64',
        'observed_offset': 'int64',
        'estimated_offset': 'int64',
        'round_trip_time': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.source_protocol = kwargs.get('source_protocol', int())
        self.remote_timestamp = kwargs.get('remote_timestamp', int())
        self.observed_offset = kwargs.get('observed_offset', int())
        self.estimated_offset = kwargs.get('estimated_offset', int())
        self.round_trip_time = kwargs.get('round_trip_time', int())

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
        if self.source_protocol != other.source_protocol:
            return False
        if self.remote_timestamp != other.remote_timestamp:
            return False
        if self.observed_offset != other.observed_offset:
            return False
        if self.estimated_offset != other.estimated_offset:
            return False
        if self.round_trip_time != other.round_trip_time:
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
    def source_protocol(self):
        """Message field 'source_protocol'."""
        return self._source_protocol

    @source_protocol.setter
    def source_protocol(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_protocol' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source_protocol' field must be an unsigned integer in [0, 255]"
        self._source_protocol = value

    @builtins.property
    def remote_timestamp(self):
        """Message field 'remote_timestamp'."""
        return self._remote_timestamp

    @remote_timestamp.setter
    def remote_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remote_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'remote_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._remote_timestamp = value

    @builtins.property
    def observed_offset(self):
        """Message field 'observed_offset'."""
        return self._observed_offset

    @observed_offset.setter
    def observed_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'observed_offset' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'observed_offset' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._observed_offset = value

    @builtins.property
    def estimated_offset(self):
        """Message field 'estimated_offset'."""
        return self._estimated_offset

    @estimated_offset.setter
    def estimated_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'estimated_offset' field must be of type 'int'"
            assert value >= -9223372036854775808 and value < 9223372036854775808, \
                "The 'estimated_offset' field must be an integer in [-9223372036854775808, 9223372036854775807]"
        self._estimated_offset = value

    @builtins.property
    def round_trip_time(self):
        """Message field 'round_trip_time'."""
        return self._round_trip_time

    @round_trip_time.setter
    def round_trip_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'round_trip_time' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'round_trip_time' field must be an unsigned integer in [0, 4294967295]"
        self._round_trip_time = value
