# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/OffboardControlMode.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OffboardControlMode(type):
    """Metaclass of message 'OffboardControlMode'."""

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
                'px4_msgs.msg.OffboardControlMode')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__offboard_control_mode
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__offboard_control_mode
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__offboard_control_mode
            cls._TYPE_SUPPORT = module.type_support_msg__msg__offboard_control_mode
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__offboard_control_mode

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OffboardControlMode(metaclass=Metaclass_OffboardControlMode):
    """Message class 'OffboardControlMode'."""

    __slots__ = [
        '_timestamp',
        '_position',
        '_velocity',
        '_acceleration',
        '_attitude',
        '_body_rate',
        '_thrust_and_torque',
        '_direct_actuator',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'position': 'boolean',
        'velocity': 'boolean',
        'acceleration': 'boolean',
        'attitude': 'boolean',
        'body_rate': 'boolean',
        'thrust_and_torque': 'boolean',
        'direct_actuator': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.position = kwargs.get('position', bool())
        self.velocity = kwargs.get('velocity', bool())
        self.acceleration = kwargs.get('acceleration', bool())
        self.attitude = kwargs.get('attitude', bool())
        self.body_rate = kwargs.get('body_rate', bool())
        self.thrust_and_torque = kwargs.get('thrust_and_torque', bool())
        self.direct_actuator = kwargs.get('direct_actuator', bool())

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
        if self.position != other.position:
            return False
        if self.velocity != other.velocity:
            return False
        if self.acceleration != other.acceleration:
            return False
        if self.attitude != other.attitude:
            return False
        if self.body_rate != other.body_rate:
            return False
        if self.thrust_and_torque != other.thrust_and_torque:
            return False
        if self.direct_actuator != other.direct_actuator:
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
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'position' field must be of type 'bool'"
        self._position = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'velocity' field must be of type 'bool'"
        self._velocity = value

    @builtins.property
    def acceleration(self):
        """Message field 'acceleration'."""
        return self._acceleration

    @acceleration.setter
    def acceleration(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'acceleration' field must be of type 'bool'"
        self._acceleration = value

    @builtins.property
    def attitude(self):
        """Message field 'attitude'."""
        return self._attitude

    @attitude.setter
    def attitude(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'attitude' field must be of type 'bool'"
        self._attitude = value

    @builtins.property
    def body_rate(self):
        """Message field 'body_rate'."""
        return self._body_rate

    @body_rate.setter
    def body_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'body_rate' field must be of type 'bool'"
        self._body_rate = value

    @builtins.property
    def thrust_and_torque(self):
        """Message field 'thrust_and_torque'."""
        return self._thrust_and_torque

    @thrust_and_torque.setter
    def thrust_and_torque(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'thrust_and_torque' field must be of type 'bool'"
        self._thrust_and_torque = value

    @builtins.property
    def direct_actuator(self):
        """Message field 'direct_actuator'."""
        return self._direct_actuator

    @direct_actuator.setter
    def direct_actuator(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'direct_actuator' field must be of type 'bool'"
        self._direct_actuator = value
