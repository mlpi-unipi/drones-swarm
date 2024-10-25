# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SensorGps.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorGps(type):
    """Metaclass of message 'SensorGps'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'JAMMING_STATE_UNKNOWN': 0,
        'JAMMING_STATE_OK': 1,
        'JAMMING_STATE_WARNING': 2,
        'JAMMING_STATE_CRITICAL': 3,
        'SPOOFING_STATE_UNKNOWN': 0,
        'SPOOFING_STATE_NONE': 1,
        'SPOOFING_STATE_INDICATED': 2,
        'SPOOFING_STATE_MULTIPLE': 3,
        'RTCM_MSG_USED_UNKNOWN': 0,
        'RTCM_MSG_USED_NOT_USED': 1,
        'RTCM_MSG_USED_USED': 2,
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
                'px4_msgs.msg.SensorGps')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_gps
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_gps
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_gps
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_gps
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_gps

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'JAMMING_STATE_UNKNOWN': cls.__constants['JAMMING_STATE_UNKNOWN'],
            'JAMMING_STATE_OK': cls.__constants['JAMMING_STATE_OK'],
            'JAMMING_STATE_WARNING': cls.__constants['JAMMING_STATE_WARNING'],
            'JAMMING_STATE_CRITICAL': cls.__constants['JAMMING_STATE_CRITICAL'],
            'SPOOFING_STATE_UNKNOWN': cls.__constants['SPOOFING_STATE_UNKNOWN'],
            'SPOOFING_STATE_NONE': cls.__constants['SPOOFING_STATE_NONE'],
            'SPOOFING_STATE_INDICATED': cls.__constants['SPOOFING_STATE_INDICATED'],
            'SPOOFING_STATE_MULTIPLE': cls.__constants['SPOOFING_STATE_MULTIPLE'],
            'RTCM_MSG_USED_UNKNOWN': cls.__constants['RTCM_MSG_USED_UNKNOWN'],
            'RTCM_MSG_USED_NOT_USED': cls.__constants['RTCM_MSG_USED_NOT_USED'],
            'RTCM_MSG_USED_USED': cls.__constants['RTCM_MSG_USED_USED'],
        }

    @property
    def JAMMING_STATE_UNKNOWN(self):
        """Message constant 'JAMMING_STATE_UNKNOWN'."""
        return Metaclass_SensorGps.__constants['JAMMING_STATE_UNKNOWN']

    @property
    def JAMMING_STATE_OK(self):
        """Message constant 'JAMMING_STATE_OK'."""
        return Metaclass_SensorGps.__constants['JAMMING_STATE_OK']

    @property
    def JAMMING_STATE_WARNING(self):
        """Message constant 'JAMMING_STATE_WARNING'."""
        return Metaclass_SensorGps.__constants['JAMMING_STATE_WARNING']

    @property
    def JAMMING_STATE_CRITICAL(self):
        """Message constant 'JAMMING_STATE_CRITICAL'."""
        return Metaclass_SensorGps.__constants['JAMMING_STATE_CRITICAL']

    @property
    def SPOOFING_STATE_UNKNOWN(self):
        """Message constant 'SPOOFING_STATE_UNKNOWN'."""
        return Metaclass_SensorGps.__constants['SPOOFING_STATE_UNKNOWN']

    @property
    def SPOOFING_STATE_NONE(self):
        """Message constant 'SPOOFING_STATE_NONE'."""
        return Metaclass_SensorGps.__constants['SPOOFING_STATE_NONE']

    @property
    def SPOOFING_STATE_INDICATED(self):
        """Message constant 'SPOOFING_STATE_INDICATED'."""
        return Metaclass_SensorGps.__constants['SPOOFING_STATE_INDICATED']

    @property
    def SPOOFING_STATE_MULTIPLE(self):
        """Message constant 'SPOOFING_STATE_MULTIPLE'."""
        return Metaclass_SensorGps.__constants['SPOOFING_STATE_MULTIPLE']

    @property
    def RTCM_MSG_USED_UNKNOWN(self):
        """Message constant 'RTCM_MSG_USED_UNKNOWN'."""
        return Metaclass_SensorGps.__constants['RTCM_MSG_USED_UNKNOWN']

    @property
    def RTCM_MSG_USED_NOT_USED(self):
        """Message constant 'RTCM_MSG_USED_NOT_USED'."""
        return Metaclass_SensorGps.__constants['RTCM_MSG_USED_NOT_USED']

    @property
    def RTCM_MSG_USED_USED(self):
        """Message constant 'RTCM_MSG_USED_USED'."""
        return Metaclass_SensorGps.__constants['RTCM_MSG_USED_USED']


class SensorGps(metaclass=Metaclass_SensorGps):
    """
    Message class 'SensorGps'.

    Constants:
      JAMMING_STATE_UNKNOWN
      JAMMING_STATE_OK
      JAMMING_STATE_WARNING
      JAMMING_STATE_CRITICAL
      SPOOFING_STATE_UNKNOWN
      SPOOFING_STATE_NONE
      SPOOFING_STATE_INDICATED
      SPOOFING_STATE_MULTIPLE
      RTCM_MSG_USED_UNKNOWN
      RTCM_MSG_USED_NOT_USED
      RTCM_MSG_USED_USED
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_device_id',
        '_latitude_deg',
        '_longitude_deg',
        '_altitude_msl_m',
        '_altitude_ellipsoid_m',
        '_s_variance_m_s',
        '_c_variance_rad',
        '_fix_type',
        '_eph',
        '_epv',
        '_hdop',
        '_vdop',
        '_noise_per_ms',
        '_automatic_gain_control',
        '_jamming_state',
        '_jamming_indicator',
        '_spoofing_state',
        '_vel_m_s',
        '_vel_n_m_s',
        '_vel_e_m_s',
        '_vel_d_m_s',
        '_cog_rad',
        '_vel_ned_valid',
        '_timestamp_time_relative',
        '_time_utc_usec',
        '_satellites_used',
        '_heading',
        '_heading_offset',
        '_heading_accuracy',
        '_rtcm_injection_rate',
        '_selected_rtcm_instance',
        '_rtcm_crc_failed',
        '_rtcm_msg_used',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'device_id': 'uint32',
        'latitude_deg': 'double',
        'longitude_deg': 'double',
        'altitude_msl_m': 'double',
        'altitude_ellipsoid_m': 'double',
        's_variance_m_s': 'float',
        'c_variance_rad': 'float',
        'fix_type': 'uint8',
        'eph': 'float',
        'epv': 'float',
        'hdop': 'float',
        'vdop': 'float',
        'noise_per_ms': 'int32',
        'automatic_gain_control': 'uint16',
        'jamming_state': 'uint8',
        'jamming_indicator': 'int32',
        'spoofing_state': 'uint8',
        'vel_m_s': 'float',
        'vel_n_m_s': 'float',
        'vel_e_m_s': 'float',
        'vel_d_m_s': 'float',
        'cog_rad': 'float',
        'vel_ned_valid': 'boolean',
        'timestamp_time_relative': 'int32',
        'time_utc_usec': 'uint64',
        'satellites_used': 'uint8',
        'heading': 'float',
        'heading_offset': 'float',
        'heading_accuracy': 'float',
        'rtcm_injection_rate': 'float',
        'selected_rtcm_instance': 'uint8',
        'rtcm_crc_failed': 'boolean',
        'rtcm_msg_used': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.device_id = kwargs.get('device_id', int())
        self.latitude_deg = kwargs.get('latitude_deg', float())
        self.longitude_deg = kwargs.get('longitude_deg', float())
        self.altitude_msl_m = kwargs.get('altitude_msl_m', float())
        self.altitude_ellipsoid_m = kwargs.get('altitude_ellipsoid_m', float())
        self.s_variance_m_s = kwargs.get('s_variance_m_s', float())
        self.c_variance_rad = kwargs.get('c_variance_rad', float())
        self.fix_type = kwargs.get('fix_type', int())
        self.eph = kwargs.get('eph', float())
        self.epv = kwargs.get('epv', float())
        self.hdop = kwargs.get('hdop', float())
        self.vdop = kwargs.get('vdop', float())
        self.noise_per_ms = kwargs.get('noise_per_ms', int())
        self.automatic_gain_control = kwargs.get('automatic_gain_control', int())
        self.jamming_state = kwargs.get('jamming_state', int())
        self.jamming_indicator = kwargs.get('jamming_indicator', int())
        self.spoofing_state = kwargs.get('spoofing_state', int())
        self.vel_m_s = kwargs.get('vel_m_s', float())
        self.vel_n_m_s = kwargs.get('vel_n_m_s', float())
        self.vel_e_m_s = kwargs.get('vel_e_m_s', float())
        self.vel_d_m_s = kwargs.get('vel_d_m_s', float())
        self.cog_rad = kwargs.get('cog_rad', float())
        self.vel_ned_valid = kwargs.get('vel_ned_valid', bool())
        self.timestamp_time_relative = kwargs.get('timestamp_time_relative', int())
        self.time_utc_usec = kwargs.get('time_utc_usec', int())
        self.satellites_used = kwargs.get('satellites_used', int())
        self.heading = kwargs.get('heading', float())
        self.heading_offset = kwargs.get('heading_offset', float())
        self.heading_accuracy = kwargs.get('heading_accuracy', float())
        self.rtcm_injection_rate = kwargs.get('rtcm_injection_rate', float())
        self.selected_rtcm_instance = kwargs.get('selected_rtcm_instance', int())
        self.rtcm_crc_failed = kwargs.get('rtcm_crc_failed', bool())
        self.rtcm_msg_used = kwargs.get('rtcm_msg_used', int())

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
        if self.device_id != other.device_id:
            return False
        if self.latitude_deg != other.latitude_deg:
            return False
        if self.longitude_deg != other.longitude_deg:
            return False
        if self.altitude_msl_m != other.altitude_msl_m:
            return False
        if self.altitude_ellipsoid_m != other.altitude_ellipsoid_m:
            return False
        if self.s_variance_m_s != other.s_variance_m_s:
            return False
        if self.c_variance_rad != other.c_variance_rad:
            return False
        if self.fix_type != other.fix_type:
            return False
        if self.eph != other.eph:
            return False
        if self.epv != other.epv:
            return False
        if self.hdop != other.hdop:
            return False
        if self.vdop != other.vdop:
            return False
        if self.noise_per_ms != other.noise_per_ms:
            return False
        if self.automatic_gain_control != other.automatic_gain_control:
            return False
        if self.jamming_state != other.jamming_state:
            return False
        if self.jamming_indicator != other.jamming_indicator:
            return False
        if self.spoofing_state != other.spoofing_state:
            return False
        if self.vel_m_s != other.vel_m_s:
            return False
        if self.vel_n_m_s != other.vel_n_m_s:
            return False
        if self.vel_e_m_s != other.vel_e_m_s:
            return False
        if self.vel_d_m_s != other.vel_d_m_s:
            return False
        if self.cog_rad != other.cog_rad:
            return False
        if self.vel_ned_valid != other.vel_ned_valid:
            return False
        if self.timestamp_time_relative != other.timestamp_time_relative:
            return False
        if self.time_utc_usec != other.time_utc_usec:
            return False
        if self.satellites_used != other.satellites_used:
            return False
        if self.heading != other.heading:
            return False
        if self.heading_offset != other.heading_offset:
            return False
        if self.heading_accuracy != other.heading_accuracy:
            return False
        if self.rtcm_injection_rate != other.rtcm_injection_rate:
            return False
        if self.selected_rtcm_instance != other.selected_rtcm_instance:
            return False
        if self.rtcm_crc_failed != other.rtcm_crc_failed:
            return False
        if self.rtcm_msg_used != other.rtcm_msg_used:
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
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'device_id' field must be an unsigned integer in [0, 4294967295]"
        self._device_id = value

    @builtins.property
    def latitude_deg(self):
        """Message field 'latitude_deg'."""
        return self._latitude_deg

    @latitude_deg.setter
    def latitude_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'latitude_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._latitude_deg = value

    @builtins.property
    def longitude_deg(self):
        """Message field 'longitude_deg'."""
        return self._longitude_deg

    @longitude_deg.setter
    def longitude_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude_deg' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'longitude_deg' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._longitude_deg = value

    @builtins.property
    def altitude_msl_m(self):
        """Message field 'altitude_msl_m'."""
        return self._altitude_msl_m

    @altitude_msl_m.setter
    def altitude_msl_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude_msl_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude_msl_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude_msl_m = value

    @builtins.property
    def altitude_ellipsoid_m(self):
        """Message field 'altitude_ellipsoid_m'."""
        return self._altitude_ellipsoid_m

    @altitude_ellipsoid_m.setter
    def altitude_ellipsoid_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude_ellipsoid_m' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'altitude_ellipsoid_m' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._altitude_ellipsoid_m = value

    @builtins.property
    def s_variance_m_s(self):
        """Message field 's_variance_m_s'."""
        return self._s_variance_m_s

    @s_variance_m_s.setter
    def s_variance_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_variance_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's_variance_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s_variance_m_s = value

    @builtins.property
    def c_variance_rad(self):
        """Message field 'c_variance_rad'."""
        return self._c_variance_rad

    @c_variance_rad.setter
    def c_variance_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'c_variance_rad' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'c_variance_rad' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._c_variance_rad = value

    @builtins.property
    def fix_type(self):
        """Message field 'fix_type'."""
        return self._fix_type

    @fix_type.setter
    def fix_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fix_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fix_type' field must be an unsigned integer in [0, 255]"
        self._fix_type = value

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
    def hdop(self):
        """Message field 'hdop'."""
        return self._hdop

    @hdop.setter
    def hdop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hdop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hdop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hdop = value

    @builtins.property
    def vdop(self):
        """Message field 'vdop'."""
        return self._vdop

    @vdop.setter
    def vdop(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vdop' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vdop' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vdop = value

    @builtins.property
    def noise_per_ms(self):
        """Message field 'noise_per_ms'."""
        return self._noise_per_ms

    @noise_per_ms.setter
    def noise_per_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'noise_per_ms' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'noise_per_ms' field must be an integer in [-2147483648, 2147483647]"
        self._noise_per_ms = value

    @builtins.property
    def automatic_gain_control(self):
        """Message field 'automatic_gain_control'."""
        return self._automatic_gain_control

    @automatic_gain_control.setter
    def automatic_gain_control(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'automatic_gain_control' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'automatic_gain_control' field must be an unsigned integer in [0, 65535]"
        self._automatic_gain_control = value

    @builtins.property
    def jamming_state(self):
        """Message field 'jamming_state'."""
        return self._jamming_state

    @jamming_state.setter
    def jamming_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'jamming_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'jamming_state' field must be an unsigned integer in [0, 255]"
        self._jamming_state = value

    @builtins.property
    def jamming_indicator(self):
        """Message field 'jamming_indicator'."""
        return self._jamming_indicator

    @jamming_indicator.setter
    def jamming_indicator(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'jamming_indicator' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'jamming_indicator' field must be an integer in [-2147483648, 2147483647]"
        self._jamming_indicator = value

    @builtins.property
    def spoofing_state(self):
        """Message field 'spoofing_state'."""
        return self._spoofing_state

    @spoofing_state.setter
    def spoofing_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'spoofing_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'spoofing_state' field must be an unsigned integer in [0, 255]"
        self._spoofing_state = value

    @builtins.property
    def vel_m_s(self):
        """Message field 'vel_m_s'."""
        return self._vel_m_s

    @vel_m_s.setter
    def vel_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel_m_s = value

    @builtins.property
    def vel_n_m_s(self):
        """Message field 'vel_n_m_s'."""
        return self._vel_n_m_s

    @vel_n_m_s.setter
    def vel_n_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_n_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel_n_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel_n_m_s = value

    @builtins.property
    def vel_e_m_s(self):
        """Message field 'vel_e_m_s'."""
        return self._vel_e_m_s

    @vel_e_m_s.setter
    def vel_e_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_e_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel_e_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel_e_m_s = value

    @builtins.property
    def vel_d_m_s(self):
        """Message field 'vel_d_m_s'."""
        return self._vel_d_m_s

    @vel_d_m_s.setter
    def vel_d_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_d_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel_d_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel_d_m_s = value

    @builtins.property
    def cog_rad(self):
        """Message field 'cog_rad'."""
        return self._cog_rad

    @cog_rad.setter
    def cog_rad(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cog_rad' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cog_rad' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cog_rad = value

    @builtins.property
    def vel_ned_valid(self):
        """Message field 'vel_ned_valid'."""
        return self._vel_ned_valid

    @vel_ned_valid.setter
    def vel_ned_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vel_ned_valid' field must be of type 'bool'"
        self._vel_ned_valid = value

    @builtins.property
    def timestamp_time_relative(self):
        """Message field 'timestamp_time_relative'."""
        return self._timestamp_time_relative

    @timestamp_time_relative.setter
    def timestamp_time_relative(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_time_relative' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'timestamp_time_relative' field must be an integer in [-2147483648, 2147483647]"
        self._timestamp_time_relative = value

    @builtins.property
    def time_utc_usec(self):
        """Message field 'time_utc_usec'."""
        return self._time_utc_usec

    @time_utc_usec.setter
    def time_utc_usec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_utc_usec' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'time_utc_usec' field must be an unsigned integer in [0, 18446744073709551615]"
        self._time_utc_usec = value

    @builtins.property
    def satellites_used(self):
        """Message field 'satellites_used'."""
        return self._satellites_used

    @satellites_used.setter
    def satellites_used(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'satellites_used' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'satellites_used' field must be an unsigned integer in [0, 255]"
        self._satellites_used = value

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
    def heading_offset(self):
        """Message field 'heading_offset'."""
        return self._heading_offset

    @heading_offset.setter
    def heading_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_offset' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_offset' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_offset = value

    @builtins.property
    def heading_accuracy(self):
        """Message field 'heading_accuracy'."""
        return self._heading_accuracy

    @heading_accuracy.setter
    def heading_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_accuracy = value

    @builtins.property
    def rtcm_injection_rate(self):
        """Message field 'rtcm_injection_rate'."""
        return self._rtcm_injection_rate

    @rtcm_injection_rate.setter
    def rtcm_injection_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rtcm_injection_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rtcm_injection_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rtcm_injection_rate = value

    @builtins.property
    def selected_rtcm_instance(self):
        """Message field 'selected_rtcm_instance'."""
        return self._selected_rtcm_instance

    @selected_rtcm_instance.setter
    def selected_rtcm_instance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'selected_rtcm_instance' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'selected_rtcm_instance' field must be an unsigned integer in [0, 255]"
        self._selected_rtcm_instance = value

    @builtins.property
    def rtcm_crc_failed(self):
        """Message field 'rtcm_crc_failed'."""
        return self._rtcm_crc_failed

    @rtcm_crc_failed.setter
    def rtcm_crc_failed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rtcm_crc_failed' field must be of type 'bool'"
        self._rtcm_crc_failed = value

    @builtins.property
    def rtcm_msg_used(self):
        """Message field 'rtcm_msg_used'."""
        return self._rtcm_msg_used

    @rtcm_msg_used.setter
    def rtcm_msg_used(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rtcm_msg_used' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rtcm_msg_used' field must be an unsigned integer in [0, 255]"
        self._rtcm_msg_used = value
