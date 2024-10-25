# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SensorsStatusImu.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'accel_device_ids'
# Member 'accel_inconsistency_m_s_s'
# Member 'accel_priority'
# Member 'gyro_device_ids'
# Member 'gyro_inconsistency_rad_s'
# Member 'gyro_priority'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorsStatusImu(type):
    """Metaclass of message 'SensorsStatusImu'."""

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
                'px4_msgs.msg.SensorsStatusImu')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensors_status_imu
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensors_status_imu
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensors_status_imu
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensors_status_imu
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensors_status_imu

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorsStatusImu(metaclass=Metaclass_SensorsStatusImu):
    """Message class 'SensorsStatusImu'."""

    __slots__ = [
        '_timestamp',
        '_accel_device_id_primary',
        '_accel_device_ids',
        '_accel_inconsistency_m_s_s',
        '_accel_healthy',
        '_accel_priority',
        '_gyro_device_id_primary',
        '_gyro_device_ids',
        '_gyro_inconsistency_rad_s',
        '_gyro_healthy',
        '_gyro_priority',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'accel_device_id_primary': 'uint32',
        'accel_device_ids': 'uint32[4]',
        'accel_inconsistency_m_s_s': 'float[4]',
        'accel_healthy': 'boolean[4]',
        'accel_priority': 'uint8[4]',
        'gyro_device_id_primary': 'uint32',
        'gyro_device_ids': 'uint32[4]',
        'gyro_inconsistency_rad_s': 'float[4]',
        'gyro_healthy': 'boolean[4]',
        'gyro_priority': 'uint8[4]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 4),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.accel_device_id_primary = kwargs.get('accel_device_id_primary', int())
        if 'accel_device_ids' not in kwargs:
            self.accel_device_ids = numpy.zeros(4, dtype=numpy.uint32)
        else:
            self.accel_device_ids = numpy.array(kwargs.get('accel_device_ids'), dtype=numpy.uint32)
            assert self.accel_device_ids.shape == (4, )
        if 'accel_inconsistency_m_s_s' not in kwargs:
            self.accel_inconsistency_m_s_s = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.accel_inconsistency_m_s_s = numpy.array(kwargs.get('accel_inconsistency_m_s_s'), dtype=numpy.float32)
            assert self.accel_inconsistency_m_s_s.shape == (4, )
        self.accel_healthy = kwargs.get(
            'accel_healthy',
            [bool() for x in range(4)]
        )
        if 'accel_priority' not in kwargs:
            self.accel_priority = numpy.zeros(4, dtype=numpy.uint8)
        else:
            self.accel_priority = numpy.array(kwargs.get('accel_priority'), dtype=numpy.uint8)
            assert self.accel_priority.shape == (4, )
        self.gyro_device_id_primary = kwargs.get('gyro_device_id_primary', int())
        if 'gyro_device_ids' not in kwargs:
            self.gyro_device_ids = numpy.zeros(4, dtype=numpy.uint32)
        else:
            self.gyro_device_ids = numpy.array(kwargs.get('gyro_device_ids'), dtype=numpy.uint32)
            assert self.gyro_device_ids.shape == (4, )
        if 'gyro_inconsistency_rad_s' not in kwargs:
            self.gyro_inconsistency_rad_s = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.gyro_inconsistency_rad_s = numpy.array(kwargs.get('gyro_inconsistency_rad_s'), dtype=numpy.float32)
            assert self.gyro_inconsistency_rad_s.shape == (4, )
        self.gyro_healthy = kwargs.get(
            'gyro_healthy',
            [bool() for x in range(4)]
        )
        if 'gyro_priority' not in kwargs:
            self.gyro_priority = numpy.zeros(4, dtype=numpy.uint8)
        else:
            self.gyro_priority = numpy.array(kwargs.get('gyro_priority'), dtype=numpy.uint8)
            assert self.gyro_priority.shape == (4, )

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
        if self.accel_device_id_primary != other.accel_device_id_primary:
            return False
        if all(self.accel_device_ids != other.accel_device_ids):
            return False
        if all(self.accel_inconsistency_m_s_s != other.accel_inconsistency_m_s_s):
            return False
        if self.accel_healthy != other.accel_healthy:
            return False
        if all(self.accel_priority != other.accel_priority):
            return False
        if self.gyro_device_id_primary != other.gyro_device_id_primary:
            return False
        if all(self.gyro_device_ids != other.gyro_device_ids):
            return False
        if all(self.gyro_inconsistency_rad_s != other.gyro_inconsistency_rad_s):
            return False
        if self.gyro_healthy != other.gyro_healthy:
            return False
        if all(self.gyro_priority != other.gyro_priority):
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
    def accel_device_id_primary(self):
        """Message field 'accel_device_id_primary'."""
        return self._accel_device_id_primary

    @accel_device_id_primary.setter
    def accel_device_id_primary(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accel_device_id_primary' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'accel_device_id_primary' field must be an unsigned integer in [0, 4294967295]"
        self._accel_device_id_primary = value

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
    def accel_inconsistency_m_s_s(self):
        """Message field 'accel_inconsistency_m_s_s'."""
        return self._accel_inconsistency_m_s_s

    @accel_inconsistency_m_s_s.setter
    def accel_inconsistency_m_s_s(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accel_inconsistency_m_s_s' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'accel_inconsistency_m_s_s' numpy.ndarray() must have a size of 4"
            self._accel_inconsistency_m_s_s = value
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
                "The 'accel_inconsistency_m_s_s' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accel_inconsistency_m_s_s = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def accel_healthy(self):
        """Message field 'accel_healthy'."""
        return self._accel_healthy

    @accel_healthy.setter
    def accel_healthy(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'accel_healthy' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._accel_healthy = value

    @builtins.property
    def accel_priority(self):
        """Message field 'accel_priority'."""
        return self._accel_priority

    @accel_priority.setter
    def accel_priority(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'accel_priority' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 4, \
                "The 'accel_priority' numpy.ndarray() must have a size of 4"
            self._accel_priority = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'accel_priority' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._accel_priority = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def gyro_device_id_primary(self):
        """Message field 'gyro_device_id_primary'."""
        return self._gyro_device_id_primary

    @gyro_device_id_primary.setter
    def gyro_device_id_primary(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gyro_device_id_primary' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gyro_device_id_primary' field must be an unsigned integer in [0, 4294967295]"
        self._gyro_device_id_primary = value

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
    def gyro_inconsistency_rad_s(self):
        """Message field 'gyro_inconsistency_rad_s'."""
        return self._gyro_inconsistency_rad_s

    @gyro_inconsistency_rad_s.setter
    def gyro_inconsistency_rad_s(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gyro_inconsistency_rad_s' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'gyro_inconsistency_rad_s' numpy.ndarray() must have a size of 4"
            self._gyro_inconsistency_rad_s = value
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
                "The 'gyro_inconsistency_rad_s' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro_inconsistency_rad_s = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gyro_healthy(self):
        """Message field 'gyro_healthy'."""
        return self._gyro_healthy

    @gyro_healthy.setter
    def gyro_healthy(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'gyro_healthy' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._gyro_healthy = value

    @builtins.property
    def gyro_priority(self):
        """Message field 'gyro_priority'."""
        return self._gyro_priority

    @gyro_priority.setter
    def gyro_priority(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'gyro_priority' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 4, \
                "The 'gyro_priority' numpy.ndarray() must have a size of 4"
            self._gyro_priority = value
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
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'gyro_priority' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._gyro_priority = numpy.array(value, dtype=numpy.uint8)
