# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/OnboardComputerStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'cpu_cores'
# Member 'cpu_combined'
# Member 'gpu_cores'
# Member 'gpu_combined'
# Member 'temperature_core'
# Member 'fan_speed'
# Member 'storage_type'
# Member 'storage_usage'
# Member 'storage_total'
# Member 'link_type'
# Member 'link_tx_rate'
# Member 'link_rx_rate'
# Member 'link_tx_max'
# Member 'link_rx_max'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OnboardComputerStatus(type):
    """Metaclass of message 'OnboardComputerStatus'."""

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
                'px4_msgs.msg.OnboardComputerStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__onboard_computer_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__onboard_computer_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__onboard_computer_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__onboard_computer_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__onboard_computer_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class OnboardComputerStatus(metaclass=Metaclass_OnboardComputerStatus):
    """Message class 'OnboardComputerStatus'."""

    __slots__ = [
        '_timestamp',
        '_uptime',
        '_type',
        '_cpu_cores',
        '_cpu_combined',
        '_gpu_cores',
        '_gpu_combined',
        '_temperature_board',
        '_temperature_core',
        '_fan_speed',
        '_ram_usage',
        '_ram_total',
        '_storage_type',
        '_storage_usage',
        '_storage_total',
        '_link_type',
        '_link_tx_rate',
        '_link_rx_rate',
        '_link_tx_max',
        '_link_rx_max',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'uptime': 'uint32',
        'type': 'uint8',
        'cpu_cores': 'uint8[8]',
        'cpu_combined': 'uint8[10]',
        'gpu_cores': 'uint8[4]',
        'gpu_combined': 'uint8[10]',
        'temperature_board': 'int8',
        'temperature_core': 'int8[8]',
        'fan_speed': 'int16[4]',
        'ram_usage': 'uint32',
        'ram_total': 'uint32',
        'storage_type': 'uint32[4]',
        'storage_usage': 'uint32[4]',
        'storage_total': 'uint32[4]',
        'link_type': 'uint32[6]',
        'link_tx_rate': 'uint32[6]',
        'link_rx_rate': 'uint32[6]',
        'link_tx_max': 'uint32[6]',
        'link_rx_max': 'uint32[6]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 10),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 10),  # noqa: E501
        rosidl_parser.definition.BasicType('int8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int8'), 8),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int16'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 4),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 6),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint32'), 6),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.uptime = kwargs.get('uptime', int())
        self.type = kwargs.get('type', int())
        if 'cpu_cores' not in kwargs:
            self.cpu_cores = numpy.zeros(8, dtype=numpy.uint8)
        else:
            self.cpu_cores = numpy.array(kwargs.get('cpu_cores'), dtype=numpy.uint8)
            assert self.cpu_cores.shape == (8, )
        if 'cpu_combined' not in kwargs:
            self.cpu_combined = numpy.zeros(10, dtype=numpy.uint8)
        else:
            self.cpu_combined = numpy.array(kwargs.get('cpu_combined'), dtype=numpy.uint8)
            assert self.cpu_combined.shape == (10, )
        if 'gpu_cores' not in kwargs:
            self.gpu_cores = numpy.zeros(4, dtype=numpy.uint8)
        else:
            self.gpu_cores = numpy.array(kwargs.get('gpu_cores'), dtype=numpy.uint8)
            assert self.gpu_cores.shape == (4, )
        if 'gpu_combined' not in kwargs:
            self.gpu_combined = numpy.zeros(10, dtype=numpy.uint8)
        else:
            self.gpu_combined = numpy.array(kwargs.get('gpu_combined'), dtype=numpy.uint8)
            assert self.gpu_combined.shape == (10, )
        self.temperature_board = kwargs.get('temperature_board', int())
        if 'temperature_core' not in kwargs:
            self.temperature_core = numpy.zeros(8, dtype=numpy.int8)
        else:
            self.temperature_core = numpy.array(kwargs.get('temperature_core'), dtype=numpy.int8)
            assert self.temperature_core.shape == (8, )
        if 'fan_speed' not in kwargs:
            self.fan_speed = numpy.zeros(4, dtype=numpy.int16)
        else:
            self.fan_speed = numpy.array(kwargs.get('fan_speed'), dtype=numpy.int16)
            assert self.fan_speed.shape == (4, )
        self.ram_usage = kwargs.get('ram_usage', int())
        self.ram_total = kwargs.get('ram_total', int())
        if 'storage_type' not in kwargs:
            self.storage_type = numpy.zeros(4, dtype=numpy.uint32)
        else:
            self.storage_type = numpy.array(kwargs.get('storage_type'), dtype=numpy.uint32)
            assert self.storage_type.shape == (4, )
        if 'storage_usage' not in kwargs:
            self.storage_usage = numpy.zeros(4, dtype=numpy.uint32)
        else:
            self.storage_usage = numpy.array(kwargs.get('storage_usage'), dtype=numpy.uint32)
            assert self.storage_usage.shape == (4, )
        if 'storage_total' not in kwargs:
            self.storage_total = numpy.zeros(4, dtype=numpy.uint32)
        else:
            self.storage_total = numpy.array(kwargs.get('storage_total'), dtype=numpy.uint32)
            assert self.storage_total.shape == (4, )
        if 'link_type' not in kwargs:
            self.link_type = numpy.zeros(6, dtype=numpy.uint32)
        else:
            self.link_type = numpy.array(kwargs.get('link_type'), dtype=numpy.uint32)
            assert self.link_type.shape == (6, )
        if 'link_tx_rate' not in kwargs:
            self.link_tx_rate = numpy.zeros(6, dtype=numpy.uint32)
        else:
            self.link_tx_rate = numpy.array(kwargs.get('link_tx_rate'), dtype=numpy.uint32)
            assert self.link_tx_rate.shape == (6, )
        if 'link_rx_rate' not in kwargs:
            self.link_rx_rate = numpy.zeros(6, dtype=numpy.uint32)
        else:
            self.link_rx_rate = numpy.array(kwargs.get('link_rx_rate'), dtype=numpy.uint32)
            assert self.link_rx_rate.shape == (6, )
        if 'link_tx_max' not in kwargs:
            self.link_tx_max = numpy.zeros(6, dtype=numpy.uint32)
        else:
            self.link_tx_max = numpy.array(kwargs.get('link_tx_max'), dtype=numpy.uint32)
            assert self.link_tx_max.shape == (6, )
        if 'link_rx_max' not in kwargs:
            self.link_rx_max = numpy.zeros(6, dtype=numpy.uint32)
        else:
            self.link_rx_max = numpy.array(kwargs.get('link_rx_max'), dtype=numpy.uint32)
            assert self.link_rx_max.shape == (6, )

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
        if self.uptime != other.uptime:
            return False
        if self.type != other.type:
            return False
        if all(self.cpu_cores != other.cpu_cores):
            return False
        if all(self.cpu_combined != other.cpu_combined):
            return False
        if all(self.gpu_cores != other.gpu_cores):
            return False
        if all(self.gpu_combined != other.gpu_combined):
            return False
        if self.temperature_board != other.temperature_board:
            return False
        if all(self.temperature_core != other.temperature_core):
            return False
        if all(self.fan_speed != other.fan_speed):
            return False
        if self.ram_usage != other.ram_usage:
            return False
        if self.ram_total != other.ram_total:
            return False
        if all(self.storage_type != other.storage_type):
            return False
        if all(self.storage_usage != other.storage_usage):
            return False
        if all(self.storage_total != other.storage_total):
            return False
        if all(self.link_type != other.link_type):
            return False
        if all(self.link_tx_rate != other.link_tx_rate):
            return False
        if all(self.link_rx_rate != other.link_rx_rate):
            return False
        if all(self.link_tx_max != other.link_tx_max):
            return False
        if all(self.link_rx_max != other.link_rx_max):
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
    def uptime(self):
        """Message field 'uptime'."""
        return self._uptime

    @uptime.setter
    def uptime(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'uptime' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'uptime' field must be an unsigned integer in [0, 4294967295]"
        self._uptime = value

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def cpu_cores(self):
        """Message field 'cpu_cores'."""
        return self._cpu_cores

    @cpu_cores.setter
    def cpu_cores(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'cpu_cores' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 8, \
                "The 'cpu_cores' numpy.ndarray() must have a size of 8"
            self._cpu_cores = value
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
                 len(value) == 8 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'cpu_cores' field must be a set or sequence with length 8 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._cpu_cores = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def cpu_combined(self):
        """Message field 'cpu_combined'."""
        return self._cpu_combined

    @cpu_combined.setter
    def cpu_combined(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'cpu_combined' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 10, \
                "The 'cpu_combined' numpy.ndarray() must have a size of 10"
            self._cpu_combined = value
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
                 len(value) == 10 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'cpu_combined' field must be a set or sequence with length 10 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._cpu_combined = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def gpu_cores(self):
        """Message field 'gpu_cores'."""
        return self._gpu_cores

    @gpu_cores.setter
    def gpu_cores(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'gpu_cores' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 4, \
                "The 'gpu_cores' numpy.ndarray() must have a size of 4"
            self._gpu_cores = value
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
                "The 'gpu_cores' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._gpu_cores = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def gpu_combined(self):
        """Message field 'gpu_combined'."""
        return self._gpu_combined

    @gpu_combined.setter
    def gpu_combined(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint8, \
                "The 'gpu_combined' numpy.ndarray() must have the dtype of 'numpy.uint8'"
            assert value.size == 10, \
                "The 'gpu_combined' numpy.ndarray() must have a size of 10"
            self._gpu_combined = value
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
                 len(value) == 10 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'gpu_combined' field must be a set or sequence with length 10 and each value of type 'int' and each unsigned integer in [0, 255]"
        self._gpu_combined = numpy.array(value, dtype=numpy.uint8)

    @builtins.property
    def temperature_board(self):
        """Message field 'temperature_board'."""
        return self._temperature_board

    @temperature_board.setter
    def temperature_board(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'temperature_board' field must be of type 'int'"
            assert value >= -128 and value < 128, \
                "The 'temperature_board' field must be an integer in [-128, 127]"
        self._temperature_board = value

    @builtins.property
    def temperature_core(self):
        """Message field 'temperature_core'."""
        return self._temperature_core

    @temperature_core.setter
    def temperature_core(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int8, \
                "The 'temperature_core' numpy.ndarray() must have the dtype of 'numpy.int8'"
            assert value.size == 8, \
                "The 'temperature_core' numpy.ndarray() must have a size of 8"
            self._temperature_core = value
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
                 len(value) == 8 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'temperature_core' field must be a set or sequence with length 8 and each value of type 'int' and each integer in [-128, 127]"
        self._temperature_core = numpy.array(value, dtype=numpy.int8)

    @builtins.property
    def fan_speed(self):
        """Message field 'fan_speed'."""
        return self._fan_speed

    @fan_speed.setter
    def fan_speed(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int16, \
                "The 'fan_speed' numpy.ndarray() must have the dtype of 'numpy.int16'"
            assert value.size == 4, \
                "The 'fan_speed' numpy.ndarray() must have a size of 4"
            self._fan_speed = value
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
                 all(val >= -32768 and val < 32768 for val in value)), \
                "The 'fan_speed' field must be a set or sequence with length 4 and each value of type 'int' and each integer in [-32768, 32767]"
        self._fan_speed = numpy.array(value, dtype=numpy.int16)

    @builtins.property
    def ram_usage(self):
        """Message field 'ram_usage'."""
        return self._ram_usage

    @ram_usage.setter
    def ram_usage(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ram_usage' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'ram_usage' field must be an unsigned integer in [0, 4294967295]"
        self._ram_usage = value

    @builtins.property
    def ram_total(self):
        """Message field 'ram_total'."""
        return self._ram_total

    @ram_total.setter
    def ram_total(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'ram_total' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'ram_total' field must be an unsigned integer in [0, 4294967295]"
        self._ram_total = value

    @builtins.property
    def storage_type(self):
        """Message field 'storage_type'."""
        return self._storage_type

    @storage_type.setter
    def storage_type(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'storage_type' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 4, \
                "The 'storage_type' numpy.ndarray() must have a size of 4"
            self._storage_type = value
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
                "The 'storage_type' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._storage_type = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def storage_usage(self):
        """Message field 'storage_usage'."""
        return self._storage_usage

    @storage_usage.setter
    def storage_usage(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'storage_usage' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 4, \
                "The 'storage_usage' numpy.ndarray() must have a size of 4"
            self._storage_usage = value
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
                "The 'storage_usage' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._storage_usage = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def storage_total(self):
        """Message field 'storage_total'."""
        return self._storage_total

    @storage_total.setter
    def storage_total(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'storage_total' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 4, \
                "The 'storage_total' numpy.ndarray() must have a size of 4"
            self._storage_total = value
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
                "The 'storage_total' field must be a set or sequence with length 4 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._storage_total = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def link_type(self):
        """Message field 'link_type'."""
        return self._link_type

    @link_type.setter
    def link_type(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'link_type' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 6, \
                "The 'link_type' numpy.ndarray() must have a size of 6"
            self._link_type = value
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
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'link_type' field must be a set or sequence with length 6 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._link_type = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def link_tx_rate(self):
        """Message field 'link_tx_rate'."""
        return self._link_tx_rate

    @link_tx_rate.setter
    def link_tx_rate(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'link_tx_rate' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 6, \
                "The 'link_tx_rate' numpy.ndarray() must have a size of 6"
            self._link_tx_rate = value
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
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'link_tx_rate' field must be a set or sequence with length 6 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._link_tx_rate = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def link_rx_rate(self):
        """Message field 'link_rx_rate'."""
        return self._link_rx_rate

    @link_rx_rate.setter
    def link_rx_rate(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'link_rx_rate' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 6, \
                "The 'link_rx_rate' numpy.ndarray() must have a size of 6"
            self._link_rx_rate = value
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
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'link_rx_rate' field must be a set or sequence with length 6 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._link_rx_rate = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def link_tx_max(self):
        """Message field 'link_tx_max'."""
        return self._link_tx_max

    @link_tx_max.setter
    def link_tx_max(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'link_tx_max' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 6, \
                "The 'link_tx_max' numpy.ndarray() must have a size of 6"
            self._link_tx_max = value
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
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'link_tx_max' field must be a set or sequence with length 6 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._link_tx_max = numpy.array(value, dtype=numpy.uint32)

    @builtins.property
    def link_rx_max(self):
        """Message field 'link_rx_max'."""
        return self._link_rx_max

    @link_rx_max.setter
    def link_rx_max(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.uint32, \
                "The 'link_rx_max' numpy.ndarray() must have the dtype of 'numpy.uint32'"
            assert value.size == 6, \
                "The 'link_rx_max' numpy.ndarray() must have a size of 6"
            self._link_rx_max = value
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
                 len(value) == 6 and
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 4294967296 for val in value)), \
                "The 'link_rx_max' field must be a set or sequence with length 6 and each value of type 'int' and each unsigned integer in [0, 4294967295]"
        self._link_rx_max = numpy.array(value, dtype=numpy.uint32)
