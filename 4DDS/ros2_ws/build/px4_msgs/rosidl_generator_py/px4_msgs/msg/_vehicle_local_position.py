# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleLocalPosition.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'delta_xy'
# Member 'delta_vxy'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleLocalPosition(type):
    """Metaclass of message 'VehicleLocalPosition'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DIST_BOTTOM_SENSOR_NONE': 0,
        'DIST_BOTTOM_SENSOR_RANGE': 1,
        'DIST_BOTTOM_SENSOR_FLOW': 2,
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
                'px4_msgs.msg.VehicleLocalPosition')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_local_position
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_local_position
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_local_position
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_local_position
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_local_position

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DIST_BOTTOM_SENSOR_NONE': cls.__constants['DIST_BOTTOM_SENSOR_NONE'],
            'DIST_BOTTOM_SENSOR_RANGE': cls.__constants['DIST_BOTTOM_SENSOR_RANGE'],
            'DIST_BOTTOM_SENSOR_FLOW': cls.__constants['DIST_BOTTOM_SENSOR_FLOW'],
        }

    @property
    def DIST_BOTTOM_SENSOR_NONE(self):
        """Message constant 'DIST_BOTTOM_SENSOR_NONE'."""
        return Metaclass_VehicleLocalPosition.__constants['DIST_BOTTOM_SENSOR_NONE']

    @property
    def DIST_BOTTOM_SENSOR_RANGE(self):
        """Message constant 'DIST_BOTTOM_SENSOR_RANGE'."""
        return Metaclass_VehicleLocalPosition.__constants['DIST_BOTTOM_SENSOR_RANGE']

    @property
    def DIST_BOTTOM_SENSOR_FLOW(self):
        """Message constant 'DIST_BOTTOM_SENSOR_FLOW'."""
        return Metaclass_VehicleLocalPosition.__constants['DIST_BOTTOM_SENSOR_FLOW']


class VehicleLocalPosition(metaclass=Metaclass_VehicleLocalPosition):
    """
    Message class 'VehicleLocalPosition'.

    Constants:
      DIST_BOTTOM_SENSOR_NONE
      DIST_BOTTOM_SENSOR_RANGE
      DIST_BOTTOM_SENSOR_FLOW
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_xy_valid',
        '_z_valid',
        '_v_xy_valid',
        '_v_z_valid',
        '_x',
        '_y',
        '_z',
        '_delta_xy',
        '_xy_reset_counter',
        '_delta_z',
        '_z_reset_counter',
        '_vx',
        '_vy',
        '_vz',
        '_z_deriv',
        '_delta_vxy',
        '_vxy_reset_counter',
        '_delta_vz',
        '_vz_reset_counter',
        '_ax',
        '_ay',
        '_az',
        '_heading',
        '_heading_var',
        '_unaided_heading',
        '_delta_heading',
        '_heading_reset_counter',
        '_heading_good_for_control',
        '_tilt_var',
        '_xy_global',
        '_z_global',
        '_ref_timestamp',
        '_ref_lat',
        '_ref_lon',
        '_ref_alt',
        '_dist_bottom',
        '_dist_bottom_valid',
        '_dist_bottom_sensor_bitfield',
        '_eph',
        '_epv',
        '_evh',
        '_evv',
        '_dead_reckoning',
        '_vxy_max',
        '_vz_max',
        '_hagl_min',
        '_hagl_max',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'xy_valid': 'boolean',
        'z_valid': 'boolean',
        'v_xy_valid': 'boolean',
        'v_z_valid': 'boolean',
        'x': 'float',
        'y': 'float',
        'z': 'float',
        'delta_xy': 'float[2]',
        'xy_reset_counter': 'uint8',
        'delta_z': 'float',
        'z_reset_counter': 'uint8',
        'vx': 'float',
        'vy': 'float',
        'vz': 'float',
        'z_deriv': 'float',
        'delta_vxy': 'float[2]',
        'vxy_reset_counter': 'uint8',
        'delta_vz': 'float',
        'vz_reset_counter': 'uint8',
        'ax': 'float',
        'ay': 'float',
        'az': 'float',
        'heading': 'float',
        'heading_var': 'float',
        'unaided_heading': 'float',
        'delta_heading': 'float',
        'heading_reset_counter': 'uint8',
        'heading_good_for_control': 'boolean',
        'tilt_var': 'float',
        'xy_global': 'boolean',
        'z_global': 'boolean',
        'ref_timestamp': 'uint64',
        'ref_lat': 'double',
        'ref_lon': 'double',
        'ref_alt': 'float',
        'dist_bottom': 'float',
        'dist_bottom_valid': 'boolean',
        'dist_bottom_sensor_bitfield': 'uint8',
        'eph': 'float',
        'epv': 'float',
        'evh': 'float',
        'evv': 'float',
        'dead_reckoning': 'boolean',
        'vxy_max': 'float',
        'vz_max': 'float',
        'hagl_min': 'float',
        'hagl_max': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
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
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.xy_valid = kwargs.get('xy_valid', bool())
        self.z_valid = kwargs.get('z_valid', bool())
        self.v_xy_valid = kwargs.get('v_xy_valid', bool())
        self.v_z_valid = kwargs.get('v_z_valid', bool())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        if 'delta_xy' not in kwargs:
            self.delta_xy = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.delta_xy = numpy.array(kwargs.get('delta_xy'), dtype=numpy.float32)
            assert self.delta_xy.shape == (2, )
        self.xy_reset_counter = kwargs.get('xy_reset_counter', int())
        self.delta_z = kwargs.get('delta_z', float())
        self.z_reset_counter = kwargs.get('z_reset_counter', int())
        self.vx = kwargs.get('vx', float())
        self.vy = kwargs.get('vy', float())
        self.vz = kwargs.get('vz', float())
        self.z_deriv = kwargs.get('z_deriv', float())
        if 'delta_vxy' not in kwargs:
            self.delta_vxy = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.delta_vxy = numpy.array(kwargs.get('delta_vxy'), dtype=numpy.float32)
            assert self.delta_vxy.shape == (2, )
        self.vxy_reset_counter = kwargs.get('vxy_reset_counter', int())
        self.delta_vz = kwargs.get('delta_vz', float())
        self.vz_reset_counter = kwargs.get('vz_reset_counter', int())
        self.ax = kwargs.get('ax', float())
        self.ay = kwargs.get('ay', float())
        self.az = kwargs.get('az', float())
        self.heading = kwargs.get('heading', float())
        self.heading_var = kwargs.get('heading_var', float())
        self.unaided_heading = kwargs.get('unaided_heading', float())
        self.delta_heading = kwargs.get('delta_heading', float())
        self.heading_reset_counter = kwargs.get('heading_reset_counter', int())
        self.heading_good_for_control = kwargs.get('heading_good_for_control', bool())
        self.tilt_var = kwargs.get('tilt_var', float())
        self.xy_global = kwargs.get('xy_global', bool())
        self.z_global = kwargs.get('z_global', bool())
        self.ref_timestamp = kwargs.get('ref_timestamp', int())
        self.ref_lat = kwargs.get('ref_lat', float())
        self.ref_lon = kwargs.get('ref_lon', float())
        self.ref_alt = kwargs.get('ref_alt', float())
        self.dist_bottom = kwargs.get('dist_bottom', float())
        self.dist_bottom_valid = kwargs.get('dist_bottom_valid', bool())
        self.dist_bottom_sensor_bitfield = kwargs.get('dist_bottom_sensor_bitfield', int())
        self.eph = kwargs.get('eph', float())
        self.epv = kwargs.get('epv', float())
        self.evh = kwargs.get('evh', float())
        self.evv = kwargs.get('evv', float())
        self.dead_reckoning = kwargs.get('dead_reckoning', bool())
        self.vxy_max = kwargs.get('vxy_max', float())
        self.vz_max = kwargs.get('vz_max', float())
        self.hagl_min = kwargs.get('hagl_min', float())
        self.hagl_max = kwargs.get('hagl_max', float())

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
        if self.xy_valid != other.xy_valid:
            return False
        if self.z_valid != other.z_valid:
            return False
        if self.v_xy_valid != other.v_xy_valid:
            return False
        if self.v_z_valid != other.v_z_valid:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if all(self.delta_xy != other.delta_xy):
            return False
        if self.xy_reset_counter != other.xy_reset_counter:
            return False
        if self.delta_z != other.delta_z:
            return False
        if self.z_reset_counter != other.z_reset_counter:
            return False
        if self.vx != other.vx:
            return False
        if self.vy != other.vy:
            return False
        if self.vz != other.vz:
            return False
        if self.z_deriv != other.z_deriv:
            return False
        if all(self.delta_vxy != other.delta_vxy):
            return False
        if self.vxy_reset_counter != other.vxy_reset_counter:
            return False
        if self.delta_vz != other.delta_vz:
            return False
        if self.vz_reset_counter != other.vz_reset_counter:
            return False
        if self.ax != other.ax:
            return False
        if self.ay != other.ay:
            return False
        if self.az != other.az:
            return False
        if self.heading != other.heading:
            return False
        if self.heading_var != other.heading_var:
            return False
        if self.unaided_heading != other.unaided_heading:
            return False
        if self.delta_heading != other.delta_heading:
            return False
        if self.heading_reset_counter != other.heading_reset_counter:
            return False
        if self.heading_good_for_control != other.heading_good_for_control:
            return False
        if self.tilt_var != other.tilt_var:
            return False
        if self.xy_global != other.xy_global:
            return False
        if self.z_global != other.z_global:
            return False
        if self.ref_timestamp != other.ref_timestamp:
            return False
        if self.ref_lat != other.ref_lat:
            return False
        if self.ref_lon != other.ref_lon:
            return False
        if self.ref_alt != other.ref_alt:
            return False
        if self.dist_bottom != other.dist_bottom:
            return False
        if self.dist_bottom_valid != other.dist_bottom_valid:
            return False
        if self.dist_bottom_sensor_bitfield != other.dist_bottom_sensor_bitfield:
            return False
        if self.eph != other.eph:
            return False
        if self.epv != other.epv:
            return False
        if self.evh != other.evh:
            return False
        if self.evv != other.evv:
            return False
        if self.dead_reckoning != other.dead_reckoning:
            return False
        if self.vxy_max != other.vxy_max:
            return False
        if self.vz_max != other.vz_max:
            return False
        if self.hagl_min != other.hagl_min:
            return False
        if self.hagl_max != other.hagl_max:
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
    def xy_valid(self):
        """Message field 'xy_valid'."""
        return self._xy_valid

    @xy_valid.setter
    def xy_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'xy_valid' field must be of type 'bool'"
        self._xy_valid = value

    @builtins.property
    def z_valid(self):
        """Message field 'z_valid'."""
        return self._z_valid

    @z_valid.setter
    def z_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'z_valid' field must be of type 'bool'"
        self._z_valid = value

    @builtins.property
    def v_xy_valid(self):
        """Message field 'v_xy_valid'."""
        return self._v_xy_valid

    @v_xy_valid.setter
    def v_xy_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'v_xy_valid' field must be of type 'bool'"
        self._v_xy_valid = value

    @builtins.property
    def v_z_valid(self):
        """Message field 'v_z_valid'."""
        return self._v_z_valid

    @v_z_valid.setter
    def v_z_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'v_z_valid' field must be of type 'bool'"
        self._v_z_valid = value

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
    def delta_xy(self):
        """Message field 'delta_xy'."""
        return self._delta_xy

    @delta_xy.setter
    def delta_xy(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'delta_xy' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'delta_xy' numpy.ndarray() must have a size of 2"
            self._delta_xy = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'delta_xy' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._delta_xy = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def xy_reset_counter(self):
        """Message field 'xy_reset_counter'."""
        return self._xy_reset_counter

    @xy_reset_counter.setter
    def xy_reset_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'xy_reset_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'xy_reset_counter' field must be an unsigned integer in [0, 255]"
        self._xy_reset_counter = value

    @builtins.property
    def delta_z(self):
        """Message field 'delta_z'."""
        return self._delta_z

    @delta_z.setter
    def delta_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_z = value

    @builtins.property
    def z_reset_counter(self):
        """Message field 'z_reset_counter'."""
        return self._z_reset_counter

    @z_reset_counter.setter
    def z_reset_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'z_reset_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'z_reset_counter' field must be an unsigned integer in [0, 255]"
        self._z_reset_counter = value

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
    def z_deriv(self):
        """Message field 'z_deriv'."""
        return self._z_deriv

    @z_deriv.setter
    def z_deriv(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_deriv' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_deriv' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_deriv = value

    @builtins.property
    def delta_vxy(self):
        """Message field 'delta_vxy'."""
        return self._delta_vxy

    @delta_vxy.setter
    def delta_vxy(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'delta_vxy' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'delta_vxy' numpy.ndarray() must have a size of 2"
            self._delta_vxy = value
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
                 len(value) == 2 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'delta_vxy' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._delta_vxy = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def vxy_reset_counter(self):
        """Message field 'vxy_reset_counter'."""
        return self._vxy_reset_counter

    @vxy_reset_counter.setter
    def vxy_reset_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vxy_reset_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vxy_reset_counter' field must be an unsigned integer in [0, 255]"
        self._vxy_reset_counter = value

    @builtins.property
    def delta_vz(self):
        """Message field 'delta_vz'."""
        return self._delta_vz

    @delta_vz.setter
    def delta_vz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_vz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_vz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_vz = value

    @builtins.property
    def vz_reset_counter(self):
        """Message field 'vz_reset_counter'."""
        return self._vz_reset_counter

    @vz_reset_counter.setter
    def vz_reset_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'vz_reset_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'vz_reset_counter' field must be an unsigned integer in [0, 255]"
        self._vz_reset_counter = value

    @builtins.property
    def ax(self):
        """Message field 'ax'."""
        return self._ax

    @ax.setter
    def ax(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ax' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ax' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ax = value

    @builtins.property
    def ay(self):
        """Message field 'ay'."""
        return self._ay

    @ay.setter
    def ay(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ay' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ay' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ay = value

    @builtins.property
    def az(self):
        """Message field 'az'."""
        return self._az

    @az.setter
    def az(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'az' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'az' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._az = value

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
    def heading_var(self):
        """Message field 'heading_var'."""
        return self._heading_var

    @heading_var.setter
    def heading_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_var = value

    @builtins.property
    def unaided_heading(self):
        """Message field 'unaided_heading'."""
        return self._unaided_heading

    @unaided_heading.setter
    def unaided_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'unaided_heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'unaided_heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._unaided_heading = value

    @builtins.property
    def delta_heading(self):
        """Message field 'delta_heading'."""
        return self._delta_heading

    @delta_heading.setter
    def delta_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_heading = value

    @builtins.property
    def heading_reset_counter(self):
        """Message field 'heading_reset_counter'."""
        return self._heading_reset_counter

    @heading_reset_counter.setter
    def heading_reset_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'heading_reset_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'heading_reset_counter' field must be an unsigned integer in [0, 255]"
        self._heading_reset_counter = value

    @builtins.property
    def heading_good_for_control(self):
        """Message field 'heading_good_for_control'."""
        return self._heading_good_for_control

    @heading_good_for_control.setter
    def heading_good_for_control(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heading_good_for_control' field must be of type 'bool'"
        self._heading_good_for_control = value

    @builtins.property
    def tilt_var(self):
        """Message field 'tilt_var'."""
        return self._tilt_var

    @tilt_var.setter
    def tilt_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tilt_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tilt_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tilt_var = value

    @builtins.property
    def xy_global(self):
        """Message field 'xy_global'."""
        return self._xy_global

    @xy_global.setter
    def xy_global(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'xy_global' field must be of type 'bool'"
        self._xy_global = value

    @builtins.property
    def z_global(self):
        """Message field 'z_global'."""
        return self._z_global

    @z_global.setter
    def z_global(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'z_global' field must be of type 'bool'"
        self._z_global = value

    @builtins.property
    def ref_timestamp(self):
        """Message field 'ref_timestamp'."""
        return self._ref_timestamp

    @ref_timestamp.setter
    def ref_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ref_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'ref_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._ref_timestamp = value

    @builtins.property
    def ref_lat(self):
        """Message field 'ref_lat'."""
        return self._ref_lat

    @ref_lat.setter
    def ref_lat(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_lat' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ref_lat' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ref_lat = value

    @builtins.property
    def ref_lon(self):
        """Message field 'ref_lon'."""
        return self._ref_lon

    @ref_lon.setter
    def ref_lon(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_lon' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'ref_lon' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._ref_lon = value

    @builtins.property
    def ref_alt(self):
        """Message field 'ref_alt'."""
        return self._ref_alt

    @ref_alt.setter
    def ref_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'ref_alt' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'ref_alt' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._ref_alt = value

    @builtins.property
    def dist_bottom(self):
        """Message field 'dist_bottom'."""
        return self._dist_bottom

    @dist_bottom.setter
    def dist_bottom(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'dist_bottom' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'dist_bottom' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._dist_bottom = value

    @builtins.property
    def dist_bottom_valid(self):
        """Message field 'dist_bottom_valid'."""
        return self._dist_bottom_valid

    @dist_bottom_valid.setter
    def dist_bottom_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'dist_bottom_valid' field must be of type 'bool'"
        self._dist_bottom_valid = value

    @builtins.property
    def dist_bottom_sensor_bitfield(self):
        """Message field 'dist_bottom_sensor_bitfield'."""
        return self._dist_bottom_sensor_bitfield

    @dist_bottom_sensor_bitfield.setter
    def dist_bottom_sensor_bitfield(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'dist_bottom_sensor_bitfield' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'dist_bottom_sensor_bitfield' field must be an unsigned integer in [0, 255]"
        self._dist_bottom_sensor_bitfield = value

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
    def evh(self):
        """Message field 'evh'."""
        return self._evh

    @evh.setter
    def evh(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'evh' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'evh' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._evh = value

    @builtins.property
    def evv(self):
        """Message field 'evv'."""
        return self._evv

    @evv.setter
    def evv(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'evv' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'evv' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._evv = value

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

    @builtins.property
    def vxy_max(self):
        """Message field 'vxy_max'."""
        return self._vxy_max

    @vxy_max.setter
    def vxy_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vxy_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vxy_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vxy_max = value

    @builtins.property
    def vz_max(self):
        """Message field 'vz_max'."""
        return self._vz_max

    @vz_max.setter
    def vz_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vz_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vz_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vz_max = value

    @builtins.property
    def hagl_min(self):
        """Message field 'hagl_min'."""
        return self._hagl_min

    @hagl_min.setter
    def hagl_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hagl_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hagl_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hagl_min = value

    @builtins.property
    def hagl_max(self):
        """Message field 'hagl_max'."""
        return self._hagl_max

    @hagl_max.setter
    def hagl_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hagl_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hagl_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hagl_max = value
