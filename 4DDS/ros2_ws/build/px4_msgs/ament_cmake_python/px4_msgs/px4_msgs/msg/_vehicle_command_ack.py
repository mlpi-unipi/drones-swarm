# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleCommandAck.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleCommandAck(type):
    """Metaclass of message 'VehicleCommandAck'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'VEHICLE_CMD_RESULT_ACCEPTED': 0,
        'VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED': 1,
        'VEHICLE_CMD_RESULT_DENIED': 2,
        'VEHICLE_CMD_RESULT_UNSUPPORTED': 3,
        'VEHICLE_CMD_RESULT_FAILED': 4,
        'VEHICLE_CMD_RESULT_IN_PROGRESS': 5,
        'VEHICLE_CMD_RESULT_CANCELLED': 6,
        'ARM_AUTH_DENIED_REASON_GENERIC': 0,
        'ARM_AUTH_DENIED_REASON_NONE': 1,
        'ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT': 2,
        'ARM_AUTH_DENIED_REASON_TIMEOUT': 3,
        'ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE': 4,
        'ARM_AUTH_DENIED_REASON_BAD_WEATHER': 5,
        'ORB_QUEUE_LENGTH': 4,
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
                'px4_msgs.msg.VehicleCommandAck')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_command_ack
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_command_ack
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_command_ack
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_command_ack
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_command_ack

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'VEHICLE_CMD_RESULT_ACCEPTED': cls.__constants['VEHICLE_CMD_RESULT_ACCEPTED'],
            'VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED': cls.__constants['VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED'],
            'VEHICLE_CMD_RESULT_DENIED': cls.__constants['VEHICLE_CMD_RESULT_DENIED'],
            'VEHICLE_CMD_RESULT_UNSUPPORTED': cls.__constants['VEHICLE_CMD_RESULT_UNSUPPORTED'],
            'VEHICLE_CMD_RESULT_FAILED': cls.__constants['VEHICLE_CMD_RESULT_FAILED'],
            'VEHICLE_CMD_RESULT_IN_PROGRESS': cls.__constants['VEHICLE_CMD_RESULT_IN_PROGRESS'],
            'VEHICLE_CMD_RESULT_CANCELLED': cls.__constants['VEHICLE_CMD_RESULT_CANCELLED'],
            'ARM_AUTH_DENIED_REASON_GENERIC': cls.__constants['ARM_AUTH_DENIED_REASON_GENERIC'],
            'ARM_AUTH_DENIED_REASON_NONE': cls.__constants['ARM_AUTH_DENIED_REASON_NONE'],
            'ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT': cls.__constants['ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT'],
            'ARM_AUTH_DENIED_REASON_TIMEOUT': cls.__constants['ARM_AUTH_DENIED_REASON_TIMEOUT'],
            'ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE': cls.__constants['ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE'],
            'ARM_AUTH_DENIED_REASON_BAD_WEATHER': cls.__constants['ARM_AUTH_DENIED_REASON_BAD_WEATHER'],
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def VEHICLE_CMD_RESULT_ACCEPTED(self):
        """Message constant 'VEHICLE_CMD_RESULT_ACCEPTED'."""
        return Metaclass_VehicleCommandAck.__constants['VEHICLE_CMD_RESULT_ACCEPTED']

    @property
    def VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED(self):
        """Message constant 'VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED'."""
        return Metaclass_VehicleCommandAck.__constants['VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED']

    @property
    def VEHICLE_CMD_RESULT_DENIED(self):
        """Message constant 'VEHICLE_CMD_RESULT_DENIED'."""
        return Metaclass_VehicleCommandAck.__constants['VEHICLE_CMD_RESULT_DENIED']

    @property
    def VEHICLE_CMD_RESULT_UNSUPPORTED(self):
        """Message constant 'VEHICLE_CMD_RESULT_UNSUPPORTED'."""
        return Metaclass_VehicleCommandAck.__constants['VEHICLE_CMD_RESULT_UNSUPPORTED']

    @property
    def VEHICLE_CMD_RESULT_FAILED(self):
        """Message constant 'VEHICLE_CMD_RESULT_FAILED'."""
        return Metaclass_VehicleCommandAck.__constants['VEHICLE_CMD_RESULT_FAILED']

    @property
    def VEHICLE_CMD_RESULT_IN_PROGRESS(self):
        """Message constant 'VEHICLE_CMD_RESULT_IN_PROGRESS'."""
        return Metaclass_VehicleCommandAck.__constants['VEHICLE_CMD_RESULT_IN_PROGRESS']

    @property
    def VEHICLE_CMD_RESULT_CANCELLED(self):
        """Message constant 'VEHICLE_CMD_RESULT_CANCELLED'."""
        return Metaclass_VehicleCommandAck.__constants['VEHICLE_CMD_RESULT_CANCELLED']

    @property
    def ARM_AUTH_DENIED_REASON_GENERIC(self):
        """Message constant 'ARM_AUTH_DENIED_REASON_GENERIC'."""
        return Metaclass_VehicleCommandAck.__constants['ARM_AUTH_DENIED_REASON_GENERIC']

    @property
    def ARM_AUTH_DENIED_REASON_NONE(self):
        """Message constant 'ARM_AUTH_DENIED_REASON_NONE'."""
        return Metaclass_VehicleCommandAck.__constants['ARM_AUTH_DENIED_REASON_NONE']

    @property
    def ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT(self):
        """Message constant 'ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT'."""
        return Metaclass_VehicleCommandAck.__constants['ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT']

    @property
    def ARM_AUTH_DENIED_REASON_TIMEOUT(self):
        """Message constant 'ARM_AUTH_DENIED_REASON_TIMEOUT'."""
        return Metaclass_VehicleCommandAck.__constants['ARM_AUTH_DENIED_REASON_TIMEOUT']

    @property
    def ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE(self):
        """Message constant 'ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE'."""
        return Metaclass_VehicleCommandAck.__constants['ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE']

    @property
    def ARM_AUTH_DENIED_REASON_BAD_WEATHER(self):
        """Message constant 'ARM_AUTH_DENIED_REASON_BAD_WEATHER'."""
        return Metaclass_VehicleCommandAck.__constants['ARM_AUTH_DENIED_REASON_BAD_WEATHER']

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_VehicleCommandAck.__constants['ORB_QUEUE_LENGTH']


class VehicleCommandAck(metaclass=Metaclass_VehicleCommandAck):
    """
    Message class 'VehicleCommandAck'.

    Constants:
      VEHICLE_CMD_RESULT_ACCEPTED
      VEHICLE_CMD_RESULT_TEMPORARILY_REJECTED
      VEHICLE_CMD_RESULT_DENIED
      VEHICLE_CMD_RESULT_UNSUPPORTED
      VEHICLE_CMD_RESULT_FAILED
      VEHICLE_CMD_RESULT_IN_PROGRESS
      VEHICLE_CMD_RESULT_CANCELLED
      ARM_AUTH_DENIED_REASON_GENERIC
      ARM_AUTH_DENIED_REASON_NONE
      ARM_AUTH_DENIED_REASON_INVALID_WAYPOINT
      ARM_AUTH_DENIED_REASON_TIMEOUT
      ARM_AUTH_DENIED_REASON_AIRSPACE_IN_USE
      ARM_AUTH_DENIED_REASON_BAD_WEATHER
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_command',
        '_result',
        '_result_param1',
        '_result_param2',
        '_target_system',
        '_target_component',
        '_from_external',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'command': 'uint32',
        'result': 'uint8',
        'result_param1': 'uint8',
        'result_param2': 'int32',
        'target_system': 'uint8',
        'target_component': 'uint16',
        'from_external': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.command = kwargs.get('command', int())
        self.result = kwargs.get('result', int())
        self.result_param1 = kwargs.get('result_param1', int())
        self.result_param2 = kwargs.get('result_param2', int())
        self.target_system = kwargs.get('target_system', int())
        self.target_component = kwargs.get('target_component', int())
        self.from_external = kwargs.get('from_external', bool())

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
        if self.command != other.command:
            return False
        if self.result != other.result:
            return False
        if self.result_param1 != other.result_param1:
            return False
        if self.result_param2 != other.result_param2:
            return False
        if self.target_system != other.target_system:
            return False
        if self.target_component != other.target_component:
            return False
        if self.from_external != other.from_external:
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
    def command(self):
        """Message field 'command'."""
        return self._command

    @command.setter
    def command(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'command' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'command' field must be an unsigned integer in [0, 4294967295]"
        self._command = value

    @builtins.property
    def result(self):
        """Message field 'result'."""
        return self._result

    @result.setter
    def result(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result' field must be an unsigned integer in [0, 255]"
        self._result = value

    @builtins.property
    def result_param1(self):
        """Message field 'result_param1'."""
        return self._result_param1

    @result_param1.setter
    def result_param1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result_param1' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'result_param1' field must be an unsigned integer in [0, 255]"
        self._result_param1 = value

    @builtins.property
    def result_param2(self):
        """Message field 'result_param2'."""
        return self._result_param2

    @result_param2.setter
    def result_param2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'result_param2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'result_param2' field must be an integer in [-2147483648, 2147483647]"
        self._result_param2 = value

    @builtins.property
    def target_system(self):
        """Message field 'target_system'."""
        return self._target_system

    @target_system.setter
    def target_system(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_system' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'target_system' field must be an unsigned integer in [0, 255]"
        self._target_system = value

    @builtins.property
    def target_component(self):
        """Message field 'target_component'."""
        return self._target_component

    @target_component.setter
    def target_component(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'target_component' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'target_component' field must be an unsigned integer in [0, 65535]"
        self._target_component = value

    @builtins.property
    def from_external(self):
        """Message field 'from_external'."""
        return self._from_external

    @from_external.setter
    def from_external(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'from_external' field must be of type 'bool'"
        self._from_external = value
