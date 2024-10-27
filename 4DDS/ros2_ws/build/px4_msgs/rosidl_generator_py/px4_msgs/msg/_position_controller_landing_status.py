# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/PositionControllerLandingStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionControllerLandingStatus(type):
    """Metaclass of message 'PositionControllerLandingStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NOT_ABORTED': 0,
        'ABORTED_BY_OPERATOR': 1,
        'TERRAIN_NOT_FOUND': 2,
        'TERRAIN_TIMEOUT': 3,
        'UNKNOWN_ABORT_CRITERION': 4,
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
                'px4_msgs.msg.PositionControllerLandingStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position_controller_landing_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position_controller_landing_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position_controller_landing_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position_controller_landing_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position_controller_landing_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NOT_ABORTED': cls.__constants['NOT_ABORTED'],
            'ABORTED_BY_OPERATOR': cls.__constants['ABORTED_BY_OPERATOR'],
            'TERRAIN_NOT_FOUND': cls.__constants['TERRAIN_NOT_FOUND'],
            'TERRAIN_TIMEOUT': cls.__constants['TERRAIN_TIMEOUT'],
            'UNKNOWN_ABORT_CRITERION': cls.__constants['UNKNOWN_ABORT_CRITERION'],
        }

    @property
    def NOT_ABORTED(self):
        """Message constant 'NOT_ABORTED'."""
        return Metaclass_PositionControllerLandingStatus.__constants['NOT_ABORTED']

    @property
    def ABORTED_BY_OPERATOR(self):
        """Message constant 'ABORTED_BY_OPERATOR'."""
        return Metaclass_PositionControllerLandingStatus.__constants['ABORTED_BY_OPERATOR']

    @property
    def TERRAIN_NOT_FOUND(self):
        """Message constant 'TERRAIN_NOT_FOUND'."""
        return Metaclass_PositionControllerLandingStatus.__constants['TERRAIN_NOT_FOUND']

    @property
    def TERRAIN_TIMEOUT(self):
        """Message constant 'TERRAIN_TIMEOUT'."""
        return Metaclass_PositionControllerLandingStatus.__constants['TERRAIN_TIMEOUT']

    @property
    def UNKNOWN_ABORT_CRITERION(self):
        """Message constant 'UNKNOWN_ABORT_CRITERION'."""
        return Metaclass_PositionControllerLandingStatus.__constants['UNKNOWN_ABORT_CRITERION']


class PositionControllerLandingStatus(metaclass=Metaclass_PositionControllerLandingStatus):
    """
    Message class 'PositionControllerLandingStatus'.

    Constants:
      NOT_ABORTED
      ABORTED_BY_OPERATOR
      TERRAIN_NOT_FOUND
      TERRAIN_TIMEOUT
      UNKNOWN_ABORT_CRITERION
    """

    __slots__ = [
        '_timestamp',
        '_lateral_touchdown_offset',
        '_flaring',
        '_abort_status',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'lateral_touchdown_offset': 'float',
        'flaring': 'boolean',
        'abort_status': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.lateral_touchdown_offset = kwargs.get('lateral_touchdown_offset', float())
        self.flaring = kwargs.get('flaring', bool())
        self.abort_status = kwargs.get('abort_status', int())

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
        if self.lateral_touchdown_offset != other.lateral_touchdown_offset:
            return False
        if self.flaring != other.flaring:
            return False
        if self.abort_status != other.abort_status:
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
    def lateral_touchdown_offset(self):
        """Message field 'lateral_touchdown_offset'."""
        return self._lateral_touchdown_offset

    @lateral_touchdown_offset.setter
    def lateral_touchdown_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lateral_touchdown_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'lateral_touchdown_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._lateral_touchdown_offset = value

    @builtins.property
    def flaring(self):
        """Message field 'flaring'."""
        return self._flaring

    @flaring.setter
    def flaring(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'flaring' field must be of type 'bool'"
        self._flaring = value

    @builtins.property
    def abort_status(self):
        """Message field 'abort_status'."""
        return self._abort_status

    @abort_status.setter
    def abort_status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'abort_status' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'abort_status' field must be an unsigned integer in [0, 255]"
        self._abort_status = value
