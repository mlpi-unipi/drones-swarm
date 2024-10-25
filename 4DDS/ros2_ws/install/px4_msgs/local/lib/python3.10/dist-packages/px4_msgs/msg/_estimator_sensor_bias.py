# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/EstimatorSensorBias.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'gyro_bias'
# Member 'gyro_bias_variance'
# Member 'accel_bias'
# Member 'accel_bias_variance'
# Member 'mag_bias'
# Member 'mag_bias_variance'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EstimatorSensorBias(type):
    """Metaclass of message 'EstimatorSensorBias'."""

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
                'px4_msgs.msg.EstimatorSensorBias')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__estimator_sensor_bias
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__estimator_sensor_bias
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__estimator_sensor_bias
            cls._TYPE_SUPPORT = module.type_support_msg__msg__estimator_sensor_bias
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__estimator_sensor_bias

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EstimatorSensorBias(metaclass=Metaclass_EstimatorSensorBias):
    """Message class 'EstimatorSensorBias'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_gyro_device_id',
        '_gyro_bias',
        '_gyro_bias_limit',
        '_gyro_bias_variance',
        '_gyro_bias_valid',
        '_gyro_bias_stable',
        '_accel_device_id',
        '_accel_bias',
        '_accel_bias_limit',
        '_accel_bias_variance',
        '_accel_bias_valid',
        '_accel_bias_stable',
        '_mag_device_id',
        '_mag_bias',
        '_mag_bias_limit',
        '_mag_bias_variance',
        '_mag_bias_valid',
        '_mag_bias_stable',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'gyro_device_id': 'uint32',
        'gyro_bias': 'float[3]',
        'gyro_bias_limit': 'float',
        'gyro_bias_variance': 'float[3]',
        'gyro_bias_valid': 'boolean',
        'gyro_bias_stable': 'boolean',
        'accel_device_id': 'uint32',
        'accel_bias': 'float[3]',
        'accel_bias_limit': 'float',
        'accel_bias_variance': 'float[3]',
        'accel_bias_valid': 'boolean',
        'accel_bias_stable': 'boolean',
        'mag_device_id': 'uint32',
        'mag_bias': 'float[3]',
        'mag_bias_limit': 'float',
        'mag_bias_variance': 'float[3]',
        'mag_bias_valid': 'boolean',
        'mag_bias_stable': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.gyro_device_id = kwargs.get('gyro_device_id', int())
        if 'gyro_bias' not in kwargs:
            self.gyro_bias = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.gyro_bias = numpy.array(kwargs.get('gyro_bias'), dtype=numpy.float32)
            assert self.gyro_bias.shape == (3, )
        self.gyro_bias_limit = kwargs.get('gyro_bias_limit', float())
        if 'gyro_bias_variance' not in kwargs:
            self.gyro_bias_variance = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.gyro_bias_variance = numpy.array(kwargs.get('gyro_bias_variance'), dtype=numpy.float32)
            assert self.gyro_bias_variance.shape == (3, )
        self.gyro_bias_valid = kwargs.get('gyro_bias_valid', bool())
        self.gyro_bias_stable = kwargs.get('gyro_bias_stable', bool())
        self.accel_device_id = kwargs.get('accel_device_id', int())
        if 'accel_bias' not in kwargs:
            self.accel_bias = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.accel_bias = numpy.array(kwargs.get('accel_bias'), dtype=numpy.float32)
            assert self.accel_bias.shape == (3, )
        self.accel_bias_limit = kwargs.get('accel_bias_limit', float())
        if 'accel_bias_variance' not in kwargs:
            self.accel_bias_variance = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.accel_bias_variance = numpy.array(kwargs.get('accel_bias_variance'), dtype=numpy.float32)
            assert self.accel_bias_variance.shape == (3, )
        self.accel_bias_valid = kwargs.get('accel_bias_valid', bool())
        self.accel_bias_stable = kwargs.get('accel_bias_stable', bool())
        self.mag_device_id = kwargs.get('mag_device_id', int())
        if 'mag_bias' not in kwargs:
            self.mag_bias = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.mag_bias = numpy.array(kwargs.get('mag_bias'), dtype=numpy.float32)
            assert self.mag_bias.shape == (3, )
        self.mag_bias_limit = kwargs.get('mag_bias_limit', float())
        if 'mag_bias_variance' not in kwargs:
            self.mag_bias_variance = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.mag_bias_variance = numpy.array(kwargs.get('mag_bias_variance'), dtype=numpy.float32)
            assert self.mag_bias_variance.shape == (3, )
        self.mag_bias_valid = kwargs.get('mag_bias_valid', bool())
        self.mag_bias_stable = kwargs.get('mag_bias_stable', bool())

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
        if self.gyro_device_id != other.gyro_device_id:
            return False
        if all(self.gyro_bias != other.gyro_bias):
            return False
        if self.gyro_bias_limit != other.gyro_bias_limit:
            return False
        if all(self.gyro_bias_variance != other.gyro_bias_variance):
            return False
        if self.gyro_bias_valid != other.gyro_bias_valid:
            return False
        if self.gyro_bias_stable != other.gyro_bias_stable:
            return False
        if self.accel_device_id != other.accel_device_id:
            return False
        if all(self.accel_bias != other.accel_bias):
            return False
        if self.accel_bias_limit != other.accel_bias_limit:
            return False
        if all(self.accel_bias_variance != other.accel_bias_variance):
            return False
        if self.accel_bias_valid != other.accel_bias_valid:
            return False
        if self.accel_bias_stable != other.accel_bias_stable:
            return False
        if self.mag_device_id != other.mag_device_id:
            return False
        if all(self.mag_bias != other.mag_bias):
            return False
        if self.mag_bias_limit != other.mag_bias_limit:
            return False
        if all(self.mag_bias_variance != other.mag_bias_variance):
            return False
        if self.mag_bias_valid != other.mag_bias_valid:
            return False
        if self.mag_bias_stable != other.mag_bias_stable:
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
    def gyro_bias(self):
        """Message field 'gyro_bias'."""
        return self._gyro_bias

    @gyro_bias.setter
    def gyro_bias(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gyro_bias' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'gyro_bias' numpy.ndarray() must have a size of 3"
            self._gyro_bias = value
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
                "The 'gyro_bias' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro_bias = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gyro_bias_limit(self):
        """Message field 'gyro_bias_limit'."""
        return self._gyro_bias_limit

    @gyro_bias_limit.setter
    def gyro_bias_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'gyro_bias_limit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'gyro_bias_limit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._gyro_bias_limit = value

    @builtins.property
    def gyro_bias_variance(self):
        """Message field 'gyro_bias_variance'."""
        return self._gyro_bias_variance

    @gyro_bias_variance.setter
    def gyro_bias_variance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'gyro_bias_variance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'gyro_bias_variance' numpy.ndarray() must have a size of 3"
            self._gyro_bias_variance = value
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
                "The 'gyro_bias_variance' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._gyro_bias_variance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gyro_bias_valid(self):
        """Message field 'gyro_bias_valid'."""
        return self._gyro_bias_valid

    @gyro_bias_valid.setter
    def gyro_bias_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gyro_bias_valid' field must be of type 'bool'"
        self._gyro_bias_valid = value

    @builtins.property
    def gyro_bias_stable(self):
        """Message field 'gyro_bias_stable'."""
        return self._gyro_bias_stable

    @gyro_bias_stable.setter
    def gyro_bias_stable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gyro_bias_stable' field must be of type 'bool'"
        self._gyro_bias_stable = value

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
    def accel_bias(self):
        """Message field 'accel_bias'."""
        return self._accel_bias

    @accel_bias.setter
    def accel_bias(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accel_bias' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'accel_bias' numpy.ndarray() must have a size of 3"
            self._accel_bias = value
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
                "The 'accel_bias' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accel_bias = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def accel_bias_limit(self):
        """Message field 'accel_bias_limit'."""
        return self._accel_bias_limit

    @accel_bias_limit.setter
    def accel_bias_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_bias_limit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_bias_limit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_bias_limit = value

    @builtins.property
    def accel_bias_variance(self):
        """Message field 'accel_bias_variance'."""
        return self._accel_bias_variance

    @accel_bias_variance.setter
    def accel_bias_variance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'accel_bias_variance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'accel_bias_variance' numpy.ndarray() must have a size of 3"
            self._accel_bias_variance = value
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
                "The 'accel_bias_variance' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._accel_bias_variance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def accel_bias_valid(self):
        """Message field 'accel_bias_valid'."""
        return self._accel_bias_valid

    @accel_bias_valid.setter
    def accel_bias_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accel_bias_valid' field must be of type 'bool'"
        self._accel_bias_valid = value

    @builtins.property
    def accel_bias_stable(self):
        """Message field 'accel_bias_stable'."""
        return self._accel_bias_stable

    @accel_bias_stable.setter
    def accel_bias_stable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'accel_bias_stable' field must be of type 'bool'"
        self._accel_bias_stable = value

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
    def mag_bias(self):
        """Message field 'mag_bias'."""
        return self._mag_bias

    @mag_bias.setter
    def mag_bias(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'mag_bias' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'mag_bias' numpy.ndarray() must have a size of 3"
            self._mag_bias = value
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
                "The 'mag_bias' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mag_bias = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def mag_bias_limit(self):
        """Message field 'mag_bias_limit'."""
        return self._mag_bias_limit

    @mag_bias_limit.setter
    def mag_bias_limit(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mag_bias_limit' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mag_bias_limit' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mag_bias_limit = value

    @builtins.property
    def mag_bias_variance(self):
        """Message field 'mag_bias_variance'."""
        return self._mag_bias_variance

    @mag_bias_variance.setter
    def mag_bias_variance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'mag_bias_variance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'mag_bias_variance' numpy.ndarray() must have a size of 3"
            self._mag_bias_variance = value
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
                "The 'mag_bias_variance' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._mag_bias_variance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def mag_bias_valid(self):
        """Message field 'mag_bias_valid'."""
        return self._mag_bias_valid

    @mag_bias_valid.setter
    def mag_bias_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mag_bias_valid' field must be of type 'bool'"
        self._mag_bias_valid = value

    @builtins.property
    def mag_bias_stable(self):
        """Message field 'mag_bias_stable'."""
        return self._mag_bias_stable

    @mag_bias_stable.setter
    def mag_bias_stable(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mag_bias_stable' field must be of type 'bool'"
        self._mag_bias_stable = value
