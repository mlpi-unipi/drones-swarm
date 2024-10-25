# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/Rpm.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Rpm(type):
    """Metaclass of message 'Rpm'."""

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
                'px4_msgs.msg.Rpm')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rpm
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rpm
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rpm
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rpm
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rpm

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Rpm(metaclass=Metaclass_Rpm):
    """Message class 'Rpm'."""

    __slots__ = [
        '_timestamp',
        '_indicated_frequency_rpm',
        '_estimated_accurancy_rpm',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'indicated_frequency_rpm': 'float',
        'estimated_accurancy_rpm': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.indicated_frequency_rpm = kwargs.get('indicated_frequency_rpm', float())
        self.estimated_accurancy_rpm = kwargs.get('estimated_accurancy_rpm', float())

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
        if self.indicated_frequency_rpm != other.indicated_frequency_rpm:
            return False
        if self.estimated_accurancy_rpm != other.estimated_accurancy_rpm:
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
    def indicated_frequency_rpm(self):
        """Message field 'indicated_frequency_rpm'."""
        return self._indicated_frequency_rpm

    @indicated_frequency_rpm.setter
    def indicated_frequency_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'indicated_frequency_rpm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'indicated_frequency_rpm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._indicated_frequency_rpm = value

    @builtins.property
    def estimated_accurancy_rpm(self):
        """Message field 'estimated_accurancy_rpm'."""
        return self._estimated_accurancy_rpm

    @estimated_accurancy_rpm.setter
    def estimated_accurancy_rpm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'estimated_accurancy_rpm' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'estimated_accurancy_rpm' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._estimated_accurancy_rpm = value
