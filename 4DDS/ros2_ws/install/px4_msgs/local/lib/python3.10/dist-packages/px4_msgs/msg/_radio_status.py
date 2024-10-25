# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/RadioStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RadioStatus(type):
    """Metaclass of message 'RadioStatus'."""

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
                'px4_msgs.msg.RadioStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__radio_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__radio_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__radio_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__radio_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__radio_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class RadioStatus(metaclass=Metaclass_RadioStatus):
    """Message class 'RadioStatus'."""

    __slots__ = [
        '_timestamp',
        '_rssi',
        '_remote_rssi',
        '_txbuf',
        '_noise',
        '_remote_noise',
        '_rxerrors',
        '_fix',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'rssi': 'uint8',
        'remote_rssi': 'uint8',
        'txbuf': 'uint8',
        'noise': 'uint8',
        'remote_noise': 'uint8',
        'rxerrors': 'uint16',
        'fix': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.rssi = kwargs.get('rssi', int())
        self.remote_rssi = kwargs.get('remote_rssi', int())
        self.txbuf = kwargs.get('txbuf', int())
        self.noise = kwargs.get('noise', int())
        self.remote_noise = kwargs.get('remote_noise', int())
        self.rxerrors = kwargs.get('rxerrors', int())
        self.fix = kwargs.get('fix', int())

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
        if self.rssi != other.rssi:
            return False
        if self.remote_rssi != other.remote_rssi:
            return False
        if self.txbuf != other.txbuf:
            return False
        if self.noise != other.noise:
            return False
        if self.remote_noise != other.remote_noise:
            return False
        if self.rxerrors != other.rxerrors:
            return False
        if self.fix != other.fix:
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
    def rssi(self):
        """Message field 'rssi'."""
        return self._rssi

    @rssi.setter
    def rssi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rssi' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rssi' field must be an unsigned integer in [0, 255]"
        self._rssi = value

    @builtins.property
    def remote_rssi(self):
        """Message field 'remote_rssi'."""
        return self._remote_rssi

    @remote_rssi.setter
    def remote_rssi(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remote_rssi' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'remote_rssi' field must be an unsigned integer in [0, 255]"
        self._remote_rssi = value

    @builtins.property
    def txbuf(self):
        """Message field 'txbuf'."""
        return self._txbuf

    @txbuf.setter
    def txbuf(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'txbuf' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'txbuf' field must be an unsigned integer in [0, 255]"
        self._txbuf = value

    @builtins.property
    def noise(self):
        """Message field 'noise'."""
        return self._noise

    @noise.setter
    def noise(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'noise' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'noise' field must be an unsigned integer in [0, 255]"
        self._noise = value

    @builtins.property
    def remote_noise(self):
        """Message field 'remote_noise'."""
        return self._remote_noise

    @remote_noise.setter
    def remote_noise(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'remote_noise' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'remote_noise' field must be an unsigned integer in [0, 255]"
        self._remote_noise = value

    @builtins.property
    def rxerrors(self):
        """Message field 'rxerrors'."""
        return self._rxerrors

    @rxerrors.setter
    def rxerrors(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rxerrors' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'rxerrors' field must be an unsigned integer in [0, 65535]"
        self._rxerrors = value

    @builtins.property
    def fix(self):
        """Message field 'fix'."""
        return self._fix

    @fix.setter
    def fix(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fix' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'fix' field must be an unsigned integer in [0, 65535]"
        self._fix = value
