# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/EscStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EscStatus(type):
    """Metaclass of message 'EscStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CONNECTED_ESC_MAX': 8,
        'ESC_CONNECTION_TYPE_PPM': 0,
        'ESC_CONNECTION_TYPE_SERIAL': 1,
        'ESC_CONNECTION_TYPE_ONESHOT': 2,
        'ESC_CONNECTION_TYPE_I2C': 3,
        'ESC_CONNECTION_TYPE_CAN': 4,
        'ESC_CONNECTION_TYPE_DSHOT': 5,
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
                'px4_msgs.msg.EscStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__esc_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__esc_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__esc_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__esc_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__esc_status

            from px4_msgs.msg import EscReport
            if EscReport.__class__._TYPE_SUPPORT is None:
                EscReport.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CONNECTED_ESC_MAX': cls.__constants['CONNECTED_ESC_MAX'],
            'ESC_CONNECTION_TYPE_PPM': cls.__constants['ESC_CONNECTION_TYPE_PPM'],
            'ESC_CONNECTION_TYPE_SERIAL': cls.__constants['ESC_CONNECTION_TYPE_SERIAL'],
            'ESC_CONNECTION_TYPE_ONESHOT': cls.__constants['ESC_CONNECTION_TYPE_ONESHOT'],
            'ESC_CONNECTION_TYPE_I2C': cls.__constants['ESC_CONNECTION_TYPE_I2C'],
            'ESC_CONNECTION_TYPE_CAN': cls.__constants['ESC_CONNECTION_TYPE_CAN'],
            'ESC_CONNECTION_TYPE_DSHOT': cls.__constants['ESC_CONNECTION_TYPE_DSHOT'],
        }

    @property
    def CONNECTED_ESC_MAX(self):
        """Message constant 'CONNECTED_ESC_MAX'."""
        return Metaclass_EscStatus.__constants['CONNECTED_ESC_MAX']

    @property
    def ESC_CONNECTION_TYPE_PPM(self):
        """Message constant 'ESC_CONNECTION_TYPE_PPM'."""
        return Metaclass_EscStatus.__constants['ESC_CONNECTION_TYPE_PPM']

    @property
    def ESC_CONNECTION_TYPE_SERIAL(self):
        """Message constant 'ESC_CONNECTION_TYPE_SERIAL'."""
        return Metaclass_EscStatus.__constants['ESC_CONNECTION_TYPE_SERIAL']

    @property
    def ESC_CONNECTION_TYPE_ONESHOT(self):
        """Message constant 'ESC_CONNECTION_TYPE_ONESHOT'."""
        return Metaclass_EscStatus.__constants['ESC_CONNECTION_TYPE_ONESHOT']

    @property
    def ESC_CONNECTION_TYPE_I2C(self):
        """Message constant 'ESC_CONNECTION_TYPE_I2C'."""
        return Metaclass_EscStatus.__constants['ESC_CONNECTION_TYPE_I2C']

    @property
    def ESC_CONNECTION_TYPE_CAN(self):
        """Message constant 'ESC_CONNECTION_TYPE_CAN'."""
        return Metaclass_EscStatus.__constants['ESC_CONNECTION_TYPE_CAN']

    @property
    def ESC_CONNECTION_TYPE_DSHOT(self):
        """Message constant 'ESC_CONNECTION_TYPE_DSHOT'."""
        return Metaclass_EscStatus.__constants['ESC_CONNECTION_TYPE_DSHOT']


class EscStatus(metaclass=Metaclass_EscStatus):
    """
    Message class 'EscStatus'.

    Constants:
      CONNECTED_ESC_MAX
      ESC_CONNECTION_TYPE_PPM
      ESC_CONNECTION_TYPE_SERIAL
      ESC_CONNECTION_TYPE_ONESHOT
      ESC_CONNECTION_TYPE_I2C
      ESC_CONNECTION_TYPE_CAN
      ESC_CONNECTION_TYPE_DSHOT
    """

    __slots__ = [
        '_timestamp',
        '_counter',
        '_esc_count',
        '_esc_connectiontype',
        '_esc_online_flags',
        '_esc_armed_flags',
        '_esc',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'counter': 'uint16',
        'esc_count': 'uint8',
        'esc_connectiontype': 'uint8',
        'esc_online_flags': 'uint8',
        'esc_armed_flags': 'uint8',
        'esc': 'px4_msgs/EscReport[8]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['px4_msgs', 'msg'], 'EscReport'), 8),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.counter = kwargs.get('counter', int())
        self.esc_count = kwargs.get('esc_count', int())
        self.esc_connectiontype = kwargs.get('esc_connectiontype', int())
        self.esc_online_flags = kwargs.get('esc_online_flags', int())
        self.esc_armed_flags = kwargs.get('esc_armed_flags', int())
        from px4_msgs.msg import EscReport
        self.esc = kwargs.get(
            'esc',
            [EscReport() for x in range(8)]
        )

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
        if self.counter != other.counter:
            return False
        if self.esc_count != other.esc_count:
            return False
        if self.esc_connectiontype != other.esc_connectiontype:
            return False
        if self.esc_online_flags != other.esc_online_flags:
            return False
        if self.esc_armed_flags != other.esc_armed_flags:
            return False
        if self.esc != other.esc:
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
    def counter(self):
        """Message field 'counter'."""
        return self._counter

    @counter.setter
    def counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'counter' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'counter' field must be an unsigned integer in [0, 65535]"
        self._counter = value

    @builtins.property
    def esc_count(self):
        """Message field 'esc_count'."""
        return self._esc_count

    @esc_count.setter
    def esc_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esc_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'esc_count' field must be an unsigned integer in [0, 255]"
        self._esc_count = value

    @builtins.property
    def esc_connectiontype(self):
        """Message field 'esc_connectiontype'."""
        return self._esc_connectiontype

    @esc_connectiontype.setter
    def esc_connectiontype(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esc_connectiontype' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'esc_connectiontype' field must be an unsigned integer in [0, 255]"
        self._esc_connectiontype = value

    @builtins.property
    def esc_online_flags(self):
        """Message field 'esc_online_flags'."""
        return self._esc_online_flags

    @esc_online_flags.setter
    def esc_online_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esc_online_flags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'esc_online_flags' field must be an unsigned integer in [0, 255]"
        self._esc_online_flags = value

    @builtins.property
    def esc_armed_flags(self):
        """Message field 'esc_armed_flags'."""
        return self._esc_armed_flags

    @esc_armed_flags.setter
    def esc_armed_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'esc_armed_flags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'esc_armed_flags' field must be an unsigned integer in [0, 255]"
        self._esc_armed_flags = value

    @builtins.property
    def esc(self):
        """Message field 'esc'."""
        return self._esc

    @esc.setter
    def esc(self, value):
        if __debug__:
            from px4_msgs.msg import EscReport
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
                 len(value) == 8 and
                 all(isinstance(v, EscReport) for v in value) and
                 True), \
                "The 'esc' field must be a set or sequence with length 8 and each value of type 'EscReport'"
        self._esc = value
