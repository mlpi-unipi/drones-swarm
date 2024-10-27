# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/ConfigOverrides.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ConfigOverrides(type):
    """Metaclass of message 'ConfigOverrides'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SOURCE_TYPE_MODE': 0,
        'SOURCE_TYPE_MODE_EXECUTOR': 1,
        'ORB_QUEUE_LENGTH': 4,
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
                'px4_msgs.msg.ConfigOverrides')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__config_overrides
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__config_overrides
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__config_overrides
            cls._TYPE_SUPPORT = module.type_support_msg__msg__config_overrides
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__config_overrides

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SOURCE_TYPE_MODE': cls.__constants['SOURCE_TYPE_MODE'],
            'SOURCE_TYPE_MODE_EXECUTOR': cls.__constants['SOURCE_TYPE_MODE_EXECUTOR'],
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def SOURCE_TYPE_MODE(self):
        """Message constant 'SOURCE_TYPE_MODE'."""
        return Metaclass_ConfigOverrides.__constants['SOURCE_TYPE_MODE']

    @property
    def SOURCE_TYPE_MODE_EXECUTOR(self):
        """Message constant 'SOURCE_TYPE_MODE_EXECUTOR'."""
        return Metaclass_ConfigOverrides.__constants['SOURCE_TYPE_MODE_EXECUTOR']

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_ConfigOverrides.__constants['ORB_QUEUE_LENGTH']


class ConfigOverrides(metaclass=Metaclass_ConfigOverrides):
    """
    Message class 'ConfigOverrides'.

    Constants:
      SOURCE_TYPE_MODE
      SOURCE_TYPE_MODE_EXECUTOR
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_disable_auto_disarm',
        '_defer_failsafes',
        '_defer_failsafes_timeout_s',
        '_source_type',
        '_source_id',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'disable_auto_disarm': 'boolean',
        'defer_failsafes': 'boolean',
        'defer_failsafes_timeout_s': 'int16',
        'source_type': 'int8',
        'source_id': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.disable_auto_disarm = kwargs.get('disable_auto_disarm', bool())
        self.defer_failsafes = kwargs.get('defer_failsafes', bool())
        self.defer_failsafes_timeout_s = kwargs.get('defer_failsafes_timeout_s', int())
        self.source_type = kwargs.get('source_type', int())
        self.source_id = kwargs.get('source_id', int())

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
        if self.disable_auto_disarm != other.disable_auto_disarm:
            return False
        if self.defer_failsafes != other.defer_failsafes:
            return False
        if self.defer_failsafes_timeout_s != other.defer_failsafes_timeout_s:
            return False
        if self.source_type != other.source_type:
            return False
        if self.source_id != other.source_id:
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
    def disable_auto_disarm(self):
        """Message field 'disable_auto_disarm'."""
        return self._disable_auto_disarm

    @disable_auto_disarm.setter
    def disable_auto_disarm(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'disable_auto_disarm' field must be of type 'bool'"
        self._disable_auto_disarm = value

    @builtins.property
    def defer_failsafes(self):
        """Message field 'defer_failsafes'."""
        return self._defer_failsafes

    @defer_failsafes.setter
    def defer_failsafes(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'defer_failsafes' field must be of type 'bool'"
        self._defer_failsafes = value

    @builtins.property
    def defer_failsafes_timeout_s(self):
        """Message field 'defer_failsafes_timeout_s'."""
        return self._defer_failsafes_timeout_s

    @defer_failsafes_timeout_s.setter
    def defer_failsafes_timeout_s(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'defer_failsafes_timeout_s' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'defer_failsafes_timeout_s' field must be an integer in [-32768, 32767]"
        self._defer_failsafes_timeout_s = value

    @builtins.property
    def source_type(self):
        """Message field 'source_type'."""
        return self._source_type

    @source_type.setter
    def source_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_type' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'source_type' field must be an integer in [-128, 127]"
        self._source_type = value

    @builtins.property
    def source_id(self):
        """Message field 'source_id'."""
        return self._source_id

    @source_id.setter
    def source_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source_id' field must be an unsigned integer in [0, 255]"
        self._source_id = value
