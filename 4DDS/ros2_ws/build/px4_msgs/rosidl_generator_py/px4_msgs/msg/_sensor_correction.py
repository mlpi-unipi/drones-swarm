# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SensorCorrection.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'accel_device_ids'
# Member 'accel_temperature'
# Member 'accel_offset_0'
# Member 'accel_offset_1'
# Member 'accel_offset_2'
# Member 'accel_offset_3'
# Member 'gyro_device_ids'
# Member 'gyro_temperature'
# Member 'gyro_offset_0'
# Member 'gyro_offset_1'
# Member 'gyro_offset_2'
# Member 'gyro_offset_3'
# Member 'mag_device_ids'
# Member 'mag_temperature'
# Member 'mag_offset_0'
# Member 'mag_offset_1'
# Member 'mag_offset_2'
# Member 'mag_offset_3'
# Member 'baro_device_ids'
# Member 'baro_temperature'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorCorrection(type):
    """Metaclass of message 'SensorCorrection'."""

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
                'px4_msgs.msg.SensorCorrection')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_correction
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_correction
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_correction
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_correction
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_correction

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorCorrection(metaclass=Metaclass_SensorCorrection):
    """Message class 'SensorCorrection'."""

    __slots__ = [
        '_timestamp',
        '_accel_device_ids',
        '_accel_temperature',
        '_accel_offset_0',
        '_accel_offset_1',
        '_accel_offset_2',
        '_accel_offset_3',
        '_gyro_device_ids',
        '_gyro_temperature',
        '_gyro_offset_0',
        '_gyro_offset_1',
        '_gyro_offset_2',
        '_gyro_offset_3',
        '_mag_device_ids',
        '_mag_temperature',
        '_mag_offset_0',
        '_mag_offset_1',
        '_mag_offset_2',
        '_mag_offset_3',
        '_baro_device_ids',
        '_baro_temperature',
        '_baro_offset_0',
        '_baro_offset_1',
        '_baro_offset_2',
        '_baro_offset_3',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'accel_device_ids': 'uint32[4]',
        'accel_temperature': 'float[4]',
        'accel_offset_0': 'float[3]',
        'accel_offset_1': 'float[3]',
        'accel_offset_2': 'float[3]',
        'accel_offset_3': 'float[3]',
        'gyro_device_ids': 'uint32[4]',
        'gyro_temperature': 'float[4]',
        'gyro_offset_0': 'float[3]',
        'gyro_offset_1': 'float[3]',
        'gyro_offset_2': 'float[3]',
        'gyro_offset_3': 'float[3]',
        'mag_device_ids': 'uint32[4]',
        'mag_temperature': 'float[4]',
        'mag_offset_0': 'float[3]',
        'mag_offset_1': 'float[3]',
        'mag_offset_2': 'float[3]',
        'mag_offset_3': 'float[3]',
        'baro_device_ids': 'uint32[4]',
        'baro_temperature': 'float[4]',
        'baro_offset_0': 'float',
        'baro_offset_1': 'float',
        'baro_offset_2': 'float',
        'baro_offset_3': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
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
        if 'accel_device_ids' not in kwargs:
            self.accel_device_ids = numpy.zeros(4, dtype=numpy.uint32)
        else:
            self.accel_device_ids = numpy.array(kwargs.get('accel_device_ids'), dtype=numpy.uint32)
            assert self.accel_device_ids.shape == (4, )
        if 'accel_temperature' not in kwargs:
            self.accel_temperature = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.accel_temperature = numpy.array(kwargs.get('accel_temperature'), dtype=numpy.float32)
            assert self.accel_temperature.shape == (4, )
        if 'accel_offset_0' not in kwargs:
            self.accel_offset_0 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.accel_offset_0 = numpy.array(kwargs.get('accel_offset_0'), dtype=numpy.float32)
            assert self.accel_offset_0.shape == (3, )
        if 'accel_offset_1' not in kwargs:
            self.accel_offset_1 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.accel_offset_1 = numpy.array(kwargs.get('accel_offset_1'), dtype=numpy.float32)
            assert self.accel_offset_1.shape == (3, )
        if 'accel_offset_2' not in kwargs:
            self.accel_offset_2 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.accel_offset_2 = numpy.array(kwargs.get('accel_offset_2'), dtype=numpy.float32)
            assert self.accel_offset_2.shape == (3, )
        if 'accel_offset_3' not in kwargs:
            self.accel_offset_3 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.accel_offset_3 = numpy.array(kwargs.get('accel_offset_3'), dtype=numpy.float32)
            assert self.accel_offset_3.shape == (3, )
        if 'gyro_device_ids' not in kwargs:
            self.gyro_device_ids = numpy.zeros(4, dtype=numpy.uint32)
        else:
            self.gyro_device_ids = numpy.array(kwargs.get('gyro_device_ids'), dtype=numpy.uint32)
            assert self.gyro_device_ids.shape == (4, )
        if 'gyro_temperature' not in kwargs:
            self.gyro_temperature = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.gyro_temperature = numpy.array(kwargs.get('gyro_temperature'), dtype=numpy.float32)
            assert self.gyro_temperature.shape == (4, )
        if 'gyro_offset_0' not in kwargs:
            self.gyro_offset_0 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.gyro_offset_0 = numpy.array(kwargs.get('gyro_offset_0'), dtype=numpy.float32)
            assert self.gyro_offset_0.shape == (3, )
        if 'gyro_offset_1' not in kwargs:
            self.gyro_offset_1 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.gyro_offset_1 = numpy.array(kwargs.get('gyro_offset_1'), dtype=numpy.float32)
            assert self.gyro_offset_1.shape == (3, )
        if 'gyro_offset_2' not in kwargs:
            self.gyro_offset_2 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.gyro_offset_2 = numpy.array(kwargs.get('gyro_offset_2'), dtype=numpy.float32)
            assert self.gyro_offset_2.shape == (3, )
        if 'gyro_offset_3' not in kwargs:
            self.gyro_offset_3 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.gyro_offset_3 = numpy.array(kwargs.get('gyro_offset_3'), dtype=numpy.float32)
            assert self.gyro_offset_3.shape == (3, )
        if 'mag_device_ids' not in kwargs:
            self.mag_device_ids = numpy.zeros(4, dtype=numpy.uint32)
        else:
            self.mag_device_ids = numpy.array(kwargs.get('mag_device_ids'), dtype=numpy.uint32)
            assert self.mag_device_ids.shape == (4, )
        if 'mag_temperature' not in kwargs:
            self.mag_temperature = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.mag_temperature = numpy.array(kwargs.get('mag_temperature'), dtype=numpy.float32)
            assert self.mag_temperature.shape == (4, )
        if 'mag_offset_0' not in kwargs:
            self.mag_offset_0 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.mag_offset_0 = numpy.array(kwargs.get('mag_offset_0'), dtype=numpy.float32)
            assert self.mag_offset_0.shape == (3, )
        if 'mag_offset_1' not in kwargs:
            self.mag_offset_1 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.mag_offset_1 = numpy.array(kwargs.get('mag_offset_1'), dtype=numpy.float32)
            assert self.mag_offset_1.shape == (3, )
        if 'mag_offset_2' not in kwargs:
            self.mag_offset_2 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.mag_offset_2 = numpy.array(kwargs.get('mag_offset_2'), dtype=numpy.float32)
            assert self.mag_offset_2.shape == (3, )
        if 'mag_offset_3' not in kwargs:
            self.mag_offset_3 = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.mag_offset_3 = numpy.array(kwargs.get('mag_offset_3'), dtype=numpy.float32)
            assert self.mag_offset_3.shape == (3, )
        if 'baro_device_ids' not in kwargs:
            self.baro_device_ids = numpy.zeros(4, dtype=numpy.uint32)
        else:
            self.baro_device_ids = numpy.array(kwargs.get('baro_device_ids'), dtype=numpy.uint32)
            assert self.baro_device_ids.shape == (4, )
        if 'baro_temperature' not in kwargs:
            self.baro_temperature = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.baro_temperature = numpy.array(kwargs.get('baro_temperature'), dtype=numpy.float32)
            assert self.baro_temperature.shape == (4, )
        self.baro_offset_0 = kwargs.get('baro_offset_0', float())
        self.baro_offset_1 = kwargs.get('baro_offset_1', float())
        self.baro_offset_2 = kwargs.get('baro_offset_2', float())
        self.baro_offset_3 = kwargs.get('baro_offset_3', float())

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
        if all(self.accel_device_ids != other.accel_device_ids):
            return False
        if all(self.accel_temperature != other.accel_temperature):
            return False
        if all(self.accel_offset_0 != other.accel_offset_0):
            return False
        if all(self.accel_offset_1 != other.accel_offset_1):
            return False
        if all(self.accel_offset_2 != other.accel_offset_2):
            return False
        if all(self.accel_offset_3 != other.accel_offset_3):
            return False
        if all(self.gyro_device_ids != other.gyro_device_ids):
            return False
        if all(self.gyro_temperature != other.gyro_temperature):
            return False
        if all(self.gyro_offset_0 != other.gyro_offset_0):
            return False
        if all(self.gyro_offset_1 != other.gyro_offset_1):
            return False
        if all(self.gyro_offset_2 != other.gyro_offset_2):
            return False
        if all(self.gyro_offset_3 != other.gyro_offset_3):
            return False
        if all(self.mag_device_ids != other.mag_device_ids):
            return False
        if all(self.mag_temperature != other.mag_temperature):
            return False
        if all(self.mag_offset_0 != other.mag_offset_0):
            return False
        if all(self.mag_offset_1 != other.mag_offset_1):
            return False
        if all(self.mag_offset_2 != other.mag_offset_2):
            return False
        if all(self.mag_offset_3 != other.mag_offset_3):
            return False
        if all(self.baro_device_ids != other.baro_device_ids):
            return False
        if all(self.baro_temperature != other.baro_temperature):
            return False
        if self.baro_offset_0 != other.baro_offset_0:
            return False
        if self.baro_offset_1 != other.baro_offset_1:
            return False
        if self.baro_offset_2 != other.baro_offset_2:
            return False
        if self.baro_offset_3 != other.baro_offset_3:
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
    def accel_device_ids(self):
        """Message field 'accel_device_ids'."""
        return self._accel_device_ids

    @accel_device_ids.setter
    def accel_device_ids(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'accel_device_ids' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 4, \
                "The 'accel_device_ids' numpy.ndarray() must have a size of 4"
            self._accel_device_ids = value
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'accel_device_ids' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._accel_device_ids = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def accel_temperature(self):
        """Message field 'accel_temperature'."""
        return self._accel_temperature

    @accel_temperature.setter
    def accel_temperature(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accel_temperature' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'accel_temperature' numpy.ndarray() must have a size of 4"
            self._accel_temperature = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'accel_temperature' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accel_temperature = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def accel_offset_0(self):
        """Message field 'accel_offset_0'."""
        return self._accel_offset_0

    @accel_offset_0.setter
    def accel_offset_0(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accel_offset_0' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'accel_offset_0' numpy.ndarray() must have a size of 3"
            self._accel_offset_0 = value
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
                "The 'accel_offset_0' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accel_offset_0 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def accel_offset_1(self):
        """Message field 'accel_offset_1'."""
        return self._accel_offset_1

    @accel_offset_1.setter
    def accel_offset_1(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accel_offset_1' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'accel_offset_1' numpy.ndarray() must have a size of 3"
            self._accel_offset_1 = value
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
                "The 'accel_offset_1' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accel_offset_1 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def accel_offset_2(self):
        """Message field 'accel_offset_2'."""
        return self._accel_offset_2

    @accel_offset_2.setter
    def accel_offset_2(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accel_offset_2' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'accel_offset_2' numpy.ndarray() must have a size of 3"
            self._accel_offset_2 = value
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
                "The 'accel_offset_2' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accel_offset_2 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def accel_offset_3(self):
        """Message field 'accel_offset_3'."""
        return self._accel_offset_3

    @accel_offset_3.setter
    def accel_offset_3(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accel_offset_3' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'accel_offset_3' numpy.ndarray() must have a size of 3"
            self._accel_offset_3 = value
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
                "The 'accel_offset_3' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accel_offset_3 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gyro_device_ids(self):
        """Message field 'gyro_device_ids'."""
        return self._gyro_device_ids

    @gyro_device_ids.setter
    def gyro_device_ids(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'gyro_device_ids' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 4, \
                "The 'gyro_device_ids' numpy.ndarray() must have a size of 4"
            self._gyro_device_ids = value
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'gyro_device_ids' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._gyro_device_ids = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def gyro_temperature(self):
        """Message field 'gyro_temperature'."""
        return self._gyro_temperature

    @gyro_temperature.setter
    def gyro_temperature(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gyro_temperature' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'gyro_temperature' numpy.ndarray() must have a size of 4"
            self._gyro_temperature = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'gyro_temperature' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro_temperature = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gyro_offset_0(self):
        """Message field 'gyro_offset_0'."""
        return self._gyro_offset_0

    @gyro_offset_0.setter
    def gyro_offset_0(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gyro_offset_0' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'gyro_offset_0' numpy.ndarray() must have a size of 3"
            self._gyro_offset_0 = value
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
                "The 'gyro_offset_0' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro_offset_0 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gyro_offset_1(self):
        """Message field 'gyro_offset_1'."""
        return self._gyro_offset_1

    @gyro_offset_1.setter
    def gyro_offset_1(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gyro_offset_1' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'gyro_offset_1' numpy.ndarray() must have a size of 3"
            self._gyro_offset_1 = value
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
                "The 'gyro_offset_1' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro_offset_1 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gyro_offset_2(self):
        """Message field 'gyro_offset_2'."""
        return self._gyro_offset_2

    @gyro_offset_2.setter
    def gyro_offset_2(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gyro_offset_2' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'gyro_offset_2' numpy.ndarray() must have a size of 3"
            self._gyro_offset_2 = value
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
                "The 'gyro_offset_2' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro_offset_2 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gyro_offset_3(self):
        """Message field 'gyro_offset_3'."""
        return self._gyro_offset_3

    @gyro_offset_3.setter
    def gyro_offset_3(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gyro_offset_3' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'gyro_offset_3' numpy.ndarray() must have a size of 3"
            self._gyro_offset_3 = value
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
                "The 'gyro_offset_3' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro_offset_3 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def mag_device_ids(self):
        """Message field 'mag_device_ids'."""
        return self._mag_device_ids

    @mag_device_ids.setter
    def mag_device_ids(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'mag_device_ids' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 4, \
                "The 'mag_device_ids' numpy.ndarray() must have a size of 4"
            self._mag_device_ids = value
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'mag_device_ids' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._mag_device_ids = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def mag_temperature(self):
        """Message field 'mag_temperature'."""
        return self._mag_temperature

    @mag_temperature.setter
    def mag_temperature(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'mag_temperature' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'mag_temperature' numpy.ndarray() must have a size of 4"
            self._mag_temperature = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'mag_temperature' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mag_temperature = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def mag_offset_0(self):
        """Message field 'mag_offset_0'."""
        return self._mag_offset_0

    @mag_offset_0.setter
    def mag_offset_0(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'mag_offset_0' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'mag_offset_0' numpy.ndarray() must have a size of 3"
            self._mag_offset_0 = value
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
                "The 'mag_offset_0' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mag_offset_0 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def mag_offset_1(self):
        """Message field 'mag_offset_1'."""
        return self._mag_offset_1

    @mag_offset_1.setter
    def mag_offset_1(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'mag_offset_1' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'mag_offset_1' numpy.ndarray() must have a size of 3"
            self._mag_offset_1 = value
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
                "The 'mag_offset_1' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mag_offset_1 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def mag_offset_2(self):
        """Message field 'mag_offset_2'."""
        return self._mag_offset_2

    @mag_offset_2.setter
    def mag_offset_2(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'mag_offset_2' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'mag_offset_2' numpy.ndarray() must have a size of 3"
            self._mag_offset_2 = value
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
                "The 'mag_offset_2' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mag_offset_2 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def mag_offset_3(self):
        """Message field 'mag_offset_3'."""
        return self._mag_offset_3

    @mag_offset_3.setter
    def mag_offset_3(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'mag_offset_3' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'mag_offset_3' numpy.ndarray() must have a size of 3"
            self._mag_offset_3 = value
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
                "The 'mag_offset_3' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mag_offset_3 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def baro_device_ids(self):
        """Message field 'baro_device_ids'."""
        return self._baro_device_ids

    @baro_device_ids.setter
    def baro_device_ids(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'baro_device_ids' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 4, \
                "The 'baro_device_ids' numpy.ndarray() must have a size of 4"
            self._baro_device_ids = value
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
                 len(value) == 4 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'baro_device_ids' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._baro_device_ids = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def baro_temperature(self):
        """Message field 'baro_temperature'."""
        return self._baro_temperature

    @baro_temperature.setter
    def baro_temperature(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'baro_temperature' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'baro_temperature' numpy.ndarray() must have a size of 4"
            self._baro_temperature = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'baro_temperature' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._baro_temperature = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def baro_offset_0(self):
        """Message field 'baro_offset_0'."""
        return self._baro_offset_0

    @baro_offset_0.setter
    def baro_offset_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'baro_offset_0' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'baro_offset_0' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._baro_offset_0 = value

    @builtins.property
    def baro_offset_1(self):
        """Message field 'baro_offset_1'."""
        return self._baro_offset_1

    @baro_offset_1.setter
    def baro_offset_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'baro_offset_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'baro_offset_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._baro_offset_1 = value

    @builtins.property
    def baro_offset_2(self):
        """Message field 'baro_offset_2'."""
        return self._baro_offset_2

    @baro_offset_2.setter
    def baro_offset_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'baro_offset_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'baro_offset_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._baro_offset_2 = value

    @builtins.property
    def baro_offset_3(self):
        """Message field 'baro_offset_3'."""
        return self._baro_offset_3

    @baro_offset_3.setter
    def baro_offset_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'baro_offset_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'baro_offset_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._baro_offset_3 = value
