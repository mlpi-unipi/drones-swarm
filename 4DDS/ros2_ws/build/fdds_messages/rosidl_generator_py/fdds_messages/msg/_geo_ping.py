# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fdds_messages:msg/GeoPing.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GeoPing(type):
    """Metaclass of message 'GeoPing'."""

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
            module = import_type_support('fdds_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fdds_messages.msg.GeoPing')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__geo_ping
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__geo_ping
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__geo_ping
            cls._TYPE_SUPPORT = module.type_support_msg__msg__geo_ping
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__geo_ping

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GeoPing(metaclass=Metaclass_GeoPing):
    """Message class 'GeoPing'."""

    __slots__ = [
        '_vehicle_id',
        '_latitude_m',
        '_longitude_m',
        '_speed_north_m_s',
        '_speed_east_m_s',
    ]

    _fields_and_field_types = {
        'vehicle_id': 'uint8',
        'latitude_m': 'double',
        'longitude_m': 'double',
        'speed_north_m_s': 'float',
        'speed_east_m_s': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.vehicle_id = kwargs.get('vehicle_id', int())
        self.latitude_m = kwargs.get('latitude_m', float())
        self.longitude_m = kwargs.get('longitude_m', float())
        self.speed_north_m_s = kwargs.get('speed_north_m_s', float())
        self.speed_east_m_s = kwargs.get('speed_east_m_s', float())

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
        if self.vehicle_id != other.vehicle_id:
            return False
        if self.latitude_m != other.latitude_m:
            return False
        if self.longitude_m != other.longitude_m:
            return False
        if self.speed_north_m_s != other.speed_north_m_s:
            return False
        if self.speed_east_m_s != other.speed_east_m_s:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def vehicle_id(self):
        """Message field 'vehicle_id'."""
        return self._vehicle_id

    @vehicle_id.setter
    def vehicle_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vehicle_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vehicle_id' field must be an unsigned integer in [0, 255]"
        self._vehicle_id = value

    @builtins.property
    def latitude_m(self):
        """Message field 'latitude_m'."""
        return self._latitude_m

    @latitude_m.setter
    def latitude_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude_m = value

    @builtins.property
    def longitude_m(self):
        """Message field 'longitude_m'."""
        return self._longitude_m

    @longitude_m.setter
    def longitude_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude_m = value

    @builtins.property
    def speed_north_m_s(self):
        """Message field 'speed_north_m_s'."""
        return self._speed_north_m_s

    @speed_north_m_s.setter
    def speed_north_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_north_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_north_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_north_m_s = value

    @builtins.property
    def speed_east_m_s(self):
        """Message field 'speed_east_m_s'."""
        return self._speed_east_m_s

    @speed_east_m_s.setter
    def speed_east_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'speed_east_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'speed_east_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._speed_east_m_s = value
