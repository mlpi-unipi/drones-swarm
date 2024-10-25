# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleImu.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'delta_angle'
# Member 'delta_velocity'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleImu(type):
    """Metaclass of message 'VehicleImu'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'CLIPPING_X': 1,
        'CLIPPING_Y': 2,
        'CLIPPING_Z': 4,
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
                'px4_msgs.msg.VehicleImu')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_imu
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_imu
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_imu
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_imu
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_imu

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'CLIPPING_X': cls.__constants['CLIPPING_X'],
            'CLIPPING_Y': cls.__constants['CLIPPING_Y'],
            'CLIPPING_Z': cls.__constants['CLIPPING_Z'],
        }

    @property
    def CLIPPING_X(self):
        """Message constant 'CLIPPING_X'."""
        return Metaclass_VehicleImu.__constants['CLIPPING_X']

    @property
    def CLIPPING_Y(self):
        """Message constant 'CLIPPING_Y'."""
        return Metaclass_VehicleImu.__constants['CLIPPING_Y']

    @property
    def CLIPPING_Z(self):
        """Message constant 'CLIPPING_Z'."""
        return Metaclass_VehicleImu.__constants['CLIPPING_Z']


class VehicleImu(metaclass=Metaclass_VehicleImu):
    """
    Message class 'VehicleImu'.

    Constants:
      CLIPPING_X
      CLIPPING_Y
      CLIPPING_Z
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_accel_device_id',
        '_gyro_device_id',
        '_delta_angle',
        '_delta_velocity',
        '_delta_angle_dt',
        '_delta_velocity_dt',
        '_delta_angle_clipping',
        '_delta_velocity_clipping',
        '_accel_calibration_count',
        '_gyro_calibration_count',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'accel_device_id': 'uint32',
        'gyro_device_id': 'uint32',
        'delta_angle': 'float[3]',
        'delta_velocity': 'float[3]',
        'delta_angle_dt': 'uint16',
        'delta_velocity_dt': 'uint16',
        'delta_angle_clipping': 'uint8',
        'delta_velocity_clipping': 'uint8',
        'accel_calibration_count': 'uint8',
        'gyro_calibration_count': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.accel_device_id = kwargs.get('accel_device_id', int())
        self.gyro_device_id = kwargs.get('gyro_device_id', int())
        if 'delta_angle' not in kwargs:
            self.delta_angle = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.delta_angle = numpy.array(kwargs.get('delta_angle'), dtype=numpy.float32)
            assert self.delta_angle.shape == (3, )
        if 'delta_velocity' not in kwargs:
            self.delta_velocity = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.delta_velocity = numpy.array(kwargs.get('delta_velocity'), dtype=numpy.float32)
            assert self.delta_velocity.shape == (3, )
        self.delta_angle_dt = kwargs.get('delta_angle_dt', int())
        self.delta_velocity_dt = kwargs.get('delta_velocity_dt', int())
        self.delta_angle_clipping = kwargs.get('delta_angle_clipping', int())
        self.delta_velocity_clipping = kwargs.get('delta_velocity_clipping', int())
        self.accel_calibration_count = kwargs.get('accel_calibration_count', int())
        self.gyro_calibration_count = kwargs.get('gyro_calibration_count', int())

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
        if self.accel_device_id != other.accel_device_id:
            return False
        if self.gyro_device_id != other.gyro_device_id:
            return False
        if all(self.delta_angle != other.delta_angle):
            return False
        if all(self.delta_velocity != other.delta_velocity):
            return False
        if self.delta_angle_dt != other.delta_angle_dt:
            return False
        if self.delta_velocity_dt != other.delta_velocity_dt:
            return False
        if self.delta_angle_clipping != other.delta_angle_clipping:
            return False
        if self.delta_velocity_clipping != other.delta_velocity_clipping:
            return False
        if self.accel_calibration_count != other.accel_calibration_count:
            return False
        if self.gyro_calibration_count != other.gyro_calibration_count:
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
    def accel_device_id(self):
        """Message field 'accel_device_id'."""
        return self._accel_device_id

    @accel_device_id.setter
    def accel_device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accel_device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'accel_device_id' field must be an unsigned integer in [0, 4294967295]"
        self._accel_device_id = value

    @builtins.property
    def gyro_device_id(self):
        """Message field 'gyro_device_id'."""
        return self._gyro_device_id

    @gyro_device_id.setter
    def gyro_device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gyro_device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gyro_device_id' field must be an unsigned integer in [0, 4294967295]"
        self._gyro_device_id = value

    @builtins.property
    def delta_angle(self):
        """Message field 'delta_angle'."""
        return self._delta_angle

    @delta_angle.setter
    def delta_angle(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'delta_angle' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'delta_angle' numpy.ndarray() must have a size of 3"
            self._delta_angle = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'delta_angle' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._delta_angle = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def delta_velocity(self):
        """Message field 'delta_velocity'."""
        return self._delta_velocity

    @delta_velocity.setter
    def delta_velocity(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'delta_velocity' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'delta_velocity' numpy.ndarray() must have a size of 3"
            self._delta_velocity = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'delta_velocity' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._delta_velocity = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def delta_angle_dt(self):
        """Message field 'delta_angle_dt'."""
        return self._delta_angle_dt

    @delta_angle_dt.setter
    def delta_angle_dt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delta_angle_dt' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'delta_angle_dt' field must be an unsigned integer in [0, 65535]"
        self._delta_angle_dt = value

    @builtins.property
    def delta_velocity_dt(self):
        """Message field 'delta_velocity_dt'."""
        return self._delta_velocity_dt

    @delta_velocity_dt.setter
    def delta_velocity_dt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delta_velocity_dt' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'delta_velocity_dt' field must be an unsigned integer in [0, 65535]"
        self._delta_velocity_dt = value

    @builtins.property
    def delta_angle_clipping(self):
        """Message field 'delta_angle_clipping'."""
        return self._delta_angle_clipping

    @delta_angle_clipping.setter
    def delta_angle_clipping(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delta_angle_clipping' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'delta_angle_clipping' field must be an unsigned integer in [0, 255]"
        self._delta_angle_clipping = value

    @builtins.property
    def delta_velocity_clipping(self):
        """Message field 'delta_velocity_clipping'."""
        return self._delta_velocity_clipping

    @delta_velocity_clipping.setter
    def delta_velocity_clipping(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'delta_velocity_clipping' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'delta_velocity_clipping' field must be an unsigned integer in [0, 255]"
        self._delta_velocity_clipping = value

    @builtins.property
    def accel_calibration_count(self):
        """Message field 'accel_calibration_count'."""
        return self._accel_calibration_count

    @accel_calibration_count.setter
    def accel_calibration_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accel_calibration_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'accel_calibration_count' field must be an unsigned integer in [0, 255]"
        self._accel_calibration_count = value

    @builtins.property
    def gyro_calibration_count(self):
        """Message field 'gyro_calibration_count'."""
        return self._gyro_calibration_count

    @gyro_calibration_count.setter
    def gyro_calibration_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gyro_calibration_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gyro_calibration_count' field must be an unsigned integer in [0, 255]"
        self._gyro_calibration_count = value
