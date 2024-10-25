# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/PositionSetpointTriplet.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionSetpointTriplet(type):
    """Metaclass of message 'PositionSetpointTriplet'."""

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
                'px4_msgs.msg.PositionSetpointTriplet')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position_setpoint_triplet
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position_setpoint_triplet
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position_setpoint_triplet
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position_setpoint_triplet
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position_setpoint_triplet

            from px4_msgs.msg import PositionSetpoint
            if PositionSetpoint.__class__._TYPE_SUPPORT is None:
                PositionSetpoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PositionSetpointTriplet(metaclass=Metaclass_PositionSetpointTriplet):
    """Message class 'PositionSetpointTriplet'."""

    __slots__ = [
        '_timestamp',
        '_previous',
        '_current',
        '_next',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'previous': 'px4_msgs/PositionSetpoint',
        'current': 'px4_msgs/PositionSetpoint',
        'next': 'px4_msgs/PositionSetpoint',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['px4_msgs', 'msg'], 'PositionSetpoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['px4_msgs', 'msg'], 'PositionSetpoint'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['px4_msgs', 'msg'], 'PositionSetpoint'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        from px4_msgs.msg import PositionSetpoint
        self.previous = kwargs.get('previous', PositionSetpoint())
        from px4_msgs.msg import PositionSetpoint
        self.current = kwargs.get('current', PositionSetpoint())
        from px4_msgs.msg import PositionSetpoint
        self.next = kwargs.get('next', PositionSetpoint())

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
        if self.previous != other.previous:
            return False
        if self.current != other.current:
            return False
        if self.next != other.next:
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
    def previous(self):
        """Message field 'previous'."""
        return self._previous

    @previous.setter
    def previous(self, value):
        if __debug__:
            from px4_msgs.msg import PositionSetpoint
            assert \
                isinstance(value, PositionSetpoint), \
                "The 'previous' field must be a sub message of type 'PositionSetpoint'"
        self._previous = value

    @builtins.property
    def current(self):
        """Message field 'current'."""
        return self._current

    @current.setter
    def current(self, value):
        if __debug__:
            from px4_msgs.msg import PositionSetpoint
            assert \
                isinstance(value, PositionSetpoint), \
                "The 'current' field must be a sub message of type 'PositionSetpoint'"
        self._current = value

    @builtins.property  # noqa: A003
    def next(self):  # noqa: A003
        """Message field 'next'."""
        return self._next

    @next.setter  # noqa: A003
    def next(self, value):  # noqa: A003
        if __debug__:
            from px4_msgs.msg import PositionSetpoint
            assert \
                isinstance(value, PositionSetpoint), \
                "The 'next' field must be a sub message of type 'PositionSetpoint'"
        self._next = value
