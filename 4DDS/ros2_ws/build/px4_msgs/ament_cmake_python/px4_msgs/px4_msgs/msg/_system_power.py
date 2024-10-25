# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SystemPower.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'sensors3v3'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SystemPower(type):
    """Metaclass of message 'SystemPower'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BRICK1_VALID_SHIFTS': 0,
        'BRICK1_VALID_MASK': 1,
        'BRICK2_VALID_SHIFTS': 1,
        'BRICK2_VALID_MASK': 2,
        'BRICK3_VALID_SHIFTS': 2,
        'BRICK3_VALID_MASK': 4,
        'BRICK4_VALID_SHIFTS': 3,
        'BRICK4_VALID_MASK': 8,
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
                'px4_msgs.msg.SystemPower')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__system_power
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__system_power
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__system_power
            cls._TYPE_SUPPORT = module.type_support_msg__msg__system_power
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__system_power

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BRICK1_VALID_SHIFTS': cls.__constants['BRICK1_VALID_SHIFTS'],
            'BRICK1_VALID_MASK': cls.__constants['BRICK1_VALID_MASK'],
            'BRICK2_VALID_SHIFTS': cls.__constants['BRICK2_VALID_SHIFTS'],
            'BRICK2_VALID_MASK': cls.__constants['BRICK2_VALID_MASK'],
            'BRICK3_VALID_SHIFTS': cls.__constants['BRICK3_VALID_SHIFTS'],
            'BRICK3_VALID_MASK': cls.__constants['BRICK3_VALID_MASK'],
            'BRICK4_VALID_SHIFTS': cls.__constants['BRICK4_VALID_SHIFTS'],
            'BRICK4_VALID_MASK': cls.__constants['BRICK4_VALID_MASK'],
        }

    @property
    def BRICK1_VALID_SHIFTS(self):
        """Message constant 'BRICK1_VALID_SHIFTS'."""
        return Metaclass_SystemPower.__constants['BRICK1_VALID_SHIFTS']

    @property
    def BRICK1_VALID_MASK(self):
        """Message constant 'BRICK1_VALID_MASK'."""
        return Metaclass_SystemPower.__constants['BRICK1_VALID_MASK']

    @property
    def BRICK2_VALID_SHIFTS(self):
        """Message constant 'BRICK2_VALID_SHIFTS'."""
        return Metaclass_SystemPower.__constants['BRICK2_VALID_SHIFTS']

    @property
    def BRICK2_VALID_MASK(self):
        """Message constant 'BRICK2_VALID_MASK'."""
        return Metaclass_SystemPower.__constants['BRICK2_VALID_MASK']

    @property
    def BRICK3_VALID_SHIFTS(self):
        """Message constant 'BRICK3_VALID_SHIFTS'."""
        return Metaclass_SystemPower.__constants['BRICK3_VALID_SHIFTS']

    @property
    def BRICK3_VALID_MASK(self):
        """Message constant 'BRICK3_VALID_MASK'."""
        return Metaclass_SystemPower.__constants['BRICK3_VALID_MASK']

    @property
    def BRICK4_VALID_SHIFTS(self):
        """Message constant 'BRICK4_VALID_SHIFTS'."""
        return Metaclass_SystemPower.__constants['BRICK4_VALID_SHIFTS']

    @property
    def BRICK4_VALID_MASK(self):
        """Message constant 'BRICK4_VALID_MASK'."""
        return Metaclass_SystemPower.__constants['BRICK4_VALID_MASK']


class SystemPower(metaclass=Metaclass_SystemPower):
    """
    Message class 'SystemPower'.

    Constants:
      BRICK1_VALID_SHIFTS
      BRICK1_VALID_MASK
      BRICK2_VALID_SHIFTS
      BRICK2_VALID_MASK
      BRICK3_VALID_SHIFTS
      BRICK3_VALID_MASK
      BRICK4_VALID_SHIFTS
      BRICK4_VALID_MASK
    """

    __slots__ = [
        '_timestamp',
        '_voltage5v_v',
        '_sensors3v3',
        '_sensors3v3_valid',
        '_usb_connected',
        '_brick_valid',
        '_usb_valid',
        '_servo_valid',
        '_periph_5v_oc',
        '_hipower_5v_oc',
        '_comp_5v_valid',
        '_can1_gps1_5v_valid',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'voltage5v_v': 'float',
        'sensors3v3': 'float[4]',
        'sensors3v3_valid': 'uint8',
        'usb_connected': 'uint8',
        'brick_valid': 'uint8',
        'usb_valid': 'uint8',
        'servo_valid': 'uint8',
        'periph_5v_oc': 'uint8',
        'hipower_5v_oc': 'uint8',
        'comp_5v_valid': 'uint8',
        'can1_gps1_5v_valid': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.voltage5v_v = kwargs.get('voltage5v_v', float())
        if 'sensors3v3' not in kwargs:
            self.sensors3v3 = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.sensors3v3 = numpy.array(kwargs.get('sensors3v3'), dtype=numpy.float32)
            assert self.sensors3v3.shape == (4, )
        self.sensors3v3_valid = kwargs.get('sensors3v3_valid', int())
        self.usb_connected = kwargs.get('usb_connected', int())
        self.brick_valid = kwargs.get('brick_valid', int())
        self.usb_valid = kwargs.get('usb_valid', int())
        self.servo_valid = kwargs.get('servo_valid', int())
        self.periph_5v_oc = kwargs.get('periph_5v_oc', int())
        self.hipower_5v_oc = kwargs.get('hipower_5v_oc', int())
        self.comp_5v_valid = kwargs.get('comp_5v_valid', int())
        self.can1_gps1_5v_valid = kwargs.get('can1_gps1_5v_valid', int())

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
        if self.voltage5v_v != other.voltage5v_v:
            return False
        if all(self.sensors3v3 != other.sensors3v3):
            return False
        if self.sensors3v3_valid != other.sensors3v3_valid:
            return False
        if self.usb_connected != other.usb_connected:
            return False
        if self.brick_valid != other.brick_valid:
            return False
        if self.usb_valid != other.usb_valid:
            return False
        if self.servo_valid != other.servo_valid:
            return False
        if self.periph_5v_oc != other.periph_5v_oc:
            return False
        if self.hipower_5v_oc != other.hipower_5v_oc:
            return False
        if self.comp_5v_valid != other.comp_5v_valid:
            return False
        if self.can1_gps1_5v_valid != other.can1_gps1_5v_valid:
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
    def voltage5v_v(self):
        """Message field 'voltage5v_v'."""
        return self._voltage5v_v

    @voltage5v_v.setter
    def voltage5v_v(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'voltage5v_v' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'voltage5v_v' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._voltage5v_v = value

    @builtins.property
    def sensors3v3(self):
        """Message field 'sensors3v3'."""
        return self._sensors3v3

    @sensors3v3.setter
    def sensors3v3(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'sensors3v3' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'sensors3v3' numpy.ndarray() must have a size of 4"
            self._sensors3v3 = value
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
                 len(value) == 4 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'sensors3v3' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._sensors3v3 = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def sensors3v3_valid(self):
        """Message field 'sensors3v3_valid'."""
        return self._sensors3v3_valid

    @sensors3v3_valid.setter
    def sensors3v3_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sensors3v3_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'sensors3v3_valid' field must be an unsigned integer in [0, 255]"
        self._sensors3v3_valid = value

    @builtins.property
    def usb_connected(self):
        """Message field 'usb_connected'."""
        return self._usb_connected

    @usb_connected.setter
    def usb_connected(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'usb_connected' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'usb_connected' field must be an unsigned integer in [0, 255]"
        self._usb_connected = value

    @builtins.property
    def brick_valid(self):
        """Message field 'brick_valid'."""
        return self._brick_valid

    @brick_valid.setter
    def brick_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'brick_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'brick_valid' field must be an unsigned integer in [0, 255]"
        self._brick_valid = value

    @builtins.property
    def usb_valid(self):
        """Message field 'usb_valid'."""
        return self._usb_valid

    @usb_valid.setter
    def usb_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'usb_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'usb_valid' field must be an unsigned integer in [0, 255]"
        self._usb_valid = value

    @builtins.property
    def servo_valid(self):
        """Message field 'servo_valid'."""
        return self._servo_valid

    @servo_valid.setter
    def servo_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'servo_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'servo_valid' field must be an unsigned integer in [0, 255]"
        self._servo_valid = value

    @builtins.property
    def periph_5v_oc(self):
        """Message field 'periph_5v_oc'."""
        return self._periph_5v_oc

    @periph_5v_oc.setter
    def periph_5v_oc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'periph_5v_oc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'periph_5v_oc' field must be an unsigned integer in [0, 255]"
        self._periph_5v_oc = value

    @builtins.property
    def hipower_5v_oc(self):
        """Message field 'hipower_5v_oc'."""
        return self._hipower_5v_oc

    @hipower_5v_oc.setter
    def hipower_5v_oc(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'hipower_5v_oc' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'hipower_5v_oc' field must be an unsigned integer in [0, 255]"
        self._hipower_5v_oc = value

    @builtins.property
    def comp_5v_valid(self):
        """Message field 'comp_5v_valid'."""
        return self._comp_5v_valid

    @comp_5v_valid.setter
    def comp_5v_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'comp_5v_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'comp_5v_valid' field must be an unsigned integer in [0, 255]"
        self._comp_5v_valid = value

    @builtins.property
    def can1_gps1_5v_valid(self):
        """Message field 'can1_gps1_5v_valid'."""
        return self._can1_gps1_5v_valid

    @can1_gps1_5v_valid.setter
    def can1_gps1_5v_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can1_gps1_5v_valid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'can1_gps1_5v_valid' field must be an unsigned integer in [0, 255]"
        self._can1_gps1_5v_valid = value
