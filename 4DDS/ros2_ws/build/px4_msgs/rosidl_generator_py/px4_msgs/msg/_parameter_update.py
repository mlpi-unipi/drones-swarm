# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/ParameterUpdate.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ParameterUpdate(type):
    """Metaclass of message 'ParameterUpdate'."""

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
                'px4_msgs.msg.ParameterUpdate')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__parameter_update
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__parameter_update
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__parameter_update
            cls._TYPE_SUPPORT = module.type_support_msg__msg__parameter_update
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__parameter_update

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ParameterUpdate(metaclass=Metaclass_ParameterUpdate):
    """Message class 'ParameterUpdate'."""

    __slots__ = [
        '_timestamp',
        '_instance',
        '_get_count',
        '_set_count',
        '_find_count',
        '_export_count',
        '_active',
        '_changed',
        '_custom_default',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'instance': 'uint32',
        'get_count': 'uint32',
        'set_count': 'uint32',
        'find_count': 'uint32',
        'export_count': 'uint32',
        'active': 'uint16',
        'changed': 'uint16',
        'custom_default': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.instance = kwargs.get('instance', int())
        self.get_count = kwargs.get('get_count', int())
        self.set_count = kwargs.get('set_count', int())
        self.find_count = kwargs.get('find_count', int())
        self.export_count = kwargs.get('export_count', int())
        self.active = kwargs.get('active', int())
        self.changed = kwargs.get('changed', int())
        self.custom_default = kwargs.get('custom_default', int())

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
        if self.instance != other.instance:
            return False
        if self.get_count != other.get_count:
            return False
        if self.set_count != other.set_count:
            return False
        if self.find_count != other.find_count:
            return False
        if self.export_count != other.export_count:
            return False
        if self.active != other.active:
            return False
        if self.changed != other.changed:
            return False
        if self.custom_default != other.custom_default:
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
    def instance(self):
        """Message field 'instance'."""
        return self._instance

    @instance.setter
    def instance(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'instance' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'instance' field must be an unsigned integer in [0, 4294967295]"
        self._instance = value

    @builtins.property
    def get_count(self):
        """Message field 'get_count'."""
        return self._get_count

    @get_count.setter
    def get_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'get_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'get_count' field must be an unsigned integer in [0, 4294967295]"
        self._get_count = value

    @builtins.property
    def set_count(self):
        """Message field 'set_count'."""
        return self._set_count

    @set_count.setter
    def set_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'set_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'set_count' field must be an unsigned integer in [0, 4294967295]"
        self._set_count = value

    @builtins.property
    def find_count(self):
        """Message field 'find_count'."""
        return self._find_count

    @find_count.setter
    def find_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'find_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'find_count' field must be an unsigned integer in [0, 4294967295]"
        self._find_count = value

    @builtins.property
    def export_count(self):
        """Message field 'export_count'."""
        return self._export_count

    @export_count.setter
    def export_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'export_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'export_count' field must be an unsigned integer in [0, 4294967295]"
        self._export_count = value

    @builtins.property
    def active(self):
        """Message field 'active'."""
        return self._active

    @active.setter
    def active(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'active' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'active' field must be an unsigned integer in [0, 65535]"
        self._active = value

    @builtins.property
    def changed(self):
        """Message field 'changed'."""
        return self._changed

    @changed.setter
    def changed(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'changed' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'changed' field must be an unsigned integer in [0, 65535]"
        self._changed = value

    @builtins.property
    def custom_default(self):
        """Message field 'custom_default'."""
        return self._custom_default

    @custom_default.setter
    def custom_default(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'custom_default' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'custom_default' field must be an unsigned integer in [0, 65535]"
        self._custom_default = value
