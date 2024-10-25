# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleAirData.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleAirData(type):
    """Metaclass of message 'VehicleAirData'."""

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
                'px4_msgs.msg.VehicleAirData')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_air_data
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_air_data
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_air_data
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_air_data
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_air_data

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleAirData(metaclass=Metaclass_VehicleAirData):
    """Message class 'VehicleAirData'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_baro_device_id',
        '_baro_alt_meter',
        '_baro_temp_celcius',
        '_baro_pressure_pa',
        '_rho',
        '_eas2tas',
        '_calibration_count',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'baro_device_id': 'uint32',
        'baro_alt_meter': 'float',
        'baro_temp_celcius': 'float',
        'baro_pressure_pa': 'float',
        'rho': 'float',
        'eas2tas': 'float',
        'calibration_count': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.baro_device_id = kwargs.get('baro_device_id', int())
        self.baro_alt_meter = kwargs.get('baro_alt_meter', float())
        self.baro_temp_celcius = kwargs.get('baro_temp_celcius', float())
        self.baro_pressure_pa = kwargs.get('baro_pressure_pa', float())
        self.rho = kwargs.get('rho', float())
        self.eas2tas = kwargs.get('eas2tas', float())
        self.calibration_count = kwargs.get('calibration_count', int())

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
        if self.baro_device_id != other.baro_device_id:
            return False
        if self.baro_alt_meter != other.baro_alt_meter:
            return False
        if self.baro_temp_celcius != other.baro_temp_celcius:
            return False
        if self.baro_pressure_pa != other.baro_pressure_pa:
            return False
        if self.rho != other.rho:
            return False
        if self.eas2tas != other.eas2tas:
            return False
        if self.calibration_count != other.calibration_count:
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
    def baro_device_id(self):
        """Message field 'baro_device_id'."""
        return self._baro_device_id

    @baro_device_id.setter
    def baro_device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'baro_device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'baro_device_id' field must be an unsigned integer in [0, 4294967295]"
        self._baro_device_id = value

    @builtins.property
    def baro_alt_meter(self):
        """Message field 'baro_alt_meter'."""
        return self._baro_alt_meter

    @baro_alt_meter.setter
    def baro_alt_meter(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'baro_alt_meter' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'baro_alt_meter' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._baro_alt_meter = value

    @builtins.property
    def baro_temp_celcius(self):
        """Message field 'baro_temp_celcius'."""
        return self._baro_temp_celcius

    @baro_temp_celcius.setter
    def baro_temp_celcius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'baro_temp_celcius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'baro_temp_celcius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._baro_temp_celcius = value

    @builtins.property
    def baro_pressure_pa(self):
        """Message field 'baro_pressure_pa'."""
        return self._baro_pressure_pa

    @baro_pressure_pa.setter
    def baro_pressure_pa(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'baro_pressure_pa' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'baro_pressure_pa' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._baro_pressure_pa = value

    @builtins.property
    def rho(self):
        """Message field 'rho'."""
        return self._rho

    @rho.setter
    def rho(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rho' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rho' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rho = value

    @builtins.property
    def eas2tas(self):
        """Message field 'eas2tas'."""
        return self._eas2tas

    @eas2tas.setter
    def eas2tas(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'eas2tas' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'eas2tas' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._eas2tas = value

    @builtins.property
    def calibration_count(self):
        """Message field 'calibration_count'."""
        return self._calibration_count

    @calibration_count.setter
    def calibration_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'calibration_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'calibration_count' field must be an unsigned integer in [0, 255]"
        self._calibration_count = value
