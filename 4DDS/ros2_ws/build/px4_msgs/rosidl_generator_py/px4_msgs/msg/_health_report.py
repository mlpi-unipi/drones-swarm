# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/HealthReport.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_HealthReport(type):
    """Metaclass of message 'HealthReport'."""

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
                'px4_msgs.msg.HealthReport')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__health_report
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__health_report
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__health_report
            cls._TYPE_SUPPORT = module.type_support_msg__msg__health_report
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__health_report

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class HealthReport(metaclass=Metaclass_HealthReport):
    """Message class 'HealthReport'."""

    __slots__ = [
        '_timestamp',
        '_can_arm_mode_flags',
        '_can_run_mode_flags',
        '_health_is_present_flags',
        '_health_warning_flags',
        '_health_error_flags',
        '_arming_check_warning_flags',
        '_arming_check_error_flags',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'can_arm_mode_flags': 'uint64',
        'can_run_mode_flags': 'uint64',
        'health_is_present_flags': 'uint64',
        'health_warning_flags': 'uint64',
        'health_error_flags': 'uint64',
        'arming_check_warning_flags': 'uint64',
        'arming_check_error_flags': 'uint64',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.can_arm_mode_flags = kwargs.get('can_arm_mode_flags', int())
        self.can_run_mode_flags = kwargs.get('can_run_mode_flags', int())
        self.health_is_present_flags = kwargs.get('health_is_present_flags', int())
        self.health_warning_flags = kwargs.get('health_warning_flags', int())
        self.health_error_flags = kwargs.get('health_error_flags', int())
        self.arming_check_warning_flags = kwargs.get('arming_check_warning_flags', int())
        self.arming_check_error_flags = kwargs.get('arming_check_error_flags', int())

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
        if self.can_arm_mode_flags != other.can_arm_mode_flags:
            return False
        if self.can_run_mode_flags != other.can_run_mode_flags:
            return False
        if self.health_is_present_flags != other.health_is_present_flags:
            return False
        if self.health_warning_flags != other.health_warning_flags:
            return False
        if self.health_error_flags != other.health_error_flags:
            return False
        if self.arming_check_warning_flags != other.arming_check_warning_flags:
            return False
        if self.arming_check_error_flags != other.arming_check_error_flags:
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
    def can_arm_mode_flags(self):
        """Message field 'can_arm_mode_flags'."""
        return self._can_arm_mode_flags

    @can_arm_mode_flags.setter
    def can_arm_mode_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_arm_mode_flags' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'can_arm_mode_flags' field must be an unsigned integer in [0, 18446744073709551615]"
        self._can_arm_mode_flags = value

    @builtins.property
    def can_run_mode_flags(self):
        """Message field 'can_run_mode_flags'."""
        return self._can_run_mode_flags

    @can_run_mode_flags.setter
    def can_run_mode_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'can_run_mode_flags' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'can_run_mode_flags' field must be an unsigned integer in [0, 18446744073709551615]"
        self._can_run_mode_flags = value

    @builtins.property
    def health_is_present_flags(self):
        """Message field 'health_is_present_flags'."""
        return self._health_is_present_flags

    @health_is_present_flags.setter
    def health_is_present_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'health_is_present_flags' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'health_is_present_flags' field must be an unsigned integer in [0, 18446744073709551615]"
        self._health_is_present_flags = value

    @builtins.property
    def health_warning_flags(self):
        """Message field 'health_warning_flags'."""
        return self._health_warning_flags

    @health_warning_flags.setter
    def health_warning_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'health_warning_flags' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'health_warning_flags' field must be an unsigned integer in [0, 18446744073709551615]"
        self._health_warning_flags = value

    @builtins.property
    def health_error_flags(self):
        """Message field 'health_error_flags'."""
        return self._health_error_flags

    @health_error_flags.setter
    def health_error_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'health_error_flags' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'health_error_flags' field must be an unsigned integer in [0, 18446744073709551615]"
        self._health_error_flags = value

    @builtins.property
    def arming_check_warning_flags(self):
        """Message field 'arming_check_warning_flags'."""
        return self._arming_check_warning_flags

    @arming_check_warning_flags.setter
    def arming_check_warning_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arming_check_warning_flags' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'arming_check_warning_flags' field must be an unsigned integer in [0, 18446744073709551615]"
        self._arming_check_warning_flags = value

    @builtins.property
    def arming_check_error_flags(self):
        """Message field 'arming_check_error_flags'."""
        return self._arming_check_error_flags

    @arming_check_error_flags.setter
    def arming_check_error_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arming_check_error_flags' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'arming_check_error_flags' field must be an unsigned integer in [0, 18446744073709551615]"
        self._arming_check_error_flags = value
