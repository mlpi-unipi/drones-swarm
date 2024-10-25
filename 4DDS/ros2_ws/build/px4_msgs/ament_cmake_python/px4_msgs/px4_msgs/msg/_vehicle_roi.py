# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleRoi.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleRoi(type):
    """Metaclass of message 'VehicleRoi'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ROI_NONE': 0,
        'ROI_WPNEXT': 1,
        'ROI_WPINDEX': 2,
        'ROI_LOCATION': 3,
        'ROI_TARGET': 4,
        'ROI_ENUM_END': 5,
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
                'px4_msgs.msg.VehicleRoi')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_roi
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_roi
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_roi
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_roi
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_roi

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ROI_NONE': cls.__constants['ROI_NONE'],
            'ROI_WPNEXT': cls.__constants['ROI_WPNEXT'],
            'ROI_WPINDEX': cls.__constants['ROI_WPINDEX'],
            'ROI_LOCATION': cls.__constants['ROI_LOCATION'],
            'ROI_TARGET': cls.__constants['ROI_TARGET'],
            'ROI_ENUM_END': cls.__constants['ROI_ENUM_END'],
        }

    @property
    def ROI_NONE(self):
        """Message constant 'ROI_NONE'."""
        return Metaclass_VehicleRoi.__constants['ROI_NONE']

    @property
    def ROI_WPNEXT(self):
        """Message constant 'ROI_WPNEXT'."""
        return Metaclass_VehicleRoi.__constants['ROI_WPNEXT']

    @property
    def ROI_WPINDEX(self):
        """Message constant 'ROI_WPINDEX'."""
        return Metaclass_VehicleRoi.__constants['ROI_WPINDEX']

    @property
    def ROI_LOCATION(self):
        """Message constant 'ROI_LOCATION'."""
        return Metaclass_VehicleRoi.__constants['ROI_LOCATION']

    @property
    def ROI_TARGET(self):
        """Message constant 'ROI_TARGET'."""
        return Metaclass_VehicleRoi.__constants['ROI_TARGET']

    @property
    def ROI_ENUM_END(self):
        """Message constant 'ROI_ENUM_END'."""
        return Metaclass_VehicleRoi.__constants['ROI_ENUM_END']


class VehicleRoi(metaclass=Metaclass_VehicleRoi):
    """
    Message class 'VehicleRoi'.

    Constants:
      ROI_NONE
      ROI_WPNEXT
      ROI_WPINDEX
      ROI_LOCATION
      ROI_TARGET
      ROI_ENUM_END
    """

    __slots__ = [
        '_timestamp',
        '_mode',
        '_lat',
        '_lon',
        '_alt',
        '_roll_offset',
        '_pitch_offset',
        '_yaw_offset',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'mode': 'uint8',
        'lat': 'double',
        'lon': 'double',
        'alt': 'float',
        'roll_offset': 'float',
        'pitch_offset': 'float',
        'yaw_offset': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.mode = kwargs.get('mode', int())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.alt = kwargs.get('alt', float())
        self.roll_offset = kwargs.get('roll_offset', float())
        self.pitch_offset = kwargs.get('pitch_offset', float())
        self.yaw_offset = kwargs.get('yaw_offset', float())

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
        if self.mode != other.mode:
            return False
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.alt != other.alt:
            return False
        if self.roll_offset != other.roll_offset:
            return False
        if self.pitch_offset != other.pitch_offset:
            return False
        if self.yaw_offset != other.yaw_offset:
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
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

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
    def roll_offset(self):
        """Message field 'roll_offset'."""
        return self._roll_offset

    @roll_offset.setter
    def roll_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll_offset = value

    @builtins.property
    def pitch_offset(self):
        """Message field 'pitch_offset'."""
        return self._pitch_offset

    @pitch_offset.setter
    def pitch_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_offset = value

    @builtins.property
    def yaw_offset(self):
        """Message field 'yaw_offset'."""
        return self._yaw_offset

    @yaw_offset.setter
    def yaw_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_offset = value
