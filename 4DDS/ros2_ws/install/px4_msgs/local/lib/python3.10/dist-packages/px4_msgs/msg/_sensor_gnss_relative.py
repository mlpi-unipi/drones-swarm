# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SensorGnssRelative.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'position'
# Member 'position_accuracy'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorGnssRelative(type):
    """Metaclass of message 'SensorGnssRelative'."""

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
                'px4_msgs.msg.SensorGnssRelative')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensor_gnss_relative
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensor_gnss_relative
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensor_gnss_relative
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensor_gnss_relative
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensor_gnss_relative

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorGnssRelative(metaclass=Metaclass_SensorGnssRelative):
    """Message class 'SensorGnssRelative'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_device_id',
        '_time_utc_usec',
        '_reference_station_id',
        '_position',
        '_position_accuracy',
        '_heading',
        '_heading_accuracy',
        '_position_length',
        '_accuracy_length',
        '_gnss_fix_ok',
        '_differential_solution',
        '_relative_position_valid',
        '_carrier_solution_floating',
        '_carrier_solution_fixed',
        '_moving_base_mode',
        '_reference_position_miss',
        '_reference_observations_miss',
        '_heading_valid',
        '_relative_position_normalized',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'device_id': 'uint32',
        'time_utc_usec': 'uint64',
        'reference_station_id': 'uint16',
        'position': 'float[3]',
        'position_accuracy': 'float[3]',
        'heading': 'float',
        'heading_accuracy': 'float',
        'position_length': 'float',
        'accuracy_length': 'float',
        'gnss_fix_ok': 'boolean',
        'differential_solution': 'boolean',
        'relative_position_valid': 'boolean',
        'carrier_solution_floating': 'boolean',
        'carrier_solution_fixed': 'boolean',
        'moving_base_mode': 'boolean',
        'reference_position_miss': 'boolean',
        'reference_observations_miss': 'boolean',
        'heading_valid': 'boolean',
        'relative_position_normalized': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.device_id = kwargs.get('device_id', int())
        self.time_utc_usec = kwargs.get('time_utc_usec', int())
        self.reference_station_id = kwargs.get('reference_station_id', int())
        if 'position' not in kwargs:
            self.position = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.position = numpy.array(kwargs.get('position'), dtype=numpy.float32)
            assert self.position.shape == (3, )
        if 'position_accuracy' not in kwargs:
            self.position_accuracy = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.position_accuracy = numpy.array(kwargs.get('position_accuracy'), dtype=numpy.float32)
            assert self.position_accuracy.shape == (3, )
        self.heading = kwargs.get('heading', float())
        self.heading_accuracy = kwargs.get('heading_accuracy', float())
        self.position_length = kwargs.get('position_length', float())
        self.accuracy_length = kwargs.get('accuracy_length', float())
        self.gnss_fix_ok = kwargs.get('gnss_fix_ok', bool())
        self.differential_solution = kwargs.get('differential_solution', bool())
        self.relative_position_valid = kwargs.get('relative_position_valid', bool())
        self.carrier_solution_floating = kwargs.get('carrier_solution_floating', bool())
        self.carrier_solution_fixed = kwargs.get('carrier_solution_fixed', bool())
        self.moving_base_mode = kwargs.get('moving_base_mode', bool())
        self.reference_position_miss = kwargs.get('reference_position_miss', bool())
        self.reference_observations_miss = kwargs.get('reference_observations_miss', bool())
        self.heading_valid = kwargs.get('heading_valid', bool())
        self.relative_position_normalized = kwargs.get('relative_position_normalized', bool())

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
        if self.time_utc_usec != other.time_utc_usec:
            return False
        if self.reference_station_id != other.reference_station_id:
            return False
        if all(self.position != other.position):
            return False
        if all(self.position_accuracy != other.position_accuracy):
            return False
        if self.heading != other.heading:
            return False
        if self.heading_accuracy != other.heading_accuracy:
            return False
        if self.position_length != other.position_length:
            return False
        if self.accuracy_length != other.accuracy_length:
            return False
        if self.gnss_fix_ok != other.gnss_fix_ok:
            return False
        if self.differential_solution != other.differential_solution:
            return False
        if self.relative_position_valid != other.relative_position_valid:
            return False
        if self.carrier_solution_floating != other.carrier_solution_floating:
            return False
        if self.carrier_solution_fixed != other.carrier_solution_fixed:
            return False
        if self.moving_base_mode != other.moving_base_mode:
            return False
        if self.reference_position_miss != other.reference_position_miss:
            return False
        if self.reference_observations_miss != other.reference_observations_miss:
            return False
        if self.heading_valid != other.heading_valid:
            return False
        if self.relative_position_normalized != other.relative_position_normalized:
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
    def time_utc_usec(self):
        """Message field 'time_utc_usec'."""
        return self._time_utc_usec

    @time_utc_usec.setter
    def time_utc_usec(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_utc_usec' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'time_utc_usec' field must be an unsigned integer in [0, 18446744073709551615]"
        self._time_utc_usec = value

    @builtins.property
    def reference_station_id(self):
        """Message field 'reference_station_id'."""
        return self._reference_station_id

    @reference_station_id.setter
    def reference_station_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reference_station_id' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'reference_station_id' field must be an unsigned integer in [0, 65535]"
        self._reference_station_id = value

    @builtins.property
    def position(self):
        """Message field 'position'."""
        return self._position

    @position.setter
    def position(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'position' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'position' numpy.ndarray() must have a size of 3"
            self._position = value
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
                "The 'position' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._position = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def position_accuracy(self):
        """Message field 'position_accuracy'."""
        return self._position_accuracy

    @position_accuracy.setter
    def position_accuracy(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'position_accuracy' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'position_accuracy' numpy.ndarray() must have a size of 3"
            self._position_accuracy = value
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
                "The 'position_accuracy' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._position_accuracy = numpy.array(value, dtype=numpy.float32)

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
    def heading_accuracy(self):
        """Message field 'heading_accuracy'."""
        return self._heading_accuracy

    @heading_accuracy.setter
    def heading_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading_accuracy = value

    @builtins.property
    def position_length(self):
        """Message field 'position_length'."""
        return self._position_length

    @position_length.setter
    def position_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'position_length' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'position_length' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._position_length = value

    @builtins.property
    def accuracy_length(self):
        """Message field 'accuracy_length'."""
        return self._accuracy_length

    @accuracy_length.setter
    def accuracy_length(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accuracy_length' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accuracy_length' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accuracy_length = value

    @builtins.property
    def gnss_fix_ok(self):
        """Message field 'gnss_fix_ok'."""
        return self._gnss_fix_ok

    @gnss_fix_ok.setter
    def gnss_fix_ok(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'gnss_fix_ok' field must be of type 'bool'"
        self._gnss_fix_ok = value

    @builtins.property
    def differential_solution(self):
        """Message field 'differential_solution'."""
        return self._differential_solution

    @differential_solution.setter
    def differential_solution(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'differential_solution' field must be of type 'bool'"
        self._differential_solution = value

    @builtins.property
    def relative_position_valid(self):
        """Message field 'relative_position_valid'."""
        return self._relative_position_valid

    @relative_position_valid.setter
    def relative_position_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'relative_position_valid' field must be of type 'bool'"
        self._relative_position_valid = value

    @builtins.property
    def carrier_solution_floating(self):
        """Message field 'carrier_solution_floating'."""
        return self._carrier_solution_floating

    @carrier_solution_floating.setter
    def carrier_solution_floating(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'carrier_solution_floating' field must be of type 'bool'"
        self._carrier_solution_floating = value

    @builtins.property
    def carrier_solution_fixed(self):
        """Message field 'carrier_solution_fixed'."""
        return self._carrier_solution_fixed

    @carrier_solution_fixed.setter
    def carrier_solution_fixed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'carrier_solution_fixed' field must be of type 'bool'"
        self._carrier_solution_fixed = value

    @builtins.property
    def moving_base_mode(self):
        """Message field 'moving_base_mode'."""
        return self._moving_base_mode

    @moving_base_mode.setter
    def moving_base_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'moving_base_mode' field must be of type 'bool'"
        self._moving_base_mode = value

    @builtins.property
    def reference_position_miss(self):
        """Message field 'reference_position_miss'."""
        return self._reference_position_miss

    @reference_position_miss.setter
    def reference_position_miss(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reference_position_miss' field must be of type 'bool'"
        self._reference_position_miss = value

    @builtins.property
    def reference_observations_miss(self):
        """Message field 'reference_observations_miss'."""
        return self._reference_observations_miss

    @reference_observations_miss.setter
    def reference_observations_miss(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'reference_observations_miss' field must be of type 'bool'"
        self._reference_observations_miss = value

    @builtins.property
    def heading_valid(self):
        """Message field 'heading_valid'."""
        return self._heading_valid

    @heading_valid.setter
    def heading_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'heading_valid' field must be of type 'bool'"
        self._heading_valid = value

    @builtins.property
    def relative_position_normalized(self):
        """Message field 'relative_position_normalized'."""
        return self._relative_position_normalized

    @relative_position_normalized.setter
    def relative_position_normalized(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'relative_position_normalized' field must be of type 'bool'"
        self._relative_position_normalized = value
