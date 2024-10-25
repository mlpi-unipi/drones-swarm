# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/RegisterExtComponentRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

# Member 'name'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RegisterExtComponentRequest(type):
    """Metaclass of message 'RegisterExtComponentRequest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'LATEST_PX4_ROS2_API_VERSION': 1,
        'ORB_QUEUE_LENGTH': 2,
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
                'px4_msgs.msg.RegisterExtComponentRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__register_ext_component_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__register_ext_component_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__register_ext_component_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__register_ext_component_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__register_ext_component_request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'LATEST_PX4_ROS2_API_VERSION': cls.__constants['LATEST_PX4_ROS2_API_VERSION'],
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def LATEST_PX4_ROS2_API_VERSION(self):
        """Message constant 'LATEST_PX4_ROS2_API_VERSION'."""
        return Metaclass_RegisterExtComponentRequest.__constants['LATEST_PX4_ROS2_API_VERSION']

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_RegisterExtComponentRequest.__constants['ORB_QUEUE_LENGTH']


class RegisterExtComponentRequest(metaclass=Metaclass_RegisterExtComponentRequest):
    """
    Message class 'RegisterExtComponentRequest'.

    Constants:
      LATEST_PX4_ROS2_API_VERSION
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_request_id',
        '_name',
        '_px4_ros2_api_version',
        '_register_arming_check',
        '_register_mode',
        '_register_mode_executor',
        '_enable_replace_internal_mode',
        '_replace_internal_mode',
        '_activate_mode_immediately',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'request_id': 'uint64',
        'name': 'uint8[25]',
        'px4_ros2_api_version': 'uint16',
        'register_arming_check': 'boolean',
        'register_mode': 'boolean',
        'register_mode_executor': 'boolean',
        'enable_replace_internal_mode': 'boolean',
        'replace_internal_mode': 'uint8',
        'activate_mode_immediately': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('uint8'), 25),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.request_id = kwargs.get('request_id', int())
        if 'name' not in kwargs:
            self.name = numpy.zeros(25, dtype=numpy.uint8)
        else:
            self.name = numpy.array(kwargs.get('name'), dtype=numpy.uint8)
            assert self.name.shape == (25, )
        self.px4_ros2_api_version = kwargs.get('px4_ros2_api_version', int())
        self.register_arming_check = kwargs.get('register_arming_check', bool())
        self.register_mode = kwargs.get('register_mode', bool())
        self.register_mode_executor = kwargs.get('register_mode_executor', bool())
        self.enable_replace_internal_mode = kwargs.get('enable_replace_internal_mode', bool())
        self.replace_internal_mode = kwargs.get('replace_internal_mode', int())
        self.activate_mode_immediately = kwargs.get('activate_mode_immediately', bool())

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
        if self.request_id != other.request_id:
            return False
        if all(self.name != other.name):
            return False
        if self.px4_ros2_api_version != other.px4_ros2_api_version:
            return False
        if self.register_arming_check != other.register_arming_check:
            return False
        if self.register_mode != other.register_mode:
            return False
        if self.register_mode_executor != other.register_mode_executor:
            return False
        if self.enable_replace_internal_mode != other.enable_replace_internal_mode:
            return False
        if self.replace_internal_mode != other.replace_internal_mode:
            return False
        if self.activate_mode_immediately != other.activate_mode_immediately:
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
    def request_id(self):
        """Message field 'request_id'."""
        return self._request_id

    @request_id.setter
    def request_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'request_id' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'request_id' field must be an unsigned integer in [0, 18446744073709551615]"
        self._request_id = value

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
    def px4_ros2_api_version(self):
        """Message field 'px4_ros2_api_version'."""
        return self._px4_ros2_api_version

    @px4_ros2_api_version.setter
    def px4_ros2_api_version(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'px4_ros2_api_version' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'px4_ros2_api_version' field must be an unsigned integer in [0, 65535]"
        self._px4_ros2_api_version = value

    @builtins.property
    def register_arming_check(self):
        """Message field 'register_arming_check'."""
        return self._register_arming_check

    @register_arming_check.setter
    def register_arming_check(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'register_arming_check' field must be of type 'bool'"
        self._register_arming_check = value

    @builtins.property
    def register_mode(self):
        """Message field 'register_mode'."""
        return self._register_mode

    @register_mode.setter
    def register_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'register_mode' field must be of type 'bool'"
        self._register_mode = value

    @builtins.property
    def register_mode_executor(self):
        """Message field 'register_mode_executor'."""
        return self._register_mode_executor

    @register_mode_executor.setter
    def register_mode_executor(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'register_mode_executor' field must be of type 'bool'"
        self._register_mode_executor = value

    @builtins.property
    def enable_replace_internal_mode(self):
        """Message field 'enable_replace_internal_mode'."""
        return self._enable_replace_internal_mode

    @enable_replace_internal_mode.setter
    def enable_replace_internal_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'enable_replace_internal_mode' field must be of type 'bool'"
        self._enable_replace_internal_mode = value

    @builtins.property
    def replace_internal_mode(self):
        """Message field 'replace_internal_mode'."""
        return self._replace_internal_mode

    @replace_internal_mode.setter
    def replace_internal_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'replace_internal_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'replace_internal_mode' field must be an unsigned integer in [0, 255]"
        self._replace_internal_mode = value

    @builtins.property
    def activate_mode_immediately(self):
        """Message field 'activate_mode_immediately'."""
        return self._activate_mode_immediately

    @activate_mode_immediately.setter
    def activate_mode_immediately(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'activate_mode_immediately' field must be of type 'bool'"
        self._activate_mode_immediately = value
