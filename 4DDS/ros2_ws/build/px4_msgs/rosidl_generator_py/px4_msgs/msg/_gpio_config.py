# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/GpioConfig.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GpioConfig(type):
    """Metaclass of message 'GpioConfig'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'INPUT': 0,
        'OUTPUT': 1,
        'PULLUP': 16,
        'PULLDOWN': 32,
        'OPENDRAIN': 256,
        'INPUT_FLOATING': 0,
        'INPUT_PULLUP': 16,
        'INPUT_PULLDOWN': 32,
        'OUTPUT_PUSHPULL': 0,
        'OUTPUT_OPENDRAIN': 256,
        'OUTPUT_OPENDRAIN_PULLUP': 272,
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
                'px4_msgs.msg.GpioConfig')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gpio_config
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gpio_config
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gpio_config
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gpio_config
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gpio_config

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'INPUT': cls.__constants['INPUT'],
            'OUTPUT': cls.__constants['OUTPUT'],
            'PULLUP': cls.__constants['PULLUP'],
            'PULLDOWN': cls.__constants['PULLDOWN'],
            'OPENDRAIN': cls.__constants['OPENDRAIN'],
            'INPUT_FLOATING': cls.__constants['INPUT_FLOATING'],
            'INPUT_PULLUP': cls.__constants['INPUT_PULLUP'],
            'INPUT_PULLDOWN': cls.__constants['INPUT_PULLDOWN'],
            'OUTPUT_PUSHPULL': cls.__constants['OUTPUT_PUSHPULL'],
            'OUTPUT_OPENDRAIN': cls.__constants['OUTPUT_OPENDRAIN'],
            'OUTPUT_OPENDRAIN_PULLUP': cls.__constants['OUTPUT_OPENDRAIN_PULLUP'],
        }

    @property
    def INPUT(self):
        """Message constant 'INPUT'."""
        return Metaclass_GpioConfig.__constants['INPUT']

    @property
    def OUTPUT(self):
        """Message constant 'OUTPUT'."""
        return Metaclass_GpioConfig.__constants['OUTPUT']

    @property
    def PULLUP(self):
        """Message constant 'PULLUP'."""
        return Metaclass_GpioConfig.__constants['PULLUP']

    @property
    def PULLDOWN(self):
        """Message constant 'PULLDOWN'."""
        return Metaclass_GpioConfig.__constants['PULLDOWN']

    @property
    def OPENDRAIN(self):
        """Message constant 'OPENDRAIN'."""
        return Metaclass_GpioConfig.__constants['OPENDRAIN']

    @property
    def INPUT_FLOATING(self):
        """Message constant 'INPUT_FLOATING'."""
        return Metaclass_GpioConfig.__constants['INPUT_FLOATING']

    @property
    def INPUT_PULLUP(self):
        """Message constant 'INPUT_PULLUP'."""
        return Metaclass_GpioConfig.__constants['INPUT_PULLUP']

    @property
    def INPUT_PULLDOWN(self):
        """Message constant 'INPUT_PULLDOWN'."""
        return Metaclass_GpioConfig.__constants['INPUT_PULLDOWN']

    @property
    def OUTPUT_PUSHPULL(self):
        """Message constant 'OUTPUT_PUSHPULL'."""
        return Metaclass_GpioConfig.__constants['OUTPUT_PUSHPULL']

    @property
    def OUTPUT_OPENDRAIN(self):
        """Message constant 'OUTPUT_OPENDRAIN'."""
        return Metaclass_GpioConfig.__constants['OUTPUT_OPENDRAIN']

    @property
    def OUTPUT_OPENDRAIN_PULLUP(self):
        """Message constant 'OUTPUT_OPENDRAIN_PULLUP'."""
        return Metaclass_GpioConfig.__constants['OUTPUT_OPENDRAIN_PULLUP']


class GpioConfig(metaclass=Metaclass_GpioConfig):
    """
    Message class 'GpioConfig'.

    Constants:
      INPUT
      OUTPUT
      PULLUP
      PULLDOWN
      OPENDRAIN
      INPUT_FLOATING
      INPUT_PULLUP
      INPUT_PULLDOWN
      OUTPUT_PUSHPULL
      OUTPUT_OPENDRAIN
      OUTPUT_OPENDRAIN_PULLUP
    """

    __slots__ = [
        '_timestamp',
        '_device_id',
        '_mask',
        '_state',
        '_config',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'device_id': 'uint32',
        'mask': 'uint32',
        'state': 'uint32',
        'config': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.device_id = kwargs.get('device_id', int())
        self.mask = kwargs.get('mask', int())
        self.state = kwargs.get('state', int())
        self.config = kwargs.get('config', int())

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
        if self.device_id != other.device_id:
            return False
        if self.mask != other.mask:
            return False
        if self.state != other.state:
            return False
        if self.config != other.config:
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
    def mask(self):
        """Message field 'mask'."""
        return self._mask

    @mask.setter
    def mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mask' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mask' field must be an unsigned integer in [0, 4294967295]"
        self._mask = value

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'state' field must be an unsigned integer in [0, 4294967295]"
        self._state = value

    @builtins.property
    def config(self):
        """Message field 'config'."""
        return self._config

    @config.setter
    def config(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'config' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'config' field must be an unsigned integer in [0, 4294967295]"
        self._config = value
