# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/CellularStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_CellularStatus(type):
    """Metaclass of message 'CellularStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CELLULAR_STATUS_FLAG_UNKNOWN': 0,
        'CELLULAR_STATUS_FLAG_FAILED': 1,
        'CELLULAR_STATUS_FLAG_INITIALIZING': 2,
        'CELLULAR_STATUS_FLAG_LOCKED': 3,
        'CELLULAR_STATUS_FLAG_DISABLED': 4,
        'CELLULAR_STATUS_FLAG_DISABLING': 5,
        'CELLULAR_STATUS_FLAG_ENABLING': 6,
        'CELLULAR_STATUS_FLAG_ENABLED': 7,
        'CELLULAR_STATUS_FLAG_SEARCHING': 8,
        'CELLULAR_STATUS_FLAG_REGISTERED': 9,
        'CELLULAR_STATUS_FLAG_DISCONNECTING': 10,
        'CELLULAR_STATUS_FLAG_CONNECTING': 11,
        'CELLULAR_STATUS_FLAG_CONNECTED': 12,
        'CELLULAR_NETWORK_FAILED_REASON_NONE': 0,
        'CELLULAR_NETWORK_FAILED_REASON_UNKNOWN': 1,
        'CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING': 2,
        'CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR': 3,
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
                'px4_msgs.msg.CellularStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__cellular_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__cellular_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__cellular_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__cellular_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__cellular_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CELLULAR_STATUS_FLAG_UNKNOWN': cls.__constants['CELLULAR_STATUS_FLAG_UNKNOWN'],
            'CELLULAR_STATUS_FLAG_FAILED': cls.__constants['CELLULAR_STATUS_FLAG_FAILED'],
            'CELLULAR_STATUS_FLAG_INITIALIZING': cls.__constants['CELLULAR_STATUS_FLAG_INITIALIZING'],
            'CELLULAR_STATUS_FLAG_LOCKED': cls.__constants['CELLULAR_STATUS_FLAG_LOCKED'],
            'CELLULAR_STATUS_FLAG_DISABLED': cls.__constants['CELLULAR_STATUS_FLAG_DISABLED'],
            'CELLULAR_STATUS_FLAG_DISABLING': cls.__constants['CELLULAR_STATUS_FLAG_DISABLING'],
            'CELLULAR_STATUS_FLAG_ENABLING': cls.__constants['CELLULAR_STATUS_FLAG_ENABLING'],
            'CELLULAR_STATUS_FLAG_ENABLED': cls.__constants['CELLULAR_STATUS_FLAG_ENABLED'],
            'CELLULAR_STATUS_FLAG_SEARCHING': cls.__constants['CELLULAR_STATUS_FLAG_SEARCHING'],
            'CELLULAR_STATUS_FLAG_REGISTERED': cls.__constants['CELLULAR_STATUS_FLAG_REGISTERED'],
            'CELLULAR_STATUS_FLAG_DISCONNECTING': cls.__constants['CELLULAR_STATUS_FLAG_DISCONNECTING'],
            'CELLULAR_STATUS_FLAG_CONNECTING': cls.__constants['CELLULAR_STATUS_FLAG_CONNECTING'],
            'CELLULAR_STATUS_FLAG_CONNECTED': cls.__constants['CELLULAR_STATUS_FLAG_CONNECTED'],
            'CELLULAR_NETWORK_FAILED_REASON_NONE': cls.__constants['CELLULAR_NETWORK_FAILED_REASON_NONE'],
            'CELLULAR_NETWORK_FAILED_REASON_UNKNOWN': cls.__constants['CELLULAR_NETWORK_FAILED_REASON_UNKNOWN'],
            'CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING': cls.__constants['CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING'],
            'CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR': cls.__constants['CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR'],
        }

    @property
    def CELLULAR_STATUS_FLAG_UNKNOWN(self):
        """Message constant 'CELLULAR_STATUS_FLAG_UNKNOWN'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_STATUS_FLAG_UNKNOWN']

    @property
    def CELLULAR_STATUS_FLAG_FAILED(self):
        """Message constant 'CELLULAR_STATUS_FLAG_FAILED'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_STATUS_FLAG_FAILED']

    @property
    def CELLULAR_STATUS_FLAG_INITIALIZING(self):
        """Message constant 'CELLULAR_STATUS_FLAG_INITIALIZING'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_STATUS_FLAG_INITIALIZING']

    @property
    def CELLULAR_STATUS_FLAG_LOCKED(self):
        """Message constant 'CELLULAR_STATUS_FLAG_LOCKED'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_STATUS_FLAG_LOCKED']

    @property
    def CELLULAR_STATUS_FLAG_DISABLED(self):
        """Message constant 'CELLULAR_STATUS_FLAG_DISABLED'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_STATUS_FLAG_DISABLED']

    @property
    def CELLULAR_STATUS_FLAG_DISABLING(self):
        """Message constant 'CELLULAR_STATUS_FLAG_DISABLING'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_STATUS_FLAG_DISABLING']

    @property
    def CELLULAR_STATUS_FLAG_ENABLING(self):
        """Message constant 'CELLULAR_STATUS_FLAG_ENABLING'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_STATUS_FLAG_ENABLING']

    @property
    def CELLULAR_STATUS_FLAG_ENABLED(self):
        """Message constant 'CELLULAR_STATUS_FLAG_ENABLED'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_STATUS_FLAG_ENABLED']

    @property
    def CELLULAR_STATUS_FLAG_SEARCHING(self):
        """Message constant 'CELLULAR_STATUS_FLAG_SEARCHING'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_STATUS_FLAG_SEARCHING']

    @property
    def CELLULAR_STATUS_FLAG_REGISTERED(self):
        """Message constant 'CELLULAR_STATUS_FLAG_REGISTERED'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_STATUS_FLAG_REGISTERED']

    @property
    def CELLULAR_STATUS_FLAG_DISCONNECTING(self):
        """Message constant 'CELLULAR_STATUS_FLAG_DISCONNECTING'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_STATUS_FLAG_DISCONNECTING']

    @property
    def CELLULAR_STATUS_FLAG_CONNECTING(self):
        """Message constant 'CELLULAR_STATUS_FLAG_CONNECTING'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_STATUS_FLAG_CONNECTING']

    @property
    def CELLULAR_STATUS_FLAG_CONNECTED(self):
        """Message constant 'CELLULAR_STATUS_FLAG_CONNECTED'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_STATUS_FLAG_CONNECTED']

    @property
    def CELLULAR_NETWORK_FAILED_REASON_NONE(self):
        """Message constant 'CELLULAR_NETWORK_FAILED_REASON_NONE'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_NETWORK_FAILED_REASON_NONE']

    @property
    def CELLULAR_NETWORK_FAILED_REASON_UNKNOWN(self):
        """Message constant 'CELLULAR_NETWORK_FAILED_REASON_UNKNOWN'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_NETWORK_FAILED_REASON_UNKNOWN']

    @property
    def CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING(self):
        """Message constant 'CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING']

    @property
    def CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR(self):
        """Message constant 'CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR'."""
        return Metaclass_CellularStatus.__constants['CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR']


class CellularStatus(metaclass=Metaclass_CellularStatus):
    """
    Message class 'CellularStatus'.

    Constants:
      CELLULAR_STATUS_FLAG_UNKNOWN
      CELLULAR_STATUS_FLAG_FAILED
      CELLULAR_STATUS_FLAG_INITIALIZING
      CELLULAR_STATUS_FLAG_LOCKED
      CELLULAR_STATUS_FLAG_DISABLED
      CELLULAR_STATUS_FLAG_DISABLING
      CELLULAR_STATUS_FLAG_ENABLING
      CELLULAR_STATUS_FLAG_ENABLED
      CELLULAR_STATUS_FLAG_SEARCHING
      CELLULAR_STATUS_FLAG_REGISTERED
      CELLULAR_STATUS_FLAG_DISCONNECTING
      CELLULAR_STATUS_FLAG_CONNECTING
      CELLULAR_STATUS_FLAG_CONNECTED
      CELLULAR_NETWORK_FAILED_REASON_NONE
      CELLULAR_NETWORK_FAILED_REASON_UNKNOWN
      CELLULAR_NETWORK_FAILED_REASON_SIM_MISSING
      CELLULAR_NETWORK_FAILED_REASON_SIM_ERROR
    """

    __slots__ = [
        '_timestamp',
        '_status',
        '_failure_reason',
        '_type',
        '_quality',
        '_mcc',
        '_mnc',
        '_lac',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'status': 'uint16',
        'failure_reason': 'uint8',
        'type': 'uint8',
        'quality': 'uint8',
        'mcc': 'uint16',
        'mnc': 'uint16',
        'lac': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.status = kwargs.get('status', int())
        self.failure_reason = kwargs.get('failure_reason', int())
        self.type = kwargs.get('type', int())
        self.quality = kwargs.get('quality', int())
        self.mcc = kwargs.get('mcc', int())
        self.mnc = kwargs.get('mnc', int())
        self.lac = kwargs.get('lac', int())

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
        if self.status != other.status:
            return False
        if self.failure_reason != other.failure_reason:
            return False
        if self.type != other.type:
            return False
        if self.quality != other.quality:
            return False
        if self.mcc != other.mcc:
            return False
        if self.mnc != other.mnc:
            return False
        if self.lac != other.lac:
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
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'status' field must be an unsigned integer in [0, 65535]"
        self._status = value

    @builtins.property
    def failure_reason(self):
        """Message field 'failure_reason'."""
        return self._failure_reason

    @failure_reason.setter
    def failure_reason(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'failure_reason' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'failure_reason' field must be an unsigned integer in [0, 255]"
        self._failure_reason = value

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
    def quality(self):
        """Message field 'quality'."""
        return self._quality

    @quality.setter
    def quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quality' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'quality' field must be an unsigned integer in [0, 255]"
        self._quality = value

    @builtins.property
    def mcc(self):
        """Message field 'mcc'."""
        return self._mcc

    @mcc.setter
    def mcc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mcc' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'mcc' field must be an unsigned integer in [0, 65535]"
        self._mcc = value

    @builtins.property
    def mnc(self):
        """Message field 'mnc'."""
        return self._mnc

    @mnc.setter
    def mnc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mnc' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'mnc' field must be an unsigned integer in [0, 65535]"
        self._mnc = value

    @builtins.property
    def lac(self):
        """Message field 'lac'."""
        return self._lac

    @lac.setter
    def lac(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lac' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'lac' field must be an unsigned integer in [0, 65535]"
        self._lac = value
