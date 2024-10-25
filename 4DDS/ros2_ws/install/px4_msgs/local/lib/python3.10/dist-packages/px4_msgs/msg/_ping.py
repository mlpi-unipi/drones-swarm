# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/Ping.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Ping(type):
    """Metaclass of message 'Ping'."""

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
                'px4_msgs.msg.Ping')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ping
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ping
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ping
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ping
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ping

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Ping(metaclass=Metaclass_Ping):
    """Message class 'Ping'."""

    __slots__ = [
        '_timestamp',
        '_ping_time',
        '_ping_sequence',
        '_dropped_packets',
        '_rtt_ms',
        '_system_id',
        '_component_id',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'ping_time': 'uint64',
        'ping_sequence': 'uint32',
        'dropped_packets': 'uint32',
        'rtt_ms': 'float',
        'system_id': 'uint8',
        'component_id': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.ping_time = kwargs.get('ping_time', int())
        self.ping_sequence = kwargs.get('ping_sequence', int())
        self.dropped_packets = kwargs.get('dropped_packets', int())
        self.rtt_ms = kwargs.get('rtt_ms', float())
        self.system_id = kwargs.get('system_id', int())
        self.component_id = kwargs.get('component_id', int())

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
        if self.ping_time != other.ping_time:
            return False
        if self.ping_sequence != other.ping_sequence:
            return False
        if self.dropped_packets != other.dropped_packets:
            return False
        if self.rtt_ms != other.rtt_ms:
            return False
        if self.system_id != other.system_id:
            return False
        if self.component_id != other.component_id:
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
    def ping_time(self):
        """Message field 'ping_time'."""
        return self._ping_time

    @ping_time.setter
    def ping_time(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ping_time' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'ping_time' field must be an unsigned integer in [0, 18446744073709551615]"
        self._ping_time = value

    @builtins.property
    def ping_sequence(self):
        """Message field 'ping_sequence'."""
        return self._ping_sequence

    @ping_sequence.setter
    def ping_sequence(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ping_sequence' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'ping_sequence' field must be an unsigned integer in [0, 4294967295]"
        self._ping_sequence = value

    @builtins.property
    def dropped_packets(self):
        """Message field 'dropped_packets'."""
        return self._dropped_packets

    @dropped_packets.setter
    def dropped_packets(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dropped_packets' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'dropped_packets' field must be an unsigned integer in [0, 4294967295]"
        self._dropped_packets = value

    @builtins.property
    def rtt_ms(self):
        """Message field 'rtt_ms'."""
        return self._rtt_ms

    @rtt_ms.setter
    def rtt_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rtt_ms' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rtt_ms' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rtt_ms = value

    @builtins.property
    def system_id(self):
        """Message field 'system_id'."""
        return self._system_id

    @system_id.setter
    def system_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'system_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'system_id' field must be an unsigned integer in [0, 255]"
        self._system_id = value

    @builtins.property
    def component_id(self):
        """Message field 'component_id'."""
        return self._component_id

    @component_id.setter
    def component_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'component_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'component_id' field must be an unsigned integer in [0, 255]"
        self._component_id = value
