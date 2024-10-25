# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleOpticalFlow.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'pixel_flow'
# Member 'delta_angle'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleOpticalFlow(type):
    """Metaclass of message 'VehicleOpticalFlow'."""

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
                'px4_msgs.msg.VehicleOpticalFlow')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_optical_flow
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_optical_flow
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_optical_flow
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_optical_flow
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_optical_flow

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class VehicleOpticalFlow(metaclass=Metaclass_VehicleOpticalFlow):
    """Message class 'VehicleOpticalFlow'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_device_id',
        '_pixel_flow',
        '_delta_angle',
        '_distance_m',
        '_integration_timespan_us',
        '_quality',
        '_max_flow_rate',
        '_min_ground_distance',
        '_max_ground_distance',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'device_id': 'uint32',
        'pixel_flow': 'float[2]',
        'delta_angle': 'float[3]',
        'distance_m': 'float',
        'integration_timespan_us': 'uint32',
        'quality': 'uint8',
        'max_flow_rate': 'float',
        'min_ground_distance': 'float',
        'max_ground_distance': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 2),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.device_id = kwargs.get('device_id', int())
        if 'pixel_flow' not in kwargs:
            self.pixel_flow = numpy.zeros(2, dtype=numpy.float32)
        else:
            self.pixel_flow = numpy.array(kwargs.get('pixel_flow'), dtype=numpy.float32)
            assert self.pixel_flow.shape == (2, )
        if 'delta_angle' not in kwargs:
            self.delta_angle = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.delta_angle = numpy.array(kwargs.get('delta_angle'), dtype=numpy.float32)
            assert self.delta_angle.shape == (3, )
        self.distance_m = kwargs.get('distance_m', float())
        self.integration_timespan_us = kwargs.get('integration_timespan_us', int())
        self.quality = kwargs.get('quality', int())
        self.max_flow_rate = kwargs.get('max_flow_rate', float())
        self.min_ground_distance = kwargs.get('min_ground_distance', float())
        self.max_ground_distance = kwargs.get('max_ground_distance', float())

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
        if self.device_id != other.device_id:
            return False
        if all(self.pixel_flow != other.pixel_flow):
            return False
        if all(self.delta_angle != other.delta_angle):
            return False
        if self.distance_m != other.distance_m:
            return False
        if self.integration_timespan_us != other.integration_timespan_us:
            return False
        if self.quality != other.quality:
            return False
        if self.max_flow_rate != other.max_flow_rate:
            return False
        if self.min_ground_distance != other.min_ground_distance:
            return False
        if self.max_ground_distance != other.max_ground_distance:
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
    def pixel_flow(self):
        """Message field 'pixel_flow'."""
        return self._pixel_flow

    @pixel_flow.setter
    def pixel_flow(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'pixel_flow' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 2, \
                "The 'pixel_flow' numpy.ndarray() must have a size of 2"
            self._pixel_flow = value
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
                "The 'pixel_flow' field must be a set or sequence with length 2 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._pixel_flow = numpy.array(value, dtype=numpy.float32)

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
    def distance_m(self):
        """Message field 'distance_m'."""
        return self._distance_m

    @distance_m.setter
    def distance_m(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'distance_m' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'distance_m' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._distance_m = value

    @builtins.property
    def integration_timespan_us(self):
        """Message field 'integration_timespan_us'."""
        return self._integration_timespan_us

    @integration_timespan_us.setter
    def integration_timespan_us(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'integration_timespan_us' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'integration_timespan_us' field must be an unsigned integer in [0, 4294967295]"
        self._integration_timespan_us = value

    @builtins.property
    def quality(self):
        """Message field 'quality'."""
        return self._quality

    @quality.setter
    def quality(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'quality' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'quality' field must be an unsigned integer in [0, 255]"
        self._quality = value

    @builtins.property
    def max_flow_rate(self):
        """Message field 'max_flow_rate'."""
        return self._max_flow_rate

    @max_flow_rate.setter
    def max_flow_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_flow_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_flow_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_flow_rate = value

    @builtins.property
    def min_ground_distance(self):
        """Message field 'min_ground_distance'."""
        return self._min_ground_distance

    @min_ground_distance.setter
    def min_ground_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'min_ground_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'min_ground_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._min_ground_distance = value

    @builtins.property
    def max_ground_distance(self):
        """Message field 'max_ground_distance'."""
        return self._max_ground_distance

    @max_ground_distance.setter
    def max_ground_distance(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_ground_distance' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'max_ground_distance' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._max_ground_distance = value
