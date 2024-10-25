# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/TransponderReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'callsign'
# Member 'uas_id'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_TransponderReport(type):
    """Metaclass of message 'TransponderReport'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'PX4_ADSB_FLAGS_VALID_COORDS': 1,
        'PX4_ADSB_FLAGS_VALID_ALTITUDE': 2,
        'PX4_ADSB_FLAGS_VALID_HEADING': 4,
        'PX4_ADSB_FLAGS_VALID_VELOCITY': 8,
        'PX4_ADSB_FLAGS_VALID_CALLSIGN': 16,
        'PX4_ADSB_FLAGS_VALID_SQUAWK': 32,
        'PX4_ADSB_FLAGS_RETRANSLATE': 256,
        'ADSB_EMITTER_TYPE_NO_INFO': 0,
        'ADSB_EMITTER_TYPE_LIGHT': 1,
        'ADSB_EMITTER_TYPE_SMALL': 2,
        'ADSB_EMITTER_TYPE_LARGE': 3,
        'ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE': 4,
        'ADSB_EMITTER_TYPE_HEAVY': 5,
        'ADSB_EMITTER_TYPE_HIGHLY_MANUV': 6,
        'ADSB_EMITTER_TYPE_ROTOCRAFT': 7,
        'ADSB_EMITTER_TYPE_UNASSIGNED': 8,
        'ADSB_EMITTER_TYPE_GLIDER': 9,
        'ADSB_EMITTER_TYPE_LIGHTER_AIR': 10,
        'ADSB_EMITTER_TYPE_PARACHUTE': 11,
        'ADSB_EMITTER_TYPE_ULTRA_LIGHT': 12,
        'ADSB_EMITTER_TYPE_UNASSIGNED2': 13,
        'ADSB_EMITTER_TYPE_UAV': 14,
        'ADSB_EMITTER_TYPE_SPACE': 15,
        'ADSB_EMITTER_TYPE_UNASSGINED3': 16,
        'ADSB_EMITTER_TYPE_EMERGENCY_SURFACE': 17,
        'ADSB_EMITTER_TYPE_SERVICE_SURFACE': 18,
        'ADSB_EMITTER_TYPE_POINT_OBSTACLE': 19,
        'ADSB_EMITTER_TYPE_ENUM_END': 20,
        'ORB_QUEUE_LENGTH': 16,
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
                'px4_msgs.msg.TransponderReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__transponder_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__transponder_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__transponder_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__transponder_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__transponder_report

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'PX4_ADSB_FLAGS_VALID_COORDS': cls.__constants['PX4_ADSB_FLAGS_VALID_COORDS'],
            'PX4_ADSB_FLAGS_VALID_ALTITUDE': cls.__constants['PX4_ADSB_FLAGS_VALID_ALTITUDE'],
            'PX4_ADSB_FLAGS_VALID_HEADING': cls.__constants['PX4_ADSB_FLAGS_VALID_HEADING'],
            'PX4_ADSB_FLAGS_VALID_VELOCITY': cls.__constants['PX4_ADSB_FLAGS_VALID_VELOCITY'],
            'PX4_ADSB_FLAGS_VALID_CALLSIGN': cls.__constants['PX4_ADSB_FLAGS_VALID_CALLSIGN'],
            'PX4_ADSB_FLAGS_VALID_SQUAWK': cls.__constants['PX4_ADSB_FLAGS_VALID_SQUAWK'],
            'PX4_ADSB_FLAGS_RETRANSLATE': cls.__constants['PX4_ADSB_FLAGS_RETRANSLATE'],
            'ADSB_EMITTER_TYPE_NO_INFO': cls.__constants['ADSB_EMITTER_TYPE_NO_INFO'],
            'ADSB_EMITTER_TYPE_LIGHT': cls.__constants['ADSB_EMITTER_TYPE_LIGHT'],
            'ADSB_EMITTER_TYPE_SMALL': cls.__constants['ADSB_EMITTER_TYPE_SMALL'],
            'ADSB_EMITTER_TYPE_LARGE': cls.__constants['ADSB_EMITTER_TYPE_LARGE'],
            'ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE': cls.__constants['ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE'],
            'ADSB_EMITTER_TYPE_HEAVY': cls.__constants['ADSB_EMITTER_TYPE_HEAVY'],
            'ADSB_EMITTER_TYPE_HIGHLY_MANUV': cls.__constants['ADSB_EMITTER_TYPE_HIGHLY_MANUV'],
            'ADSB_EMITTER_TYPE_ROTOCRAFT': cls.__constants['ADSB_EMITTER_TYPE_ROTOCRAFT'],
            'ADSB_EMITTER_TYPE_UNASSIGNED': cls.__constants['ADSB_EMITTER_TYPE_UNASSIGNED'],
            'ADSB_EMITTER_TYPE_GLIDER': cls.__constants['ADSB_EMITTER_TYPE_GLIDER'],
            'ADSB_EMITTER_TYPE_LIGHTER_AIR': cls.__constants['ADSB_EMITTER_TYPE_LIGHTER_AIR'],
            'ADSB_EMITTER_TYPE_PARACHUTE': cls.__constants['ADSB_EMITTER_TYPE_PARACHUTE'],
            'ADSB_EMITTER_TYPE_ULTRA_LIGHT': cls.__constants['ADSB_EMITTER_TYPE_ULTRA_LIGHT'],
            'ADSB_EMITTER_TYPE_UNASSIGNED2': cls.__constants['ADSB_EMITTER_TYPE_UNASSIGNED2'],
            'ADSB_EMITTER_TYPE_UAV': cls.__constants['ADSB_EMITTER_TYPE_UAV'],
            'ADSB_EMITTER_TYPE_SPACE': cls.__constants['ADSB_EMITTER_TYPE_SPACE'],
            'ADSB_EMITTER_TYPE_UNASSGINED3': cls.__constants['ADSB_EMITTER_TYPE_UNASSGINED3'],
            'ADSB_EMITTER_TYPE_EMERGENCY_SURFACE': cls.__constants['ADSB_EMITTER_TYPE_EMERGENCY_SURFACE'],
            'ADSB_EMITTER_TYPE_SERVICE_SURFACE': cls.__constants['ADSB_EMITTER_TYPE_SERVICE_SURFACE'],
            'ADSB_EMITTER_TYPE_POINT_OBSTACLE': cls.__constants['ADSB_EMITTER_TYPE_POINT_OBSTACLE'],
            'ADSB_EMITTER_TYPE_ENUM_END': cls.__constants['ADSB_EMITTER_TYPE_ENUM_END'],
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def PX4_ADSB_FLAGS_VALID_COORDS(self):
        """Message constant 'PX4_ADSB_FLAGS_VALID_COORDS'."""
        return Metaclass_TransponderReport.__constants['PX4_ADSB_FLAGS_VALID_COORDS']

    @property
    def PX4_ADSB_FLAGS_VALID_ALTITUDE(self):
        """Message constant 'PX4_ADSB_FLAGS_VALID_ALTITUDE'."""
        return Metaclass_TransponderReport.__constants['PX4_ADSB_FLAGS_VALID_ALTITUDE']

    @property
    def PX4_ADSB_FLAGS_VALID_HEADING(self):
        """Message constant 'PX4_ADSB_FLAGS_VALID_HEADING'."""
        return Metaclass_TransponderReport.__constants['PX4_ADSB_FLAGS_VALID_HEADING']

    @property
    def PX4_ADSB_FLAGS_VALID_VELOCITY(self):
        """Message constant 'PX4_ADSB_FLAGS_VALID_VELOCITY'."""
        return Metaclass_TransponderReport.__constants['PX4_ADSB_FLAGS_VALID_VELOCITY']

    @property
    def PX4_ADSB_FLAGS_VALID_CALLSIGN(self):
        """Message constant 'PX4_ADSB_FLAGS_VALID_CALLSIGN'."""
        return Metaclass_TransponderReport.__constants['PX4_ADSB_FLAGS_VALID_CALLSIGN']

    @property
    def PX4_ADSB_FLAGS_VALID_SQUAWK(self):
        """Message constant 'PX4_ADSB_FLAGS_VALID_SQUAWK'."""
        return Metaclass_TransponderReport.__constants['PX4_ADSB_FLAGS_VALID_SQUAWK']

    @property
    def PX4_ADSB_FLAGS_RETRANSLATE(self):
        """Message constant 'PX4_ADSB_FLAGS_RETRANSLATE'."""
        return Metaclass_TransponderReport.__constants['PX4_ADSB_FLAGS_RETRANSLATE']

    @property
    def ADSB_EMITTER_TYPE_NO_INFO(self):
        """Message constant 'ADSB_EMITTER_TYPE_NO_INFO'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_NO_INFO']

    @property
    def ADSB_EMITTER_TYPE_LIGHT(self):
        """Message constant 'ADSB_EMITTER_TYPE_LIGHT'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_LIGHT']

    @property
    def ADSB_EMITTER_TYPE_SMALL(self):
        """Message constant 'ADSB_EMITTER_TYPE_SMALL'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_SMALL']

    @property
    def ADSB_EMITTER_TYPE_LARGE(self):
        """Message constant 'ADSB_EMITTER_TYPE_LARGE'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_LARGE']

    @property
    def ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE(self):
        """Message constant 'ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE']

    @property
    def ADSB_EMITTER_TYPE_HEAVY(self):
        """Message constant 'ADSB_EMITTER_TYPE_HEAVY'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_HEAVY']

    @property
    def ADSB_EMITTER_TYPE_HIGHLY_MANUV(self):
        """Message constant 'ADSB_EMITTER_TYPE_HIGHLY_MANUV'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_HIGHLY_MANUV']

    @property
    def ADSB_EMITTER_TYPE_ROTOCRAFT(self):
        """Message constant 'ADSB_EMITTER_TYPE_ROTOCRAFT'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_ROTOCRAFT']

    @property
    def ADSB_EMITTER_TYPE_UNASSIGNED(self):
        """Message constant 'ADSB_EMITTER_TYPE_UNASSIGNED'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_UNASSIGNED']

    @property
    def ADSB_EMITTER_TYPE_GLIDER(self):
        """Message constant 'ADSB_EMITTER_TYPE_GLIDER'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_GLIDER']

    @property
    def ADSB_EMITTER_TYPE_LIGHTER_AIR(self):
        """Message constant 'ADSB_EMITTER_TYPE_LIGHTER_AIR'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_LIGHTER_AIR']

    @property
    def ADSB_EMITTER_TYPE_PARACHUTE(self):
        """Message constant 'ADSB_EMITTER_TYPE_PARACHUTE'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_PARACHUTE']

    @property
    def ADSB_EMITTER_TYPE_ULTRA_LIGHT(self):
        """Message constant 'ADSB_EMITTER_TYPE_ULTRA_LIGHT'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_ULTRA_LIGHT']

    @property
    def ADSB_EMITTER_TYPE_UNASSIGNED2(self):
        """Message constant 'ADSB_EMITTER_TYPE_UNASSIGNED2'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_UNASSIGNED2']

    @property
    def ADSB_EMITTER_TYPE_UAV(self):
        """Message constant 'ADSB_EMITTER_TYPE_UAV'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_UAV']

    @property
    def ADSB_EMITTER_TYPE_SPACE(self):
        """Message constant 'ADSB_EMITTER_TYPE_SPACE'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_SPACE']

    @property
    def ADSB_EMITTER_TYPE_UNASSGINED3(self):
        """Message constant 'ADSB_EMITTER_TYPE_UNASSGINED3'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_UNASSGINED3']

    @property
    def ADSB_EMITTER_TYPE_EMERGENCY_SURFACE(self):
        """Message constant 'ADSB_EMITTER_TYPE_EMERGENCY_SURFACE'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_EMERGENCY_SURFACE']

    @property
    def ADSB_EMITTER_TYPE_SERVICE_SURFACE(self):
        """Message constant 'ADSB_EMITTER_TYPE_SERVICE_SURFACE'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_SERVICE_SURFACE']

    @property
    def ADSB_EMITTER_TYPE_POINT_OBSTACLE(self):
        """Message constant 'ADSB_EMITTER_TYPE_POINT_OBSTACLE'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_POINT_OBSTACLE']

    @property
    def ADSB_EMITTER_TYPE_ENUM_END(self):
        """Message constant 'ADSB_EMITTER_TYPE_ENUM_END'."""
        return Metaclass_TransponderReport.__constants['ADSB_EMITTER_TYPE_ENUM_END']

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_TransponderReport.__constants['ORB_QUEUE_LENGTH']


class TransponderReport(metaclass=Metaclass_TransponderReport):
    """
    Message class 'TransponderReport'.

    Constants:
      PX4_ADSB_FLAGS_VALID_COORDS
      PX4_ADSB_FLAGS_VALID_ALTITUDE
      PX4_ADSB_FLAGS_VALID_HEADING
      PX4_ADSB_FLAGS_VALID_VELOCITY
      PX4_ADSB_FLAGS_VALID_CALLSIGN
      PX4_ADSB_FLAGS_VALID_SQUAWK
      PX4_ADSB_FLAGS_RETRANSLATE
      ADSB_EMITTER_TYPE_NO_INFO
      ADSB_EMITTER_TYPE_LIGHT
      ADSB_EMITTER_TYPE_SMALL
      ADSB_EMITTER_TYPE_LARGE
      ADSB_EMITTER_TYPE_HIGH_VORTEX_LARGE
      ADSB_EMITTER_TYPE_HEAVY
      ADSB_EMITTER_TYPE_HIGHLY_MANUV
      ADSB_EMITTER_TYPE_ROTOCRAFT
      ADSB_EMITTER_TYPE_UNASSIGNED
      ADSB_EMITTER_TYPE_GLIDER
      ADSB_EMITTER_TYPE_LIGHTER_AIR
      ADSB_EMITTER_TYPE_PARACHUTE
      ADSB_EMITTER_TYPE_ULTRA_LIGHT
      ADSB_EMITTER_TYPE_UNASSIGNED2
      ADSB_EMITTER_TYPE_UAV
      ADSB_EMITTER_TYPE_SPACE
      ADSB_EMITTER_TYPE_UNASSGINED3
      ADSB_EMITTER_TYPE_EMERGENCY_SURFACE
      ADSB_EMITTER_TYPE_SERVICE_SURFACE
      ADSB_EMITTER_TYPE_POINT_OBSTACLE
      ADSB_EMITTER_TYPE_ENUM_END
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_icao_address',
        '_lat',
        '_lon',
        '_altitude_type',
        '_altitude',
        '_heading',
        '_hor_velocity',
        '_ver_velocity',
        '_callsign',
        '_emitter_type',
        '_tslc',
        '_flags',
        '_squawk',
        '_uas_id',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'icao_address': 'uint32',
        'lat': 'double',
        'lon': 'double',
        'altitude_type': 'uint8',
        'altitude': 'float',
        'heading': 'float',
        'hor_velocity': 'float',
        'ver_velocity': 'float',
        'callsign': 'uint8[9]',
        'emitter_type': 'uint8',
        'tslc': 'uint8',
        'flags': 'uint16',
        'squawk': 'uint16',
        'uas_id': 'uint8[18]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 9),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 18),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.icao_address = kwargs.get('icao_address', int())
        self.lat = kwargs.get('lat', float())
        self.lon = kwargs.get('lon', float())
        self.altitude_type = kwargs.get('altitude_type', int())
        self.altitude = kwargs.get('altitude', float())
        self.heading = kwargs.get('heading', float())
        self.hor_velocity = kwargs.get('hor_velocity', float())
        self.ver_velocity = kwargs.get('ver_velocity', float())
        if 'callsign' not in kwargs:
            self.callsign = numpy.zeros(9, dtype=numpy.uint8)
        else:
            self.callsign = numpy.array(kwargs.get('callsign'), dtype=numpy.uint8)
            assert self.callsign.shape == (9, )
        self.emitter_type = kwargs.get('emitter_type', int())
        self.tslc = kwargs.get('tslc', int())
        self.flags = kwargs.get('flags', int())
        self.squawk = kwargs.get('squawk', int())
        if 'uas_id' not in kwargs:
            self.uas_id = numpy.zeros(18, dtype=numpy.uint8)
        else:
            self.uas_id = numpy.array(kwargs.get('uas_id'), dtype=numpy.uint8)
            assert self.uas_id.shape == (18, )

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
        if self.icao_address != other.icao_address:
            return False
        if self.lat != other.lat:
            return False
        if self.lon != other.lon:
            return False
        if self.altitude_type != other.altitude_type:
            return False
        if self.altitude != other.altitude:
            return False
        if self.heading != other.heading:
            return False
        if self.hor_velocity != other.hor_velocity:
            return False
        if self.ver_velocity != other.ver_velocity:
            return False
        if all(self.callsign != other.callsign):
            return False
        if self.emitter_type != other.emitter_type:
            return False
        if self.tslc != other.tslc:
            return False
        if self.flags != other.flags:
            return False
        if self.squawk != other.squawk:
            return False
        if all(self.uas_id != other.uas_id):
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
    def icao_address(self):
        """Message field 'icao_address'."""
        return self._icao_address

    @icao_address.setter
    def icao_address(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'icao_address' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'icao_address' field must be an unsigned integer in [0, 4294967295]"
        self._icao_address = value

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
    def altitude_type(self):
        """Message field 'altitude_type'."""
        return self._altitude_type

    @altitude_type.setter
    def altitude_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'altitude_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'altitude_type' field must be an unsigned integer in [0, 255]"
        self._altitude_type = value

    @builtins.property
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'altitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._altitude = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading = value

    @builtins.property
    def hor_velocity(self):
        """Message field 'hor_velocity'."""
        return self._hor_velocity

    @hor_velocity.setter
    def hor_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hor_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hor_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hor_velocity = value

    @builtins.property
    def ver_velocity(self):
        """Message field 'ver_velocity'."""
        return self._ver_velocity

    @ver_velocity.setter
    def ver_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ver_velocity' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ver_velocity' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ver_velocity = value

    @builtins.property
    def callsign(self):
        """Message field 'callsign'."""
        return self._callsign

    @callsign.setter
    def callsign(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'callsign' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 9, \
                "The 'callsign' numpy.ndarray() must have a size of 9"
            self._callsign = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 9 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'callsign' field must be a set or sequence with length 9 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._callsign = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def emitter_type(self):
        """Message field 'emitter_type'."""
        return self._emitter_type

    @emitter_type.setter
    def emitter_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'emitter_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'emitter_type' field must be an unsigned integer in [0, 255]"
        self._emitter_type = value

    @builtins.property
    def tslc(self):
        """Message field 'tslc'."""
        return self._tslc

    @tslc.setter
    def tslc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'tslc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'tslc' field must be an unsigned integer in [0, 255]"
        self._tslc = value

    @builtins.property
    def flags(self):
        """Message field 'flags'."""
        return self._flags

    @flags.setter
    def flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flags' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'flags' field must be an unsigned integer in [0, 65535]"
        self._flags = value

    @builtins.property
    def squawk(self):
        """Message field 'squawk'."""
        return self._squawk

    @squawk.setter
    def squawk(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'squawk' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'squawk' field must be an unsigned integer in [0, 65535]"
        self._squawk = value

    @builtins.property
    def uas_id(self):
        """Message field 'uas_id'."""
        return self._uas_id

    @uas_id.setter
    def uas_id(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'uas_id' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 18, \
                "The 'uas_id' numpy.ndarray() must have a size of 18"
            self._uas_id = value
            return
        if __debug__:
            from collections.abc import Sequence
            from collections.abc import Set
            from collections import UserList
            from collections import UserString
            assert \
                ((isinstance(value, Sequence) or
                  isinstance(value, Set) or
                  isinstance(value, UserList)) and
                 not isinstance(value, str) and
                 not isinstance(value, UserString) and
                 len(value) == 18 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'uas_id' field must be a set or sequence with length 18 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._uas_id = numpy.array(value, dtype=numpy.uint8)
