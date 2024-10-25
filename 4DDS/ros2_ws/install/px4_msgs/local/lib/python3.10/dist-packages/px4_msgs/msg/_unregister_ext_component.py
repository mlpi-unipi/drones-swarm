# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/UnregisterExtComponent.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'name'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_UnregisterExtComponent(type):
    """Metaclass of message 'UnregisterExtComponent'."""

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
                'px4_msgs.msg.UnregisterExtComponent')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__unregister_ext_component
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__unregister_ext_component
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__unregister_ext_component
            cls._TYPE_SUPPORT = module.type_support_msg__msg__unregister_ext_component
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__unregister_ext_component

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class UnregisterExtComponent(metaclass=Metaclass_UnregisterExtComponent):
    """Message class 'UnregisterExtComponent'."""

    __slots__ = [
        '_timestamp',
        '_name',
        '_arming_check_id',
        '_mode_id',
        '_mode_executor_id',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'name': 'uint8[25]',
        'arming_check_id': 'int8',
        'mode_id': 'int8',
        'mode_executor_id': 'int8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 25),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        if 'name' not in kwargs:
            self.name = numpy.zeros(25, dtype=numpy.uint8)
        else:
            self.name = numpy.array(kwargs.get('name'), dtype=numpy.uint8)
            assert self.name.shape == (25, )
        self.arming_check_id = kwargs.get('arming_check_id', int())
        self.mode_id = kwargs.get('mode_id', int())
        self.mode_executor_id = kwargs.get('mode_executor_id', int())

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
        if all(self.name != other.name):
            return False
        if self.arming_check_id != other.arming_check_id:
            return False
        if self.mode_id != other.mode_id:
            return False
        if self.mode_executor_id != other.mode_executor_id:
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
    def name(self):
        """Message field 'name'."""
        return self._name

    @name.setter
    def name(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'name' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 25, \
                "The 'name' numpy.ndarray() must have a size of 25"
            self._name = value
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
                 len(value) == 25 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'name' field must be a set or sequence with length 25 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._name = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def arming_check_id(self):
        """Message field 'arming_check_id'."""
        return self._arming_check_id

    @arming_check_id.setter
    def arming_check_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arming_check_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'arming_check_id' field must be an integer in [-128, 127]"
        self._arming_check_id = value

    @builtins.property
    def mode_id(self):
        """Message field 'mode_id'."""
        return self._mode_id

    @mode_id.setter
    def mode_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'mode_id' field must be an integer in [-128, 127]"
        self._mode_id = value

    @builtins.property
    def mode_executor_id(self):
        """Message field 'mode_executor_id'."""
        return self._mode_executor_id

    @mode_executor_id.setter
    def mode_executor_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_executor_id' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'mode_executor_id' field must be an integer in [-128, 127]"
        self._mode_executor_id = value
