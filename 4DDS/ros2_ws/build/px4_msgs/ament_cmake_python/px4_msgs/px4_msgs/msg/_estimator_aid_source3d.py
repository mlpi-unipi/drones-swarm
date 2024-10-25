# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/EstimatorAidSource3d.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'observation'
# Member 'observation_variance'
# Member 'innovation'
# Member 'innovation_variance'
# Member 'test_ratio'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EstimatorAidSource3d(type):
    """Metaclass of message 'EstimatorAidSource3d'."""

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
                'px4_msgs.msg.EstimatorAidSource3d')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__estimator_aid_source3d
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__estimator_aid_source3d
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__estimator_aid_source3d
            cls._TYPE_SUPPORT = module.type_support_msg__msg__estimator_aid_source3d
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__estimator_aid_source3d

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class EstimatorAidSource3d(metaclass=Metaclass_EstimatorAidSource3d):
    """Message class 'EstimatorAidSource3d'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_estimator_instance',
        '_device_id',
        '_time_last_fuse',
        '_observation',
        '_observation_variance',
        '_innovation',
        '_innovation_variance',
        '_test_ratio',
        '_innovation_rejected',
        '_fused',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'estimator_instance': 'uint8',
        'device_id': 'uint32',
        'time_last_fuse': 'uint64',
        'observation': 'float[3]',
        'observation_variance': 'float[3]',
        'innovation': 'float[3]',
        'innovation_variance': 'float[3]',
        'test_ratio': 'float[3]',
        'innovation_rejected': 'boolean',
        'fused': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
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
        self.estimator_instance = kwargs.get('estimator_instance', int())
        self.device_id = kwargs.get('device_id', int())
        self.time_last_fuse = kwargs.get('time_last_fuse', int())
        if 'observation' not in kwargs:
            self.observation = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.observation = numpy.array(kwargs.get('observation'), dtype=numpy.float32)
            assert self.observation.shape == (3, )
        if 'observation_variance' not in kwargs:
            self.observation_variance = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.observation_variance = numpy.array(kwargs.get('observation_variance'), dtype=numpy.float32)
            assert self.observation_variance.shape == (3, )
        if 'innovation' not in kwargs:
            self.innovation = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.innovation = numpy.array(kwargs.get('innovation'), dtype=numpy.float32)
            assert self.innovation.shape == (3, )
        if 'innovation_variance' not in kwargs:
            self.innovation_variance = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.innovation_variance = numpy.array(kwargs.get('innovation_variance'), dtype=numpy.float32)
            assert self.innovation_variance.shape == (3, )
        if 'test_ratio' not in kwargs:
            self.test_ratio = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.test_ratio = numpy.array(kwargs.get('test_ratio'), dtype=numpy.float32)
            assert self.test_ratio.shape == (3, )
        self.innovation_rejected = kwargs.get('innovation_rejected', bool())
        self.fused = kwargs.get('fused', bool())

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
        if self.estimator_instance != other.estimator_instance:
            return False
        if self.device_id != other.device_id:
            return False
        if self.time_last_fuse != other.time_last_fuse:
            return False
        if all(self.observation != other.observation):
            return False
        if all(self.observation_variance != other.observation_variance):
            return False
        if all(self.innovation != other.innovation):
            return False
        if all(self.innovation_variance != other.innovation_variance):
            return False
        if all(self.test_ratio != other.test_ratio):
            return False
        if self.innovation_rejected != other.innovation_rejected:
            return False
        if self.fused != other.fused:
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
    def estimator_instance(self):
        """Message field 'estimator_instance'."""
        return self._estimator_instance

    @estimator_instance.setter
    def estimator_instance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'estimator_instance' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'estimator_instance' field must be an unsigned integer in [0, 255]"
        self._estimator_instance = value

    @builtins.property
    def device_id(self):
        """Message field 'device_id'."""
        return self._device_id

    @device_id.setter
    def device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'device_id' field must be an unsigned integer in [0, 4294967295]"
        self._device_id = value

    @builtins.property
    def time_last_fuse(self):
        """Message field 'time_last_fuse'."""
        return self._time_last_fuse

    @time_last_fuse.setter
    def time_last_fuse(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_last_fuse' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'time_last_fuse' field must be an unsigned integer in [0, 18446744073709551615]"
        self._time_last_fuse = value

    @builtins.property
    def observation(self):
        """Message field 'observation'."""
        return self._observation

    @observation.setter
    def observation(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'observation' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'observation' numpy.ndarray() must have a size of 3"
            self._observation = value
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
                "The 'observation' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._observation = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def observation_variance(self):
        """Message field 'observation_variance'."""
        return self._observation_variance

    @observation_variance.setter
    def observation_variance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'observation_variance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'observation_variance' numpy.ndarray() must have a size of 3"
            self._observation_variance = value
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
                "The 'observation_variance' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._observation_variance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def innovation(self):
        """Message field 'innovation'."""
        return self._innovation

    @innovation.setter
    def innovation(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'innovation' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'innovation' numpy.ndarray() must have a size of 3"
            self._innovation = value
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
                "The 'innovation' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._innovation = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def innovation_variance(self):
        """Message field 'innovation_variance'."""
        return self._innovation_variance

    @innovation_variance.setter
    def innovation_variance(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'innovation_variance' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'innovation_variance' numpy.ndarray() must have a size of 3"
            self._innovation_variance = value
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
                "The 'innovation_variance' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._innovation_variance = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def test_ratio(self):
        """Message field 'test_ratio'."""
        return self._test_ratio

    @test_ratio.setter
    def test_ratio(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'test_ratio' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'test_ratio' numpy.ndarray() must have a size of 3"
            self._test_ratio = value
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
                "The 'test_ratio' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._test_ratio = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def innovation_rejected(self):
        """Message field 'innovation_rejected'."""
        return self._innovation_rejected

    @innovation_rejected.setter
    def innovation_rejected(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'innovation_rejected' field must be of type 'bool'"
        self._innovation_rejected = value

    @builtins.property
    def fused(self):
        """Message field 'fused'."""
        return self._fused

    @fused.setter
    def fused(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fused' field must be of type 'bool'"
        self._fused = value
