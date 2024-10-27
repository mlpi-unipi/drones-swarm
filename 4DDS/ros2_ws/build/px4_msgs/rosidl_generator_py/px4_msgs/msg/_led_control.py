# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/LedControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LedControl(type):
    """Metaclass of message 'LedControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'COLOR_OFF': 0,
        'COLOR_RED': 1,
        'COLOR_GREEN': 2,
        'COLOR_BLUE': 3,
        'COLOR_YELLOW': 4,
        'COLOR_PURPLE': 5,
        'COLOR_AMBER': 6,
        'COLOR_CYAN': 7,
        'COLOR_WHITE': 8,
        'MODE_OFF': 0,
        'MODE_ON': 1,
        'MODE_DISABLED': 2,
        'MODE_BLINK_SLOW': 3,
        'MODE_BLINK_NORMAL': 4,
        'MODE_BLINK_FAST': 5,
        'MODE_BREATHE': 6,
        'MODE_FLASH': 7,
        'MAX_PRIORITY': 2,
        'ORB_QUEUE_LENGTH': 8,
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
                'px4_msgs.msg.LedControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__led_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__led_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__led_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__led_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__led_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'COLOR_OFF': cls.__constants['COLOR_OFF'],
            'COLOR_RED': cls.__constants['COLOR_RED'],
            'COLOR_GREEN': cls.__constants['COLOR_GREEN'],
            'COLOR_BLUE': cls.__constants['COLOR_BLUE'],
            'COLOR_YELLOW': cls.__constants['COLOR_YELLOW'],
            'COLOR_PURPLE': cls.__constants['COLOR_PURPLE'],
            'COLOR_AMBER': cls.__constants['COLOR_AMBER'],
            'COLOR_CYAN': cls.__constants['COLOR_CYAN'],
            'COLOR_WHITE': cls.__constants['COLOR_WHITE'],
            'MODE_OFF': cls.__constants['MODE_OFF'],
            'MODE_ON': cls.__constants['MODE_ON'],
            'MODE_DISABLED': cls.__constants['MODE_DISABLED'],
            'MODE_BLINK_SLOW': cls.__constants['MODE_BLINK_SLOW'],
            'MODE_BLINK_NORMAL': cls.__constants['MODE_BLINK_NORMAL'],
            'MODE_BLINK_FAST': cls.__constants['MODE_BLINK_FAST'],
            'MODE_BREATHE': cls.__constants['MODE_BREATHE'],
            'MODE_FLASH': cls.__constants['MODE_FLASH'],
            'MAX_PRIORITY': cls.__constants['MAX_PRIORITY'],
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def COLOR_OFF(self):
        """Message constant 'COLOR_OFF'."""
        return Metaclass_LedControl.__constants['COLOR_OFF']

    @property
    def COLOR_RED(self):
        """Message constant 'COLOR_RED'."""
        return Metaclass_LedControl.__constants['COLOR_RED']

    @property
    def COLOR_GREEN(self):
        """Message constant 'COLOR_GREEN'."""
        return Metaclass_LedControl.__constants['COLOR_GREEN']

    @property
    def COLOR_BLUE(self):
        """Message constant 'COLOR_BLUE'."""
        return Metaclass_LedControl.__constants['COLOR_BLUE']

    @property
    def COLOR_YELLOW(self):
        """Message constant 'COLOR_YELLOW'."""
        return Metaclass_LedControl.__constants['COLOR_YELLOW']

    @property
    def COLOR_PURPLE(self):
        """Message constant 'COLOR_PURPLE'."""
        return Metaclass_LedControl.__constants['COLOR_PURPLE']

    @property
    def COLOR_AMBER(self):
        """Message constant 'COLOR_AMBER'."""
        return Metaclass_LedControl.__constants['COLOR_AMBER']

    @property
    def COLOR_CYAN(self):
        """Message constant 'COLOR_CYAN'."""
        return Metaclass_LedControl.__constants['COLOR_CYAN']

    @property
    def COLOR_WHITE(self):
        """Message constant 'COLOR_WHITE'."""
        return Metaclass_LedControl.__constants['COLOR_WHITE']

    @property
    def MODE_OFF(self):
        """Message constant 'MODE_OFF'."""
        return Metaclass_LedControl.__constants['MODE_OFF']

    @property
    def MODE_ON(self):
        """Message constant 'MODE_ON'."""
        return Metaclass_LedControl.__constants['MODE_ON']

    @property
    def MODE_DISABLED(self):
        """Message constant 'MODE_DISABLED'."""
        return Metaclass_LedControl.__constants['MODE_DISABLED']

    @property
    def MODE_BLINK_SLOW(self):
        """Message constant 'MODE_BLINK_SLOW'."""
        return Metaclass_LedControl.__constants['MODE_BLINK_SLOW']

    @property
    def MODE_BLINK_NORMAL(self):
        """Message constant 'MODE_BLINK_NORMAL'."""
        return Metaclass_LedControl.__constants['MODE_BLINK_NORMAL']

    @property
    def MODE_BLINK_FAST(self):
        """Message constant 'MODE_BLINK_FAST'."""
        return Metaclass_LedControl.__constants['MODE_BLINK_FAST']

    @property
    def MODE_BREATHE(self):
        """Message constant 'MODE_BREATHE'."""
        return Metaclass_LedControl.__constants['MODE_BREATHE']

    @property
    def MODE_FLASH(self):
        """Message constant 'MODE_FLASH'."""
        return Metaclass_LedControl.__constants['MODE_FLASH']

    @property
    def MAX_PRIORITY(self):
        """Message constant 'MAX_PRIORITY'."""
        return Metaclass_LedControl.__constants['MAX_PRIORITY']

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_LedControl.__constants['ORB_QUEUE_LENGTH']


class LedControl(metaclass=Metaclass_LedControl):
    """
    Message class 'LedControl'.

    Constants:
      COLOR_OFF
      COLOR_RED
      COLOR_GREEN
      COLOR_BLUE
      COLOR_YELLOW
      COLOR_PURPLE
      COLOR_AMBER
      COLOR_CYAN
      COLOR_WHITE
      MODE_OFF
      MODE_ON
      MODE_DISABLED
      MODE_BLINK_SLOW
      MODE_BLINK_NORMAL
      MODE_BLINK_FAST
      MODE_BREATHE
      MODE_FLASH
      MAX_PRIORITY
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_led_mask',
        '_color',
        '_mode',
        '_num_blinks',
        '_priority',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'led_mask': 'uint8',
        'color': 'uint8',
        'mode': 'uint8',
        'num_blinks': 'uint8',
        'priority': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
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
        self.led_mask = kwargs.get('led_mask', int())
        self.color = kwargs.get('color', int())
        self.mode = kwargs.get('mode', int())
        self.num_blinks = kwargs.get('num_blinks', int())
        self.priority = kwargs.get('priority', int())

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
        if self.led_mask != other.led_mask:
            return False
        if self.color != other.color:
            return False
        if self.mode != other.mode:
            return False
        if self.num_blinks != other.num_blinks:
            return False
        if self.priority != other.priority:
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
    def led_mask(self):
        """Message field 'led_mask'."""
        return self._led_mask

    @led_mask.setter
    def led_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'led_mask' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'led_mask' field must be an unsigned integer in [0, 255]"
        self._led_mask = value

    @builtins.property
    def color(self):
        """Message field 'color'."""
        return self._color

    @color.setter
    def color(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'color' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'color' field must be an unsigned integer in [0, 255]"
        self._color = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value

    @builtins.property
    def num_blinks(self):
        """Message field 'num_blinks'."""
        return self._num_blinks

    @num_blinks.setter
    def num_blinks(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_blinks' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_blinks' field must be an unsigned integer in [0, 255]"
        self._num_blinks = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'priority' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'priority' field must be an unsigned integer in [0, 255]"
        self._priority = value
