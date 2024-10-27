# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/SensorsStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'device_ids'
# Member 'inconsistency'
# Member 'priority'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SensorsStatus(type):
    """Metaclass of message 'SensorsStatus'."""

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
                'px4_msgs.msg.SensorsStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sensors_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sensors_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sensors_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sensors_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sensors_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SensorsStatus(metaclass=Metaclass_SensorsStatus):
    """Message class 'SensorsStatus'."""

    __slots__ = [
        '_timestamp',
        '_device_id_primary',
        '_device_ids',
        '_inconsistency',
        '_healthy',
        '_priority',
        '_enabled',
        '_external',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'device_id_primary': 'uint32',
        'device_ids': 'uint32[4]',
        'inconsistency': 'float[4]',
        'healthy': 'boolean[4]',
        'priority': 'uint8[4]',
        'enabled': 'boolean[4]',
        'external': 'boolean[4]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('boolean'), 4),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.device_id_primary = kwargs.get('device_id_primary', int())
        if 'device_ids' not in kwargs:
            self.device_ids = numpy.zeros(4, dtype=numpy.uint32)
        else:
            self.device_ids = numpy.array(kwargs.get('device_ids'), dtype=numpy.uint32)
            assert self.device_ids.shape == (4, )
        if 'inconsistency' not in kwargs:
            self.inconsistency = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.inconsistency = numpy.array(kwargs.get('inconsistency'), dtype=numpy.float32)
            assert self.inconsistency.shape == (4, )
        self.healthy = kwargs.get(
            'healthy',
            [bool() for x in range(4)]
        )
        if 'priority' not in kwargs:
            self.priority = numpy.zeros(4, dtype=numpy.uint8)
        else:
            self.priority = numpy.array(kwargs.get('priority'), dtype=numpy.uint8)
            assert self.priority.shape == (4, )
        self.enabled = kwargs.get(
            'enabled',
            [bool() for x in range(4)]
        )
        self.external = kwargs.get(
            'external',
            [bool() for x in range(4)]
        )

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
        if self.device_id_primary != other.device_id_primary:
            return False
        if all(self.device_ids != other.device_ids):
            return False
        if all(self.inconsistency != other.inconsistency):
            return False
        if self.healthy != other.healthy:
            return False
        if all(self.priority != other.priority):
            return False
        if self.enabled != other.enabled:
            return False
        if self.external != other.external:
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
    def device_id_primary(self):
        """Message field 'device_id_primary'."""
        return self._device_id_primary

    @device_id_primary.setter
    def device_id_primary(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_id_primary' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'device_id_primary' field must be an unsigned integer in [0, 4294967295]"
        self._device_id_primary = value

    @builtins.property
    def device_ids(self):
        """Message field 'device_ids'."""
        return self._device_ids

    @device_ids.setter
    def device_ids(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'device_ids' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 4, \
                "The 'device_ids' numpy.ndarray() must have a size of 4"
            self._device_ids = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'device_ids' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._device_ids = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def inconsistency(self):
        """Message field 'inconsistency'."""
        return self._inconsistency

    @inconsistency.setter
    def inconsistency(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'inconsistency' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'inconsistency' numpy.ndarray() must have a size of 4"
            self._inconsistency = value
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
                "The 'inconsistency' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._inconsistency = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def healthy(self):
        """Message field 'healthy'."""
        return self._healthy

    @healthy.setter
    def healthy(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'healthy' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._healthy = value

    @builtins.property
    def priority(self):
        """Message field 'priority'."""
        return self._priority

    @priority.setter
    def priority(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'priority' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 4, \
                "The 'priority' numpy.ndarray() must have a size of 4"
            self._priority = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'priority' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._priority = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def enabled(self):
        """Message field 'enabled'."""
        return self._enabled

    @enabled.setter
    def enabled(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'enabled' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._enabled = value

    @builtins.property
    def external(self):
        """Message field 'external'."""
        return self._external

    @external.setter
    def external(self, value):
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
                 all(isinstance(v, bool) for v in value) and
                 True), \
                "The 'external' field must be a set or sequence with length 4 and each value of type 'bool'"
        self._external = value
