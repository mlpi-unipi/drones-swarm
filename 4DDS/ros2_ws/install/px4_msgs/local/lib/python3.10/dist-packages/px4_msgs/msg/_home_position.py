# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/HomePosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HomePosition(type):
    """Metaclass of message 'HomePosition'."""

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
                'px4_msgs.msg.HomePosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__home_position
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__home_position
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__home_position
            cls._TYPE_SUPPORT = module.type_support_msg__msg__home_position
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__home_position

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HomePosition(metaclass=Metaclass_HomePosition):
    """Message class 'HomePosition'."""

    __slots__ = [
        '_timestamp',
        '_lat',
        '_lon',
        '_alt',
        '_x',
        '_y',
        '_z',
        '_yaw',
        '_valid_alt',
        '_valid_hpos',
        '_valid_lpos',
        '_manual_home',
        '_update_count',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'lat': 'double',
        'lon': 'double',
        'alt': 'float',
        'x': 'float',
        'y': 'float',
        'z': 'float',
        'yaw': 'float',
        'valid_alt': 'boolean',
        'valid_hpos': 'boolean',
        'valid_lpos': 'boolean',
        'manual_home': 'boolean',
        'update_count': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.alt = kwargs.get('alt', float())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.yaw = kwargs.get('yaw', float())
        self.valid_alt = kwargs.get('valid_alt', bool())
        self.valid_hpos = kwargs.get('valid_hpos', bool())
        self.valid_lpos = kwargs.get('valid_lpos', bool())
        self.manual_home = kwargs.get('manual_home', bool())
        self.update_count = kwargs.get('update_count', int())

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
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.alt != other.alt:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.yaw != other.yaw:
            return False
        if self.valid_alt != other.valid_alt:
            return False
        if self.valid_hpos != other.valid_hpos:
            return False
        if self.valid_lpos != other.valid_lpos:
            return False
        if self.manual_home != other.manual_home:
            return False
        if self.update_count != other.update_count:
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
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z = value

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
    def valid_alt(self):
        """Message field 'valid_alt'."""
        return self._valid_alt

    @valid_alt.setter
    def valid_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid_alt' field must be of type 'bool'"
        self._valid_alt = value

    @builtins.property
    def valid_hpos(self):
        """Message field 'valid_hpos'."""
        return self._valid_hpos

    @valid_hpos.setter
    def valid_hpos(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid_hpos' field must be of type 'bool'"
        self._valid_hpos = value

    @builtins.property
    def valid_lpos(self):
        """Message field 'valid_lpos'."""
        return self._valid_lpos

    @valid_lpos.setter
    def valid_lpos(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid_lpos' field must be of type 'bool'"
        self._valid_lpos = value

    @builtins.property
    def manual_home(self):
        """Message field 'manual_home'."""
        return self._manual_home

    @manual_home.setter
    def manual_home(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'manual_home' field must be of type 'bool'"
        self._manual_home = value

    @builtins.property
    def update_count(self):
        """Message field 'update_count'."""
        return self._update_count

    @update_count.setter
    def update_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'update_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'update_count' field must be an unsigned integer in [0, 4294967295]"
        self._update_count = value
