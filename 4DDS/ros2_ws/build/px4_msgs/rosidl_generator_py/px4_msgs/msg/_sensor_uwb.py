# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SensorUwb.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorUwb(type):
    """Metaclass of message 'SensorUwb'."""

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
                'px4_msgs.msg.SensorUwb')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_uwb
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_uwb
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_uwb
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_uwb
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_uwb

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorUwb(metaclass=Metaclass_SensorUwb):
    """Message class 'SensorUwb'."""

    __slots__ = [
        '_timestamp',
        '_sessionid',
        '_time_offset',
        '_counter',
        '_mac',
        '_mac_dest',
        '_status',
        '_nlos',
        '_distance',
        '_aoa_azimuth_dev',
        '_aoa_elevation_dev',
        '_aoa_azimuth_resp',
        '_aoa_elevation_resp',
        '_aoa_azimuth_fom',
        '_aoa_elevation_fom',
        '_aoa_dest_azimuth_fom',
        '_aoa_dest_elevation_fom',
        '_orientation',
        '_offset_x',
        '_offset_y',
        '_offset_z',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'sessionid': 'uint32',
        'time_offset': 'uint32',
        'counter': 'uint32',
        'mac': 'uint16',
        'mac_dest': 'uint16',
        'status': 'uint16',
        'nlos': 'uint8',
        'distance': 'float',
        'aoa_azimuth_dev': 'float',
        'aoa_elevation_dev': 'float',
        'aoa_azimuth_resp': 'float',
        'aoa_elevation_resp': 'float',
        'aoa_azimuth_fom': 'uint8',
        'aoa_elevation_fom': 'uint8',
        'aoa_dest_azimuth_fom': 'uint8',
        'aoa_dest_elevation_fom': 'uint8',
        'orientation': 'uint8',
        'offset_x': 'float',
        'offset_y': 'float',
        'offset_z': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.sessionid = kwargs.get('sessionid', int())
        self.time_offset = kwargs.get('time_offset', int())
        self.counter = kwargs.get('counter', int())
        self.mac = kwargs.get('mac', int())
        self.mac_dest = kwargs.get('mac_dest', int())
        self.status = kwargs.get('status', int())
        self.nlos = kwargs.get('nlos', int())
        self.distance = kwargs.get('distance', float())
        self.aoa_azimuth_dev = kwargs.get('aoa_azimuth_dev', float())
        self.aoa_elevation_dev = kwargs.get('aoa_elevation_dev', float())
        self.aoa_azimuth_resp = kwargs.get('aoa_azimuth_resp', float())
        self.aoa_elevation_resp = kwargs.get('aoa_elevation_resp', float())
        self.aoa_azimuth_fom = kwargs.get('aoa_azimuth_fom', int())
        self.aoa_elevation_fom = kwargs.get('aoa_elevation_fom', int())
        self.aoa_dest_azimuth_fom = kwargs.get('aoa_dest_azimuth_fom', int())
        self.aoa_dest_elevation_fom = kwargs.get('aoa_dest_elevation_fom', int())
        self.orientation = kwargs.get('orientation', int())
        self.offset_x = kwargs.get('offset_x', float())
        self.offset_y = kwargs.get('offset_y', float())
        self.offset_z = kwargs.get('offset_z', float())

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
        if self.sessionid != other.sessionid:
            return False
        if self.time_offset != other.time_offset:
            return False
        if self.counter != other.counter:
            return False
        if self.mac != other.mac:
            return False
        if self.mac_dest != other.mac_dest:
            return False
        if self.status != other.status:
            return False
        if self.nlos != other.nlos:
            return False
        if self.distance != other.distance:
            return False
        if self.aoa_azimuth_dev != other.aoa_azimuth_dev:
            return False
        if self.aoa_elevation_dev != other.aoa_elevation_dev:
            return False
        if self.aoa_azimuth_resp != other.aoa_azimuth_resp:
            return False
        if self.aoa_elevation_resp != other.aoa_elevation_resp:
            return False
        if self.aoa_azimuth_fom != other.aoa_azimuth_fom:
            return False
        if self.aoa_elevation_fom != other.aoa_elevation_fom:
            return False
        if self.aoa_dest_azimuth_fom != other.aoa_dest_azimuth_fom:
            return False
        if self.aoa_dest_elevation_fom != other.aoa_dest_elevation_fom:
            return False
        if self.orientation != other.orientation:
            return False
        if self.offset_x != other.offset_x:
            return False
        if self.offset_y != other.offset_y:
            return False
        if self.offset_z != other.offset_z:
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
    def sessionid(self):
        """Message field 'sessionid'."""
        return self._sessionid

    @sessionid.setter
    def sessionid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sessionid' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sessionid' field must be an unsigned integer in [0, 4294967295]"
        self._sessionid = value

    @builtins.property
    def time_offset(self):
        """Message field 'time_offset'."""
        return self._time_offset

    @time_offset.setter
    def time_offset(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_offset' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_offset' field must be an unsigned integer in [0, 4294967295]"
        self._time_offset = value

    @builtins.property
    def counter(self):
        """Message field 'counter'."""
        return self._counter

    @counter.setter
    def counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'counter' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'counter' field must be an unsigned integer in [0, 4294967295]"
        self._counter = value

    @builtins.property
    def mac(self):
        """Message field 'mac'."""
        return self._mac

    @mac.setter
    def mac(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mac' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'mac' field must be an unsigned integer in [0, 65535]"
        self._mac = value

    @builtins.property
    def mac_dest(self):
        """Message field 'mac_dest'."""
        return self._mac_dest

    @mac_dest.setter
    def mac_dest(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mac_dest' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'mac_dest' field must be an unsigned integer in [0, 65535]"
        self._mac_dest = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'status' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'status' field must be an unsigned integer in [0, 65535]"
        self._status = value

    @builtins.property
    def nlos(self):
        """Message field 'nlos'."""
        return self._nlos

    @nlos.setter
    def nlos(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nlos' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'nlos' field must be an unsigned integer in [0, 255]"
        self._nlos = value

    @builtins.property
    def distance(self):
        """Message field 'distance'."""
        return self._distance

    @distance.setter
    def distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance = value

    @builtins.property
    def aoa_azimuth_dev(self):
        """Message field 'aoa_azimuth_dev'."""
        return self._aoa_azimuth_dev

    @aoa_azimuth_dev.setter
    def aoa_azimuth_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aoa_azimuth_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'aoa_azimuth_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._aoa_azimuth_dev = value

    @builtins.property
    def aoa_elevation_dev(self):
        """Message field 'aoa_elevation_dev'."""
        return self._aoa_elevation_dev

    @aoa_elevation_dev.setter
    def aoa_elevation_dev(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aoa_elevation_dev' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'aoa_elevation_dev' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._aoa_elevation_dev = value

    @builtins.property
    def aoa_azimuth_resp(self):
        """Message field 'aoa_azimuth_resp'."""
        return self._aoa_azimuth_resp

    @aoa_azimuth_resp.setter
    def aoa_azimuth_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aoa_azimuth_resp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'aoa_azimuth_resp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._aoa_azimuth_resp = value

    @builtins.property
    def aoa_elevation_resp(self):
        """Message field 'aoa_elevation_resp'."""
        return self._aoa_elevation_resp

    @aoa_elevation_resp.setter
    def aoa_elevation_resp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'aoa_elevation_resp' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'aoa_elevation_resp' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._aoa_elevation_resp = value

    @builtins.property
    def aoa_azimuth_fom(self):
        """Message field 'aoa_azimuth_fom'."""
        return self._aoa_azimuth_fom

    @aoa_azimuth_fom.setter
    def aoa_azimuth_fom(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aoa_azimuth_fom' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aoa_azimuth_fom' field must be an unsigned integer in [0, 255]"
        self._aoa_azimuth_fom = value

    @builtins.property
    def aoa_elevation_fom(self):
        """Message field 'aoa_elevation_fom'."""
        return self._aoa_elevation_fom

    @aoa_elevation_fom.setter
    def aoa_elevation_fom(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aoa_elevation_fom' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aoa_elevation_fom' field must be an unsigned integer in [0, 255]"
        self._aoa_elevation_fom = value

    @builtins.property
    def aoa_dest_azimuth_fom(self):
        """Message field 'aoa_dest_azimuth_fom'."""
        return self._aoa_dest_azimuth_fom

    @aoa_dest_azimuth_fom.setter
    def aoa_dest_azimuth_fom(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aoa_dest_azimuth_fom' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aoa_dest_azimuth_fom' field must be an unsigned integer in [0, 255]"
        self._aoa_dest_azimuth_fom = value

    @builtins.property
    def aoa_dest_elevation_fom(self):
        """Message field 'aoa_dest_elevation_fom'."""
        return self._aoa_dest_elevation_fom

    @aoa_dest_elevation_fom.setter
    def aoa_dest_elevation_fom(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'aoa_dest_elevation_fom' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'aoa_dest_elevation_fom' field must be an unsigned integer in [0, 255]"
        self._aoa_dest_elevation_fom = value

    @builtins.property
    def orientation(self):
        """Message field 'orientation'."""
        return self._orientation

    @orientation.setter
    def orientation(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'orientation' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'orientation' field must be an unsigned integer in [0, 255]"
        self._orientation = value

    @builtins.property
    def offset_x(self):
        """Message field 'offset_x'."""
        return self._offset_x

    @offset_x.setter
    def offset_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'offset_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._offset_x = value

    @builtins.property
    def offset_y(self):
        """Message field 'offset_y'."""
        return self._offset_y

    @offset_y.setter
    def offset_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'offset_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._offset_y = value

    @builtins.property
    def offset_z(self):
        """Message field 'offset_z'."""
        return self._offset_z

    @offset_z.setter
    def offset_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'offset_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'offset_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._offset_z = value
