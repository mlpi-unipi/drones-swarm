# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/GimbalManagerStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GimbalManagerStatus(type):
    """Metaclass of message 'GimbalManagerStatus'."""

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
                'px4_msgs.msg.GimbalManagerStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gimbal_manager_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gimbal_manager_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gimbal_manager_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gimbal_manager_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gimbal_manager_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GimbalManagerStatus(metaclass=Metaclass_GimbalManagerStatus):
    """Message class 'GimbalManagerStatus'."""

    __slots__ = [
        '_timestamp',
        '_flags',
        '_gimbal_device_id',
        '_primary_control_sysid',
        '_primary_control_compid',
        '_secondary_control_sysid',
        '_secondary_control_compid',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'flags': 'uint32',
        'gimbal_device_id': 'uint8',
        'primary_control_sysid': 'uint8',
        'primary_control_compid': 'uint8',
        'secondary_control_sysid': 'uint8',
        'secondary_control_compid': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        self.flags = kwargs.get('flags', int())
        self.gimbal_device_id = kwargs.get('gimbal_device_id', int())
        self.primary_control_sysid = kwargs.get('primary_control_sysid', int())
        self.primary_control_compid = kwargs.get('primary_control_compid', int())
        self.secondary_control_sysid = kwargs.get('secondary_control_sysid', int())
        self.secondary_control_compid = kwargs.get('secondary_control_compid', int())

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
        if self.flags != other.flags:
            return False
        if self.gimbal_device_id != other.gimbal_device_id:
            return False
        if self.primary_control_sysid != other.primary_control_sysid:
            return False
        if self.primary_control_compid != other.primary_control_compid:
            return False
        if self.secondary_control_sysid != other.secondary_control_sysid:
            return False
        if self.secondary_control_compid != other.secondary_control_compid:
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
    def flags(self):
        """Message field 'flags'."""
        return self._flags

    @flags.setter
    def flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'flags' field must be an unsigned integer in [0, 4294967295]"
        self._flags = value

    @builtins.property
    def gimbal_device_id(self):
        """Message field 'gimbal_device_id'."""
        return self._gimbal_device_id

    @gimbal_device_id.setter
    def gimbal_device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gimbal_device_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gimbal_device_id' field must be an unsigned integer in [0, 255]"
        self._gimbal_device_id = value

    @builtins.property
    def primary_control_sysid(self):
        """Message field 'primary_control_sysid'."""
        return self._primary_control_sysid

    @primary_control_sysid.setter
    def primary_control_sysid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'primary_control_sysid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'primary_control_sysid' field must be an unsigned integer in [0, 255]"
        self._primary_control_sysid = value

    @builtins.property
    def primary_control_compid(self):
        """Message field 'primary_control_compid'."""
        return self._primary_control_compid

    @primary_control_compid.setter
    def primary_control_compid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'primary_control_compid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'primary_control_compid' field must be an unsigned integer in [0, 255]"
        self._primary_control_compid = value

    @builtins.property
    def secondary_control_sysid(self):
        """Message field 'secondary_control_sysid'."""
        return self._secondary_control_sysid

    @secondary_control_sysid.setter
    def secondary_control_sysid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'secondary_control_sysid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'secondary_control_sysid' field must be an unsigned integer in [0, 255]"
        self._secondary_control_sysid = value

    @builtins.property
    def secondary_control_compid(self):
        """Message field 'secondary_control_compid'."""
        return self._secondary_control_compid

    @secondary_control_compid.setter
    def secondary_control_compid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'secondary_control_compid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'secondary_control_compid' field must be an unsigned integer in [0, 255]"
        self._secondary_control_compid = value
