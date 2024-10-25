# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/Airspeed.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Airspeed(type):
    """Metaclass of message 'Airspeed'."""

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
                'px4_msgs.msg.Airspeed')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__airspeed
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__airspeed
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__airspeed
            cls._TYPE_SUPPORT = module.type_support_msg__msg__airspeed
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__airspeed

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Airspeed(metaclass=Metaclass_Airspeed):
    """Message class 'Airspeed'."""

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_indicated_airspeed_m_s',
        '_true_airspeed_m_s',
        '_air_temperature_celsius',
        '_confidence',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'indicated_airspeed_m_s': 'float',
        'true_airspeed_m_s': 'float',
        'air_temperature_celsius': 'float',
        'confidence': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
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
        self.indicated_airspeed_m_s = kwargs.get('indicated_airspeed_m_s', float())
        self.true_airspeed_m_s = kwargs.get('true_airspeed_m_s', float())
        self.air_temperature_celsius = kwargs.get('air_temperature_celsius', float())
        self.confidence = kwargs.get('confidence', float())

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
        if self.indicated_airspeed_m_s != other.indicated_airspeed_m_s:
            return False
        if self.true_airspeed_m_s != other.true_airspeed_m_s:
            return False
        if self.air_temperature_celsius != other.air_temperature_celsius:
            return False
        if self.confidence != other.confidence:
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
    def indicated_airspeed_m_s(self):
        """Message field 'indicated_airspeed_m_s'."""
        return self._indicated_airspeed_m_s

    @indicated_airspeed_m_s.setter
    def indicated_airspeed_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'indicated_airspeed_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'indicated_airspeed_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._indicated_airspeed_m_s = value

    @builtins.property
    def true_airspeed_m_s(self):
        """Message field 'true_airspeed_m_s'."""
        return self._true_airspeed_m_s

    @true_airspeed_m_s.setter
    def true_airspeed_m_s(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'true_airspeed_m_s' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'true_airspeed_m_s' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._true_airspeed_m_s = value

    @builtins.property
    def air_temperature_celsius(self):
        """Message field 'air_temperature_celsius'."""
        return self._air_temperature_celsius

    @air_temperature_celsius.setter
    def air_temperature_celsius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'air_temperature_celsius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'air_temperature_celsius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._air_temperature_celsius = value

    @builtins.property
    def confidence(self):
        """Message field 'confidence'."""
        return self._confidence

    @confidence.setter
    def confidence(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'confidence' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'confidence' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._confidence = value
