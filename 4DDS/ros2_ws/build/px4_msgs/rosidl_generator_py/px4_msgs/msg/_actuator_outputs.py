# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/ActuatorOutputs.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'output'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActuatorOutputs(type):
    """Metaclass of message 'ActuatorOutputs'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'NUM_ACTUATOR_OUTPUTS': 16,
        'NUM_ACTUATOR_OUTPUT_GROUPS': 4,
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
                'px4_msgs.msg.ActuatorOutputs')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__actuator_outputs
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__actuator_outputs
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__actuator_outputs
            cls._TYPE_SUPPORT = module.type_support_msg__msg__actuator_outputs
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__actuator_outputs

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'NUM_ACTUATOR_OUTPUTS': cls.__constants['NUM_ACTUATOR_OUTPUTS'],
            'NUM_ACTUATOR_OUTPUT_GROUPS': cls.__constants['NUM_ACTUATOR_OUTPUT_GROUPS'],
        }

    @property
    def NUM_ACTUATOR_OUTPUTS(self):
        """Message constant 'NUM_ACTUATOR_OUTPUTS'."""
        return Metaclass_ActuatorOutputs.__constants['NUM_ACTUATOR_OUTPUTS']

    @property
    def NUM_ACTUATOR_OUTPUT_GROUPS(self):
        """Message constant 'NUM_ACTUATOR_OUTPUT_GROUPS'."""
        return Metaclass_ActuatorOutputs.__constants['NUM_ACTUATOR_OUTPUT_GROUPS']


class ActuatorOutputs(metaclass=Metaclass_ActuatorOutputs):
    """
    Message class 'ActuatorOutputs'.

    Constants:
      NUM_ACTUATOR_OUTPUTS
      NUM_ACTUATOR_OUTPUT_GROUPS
    """

    __slots__ = [
        '_timestamp',
        '_noutputs',
        '_output',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'noutputs': 'uint32',
        'output': 'float[16]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 16),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.noutputs = kwargs.get('noutputs', int())
        if 'output' not in kwargs:
            self.output = numpy.zeros(16, dtype=numpy.float32)
        else:
            self.output = numpy.array(kwargs.get('output'), dtype=numpy.float32)
            assert self.output.shape == (16, )

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
        if self.noutputs != other.noutputs:
            return False
        if all(self.output != other.output):
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
    def noutputs(self):
        """Message field 'noutputs'."""
        return self._noutputs

    @noutputs.setter
    def noutputs(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'noutputs' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'noutputs' field must be an unsigned integer in [0, 4294967295]"
        self._noutputs = value

    @builtins.property
    def output(self):
        """Message field 'output'."""
        return self._output

    @output.setter
    def output(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'output' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 16, \
                "The 'output' numpy.ndarray() must have a size of 16"
            self._output = value
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
                 len(value) == 16 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'output' field must be a set or sequence with length 16 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._output = numpy.array(value, dtype=numpy.float32)
