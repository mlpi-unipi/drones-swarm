# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/PositionControllerStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionControllerStatus(type):
    """Metaclass of message 'PositionControllerStatus'."""

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
                'px4_msgs.msg.PositionControllerStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position_controller_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position_controller_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position_controller_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position_controller_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position_controller_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PositionControllerStatus(metaclass=Metaclass_PositionControllerStatus):
    """Message class 'PositionControllerStatus'."""

    __slots__ = [
        '_timestamp',
        '_nav_roll',
        '_nav_pitch',
        '_nav_bearing',
        '_target_bearing',
        '_xtrack_error',
        '_wp_dist',
        '_acceptance_radius',
        '_yaw_acceptance',
        '_altitude_acceptance',
        '_type',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'nav_roll': 'float',
        'nav_pitch': 'float',
        'nav_bearing': 'float',
        'target_bearing': 'float',
        'xtrack_error': 'float',
        'wp_dist': 'float',
        'acceptance_radius': 'float',
        'yaw_acceptance': 'float',
        'altitude_acceptance': 'float',
        'type': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.nav_roll = kwargs.get('nav_roll', float())
        self.nav_pitch = kwargs.get('nav_pitch', float())
        self.nav_bearing = kwargs.get('nav_bearing', float())
        self.target_bearing = kwargs.get('target_bearing', float())
        self.xtrack_error = kwargs.get('xtrack_error', float())
        self.wp_dist = kwargs.get('wp_dist', float())
        self.acceptance_radius = kwargs.get('acceptance_radius', float())
        self.yaw_acceptance = kwargs.get('yaw_acceptance', float())
        self.altitude_acceptance = kwargs.get('altitude_acceptance', float())
        self.type = kwargs.get('type', int())

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
        if self.nav_roll != other.nav_roll:
            return False
        if self.nav_pitch != other.nav_pitch:
            return False
        if self.nav_bearing != other.nav_bearing:
            return False
        if self.target_bearing != other.target_bearing:
            return False
        if self.xtrack_error != other.xtrack_error:
            return False
        if self.wp_dist != other.wp_dist:
            return False
        if self.acceptance_radius != other.acceptance_radius:
            return False
        if self.yaw_acceptance != other.yaw_acceptance:
            return False
        if self.altitude_acceptance != other.altitude_acceptance:
            return False
        if self.type != other.type:
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
    def nav_roll(self):
        """Message field 'nav_roll'."""
        return self._nav_roll

    @nav_roll.setter
    def nav_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'nav_roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nav_roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nav_roll = value

    @builtins.property
    def nav_pitch(self):
        """Message field 'nav_pitch'."""
        return self._nav_pitch

    @nav_pitch.setter
    def nav_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'nav_pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nav_pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nav_pitch = value

    @builtins.property
    def nav_bearing(self):
        """Message field 'nav_bearing'."""
        return self._nav_bearing

    @nav_bearing.setter
    def nav_bearing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'nav_bearing' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'nav_bearing' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._nav_bearing = value

    @builtins.property
    def target_bearing(self):
        """Message field 'target_bearing'."""
        return self._target_bearing

    @target_bearing.setter
    def target_bearing(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'target_bearing' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'target_bearing' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._target_bearing = value

    @builtins.property
    def xtrack_error(self):
        """Message field 'xtrack_error'."""
        return self._xtrack_error

    @xtrack_error.setter
    def xtrack_error(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'xtrack_error' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'xtrack_error' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._xtrack_error = value

    @builtins.property
    def wp_dist(self):
        """Message field 'wp_dist'."""
        return self._wp_dist

    @wp_dist.setter
    def wp_dist(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'wp_dist' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'wp_dist' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._wp_dist = value

    @builtins.property
    def acceptance_radius(self):
        """Message field 'acceptance_radius'."""
        return self._acceptance_radius

    @acceptance_radius.setter
    def acceptance_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceptance_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acceptance_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acceptance_radius = value

    @builtins.property
    def yaw_acceptance(self):
        """Message field 'yaw_acceptance'."""
        return self._yaw_acceptance

    @yaw_acceptance.setter
    def yaw_acceptance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_acceptance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_acceptance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_acceptance = value

    @builtins.property
    def altitude_acceptance(self):
        """Message field 'altitude_acceptance'."""
        return self._altitude_acceptance

    @altitude_acceptance.setter
    def altitude_acceptance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude_acceptance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'altitude_acceptance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._altitude_acceptance = value

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
