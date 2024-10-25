# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SensorCombined.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'gyro_rad'
# Member 'accelerometer_m_s2'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorCombined(type):
    """Metaclass of message 'SensorCombined'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RELATIVE_TIMESTAMP_INVALID': 2147483647,
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
                'px4_msgs.msg.SensorCombined')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_combined
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_combined
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_combined
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_combined
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_combined

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RELATIVE_TIMESTAMP_INVALID': cls.__constants['RELATIVE_TIMESTAMP_INVALID'],
            'CLIPPING_X': cls.__constants['CLIPPING_X'],
            'CLIPPING_Y': cls.__constants['CLIPPING_Y'],
            'CLIPPING_Z': cls.__constants['CLIPPING_Z'],
        }

    @property
    def RELATIVE_TIMESTAMP_INVALID(self):
        """Message constant 'RELATIVE_TIMESTAMP_INVALID'."""
        return Metaclass_SensorCombined.__constants['RELATIVE_TIMESTAMP_INVALID']

    @property
    def CLIPPING_X(self):
        """Message constant 'CLIPPING_X'."""
        return Metaclass_SensorCombined.__constants['CLIPPING_X']

    @property
    def CLIPPING_Y(self):
        """Message constant 'CLIPPING_Y'."""
        return Metaclass_SensorCombined.__constants['CLIPPING_Y']

    @property
    def CLIPPING_Z(self):
        """Message constant 'CLIPPING_Z'."""
        return Metaclass_SensorCombined.__constants['CLIPPING_Z']


class SensorCombined(metaclass=Metaclass_SensorCombined):
    """
    Message class 'SensorCombined'.

    Constants:
      RELATIVE_TIMESTAMP_INVALID
      CLIPPING_X
      CLIPPING_Y
      CLIPPING_Z
    """

    __slots__ = [
        '_timestamp',
        '_gyro_rad',
        '_gyro_integral_dt',
        '_accelerometer_timestamp_relative',
        '_accelerometer_m_s2',
        '_accelerometer_integral_dt',
        '_accelerometer_clipping',
        '_gyro_clipping',
        '_accel_calibration_count',
        '_gyro_calibration_count',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'gyro_rad': 'float[3]',
        'gyro_integral_dt': 'uint32',
        'accelerometer_timestamp_relative': 'int32',
        'accelerometer_m_s2': 'float[3]',
        'accelerometer_integral_dt': 'uint32',
        'accelerometer_clipping': 'uint8',
        'gyro_clipping': 'uint8',
        'accel_calibration_count': 'uint8',
        'gyro_calibration_count': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        if 'gyro_rad' not in kwargs:
            self.gyro_rad = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.gyro_rad = numpy.array(kwargs.get('gyro_rad'), dtype=numpy.float32)
            assert self.gyro_rad.shape == (3, )
        self.gyro_integral_dt = kwargs.get('gyro_integral_dt', int())
        self.accelerometer_timestamp_relative = kwargs.get('accelerometer_timestamp_relative', int())
        if 'accelerometer_m_s2' not in kwargs:
            self.accelerometer_m_s2 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.accelerometer_m_s2 = numpy.array(kwargs.get('accelerometer_m_s2'), dtype=numpy.float32)
            assert self.accelerometer_m_s2.shape == (3, )
        self.accelerometer_integral_dt = kwargs.get('accelerometer_integral_dt', int())
        self.accelerometer_clipping = kwargs.get('accelerometer_clipping', int())
        self.gyro_clipping = kwargs.get('gyro_clipping', int())
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
        if all(self.gyro_rad != other.gyro_rad):
            return False
        if self.gyro_integral_dt != other.gyro_integral_dt:
            return False
        if self.accelerometer_timestamp_relative != other.accelerometer_timestamp_relative:
            return False
        if all(self.accelerometer_m_s2 != other.accelerometer_m_s2):
            return False
        if self.accelerometer_integral_dt != other.accelerometer_integral_dt:
            return False
        if self.accelerometer_clipping != other.accelerometer_clipping:
            return False
        if self.gyro_clipping != other.gyro_clipping:
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
    def gyro_rad(self):
        """Message field 'gyro_rad'."""
        return self._gyro_rad

    @gyro_rad.setter
    def gyro_rad(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gyro_rad' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'gyro_rad' numpy.ndarray() must have a size of 3"
            self._gyro_rad = value
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
                "The 'gyro_rad' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro_rad = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gyro_integral_dt(self):
        """Message field 'gyro_integral_dt'."""
        return self._gyro_integral_dt

    @gyro_integral_dt.setter
    def gyro_integral_dt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gyro_integral_dt' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gyro_integral_dt' field must be an unsigned integer in [0, 4294967295]"
        self._gyro_integral_dt = value

    @builtins.property
    def accelerometer_timestamp_relative(self):
        """Message field 'accelerometer_timestamp_relative'."""
        return self._accelerometer_timestamp_relative

    @accelerometer_timestamp_relative.setter
    def accelerometer_timestamp_relative(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accelerometer_timestamp_relative' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'accelerometer_timestamp_relative' field must be an integer in [-2147483648, 2147483647]"
        self._accelerometer_timestamp_relative = value

    @builtins.property
    def accelerometer_m_s2(self):
        """Message field 'accelerometer_m_s2'."""
        return self._accelerometer_m_s2

    @accelerometer_m_s2.setter
    def accelerometer_m_s2(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accelerometer_m_s2' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'accelerometer_m_s2' numpy.ndarray() must have a size of 3"
            self._accelerometer_m_s2 = value
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
                "The 'accelerometer_m_s2' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accelerometer_m_s2 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def accelerometer_integral_dt(self):
        """Message field 'accelerometer_integral_dt'."""
        return self._accelerometer_integral_dt

    @accelerometer_integral_dt.setter
    def accelerometer_integral_dt(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accelerometer_integral_dt' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'accelerometer_integral_dt' field must be an unsigned integer in [0, 4294967295]"
        self._accelerometer_integral_dt = value

    @builtins.property
    def accelerometer_clipping(self):
        """Message field 'accelerometer_clipping'."""
        return self._accelerometer_clipping

    @accelerometer_clipping.setter
    def accelerometer_clipping(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accelerometer_clipping' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'accelerometer_clipping' field must be an unsigned integer in [0, 255]"
        self._accelerometer_clipping = value

    @builtins.property
    def gyro_clipping(self):
        """Message field 'gyro_clipping'."""
        return self._gyro_clipping

    @gyro_clipping.setter
    def gyro_clipping(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gyro_clipping' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gyro_clipping' field must be an unsigned integer in [0, 255]"
        self._gyro_clipping = value

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
