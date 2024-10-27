# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/PositionSetpoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PositionSetpoint(type):
    """Metaclass of message 'PositionSetpoint'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SETPOINT_TYPE_POSITION': 0,
        'SETPOINT_TYPE_VELOCITY': 1,
        'SETPOINT_TYPE_LOITER': 2,
        'SETPOINT_TYPE_TAKEOFF': 3,
        'SETPOINT_TYPE_LAND': 4,
        'SETPOINT_TYPE_IDLE': 5,
        'LOITER_TYPE_ORBIT': 0,
        'LOITER_TYPE_FIGUREEIGHT': 1,
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
                'px4_msgs.msg.PositionSetpoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__position_setpoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__position_setpoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__position_setpoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__position_setpoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__position_setpoint

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SETPOINT_TYPE_POSITION': cls.__constants['SETPOINT_TYPE_POSITION'],
            'SETPOINT_TYPE_VELOCITY': cls.__constants['SETPOINT_TYPE_VELOCITY'],
            'SETPOINT_TYPE_LOITER': cls.__constants['SETPOINT_TYPE_LOITER'],
            'SETPOINT_TYPE_TAKEOFF': cls.__constants['SETPOINT_TYPE_TAKEOFF'],
            'SETPOINT_TYPE_LAND': cls.__constants['SETPOINT_TYPE_LAND'],
            'SETPOINT_TYPE_IDLE': cls.__constants['SETPOINT_TYPE_IDLE'],
            'LOITER_TYPE_ORBIT': cls.__constants['LOITER_TYPE_ORBIT'],
            'LOITER_TYPE_FIGUREEIGHT': cls.__constants['LOITER_TYPE_FIGUREEIGHT'],
        }

    @property
    def SETPOINT_TYPE_POSITION(self):
        """Message constant 'SETPOINT_TYPE_POSITION'."""
        return Metaclass_PositionSetpoint.__constants['SETPOINT_TYPE_POSITION']

    @property
    def SETPOINT_TYPE_VELOCITY(self):
        """Message constant 'SETPOINT_TYPE_VELOCITY'."""
        return Metaclass_PositionSetpoint.__constants['SETPOINT_TYPE_VELOCITY']

    @property
    def SETPOINT_TYPE_LOITER(self):
        """Message constant 'SETPOINT_TYPE_LOITER'."""
        return Metaclass_PositionSetpoint.__constants['SETPOINT_TYPE_LOITER']

    @property
    def SETPOINT_TYPE_TAKEOFF(self):
        """Message constant 'SETPOINT_TYPE_TAKEOFF'."""
        return Metaclass_PositionSetpoint.__constants['SETPOINT_TYPE_TAKEOFF']

    @property
    def SETPOINT_TYPE_LAND(self):
        """Message constant 'SETPOINT_TYPE_LAND'."""
        return Metaclass_PositionSetpoint.__constants['SETPOINT_TYPE_LAND']

    @property
    def SETPOINT_TYPE_IDLE(self):
        """Message constant 'SETPOINT_TYPE_IDLE'."""
        return Metaclass_PositionSetpoint.__constants['SETPOINT_TYPE_IDLE']

    @property
    def LOITER_TYPE_ORBIT(self):
        """Message constant 'LOITER_TYPE_ORBIT'."""
        return Metaclass_PositionSetpoint.__constants['LOITER_TYPE_ORBIT']

    @property
    def LOITER_TYPE_FIGUREEIGHT(self):
        """Message constant 'LOITER_TYPE_FIGUREEIGHT'."""
        return Metaclass_PositionSetpoint.__constants['LOITER_TYPE_FIGUREEIGHT']


class PositionSetpoint(metaclass=Metaclass_PositionSetpoint):
    """
    Message class 'PositionSetpoint'.

    Constants:
      SETPOINT_TYPE_POSITION
      SETPOINT_TYPE_VELOCITY
      SETPOINT_TYPE_LOITER
      SETPOINT_TYPE_TAKEOFF
      SETPOINT_TYPE_LAND
      SETPOINT_TYPE_IDLE
      LOITER_TYPE_ORBIT
      LOITER_TYPE_FIGUREEIGHT
    """

    __slots__ = [
        '_timestamp',
        '_valid',
        '_type',
        '_vx',
        '_vy',
        '_vz',
        '_lat',
        '_lon',
        '_alt',
        '_yaw',
        '_loiter_radius',
        '_loiter_minor_radius',
        '_loiter_direction_counter_clockwise',
        '_loiter_orientation',
        '_loiter_pattern',
        '_acceptance_radius',
        '_cruising_speed',
        '_gliding_enabled',
        '_cruising_throttle',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'valid': 'boolean',
        'type': 'uint8',
        'vx': 'float',
        'vy': 'float',
        'vz': 'float',
        'lat': 'double',
        'lon': 'double',
        'alt': 'float',
        'yaw': 'float',
        'loiter_radius': 'float',
        'loiter_minor_radius': 'float',
        'loiter_direction_counter_clockwise': 'boolean',
        'loiter_orientation': 'float',
        'loiter_pattern': 'uint8',
        'acceptance_radius': 'float',
        'cruising_speed': 'float',
        'gliding_enabled': 'boolean',
        'cruising_throttle': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.valid = kwargs.get('valid', bool())
        self.type = kwargs.get('type', int())
        self.vx = kwargs.get('vx', float())
        self.vy = kwargs.get('vy', float())
        self.vz = kwargs.get('vz', float())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.alt = kwargs.get('alt', float())
        self.yaw = kwargs.get('yaw', float())
        self.loiter_radius = kwargs.get('loiter_radius', float())
        self.loiter_minor_radius = kwargs.get('loiter_minor_radius', float())
        self.loiter_direction_counter_clockwise = kwargs.get('loiter_direction_counter_clockwise', bool())
        self.loiter_orientation = kwargs.get('loiter_orientation', float())
        self.loiter_pattern = kwargs.get('loiter_pattern', int())
        self.acceptance_radius = kwargs.get('acceptance_radius', float())
        self.cruising_speed = kwargs.get('cruising_speed', float())
        self.gliding_enabled = kwargs.get('gliding_enabled', bool())
        self.cruising_throttle = kwargs.get('cruising_throttle', float())

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
        if self.valid != other.valid:
            return False
        if self.type != other.type:
            return False
        if self.vx != other.vx:
            return False
        if self.vy != other.vy:
            return False
        if self.vz != other.vz:
            return False
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.alt != other.alt:
            return False
        if self.yaw != other.yaw:
            return False
        if self.loiter_radius != other.loiter_radius:
            return False
        if self.loiter_minor_radius != other.loiter_minor_radius:
            return False
        if self.loiter_direction_counter_clockwise != other.loiter_direction_counter_clockwise:
            return False
        if self.loiter_orientation != other.loiter_orientation:
            return False
        if self.loiter_pattern != other.loiter_pattern:
            return False
        if self.acceptance_radius != other.acceptance_radius:
            return False
        if self.cruising_speed != other.cruising_speed:
            return False
        if self.gliding_enabled != other.gliding_enabled:
            return False
        if self.cruising_throttle != other.cruising_throttle:
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
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid' field must be of type 'bool'"
        self._valid = value

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
    def vx(self):
        """Message field 'vx'."""
        return self._vx

    @vx.setter
    def vx(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vx' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vx = value

    @builtins.property
    def vy(self):
        """Message field 'vy'."""
        return self._vy

    @vy.setter
    def vy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vy = value

    @builtins.property
    def vz(self):
        """Message field 'vz'."""
        return self._vz

    @vz.setter
    def vz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vz = value

    @builtins.property
    def lat(self):
        """Message field 'lat'."""
        return self._lat

    @lat.setter
    def lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lat = value

    @builtins.property
    def lon(self):
        """Message field 'lon'."""
        return self._lon

    @lon.setter
    def lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._lon = value

    @builtins.property
    def alt(self):
        """Message field 'alt'."""
        return self._alt

    @alt.setter
    def alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alt = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value

    @builtins.property
    def loiter_radius(self):
        """Message field 'loiter_radius'."""
        return self._loiter_radius

    @loiter_radius.setter
    def loiter_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loiter_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'loiter_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._loiter_radius = value

    @builtins.property
    def loiter_minor_radius(self):
        """Message field 'loiter_minor_radius'."""
        return self._loiter_minor_radius

    @loiter_minor_radius.setter
    def loiter_minor_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loiter_minor_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'loiter_minor_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._loiter_minor_radius = value

    @builtins.property
    def loiter_direction_counter_clockwise(self):
        """Message field 'loiter_direction_counter_clockwise'."""
        return self._loiter_direction_counter_clockwise

    @loiter_direction_counter_clockwise.setter
    def loiter_direction_counter_clockwise(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'loiter_direction_counter_clockwise' field must be of type 'bool'"
        self._loiter_direction_counter_clockwise = value

    @builtins.property
    def loiter_orientation(self):
        """Message field 'loiter_orientation'."""
        return self._loiter_orientation

    @loiter_orientation.setter
    def loiter_orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loiter_orientation' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'loiter_orientation' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._loiter_orientation = value

    @builtins.property
    def loiter_pattern(self):
        """Message field 'loiter_pattern'."""
        return self._loiter_pattern

    @loiter_pattern.setter
    def loiter_pattern(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loiter_pattern' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'loiter_pattern' field must be an unsigned integer in [0, 255]"
        self._loiter_pattern = value

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
    def cruising_speed(self):
        """Message field 'cruising_speed'."""
        return self._cruising_speed

    @cruising_speed.setter
    def cruising_speed(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cruising_speed' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cruising_speed' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cruising_speed = value

    @builtins.property
    def gliding_enabled(self):
        """Message field 'gliding_enabled'."""
        return self._gliding_enabled

    @gliding_enabled.setter
    def gliding_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gliding_enabled' field must be of type 'bool'"
        self._gliding_enabled = value

    @builtins.property
    def cruising_throttle(self):
        """Message field 'cruising_throttle'."""
        return self._cruising_throttle

    @cruising_throttle.setter
    def cruising_throttle(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cruising_throttle' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cruising_throttle' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cruising_throttle = value
