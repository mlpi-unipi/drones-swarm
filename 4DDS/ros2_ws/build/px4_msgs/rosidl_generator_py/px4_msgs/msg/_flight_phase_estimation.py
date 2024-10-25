# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/FlightPhaseEstimation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FlightPhaseEstimation(type):
    """Metaclass of message 'FlightPhaseEstimation'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'FLIGHT_PHASE_UNKNOWN': 0,
        'FLIGHT_PHASE_LEVEL': 1,
        'FLIGHT_PHASE_DESCEND': 2,
        'FLIGHT_PHASE_CLIMB': 3,
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
                'px4_msgs.msg.FlightPhaseEstimation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__flight_phase_estimation
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__flight_phase_estimation
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__flight_phase_estimation
            cls._TYPE_SUPPORT = module.type_support_msg__msg__flight_phase_estimation
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__flight_phase_estimation

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'FLIGHT_PHASE_UNKNOWN': cls.__constants['FLIGHT_PHASE_UNKNOWN'],
            'FLIGHT_PHASE_LEVEL': cls.__constants['FLIGHT_PHASE_LEVEL'],
            'FLIGHT_PHASE_DESCEND': cls.__constants['FLIGHT_PHASE_DESCEND'],
            'FLIGHT_PHASE_CLIMB': cls.__constants['FLIGHT_PHASE_CLIMB'],
        }

    @property
    def FLIGHT_PHASE_UNKNOWN(self):
        """Message constant 'FLIGHT_PHASE_UNKNOWN'."""
        return Metaclass_FlightPhaseEstimation.__constants['FLIGHT_PHASE_UNKNOWN']

    @property
    def FLIGHT_PHASE_LEVEL(self):
        """Message constant 'FLIGHT_PHASE_LEVEL'."""
        return Metaclass_FlightPhaseEstimation.__constants['FLIGHT_PHASE_LEVEL']

    @property
    def FLIGHT_PHASE_DESCEND(self):
        """Message constant 'FLIGHT_PHASE_DESCEND'."""
        return Metaclass_FlightPhaseEstimation.__constants['FLIGHT_PHASE_DESCEND']

    @property
    def FLIGHT_PHASE_CLIMB(self):
        """Message constant 'FLIGHT_PHASE_CLIMB'."""
        return Metaclass_FlightPhaseEstimation.__constants['FLIGHT_PHASE_CLIMB']


class FlightPhaseEstimation(metaclass=Metaclass_FlightPhaseEstimation):
    """
    Message class 'FlightPhaseEstimation'.

    Constants:
      FLIGHT_PHASE_UNKNOWN
      FLIGHT_PHASE_LEVEL
      FLIGHT_PHASE_DESCEND
      FLIGHT_PHASE_CLIMB
    """

    __slots__ = [
        '_timestamp',
        '_flight_phase',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'flight_phase': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.flight_phase = kwargs.get('flight_phase', int())

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
        if self.flight_phase != other.flight_phase:
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
    def flight_phase(self):
        """Message field 'flight_phase'."""
        return self._flight_phase

    @flight_phase.setter
    def flight_phase(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flight_phase' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'flight_phase' field must be an unsigned integer in [0, 255]"
        self._flight_phase = value
