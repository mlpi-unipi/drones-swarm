# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/PpsCapture.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PpsCapture(type):
    """Metaclass of message 'PpsCapture'."""

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
                'px4_msgs.msg.PpsCapture')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pps_capture
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pps_capture
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pps_capture
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pps_capture
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pps_capture

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PpsCapture(metaclass=Metaclass_PpsCapture):
    """Message class 'PpsCapture'."""

    __slots__ = [
        '_timestamp',
        '_rtc_timestamp',
        '_pps_rate_exceeded_counter',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'rtc_timestamp': 'uint64',
        'pps_rate_exceeded_counter': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.rtc_timestamp = kwargs.get('rtc_timestamp', int())
        self.pps_rate_exceeded_counter = kwargs.get('pps_rate_exceeded_counter', int())

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
        if self.rtc_timestamp != other.rtc_timestamp:
            return False
        if self.pps_rate_exceeded_counter != other.pps_rate_exceeded_counter:
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
    def rtc_timestamp(self):
        """Message field 'rtc_timestamp'."""
        return self._rtc_timestamp

    @rtc_timestamp.setter
    def rtc_timestamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rtc_timestamp' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'rtc_timestamp' field must be an unsigned integer in [0, 18446744073709551615]"
        self._rtc_timestamp = value

    @builtins.property
    def pps_rate_exceeded_counter(self):
        """Message field 'pps_rate_exceeded_counter'."""
        return self._pps_rate_exceeded_counter

    @pps_rate_exceeded_counter.setter
    def pps_rate_exceeded_counter(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'pps_rate_exceeded_counter' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'pps_rate_exceeded_counter' field must be an unsigned integer in [0, 255]"
        self._pps_rate_exceeded_counter = value
