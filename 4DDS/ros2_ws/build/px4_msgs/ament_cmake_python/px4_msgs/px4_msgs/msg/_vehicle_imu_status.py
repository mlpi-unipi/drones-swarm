# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleImuStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'accel_clipping'
# Member 'gyro_clipping'
# Member 'mean_accel'
# Member 'mean_gyro'
# Member 'var_accel'
# Member 'var_gyro'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleImuStatus(type):
    """Metaclass of message 'VehicleImuStatus'."""

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
                'px4_msgs.msg.VehicleImuStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_imu_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_imu_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_imu_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_imu_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_imu_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleImuStatus(metaclass=Metaclass_VehicleImuStatus):
    """Message class 'VehicleImuStatus'."""

    __slots__ = [
        '_timestamp',
        '_accel_device_id',
        '_gyro_device_id',
        '_accel_clipping',
        '_gyro_clipping',
        '_accel_error_count',
        '_gyro_error_count',
        '_accel_rate_hz',
        '_gyro_rate_hz',
        '_accel_raw_rate_hz',
        '_gyro_raw_rate_hz',
        '_accel_vibration_metric',
        '_gyro_vibration_metric',
        '_delta_angle_coning_metric',
        '_mean_accel',
        '_mean_gyro',
        '_var_accel',
        '_var_gyro',
        '_temperature_accel',
        '_temperature_gyro',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'accel_device_id': 'uint32',
        'gyro_device_id': 'uint32',
        'accel_clipping': 'uint32[3]',
        'gyro_clipping': 'uint32[3]',
        'accel_error_count': 'uint32',
        'gyro_error_count': 'uint32',
        'accel_rate_hz': 'float',
        'gyro_rate_hz': 'float',
        'accel_raw_rate_hz': 'float',
        'gyro_raw_rate_hz': 'float',
        'accel_vibration_metric': 'float',
        'gyro_vibration_metric': 'float',
        'delta_angle_coning_metric': 'float',
        'mean_accel': 'float[3]',
        'mean_gyro': 'float[3]',
        'var_accel': 'float[3]',
        'var_gyro': 'float[3]',
        'temperature_accel': 'float',
        'temperature_gyro': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.accel_device_id = kwargs.get('accel_device_id', int())
        self.gyro_device_id = kwargs.get('gyro_device_id', int())
        if 'accel_clipping' not in kwargs:
            self.accel_clipping = numpy.zeros(3, dtype=numpy.uint32)
        else:
            self.accel_clipping = numpy.array(kwargs.get('accel_clipping'), dtype=numpy.uint32)
            assert self.accel_clipping.shape == (3, )
        if 'gyro_clipping' not in kwargs:
            self.gyro_clipping = numpy.zeros(3, dtype=numpy.uint32)
        else:
            self.gyro_clipping = numpy.array(kwargs.get('gyro_clipping'), dtype=numpy.uint32)
            assert self.gyro_clipping.shape == (3, )
        self.accel_error_count = kwargs.get('accel_error_count', int())
        self.gyro_error_count = kwargs.get('gyro_error_count', int())
        self.accel_rate_hz = kwargs.get('accel_rate_hz', float())
        self.gyro_rate_hz = kwargs.get('gyro_rate_hz', float())
        self.accel_raw_rate_hz = kwargs.get('accel_raw_rate_hz', float())
        self.gyro_raw_rate_hz = kwargs.get('gyro_raw_rate_hz', float())
        self.accel_vibration_metric = kwargs.get('accel_vibration_metric', float())
        self.gyro_vibration_metric = kwargs.get('gyro_vibration_metric', float())
        self.delta_angle_coning_metric = kwargs.get('delta_angle_coning_metric', float())
        if 'mean_accel' not in kwargs:
            self.mean_accel = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.mean_accel = numpy.array(kwargs.get('mean_accel'), dtype=numpy.float32)
            assert self.mean_accel.shape == (3, )
        if 'mean_gyro' not in kwargs:
            self.mean_gyro = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.mean_gyro = numpy.array(kwargs.get('mean_gyro'), dtype=numpy.float32)
            assert self.mean_gyro.shape == (3, )
        if 'var_accel' not in kwargs:
            self.var_accel = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.var_accel = numpy.array(kwargs.get('var_accel'), dtype=numpy.float32)
            assert self.var_accel.shape == (3, )
        if 'var_gyro' not in kwargs:
            self.var_gyro = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.var_gyro = numpy.array(kwargs.get('var_gyro'), dtype=numpy.float32)
            assert self.var_gyro.shape == (3, )
        self.temperature_accel = kwargs.get('temperature_accel', float())
        self.temperature_gyro = kwargs.get('temperature_gyro', float())

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
        if self.accel_device_id != other.accel_device_id:
            return False
        if self.gyro_device_id != other.gyro_device_id:
            return False
        if all(self.accel_clipping != other.accel_clipping):
            return False
        if all(self.gyro_clipping != other.gyro_clipping):
            return False
        if self.accel_error_count != other.accel_error_count:
            return False
        if self.gyro_error_count != other.gyro_error_count:
            return False
        if self.accel_rate_hz != other.accel_rate_hz:
            return False
        if self.gyro_rate_hz != other.gyro_rate_hz:
            return False
        if self.accel_raw_rate_hz != other.accel_raw_rate_hz:
            return False
        if self.gyro_raw_rate_hz != other.gyro_raw_rate_hz:
            return False
        if self.accel_vibration_metric != other.accel_vibration_metric:
            return False
        if self.gyro_vibration_metric != other.gyro_vibration_metric:
            return False
        if self.delta_angle_coning_metric != other.delta_angle_coning_metric:
            return False
        if all(self.mean_accel != other.mean_accel):
            return False
        if all(self.mean_gyro != other.mean_gyro):
            return False
        if all(self.var_accel != other.var_accel):
            return False
        if all(self.var_gyro != other.var_gyro):
            return False
        if self.temperature_accel != other.temperature_accel:
            return False
        if self.temperature_gyro != other.temperature_gyro:
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
    def accel_clipping(self):
        """Message field 'accel_clipping'."""
        return self._accel_clipping

    @accel_clipping.setter
    def accel_clipping(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'accel_clipping' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 3, \
                "The 'accel_clipping' numpy.ndarray() must have a size of 3"
            self._accel_clipping = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'accel_clipping' field must be a set or sequence with length 3 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._accel_clipping = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def gyro_clipping(self):
        """Message field 'gyro_clipping'."""
        return self._gyro_clipping

    @gyro_clipping.setter
    def gyro_clipping(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'gyro_clipping' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 3, \
                "The 'gyro_clipping' numpy.ndarray() must have a size of 3"
            self._gyro_clipping = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'gyro_clipping' field must be a set or sequence with length 3 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._gyro_clipping = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def accel_error_count(self):
        """Message field 'accel_error_count'."""
        return self._accel_error_count

    @accel_error_count.setter
    def accel_error_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accel_error_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'accel_error_count' field must be an unsigned integer in [0, 4294967295]"
        self._accel_error_count = value

    @builtins.property
    def gyro_error_count(self):
        """Message field 'gyro_error_count'."""
        return self._gyro_error_count

    @gyro_error_count.setter
    def gyro_error_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gyro_error_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gyro_error_count' field must be an unsigned integer in [0, 4294967295]"
        self._gyro_error_count = value

    @builtins.property
    def accel_rate_hz(self):
        """Message field 'accel_rate_hz'."""
        return self._accel_rate_hz

    @accel_rate_hz.setter
    def accel_rate_hz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_rate_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_rate_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_rate_hz = value

    @builtins.property
    def gyro_rate_hz(self):
        """Message field 'gyro_rate_hz'."""
        return self._gyro_rate_hz

    @gyro_rate_hz.setter
    def gyro_rate_hz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_rate_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_rate_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_rate_hz = value

    @builtins.property
    def accel_raw_rate_hz(self):
        """Message field 'accel_raw_rate_hz'."""
        return self._accel_raw_rate_hz

    @accel_raw_rate_hz.setter
    def accel_raw_rate_hz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_raw_rate_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_raw_rate_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_raw_rate_hz = value

    @builtins.property
    def gyro_raw_rate_hz(self):
        """Message field 'gyro_raw_rate_hz'."""
        return self._gyro_raw_rate_hz

    @gyro_raw_rate_hz.setter
    def gyro_raw_rate_hz(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_raw_rate_hz' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_raw_rate_hz' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_raw_rate_hz = value

    @builtins.property
    def accel_vibration_metric(self):
        """Message field 'accel_vibration_metric'."""
        return self._accel_vibration_metric

    @accel_vibration_metric.setter
    def accel_vibration_metric(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_vibration_metric' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_vibration_metric' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_vibration_metric = value

    @builtins.property
    def gyro_vibration_metric(self):
        """Message field 'gyro_vibration_metric'."""
        return self._gyro_vibration_metric

    @gyro_vibration_metric.setter
    def gyro_vibration_metric(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_vibration_metric' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_vibration_metric' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_vibration_metric = value

    @builtins.property
    def delta_angle_coning_metric(self):
        """Message field 'delta_angle_coning_metric'."""
        return self._delta_angle_coning_metric

    @delta_angle_coning_metric.setter
    def delta_angle_coning_metric(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'delta_angle_coning_metric' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'delta_angle_coning_metric' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._delta_angle_coning_metric = value

    @builtins.property
    def mean_accel(self):
        """Message field 'mean_accel'."""
        return self._mean_accel

    @mean_accel.setter
    def mean_accel(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'mean_accel' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'mean_accel' numpy.ndarray() must have a size of 3"
            self._mean_accel = value
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
                "The 'mean_accel' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mean_accel = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def mean_gyro(self):
        """Message field 'mean_gyro'."""
        return self._mean_gyro

    @mean_gyro.setter
    def mean_gyro(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'mean_gyro' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'mean_gyro' numpy.ndarray() must have a size of 3"
            self._mean_gyro = value
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
                "The 'mean_gyro' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mean_gyro = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def var_accel(self):
        """Message field 'var_accel'."""
        return self._var_accel

    @var_accel.setter
    def var_accel(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'var_accel' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'var_accel' numpy.ndarray() must have a size of 3"
            self._var_accel = value
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
                "The 'var_accel' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._var_accel = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def var_gyro(self):
        """Message field 'var_gyro'."""
        return self._var_gyro

    @var_gyro.setter
    def var_gyro(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'var_gyro' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'var_gyro' numpy.ndarray() must have a size of 3"
            self._var_gyro = value
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
                "The 'var_gyro' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._var_gyro = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def temperature_accel(self):
        """Message field 'temperature_accel'."""
        return self._temperature_accel

    @temperature_accel.setter
    def temperature_accel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature_accel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature_accel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature_accel = value

    @builtins.property
    def temperature_gyro(self):
        """Message field 'temperature_gyro'."""
        return self._temperature_gyro

    @temperature_gyro.setter
    def temperature_gyro(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'temperature_gyro' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'temperature_gyro' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._temperature_gyro = value
