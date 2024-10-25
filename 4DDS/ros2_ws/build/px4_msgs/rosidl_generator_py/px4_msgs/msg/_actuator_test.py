# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/ActuatorTest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActuatorTest(type):
    """Metaclass of message 'ActuatorTest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACTION_RELEASE_CONTROL': 0,
        'ACTION_DO_CONTROL': 1,
        'FUNCTION_MOTOR1': 101,
        'MAX_NUM_MOTORS': 12,
        'FUNCTION_SERVO1': 201,
        'MAX_NUM_SERVOS': 8,
        'ORB_QUEUE_LENGTH': 16,
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
                'px4_msgs.msg.ActuatorTest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actuator_test
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actuator_test
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actuator_test
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actuator_test
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actuator_test

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACTION_RELEASE_CONTROL': cls.__constants['ACTION_RELEASE_CONTROL'],
            'ACTION_DO_CONTROL': cls.__constants['ACTION_DO_CONTROL'],
            'FUNCTION_MOTOR1': cls.__constants['FUNCTION_MOTOR1'],
            'MAX_NUM_MOTORS': cls.__constants['MAX_NUM_MOTORS'],
            'FUNCTION_SERVO1': cls.__constants['FUNCTION_SERVO1'],
            'MAX_NUM_SERVOS': cls.__constants['MAX_NUM_SERVOS'],
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def ACTION_RELEASE_CONTROL(self):
        """Message constant 'ACTION_RELEASE_CONTROL'."""
        return Metaclass_ActuatorTest.__constants['ACTION_RELEASE_CONTROL']

    @property
    def ACTION_DO_CONTROL(self):
        """Message constant 'ACTION_DO_CONTROL'."""
        return Metaclass_ActuatorTest.__constants['ACTION_DO_CONTROL']

    @property
    def FUNCTION_MOTOR1(self):
        """Message constant 'FUNCTION_MOTOR1'."""
        return Metaclass_ActuatorTest.__constants['FUNCTION_MOTOR1']

    @property
    def MAX_NUM_MOTORS(self):
        """Message constant 'MAX_NUM_MOTORS'."""
        return Metaclass_ActuatorTest.__constants['MAX_NUM_MOTORS']

    @property
    def FUNCTION_SERVO1(self):
        """Message constant 'FUNCTION_SERVO1'."""
        return Metaclass_ActuatorTest.__constants['FUNCTION_SERVO1']

    @property
    def MAX_NUM_SERVOS(self):
        """Message constant 'MAX_NUM_SERVOS'."""
        return Metaclass_ActuatorTest.__constants['MAX_NUM_SERVOS']

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_ActuatorTest.__constants['ORB_QUEUE_LENGTH']


class ActuatorTest(metaclass=Metaclass_ActuatorTest):
    """
    Message class 'ActuatorTest'.

    Constants:
      ACTION_RELEASE_CONTROL
      ACTION_DO_CONTROL
      FUNCTION_MOTOR1
      MAX_NUM_MOTORS
      FUNCTION_SERVO1
      MAX_NUM_SERVOS
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_action',
        '_function',
        '_value',
        '_timeout_ms',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'action': 'uint8',
        'function': 'uint16',
        'value': 'float',
        'timeout_ms': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.action = kwargs.get('action', int())
        self.function = kwargs.get('function', int())
        self.value = kwargs.get('value', float())
        self.timeout_ms = kwargs.get('timeout_ms', int())

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
        if self.action != other.action:
            return False
        if self.function != other.function:
            return False
        if self.value != other.value:
            return False
        if self.timeout_ms != other.timeout_ms:
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
    def action(self):
        """Message field 'action'."""
        return self._action

    @action.setter
    def action(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'action' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'action' field must be an unsigned integer in [0, 255]"
        self._action = value

    @builtins.property
    def function(self):
        """Message field 'function'."""
        return self._function

    @function.setter
    def function(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'function' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'function' field must be an unsigned integer in [0, 65535]"
        self._function = value

    @builtins.property
    def value(self):
        """Message field 'value'."""
        return self._value

    @value.setter
    def value(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'value' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'value' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._value = value

    @builtins.property
    def timeout_ms(self):
        """Message field 'timeout_ms'."""
        return self._timeout_ms

    @timeout_ms.setter
    def timeout_ms(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timeout_ms' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'timeout_ms' field must be an unsigned integer in [0, 4294967295]"
        self._timeout_ms = value
