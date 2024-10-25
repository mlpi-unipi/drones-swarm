# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/EstimatorSelectorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'combined_test_ratio'
# Member 'relative_test_ratio'
# Member 'accumulated_gyro_error'
# Member 'accumulated_accel_error'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EstimatorSelectorStatus(type):
    """Metaclass of message 'EstimatorSelectorStatus'."""

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
                'px4_msgs.msg.EstimatorSelectorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__estimator_selector_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__estimator_selector_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__estimator_selector_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__estimator_selector_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__estimator_selector_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EstimatorSelectorStatus(metaclass=Metaclass_EstimatorSelectorStatus):
    """Message class 'EstimatorSelectorStatus'."""

    __slots__ = [
        '_timestamp',
        '_primary_instance',
        '_instances_available',
        '_instance_changed_count',
        '_last_instance_change',
        '_accel_device_id',
        '_baro_device_id',
        '_gyro_device_id',
        '_mag_device_id',
        '_combined_test_ratio',
        '_relative_test_ratio',
        '_healthy',
        '_accumulated_gyro_error',
        '_accumulated_accel_error',
        '_gyro_fault_detected',
        '_accel_fault_detected',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'primary_instance': 'uint8',
        'instances_available': 'uint8',
        'instance_changed_count': 'uint32',
        'last_instance_change': 'uint64',
        'accel_device_id': 'uint32',
        'baro_device_id': 'uint32',
        'gyro_device_id': 'uint32',
        'mag_device_id': 'uint32',
        'combined_test_ratio': 'float[9]',
        'relative_test_ratio': 'float[9]',
        'healthy': 'boolean[9]',
        'accumulated_gyro_error': 'float[4]',
        'accumulated_accel_error': 'float[4]',
        'gyro_fault_detected': 'boolean',
        'accel_fault_detected': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 9),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 9),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 9),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.primary_instance = kwargs.get('primary_instance', int())
        self.instances_available = kwargs.get('instances_available', int())
        self.instance_changed_count = kwargs.get('instance_changed_count', int())
        self.last_instance_change = kwargs.get('last_instance_change', int())
        self.accel_device_id = kwargs.get('accel_device_id', int())
        self.baro_device_id = kwargs.get('baro_device_id', int())
        self.gyro_device_id = kwargs.get('gyro_device_id', int())
        self.mag_device_id = kwargs.get('mag_device_id', int())
        if 'combined_test_ratio' not in kwargs:
            self.combined_test_ratio = numpy.zeros(9, dtype=numpy.float32)
        else:
            self.combined_test_ratio = numpy.array(kwargs.get('combined_test_ratio'), dtype=numpy.float32)
            assert self.combined_test_ratio.shape == (9, )
        if 'relative_test_ratio' not in kwargs:
            self.relative_test_ratio = numpy.zeros(9, dtype=numpy.float32)
        else:
            self.relative_test_ratio = numpy.array(kwargs.get('relative_test_ratio'), dtype=numpy.float32)
            assert self.relative_test_ratio.shape == (9, )
        self.healthy = kwargs.get(
            'healthy',
            [bool() for x in range(9)]
        )
        if 'accumulated_gyro_error' not in kwargs:
            self.accumulated_gyro_error = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.accumulated_gyro_error = numpy.array(kwargs.get('accumulated_gyro_error'), dtype=numpy.float32)
            assert self.accumulated_gyro_error.shape == (4, )
        if 'accumulated_accel_error' not in kwargs:
            self.accumulated_accel_error = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.accumulated_accel_error = numpy.array(kwargs.get('accumulated_accel_error'), dtype=numpy.float32)
            assert self.accumulated_accel_error.shape == (4, )
        self.gyro_fault_detected = kwargs.get('gyro_fault_detected', bool())
        self.accel_fault_detected = kwargs.get('accel_fault_detected', bool())

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
        if self.primary_instance != other.primary_instance:
            return False
        if self.instances_available != other.instances_available:
            return False
        if self.instance_changed_count != other.instance_changed_count:
            return False
        if self.last_instance_change != other.last_instance_change:
            return False
        if self.accel_device_id != other.accel_device_id:
            return False
        if self.baro_device_id != other.baro_device_id:
            return False
        if self.gyro_device_id != other.gyro_device_id:
            return False
        if self.mag_device_id != other.mag_device_id:
            return False
        if all(self.combined_test_ratio != other.combined_test_ratio):
            return False
        if all(self.relative_test_ratio != other.relative_test_ratio):
            return False
        if self.healthy != other.healthy:
            return False
        if all(self.accumulated_gyro_error != other.accumulated_gyro_error):
            return False
        if all(self.accumulated_accel_error != other.accumulated_accel_error):
            return False
        if self.gyro_fault_detected != other.gyro_fault_detected:
            return False
        if self.accel_fault_detected != other.accel_fault_detected:
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
    def primary_instance(self):
        """Message field 'primary_instance'."""
        return self._primary_instance

    @primary_instance.setter
    def primary_instance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'primary_instance' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'primary_instance' field must be an unsigned integer in [0, 255]"
        self._primary_instance = value

    @builtins.property
    def instances_available(self):
        """Message field 'instances_available'."""
        return self._instances_available

    @instances_available.setter
    def instances_available(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'instances_available' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'instances_available' field must be an unsigned integer in [0, 255]"
        self._instances_available = value

    @builtins.property
    def instance_changed_count(self):
        """Message field 'instance_changed_count'."""
        return self._instance_changed_count

    @instance_changed_count.setter
    def instance_changed_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'instance_changed_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'instance_changed_count' field must be an unsigned integer in [0, 4294967295]"
        self._instance_changed_count = value

    @builtins.property
    def last_instance_change(self):
        """Message field 'last_instance_change'."""
        return self._last_instance_change

    @last_instance_change.setter
    def last_instance_change(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_instance_change' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'last_instance_change' field must be an unsigned integer in [0, 18446744073709551615]"
        self._last_instance_change = value

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
    def mag_device_id(self):
        """Message field 'mag_device_id'."""
        return self._mag_device_id

    @mag_device_id.setter
    def mag_device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mag_device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mag_device_id' field must be an unsigned integer in [0, 4294967295]"
        self._mag_device_id = value

    @builtins.property
    def combined_test_ratio(self):
        """Message field 'combined_test_ratio'."""
        return self._combined_test_ratio

    @combined_test_ratio.setter
    def combined_test_ratio(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'combined_test_ratio' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 9, \
                "The 'combined_test_ratio' numpy.ndarray() must have a size of 9"
            self._combined_test_ratio = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'combined_test_ratio' field must be a set or sequence with length 9 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._combined_test_ratio = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def relative_test_ratio(self):
        """Message field 'relative_test_ratio'."""
        return self._relative_test_ratio

    @relative_test_ratio.setter
    def relative_test_ratio(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'relative_test_ratio' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 9, \
                "The 'relative_test_ratio' numpy.ndarray() must have a size of 9"
            self._relative_test_ratio = value
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'relative_test_ratio' field must be a set or sequence with length 9 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._relative_test_ratio = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def healthy(self):
        """Message field 'healthy'."""
        return self._healthy

    @healthy.setter
    def healthy(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'healthy' field must be a set or sequence with length 9 and each value of type 'bool'"
        self._healthy = value

    @builtins.property
    def accumulated_gyro_error(self):
        """Message field 'accumulated_gyro_error'."""
        return self._accumulated_gyro_error

    @accumulated_gyro_error.setter
    def accumulated_gyro_error(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accumulated_gyro_error' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'accumulated_gyro_error' numpy.ndarray() must have a size of 4"
            self._accumulated_gyro_error = value
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
                "The 'accumulated_gyro_error' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accumulated_gyro_error = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def accumulated_accel_error(self):
        """Message field 'accumulated_accel_error'."""
        return self._accumulated_accel_error

    @accumulated_accel_error.setter
    def accumulated_accel_error(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accumulated_accel_error' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'accumulated_accel_error' numpy.ndarray() must have a size of 4"
            self._accumulated_accel_error = value
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
                "The 'accumulated_accel_error' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accumulated_accel_error = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gyro_fault_detected(self):
        """Message field 'gyro_fault_detected'."""
        return self._gyro_fault_detected

    @gyro_fault_detected.setter
    def gyro_fault_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gyro_fault_detected' field must be of type 'bool'"
        self._gyro_fault_detected = value

    @builtins.property
    def accel_fault_detected(self):
        """Message field 'accel_fault_detected'."""
        return self._accel_fault_detected

    @accel_fault_detected.setter
    def accel_fault_detected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accel_fault_detected' field must be of type 'bool'"
        self._accel_fault_detected = value
