# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/LandingGear.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LandingGear(type):
    """Metaclass of message 'LandingGear'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GEAR_UP': 1,
        'GEAR_DOWN': -1,
        'GEAR_KEEP': 0,
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
                'px4_msgs.msg.LandingGear')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__landing_gear
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__landing_gear
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__landing_gear
            cls._TYPE_SUPPORT = module.type_support_msg__msg__landing_gear
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__landing_gear

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GEAR_UP': cls.__constants['GEAR_UP'],
            'GEAR_DOWN': cls.__constants['GEAR_DOWN'],
            'GEAR_KEEP': cls.__constants['GEAR_KEEP'],
        }

    @property
    def GEAR_UP(self):
        """Message constant 'GEAR_UP'."""
        return Metaclass_LandingGear.__constants['GEAR_UP']

    @property
    def GEAR_DOWN(self):
        """Message constant 'GEAR_DOWN'."""
        return Metaclass_LandingGear.__constants['GEAR_DOWN']

    @property
    def GEAR_KEEP(self):
        """Message constant 'GEAR_KEEP'."""
        return Metaclass_LandingGear.__constants['GEAR_KEEP']


class LandingGear(metaclass=Metaclass_LandingGear):
    """
    Message class 'LandingGear'.

    Constants:
      GEAR_UP
      GEAR_DOWN
      GEAR_KEEP
    """

    __slots__ = [
        '_timestamp',
        '_landing_gear',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'landing_gear': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.landing_gear = kwargs.get('landing_gear', int())

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
        if self.landing_gear != other.landing_gear:
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
    def landing_gear(self):
        """Message field 'landing_gear'."""
        return self._landing_gear

    @landing_gear.setter
    def landing_gear(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'landing_gear' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'landing_gear' field must be an integer in [-128, 127]"
        self._landing_gear = value
