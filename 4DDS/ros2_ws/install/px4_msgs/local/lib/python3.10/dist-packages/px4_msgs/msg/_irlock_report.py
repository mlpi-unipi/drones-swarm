# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/IrlockReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_IrlockReport(type):
    """Metaclass of message 'IrlockReport'."""

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
                'px4_msgs.msg.IrlockReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__irlock_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__irlock_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__irlock_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__irlock_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__irlock_report

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class IrlockReport(metaclass=Metaclass_IrlockReport):
    """Message class 'IrlockReport'."""

    __slots__ = [
        '_timestamp',
        '_signature',
        '_pos_x',
        '_pos_y',
        '_size_x',
        '_size_y',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'signature': 'uint16',
        'pos_x': 'float',
        'pos_y': 'float',
        'size_x': 'float',
        'size_y': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
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
        self.signature = kwargs.get('signature', int())
        self.pos_x = kwargs.get('pos_x', float())
        self.pos_y = kwargs.get('pos_y', float())
        self.size_x = kwargs.get('size_x', float())
        self.size_y = kwargs.get('size_y', float())

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
        if self.signature != other.signature:
            return False
        if self.pos_x != other.pos_x:
            return False
        if self.pos_y != other.pos_y:
            return False
        if self.size_x != other.size_x:
            return False
        if self.size_y != other.size_y:
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
    def signature(self):
        """Message field 'signature'."""
        return self._signature

    @signature.setter
    def signature(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'signature' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'signature' field must be an unsigned integer in [0, 65535]"
        self._signature = value

    @builtins.property
    def pos_x(self):
        """Message field 'pos_x'."""
        return self._pos_x

    @pos_x.setter
    def pos_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos_x = value

    @builtins.property
    def pos_y(self):
        """Message field 'pos_y'."""
        return self._pos_y

    @pos_y.setter
    def pos_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos_y = value

    @builtins.property
    def size_x(self):
        """Message field 'size_x'."""
        return self._size_x

    @size_x.setter
    def size_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'size_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'size_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._size_x = value

    @builtins.property
    def size_y(self):
        """Message field 'size_y'."""
        return self._size_y

    @size_y.setter
    def size_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'size_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'size_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._size_y = value
