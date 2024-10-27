# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/Wind.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Wind(type):
    """Metaclass of message 'Wind'."""

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
                'px4_msgs.msg.Wind')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__wind
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__wind
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__wind
            cls._TYPE_SUPPORT = module.type_support_msg__msg__wind
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__wind

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Wind(metaclass=Metaclass_Wind):
    """Message class 'Wind'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_windspeed_north',
        '_windspeed_east',
        '_variance_north',
        '_variance_east',
        '_tas_innov',
        '_tas_innov_var',
        '_beta_innov',
        '_beta_innov_var',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'windspeed_north': 'float',
        'windspeed_east': 'float',
        'variance_north': 'float',
        'variance_east': 'float',
        'tas_innov': 'float',
        'tas_innov_var': 'float',
        'beta_innov': 'float',
        'beta_innov_var': 'float',
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.windspeed_north = kwargs.get('windspeed_north', float())
        self.windspeed_east = kwargs.get('windspeed_east', float())
        self.variance_north = kwargs.get('variance_north', float())
        self.variance_east = kwargs.get('variance_east', float())
        self.tas_innov = kwargs.get('tas_innov', float())
        self.tas_innov_var = kwargs.get('tas_innov_var', float())
        self.beta_innov = kwargs.get('beta_innov', float())
        self.beta_innov_var = kwargs.get('beta_innov_var', float())

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
        if self.windspeed_north != other.windspeed_north:
            return False
        if self.windspeed_east != other.windspeed_east:
            return False
        if self.variance_north != other.variance_north:
            return False
        if self.variance_east != other.variance_east:
            return False
        if self.tas_innov != other.tas_innov:
            return False
        if self.tas_innov_var != other.tas_innov_var:
            return False
        if self.beta_innov != other.beta_innov:
            return False
        if self.beta_innov_var != other.beta_innov_var:
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
    def windspeed_north(self):
        """Message field 'windspeed_north'."""
        return self._windspeed_north

    @windspeed_north.setter
    def windspeed_north(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'windspeed_north' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'windspeed_north' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._windspeed_north = value

    @builtins.property
    def windspeed_east(self):
        """Message field 'windspeed_east'."""
        return self._windspeed_east

    @windspeed_east.setter
    def windspeed_east(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'windspeed_east' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'windspeed_east' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._windspeed_east = value

    @builtins.property
    def variance_north(self):
        """Message field 'variance_north'."""
        return self._variance_north

    @variance_north.setter
    def variance_north(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'variance_north' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'variance_north' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._variance_north = value

    @builtins.property
    def variance_east(self):
        """Message field 'variance_east'."""
        return self._variance_east

    @variance_east.setter
    def variance_east(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'variance_east' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'variance_east' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._variance_east = value

    @builtins.property
    def tas_innov(self):
        """Message field 'tas_innov'."""
        return self._tas_innov

    @tas_innov.setter
    def tas_innov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tas_innov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tas_innov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tas_innov = value

    @builtins.property
    def tas_innov_var(self):
        """Message field 'tas_innov_var'."""
        return self._tas_innov_var

    @tas_innov_var.setter
    def tas_innov_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tas_innov_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tas_innov_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tas_innov_var = value

    @builtins.property
    def beta_innov(self):
        """Message field 'beta_innov'."""
        return self._beta_innov

    @beta_innov.setter
    def beta_innov(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'beta_innov' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'beta_innov' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._beta_innov = value

    @builtins.property
    def beta_innov_var(self):
        """Message field 'beta_innov_var'."""
        return self._beta_innov_var

    @beta_innov_var.setter
    def beta_innov_var(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'beta_innov_var' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'beta_innov_var' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._beta_innov_var = value
