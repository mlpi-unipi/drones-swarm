# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/HoverThrustEstimate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HoverThrustEstimate(type):
    """Metaclass of message 'HoverThrustEstimate'."""

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
                'px4_msgs.msg.HoverThrustEstimate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__hover_thrust_estimate
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__hover_thrust_estimate
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__hover_thrust_estimate
            cls._TYPE_SUPPORT = module.type_support_msg__msg__hover_thrust_estimate
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__hover_thrust_estimate

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HoverThrustEstimate(metaclass=Metaclass_HoverThrustEstimate):
    """Message class 'HoverThrustEstimate'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_hover_thrust',
        '_hover_thrust_var',
        '_accel_innov',
        '_accel_innov_var',
        '_accel_innov_test_ratio',
        '_accel_noise_var',
        '_valid',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'hover_thrust': 'float',
        'hover_thrust_var': 'float',
        'accel_innov': 'float',
        'accel_innov_var': 'float',
        'accel_innov_test_ratio': 'float',
        'accel_noise_var': 'float',
        'valid': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.hover_thrust = kwargs.get('hover_thrust', float())
        self.hover_thrust_var = kwargs.get('hover_thrust_var', float())
        self.accel_innov = kwargs.get('accel_innov', float())
        self.accel_innov_var = kwargs.get('accel_innov_var', float())
        self.accel_innov_test_ratio = kwargs.get('accel_innov_test_ratio', float())
        self.accel_noise_var = kwargs.get('accel_noise_var', float())
        self.valid = kwargs.get('valid', bool())

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
        if self.hover_thrust != other.hover_thrust:
            return False
        if self.hover_thrust_var != other.hover_thrust_var:
            return False
        if self.accel_innov != other.accel_innov:
            return False
        if self.accel_innov_var != other.accel_innov_var:
            return False
        if self.accel_innov_test_ratio != other.accel_innov_test_ratio:
            return False
        if self.accel_noise_var != other.accel_noise_var:
            return False
        if self.valid != other.valid:
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
    def hover_thrust(self):
        """Message field 'hover_thrust'."""
        return self._hover_thrust

    @hover_thrust.setter
    def hover_thrust(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hover_thrust' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hover_thrust' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hover_thrust = value

    @builtins.property
    def hover_thrust_var(self):
        """Message field 'hover_thrust_var'."""
        return self._hover_thrust_var

    @hover_thrust_var.setter
    def hover_thrust_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hover_thrust_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hover_thrust_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hover_thrust_var = value

    @builtins.property
    def accel_innov(self):
        """Message field 'accel_innov'."""
        return self._accel_innov

    @accel_innov.setter
    def accel_innov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_innov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_innov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_innov = value

    @builtins.property
    def accel_innov_var(self):
        """Message field 'accel_innov_var'."""
        return self._accel_innov_var

    @accel_innov_var.setter
    def accel_innov_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_innov_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_innov_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_innov_var = value

    @builtins.property
    def accel_innov_test_ratio(self):
        """Message field 'accel_innov_test_ratio'."""
        return self._accel_innov_test_ratio

    @accel_innov_test_ratio.setter
    def accel_innov_test_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_innov_test_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_innov_test_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_innov_test_ratio = value

    @builtins.property
    def accel_noise_var(self):
        """Message field 'accel_noise_var'."""
        return self._accel_noise_var

    @accel_noise_var.setter
    def accel_noise_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'accel_noise_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'accel_noise_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._accel_noise_var = value

    @builtins.property
    def valid(self):
        """Message field 'valid'."""
        return self._valid

    @valid.setter
    def valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'valid' field must be of type 'bool'"
        self._valid = value
