# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/TakeoffStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TakeoffStatus(type):
    """Metaclass of message 'TakeoffStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'TAKEOFF_STATE_UNINITIALIZED': 0,
        'TAKEOFF_STATE_DISARMED': 1,
        'TAKEOFF_STATE_SPOOLUP': 2,
        'TAKEOFF_STATE_READY_FOR_TAKEOFF': 3,
        'TAKEOFF_STATE_RAMPUP': 4,
        'TAKEOFF_STATE_FLIGHT': 5,
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
                'px4_msgs.msg.TakeoffStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__takeoff_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__takeoff_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__takeoff_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__takeoff_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__takeoff_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'TAKEOFF_STATE_UNINITIALIZED': cls.__constants['TAKEOFF_STATE_UNINITIALIZED'],
            'TAKEOFF_STATE_DISARMED': cls.__constants['TAKEOFF_STATE_DISARMED'],
            'TAKEOFF_STATE_SPOOLUP': cls.__constants['TAKEOFF_STATE_SPOOLUP'],
            'TAKEOFF_STATE_READY_FOR_TAKEOFF': cls.__constants['TAKEOFF_STATE_READY_FOR_TAKEOFF'],
            'TAKEOFF_STATE_RAMPUP': cls.__constants['TAKEOFF_STATE_RAMPUP'],
            'TAKEOFF_STATE_FLIGHT': cls.__constants['TAKEOFF_STATE_FLIGHT'],
        }

    @property
    def TAKEOFF_STATE_UNINITIALIZED(self):
        """Message constant 'TAKEOFF_STATE_UNINITIALIZED'."""
        return Metaclass_TakeoffStatus.__constants['TAKEOFF_STATE_UNINITIALIZED']

    @property
    def TAKEOFF_STATE_DISARMED(self):
        """Message constant 'TAKEOFF_STATE_DISARMED'."""
        return Metaclass_TakeoffStatus.__constants['TAKEOFF_STATE_DISARMED']

    @property
    def TAKEOFF_STATE_SPOOLUP(self):
        """Message constant 'TAKEOFF_STATE_SPOOLUP'."""
        return Metaclass_TakeoffStatus.__constants['TAKEOFF_STATE_SPOOLUP']

    @property
    def TAKEOFF_STATE_READY_FOR_TAKEOFF(self):
        """Message constant 'TAKEOFF_STATE_READY_FOR_TAKEOFF'."""
        return Metaclass_TakeoffStatus.__constants['TAKEOFF_STATE_READY_FOR_TAKEOFF']

    @property
    def TAKEOFF_STATE_RAMPUP(self):
        """Message constant 'TAKEOFF_STATE_RAMPUP'."""
        return Metaclass_TakeoffStatus.__constants['TAKEOFF_STATE_RAMPUP']

    @property
    def TAKEOFF_STATE_FLIGHT(self):
        """Message constant 'TAKEOFF_STATE_FLIGHT'."""
        return Metaclass_TakeoffStatus.__constants['TAKEOFF_STATE_FLIGHT']


class TakeoffStatus(metaclass=Metaclass_TakeoffStatus):
    """
    Message class 'TakeoffStatus'.

    Constants:
      TAKEOFF_STATE_UNINITIALIZED
      TAKEOFF_STATE_DISARMED
      TAKEOFF_STATE_SPOOLUP
      TAKEOFF_STATE_READY_FOR_TAKEOFF
      TAKEOFF_STATE_RAMPUP
      TAKEOFF_STATE_FLIGHT
    """

    __slots__ = [
        '_timestamp',
        '_takeoff_state',
        '_tilt_limit',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'takeoff_state': 'uint8',
        'tilt_limit': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.takeoff_state = kwargs.get('takeoff_state', int())
        self.tilt_limit = kwargs.get('tilt_limit', float())

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
        if self.takeoff_state != other.takeoff_state:
            return False
        if self.tilt_limit != other.tilt_limit:
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
    def takeoff_state(self):
        """Message field 'takeoff_state'."""
        return self._takeoff_state

    @takeoff_state.setter
    def takeoff_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'takeoff_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'takeoff_state' field must be an unsigned integer in [0, 255]"
        self._takeoff_state = value

    @builtins.property
    def tilt_limit(self):
        """Message field 'tilt_limit'."""
        return self._tilt_limit

    @tilt_limit.setter
    def tilt_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tilt_limit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tilt_limit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tilt_limit = value
