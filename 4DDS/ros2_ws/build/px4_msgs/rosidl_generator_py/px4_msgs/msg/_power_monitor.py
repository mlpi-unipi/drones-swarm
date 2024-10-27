# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/PowerMonitor.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PowerMonitor(type):
    """Metaclass of message 'PowerMonitor'."""

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
                'px4_msgs.msg.PowerMonitor')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__power_monitor
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__power_monitor
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__power_monitor
            cls._TYPE_SUPPORT = module.type_support_msg__msg__power_monitor
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__power_monitor

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PowerMonitor(metaclass=Metaclass_PowerMonitor):
    """Message class 'PowerMonitor'."""

    __slots__ = [
        '_timestamp',
        '_voltage_v',
        '_current_a',
        '_power_w',
        '_rconf',
        '_rsv',
        '_rbv',
        '_rp',
        '_rc',
        '_rcal',
        '_me',
        '_al',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'voltage_v': 'float',
        'current_a': 'float',
        'power_w': 'float',
        'rconf': 'int16',
        'rsv': 'int16',
        'rbv': 'int16',
        'rp': 'int16',
        'rc': 'int16',
        'rcal': 'int16',
        'me': 'int16',
        'al': 'int16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.voltage_v = kwargs.get('voltage_v', float())
        self.current_a = kwargs.get('current_a', float())
        self.power_w = kwargs.get('power_w', float())
        self.rconf = kwargs.get('rconf', int())
        self.rsv = kwargs.get('rsv', int())
        self.rbv = kwargs.get('rbv', int())
        self.rp = kwargs.get('rp', int())
        self.rc = kwargs.get('rc', int())
        self.rcal = kwargs.get('rcal', int())
        self.me = kwargs.get('me', int())
        self.al = kwargs.get('al', int())

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
        if self.voltage_v != other.voltage_v:
            return False
        if self.current_a != other.current_a:
            return False
        if self.power_w != other.power_w:
            return False
        if self.rconf != other.rconf:
            return False
        if self.rsv != other.rsv:
            return False
        if self.rbv != other.rbv:
            return False
        if self.rp != other.rp:
            return False
        if self.rc != other.rc:
            return False
        if self.rcal != other.rcal:
            return False
        if self.me != other.me:
            return False
        if self.al != other.al:
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
    def voltage_v(self):
        """Message field 'voltage_v'."""
        return self._voltage_v

    @voltage_v.setter
    def voltage_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage_v' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'voltage_v' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._voltage_v = value

    @builtins.property
    def current_a(self):
        """Message field 'current_a'."""
        return self._current_a

    @current_a.setter
    def current_a(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'current_a' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'current_a' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._current_a = value

    @builtins.property
    def power_w(self):
        """Message field 'power_w'."""
        return self._power_w

    @power_w.setter
    def power_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'power_w' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'power_w' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._power_w = value

    @builtins.property
    def rconf(self):
        """Message field 'rconf'."""
        return self._rconf

    @rconf.setter
    def rconf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rconf' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'rconf' field must be an integer in [-32768, 32767]"
        self._rconf = value

    @builtins.property
    def rsv(self):
        """Message field 'rsv'."""
        return self._rsv

    @rsv.setter
    def rsv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rsv' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'rsv' field must be an integer in [-32768, 32767]"
        self._rsv = value

    @builtins.property
    def rbv(self):
        """Message field 'rbv'."""
        return self._rbv

    @rbv.setter
    def rbv(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rbv' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'rbv' field must be an integer in [-32768, 32767]"
        self._rbv = value

    @builtins.property
    def rp(self):
        """Message field 'rp'."""
        return self._rp

    @rp.setter
    def rp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rp' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'rp' field must be an integer in [-32768, 32767]"
        self._rp = value

    @builtins.property
    def rc(self):
        """Message field 'rc'."""
        return self._rc

    @rc.setter
    def rc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rc' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'rc' field must be an integer in [-32768, 32767]"
        self._rc = value

    @builtins.property
    def rcal(self):
        """Message field 'rcal'."""
        return self._rcal

    @rcal.setter
    def rcal(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rcal' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'rcal' field must be an integer in [-32768, 32767]"
        self._rcal = value

    @builtins.property
    def me(self):
        """Message field 'me'."""
        return self._me

    @me.setter
    def me(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'me' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'me' field must be an integer in [-32768, 32767]"
        self._me = value

    @builtins.property
    def al(self):
        """Message field 'al'."""
        return self._al

    @al.setter
    def al(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'al' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'al' field must be an integer in [-32768, 32767]"
        self._al = value
