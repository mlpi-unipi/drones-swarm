# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleGlobalPosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleGlobalPosition(type):
    """Metaclass of message 'VehicleGlobalPosition'."""

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
                'px4_msgs.msg.VehicleGlobalPosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_global_position
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_global_position
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_global_position
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_global_position
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_global_position

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleGlobalPosition(metaclass=Metaclass_VehicleGlobalPosition):
    """Message class 'VehicleGlobalPosition'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_lat',
        '_lon',
        '_alt',
        '_alt_ellipsoid',
        '_delta_alt',
        '_lat_lon_reset_counter',
        '_alt_reset_counter',
        '_eph',
        '_epv',
        '_terrain_alt',
        '_terrain_alt_valid',
        '_dead_reckoning',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'lat': 'double',
        'lon': 'double',
        'alt': 'float',
        'alt_ellipsoid': 'float',
        'delta_alt': 'float',
        'lat_lon_reset_counter': 'uint8',
        'alt_reset_counter': 'uint8',
        'eph': 'float',
        'epv': 'float',
        'terrain_alt': 'float',
        'terrain_alt_valid': 'boolean',
        'dead_reckoning': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.alt = kwargs.get('alt', float())
        self.alt_ellipsoid = kwargs.get('alt_ellipsoid', float())
        self.delta_alt = kwargs.get('delta_alt', float())
        self.lat_lon_reset_counter = kwargs.get('lat_lon_reset_counter', int())
        self.alt_reset_counter = kwargs.get('alt_reset_counter', int())
        self.eph = kwargs.get('eph', float())
        self.epv = kwargs.get('epv', float())
        self.terrain_alt = kwargs.get('terrain_alt', float())
        self.terrain_alt_valid = kwargs.get('terrain_alt_valid', bool())
        self.dead_reckoning = kwargs.get('dead_reckoning', bool())

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
        if self.timestamp_sample != other.timestamp_sample:
            return False
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.alt != other.alt:
            return False
        if self.alt_ellipsoid != other.alt_ellipsoid:
            return False
        if self.delta_alt != other.delta_alt:
            return False
        if self.lat_lon_reset_counter != other.lat_lon_reset_counter:
            return False
        if self.alt_reset_counter != other.alt_reset_counter:
            return False
        if self.eph != other.eph:
            return False
        if self.epv != other.epv:
            return False
        if self.terrain_alt != other.terrain_alt:
            return False
        if self.terrain_alt_valid != other.terrain_alt_valid:
            return False
        if self.dead_reckoning != other.dead_reckoning:
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
    def timestamp_sample(self):
        """Message field 'timestamp_sample'."""
        return self._timestamp_sample

    @timestamp_sample.setter
    def timestamp_sample(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_sample' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_sample' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_sample = value

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
    def alt_ellipsoid(self):
        """Message field 'alt_ellipsoid'."""
        return self._alt_ellipsoid

    @alt_ellipsoid.setter
    def alt_ellipsoid(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alt_ellipsoid' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alt_ellipsoid' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alt_ellipsoid = value

    @builtins.property
    def delta_alt(self):
        """Message field 'delta_alt'."""
        return self._delta_alt

    @delta_alt.setter
    def delta_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_alt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_alt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_alt = value

    @builtins.property
    def lat_lon_reset_counter(self):
        """Message field 'lat_lon_reset_counter'."""
        return self._lat_lon_reset_counter

    @lat_lon_reset_counter.setter
    def lat_lon_reset_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'lat_lon_reset_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'lat_lon_reset_counter' field must be an unsigned integer in [0, 255]"
        self._lat_lon_reset_counter = value

    @builtins.property
    def alt_reset_counter(self):
        """Message field 'alt_reset_counter'."""
        return self._alt_reset_counter

    @alt_reset_counter.setter
    def alt_reset_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'alt_reset_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'alt_reset_counter' field must be an unsigned integer in [0, 255]"
        self._alt_reset_counter = value

    @builtins.property
    def eph(self):
        """Message field 'eph'."""
        return self._eph

    @eph.setter
    def eph(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eph' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'eph' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._eph = value

    @builtins.property
    def epv(self):
        """Message field 'epv'."""
        return self._epv

    @epv.setter
    def epv(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'epv' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'epv' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._epv = value

    @builtins.property
    def terrain_alt(self):
        """Message field 'terrain_alt'."""
        return self._terrain_alt

    @terrain_alt.setter
    def terrain_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'terrain_alt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'terrain_alt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._terrain_alt = value

    @builtins.property
    def terrain_alt_valid(self):
        """Message field 'terrain_alt_valid'."""
        return self._terrain_alt_valid

    @terrain_alt_valid.setter
    def terrain_alt_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'terrain_alt_valid' field must be of type 'bool'"
        self._terrain_alt_valid = value

    @builtins.property
    def dead_reckoning(self):
        """Message field 'dead_reckoning'."""
        return self._dead_reckoning

    @dead_reckoning.setter
    def dead_reckoning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dead_reckoning' field must be of type 'bool'"
        self._dead_reckoning = value
