# generated from rosidl_generator_py/resource/_idl.py.em
# with input from fdds_messages:msg/Flocking.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Flocking(type):
    """Metaclass of message 'Flocking'."""

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
            module = import_type_support('fdds_messages')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'fdds_messages.msg.Flocking')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__flocking
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__flocking
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__flocking
            cls._TYPE_SUPPORT = module.type_support_msg__msg__flocking
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__flocking

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Flocking(metaclass=Metaclass_Flocking):
    """Message class 'Flocking'."""

    __slots__ = [
        '_cohesion_x',
        '_cohesion_y',
        '_alignment_x',
        '_alignment_y',
        '_separation_x',
        '_separation_y',
    ]

    _fields_and_field_types = {
        'cohesion_x': 'float',
        'cohesion_y': 'float',
        'alignment_x': 'float',
        'alignment_y': 'float',
        'separation_x': 'float',
        'separation_y': 'float',
    }

    SLOT_TYPES = (
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
        self.cohesion_x = kwargs.get('cohesion_x', float())
        self.cohesion_y = kwargs.get('cohesion_y', float())
        self.alignment_x = kwargs.get('alignment_x', float())
        self.alignment_y = kwargs.get('alignment_y', float())
        self.separation_x = kwargs.get('separation_x', float())
        self.separation_y = kwargs.get('separation_y', float())

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
        if self.cohesion_x != other.cohesion_x:
            return False
        if self.cohesion_y != other.cohesion_y:
            return False
        if self.alignment_x != other.alignment_x:
            return False
        if self.alignment_y != other.alignment_y:
            return False
        if self.separation_x != other.separation_x:
            return False
        if self.separation_y != other.separation_y:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def cohesion_x(self):
        """Message field 'cohesion_x'."""
        return self._cohesion_x

    @cohesion_x.setter
    def cohesion_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cohesion_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cohesion_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cohesion_x = value

    @builtins.property
    def cohesion_y(self):
        """Message field 'cohesion_y'."""
        return self._cohesion_y

    @cohesion_y.setter
    def cohesion_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cohesion_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cohesion_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cohesion_y = value

    @builtins.property
    def alignment_x(self):
        """Message field 'alignment_x'."""
        return self._alignment_x

    @alignment_x.setter
    def alignment_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alignment_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alignment_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alignment_x = value

    @builtins.property
    def alignment_y(self):
        """Message field 'alignment_y'."""
        return self._alignment_y

    @alignment_y.setter
    def alignment_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'alignment_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'alignment_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._alignment_y = value

    @builtins.property
    def separation_x(self):
        """Message field 'separation_x'."""
        return self._separation_x

    @separation_x.setter
    def separation_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'separation_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'separation_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._separation_x = value

    @builtins.property
    def separation_y(self):
        """Message field 'separation_y'."""
        return self._separation_y

    @separation_y.setter
    def separation_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'separation_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'separation_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._separation_y = value
