# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/ControlAllocatorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'unallocated_torque'
# Member 'unallocated_thrust'
# Member 'actuator_saturation'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ControlAllocatorStatus(type):
    """Metaclass of message 'ControlAllocatorStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACTUATOR_SATURATION_OK': 0,
        'ACTUATOR_SATURATION_UPPER_DYN': 1,
        'ACTUATOR_SATURATION_UPPER': 2,
        'ACTUATOR_SATURATION_LOWER_DYN': -1,
        'ACTUATOR_SATURATION_LOWER': -2,
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
                'px4_msgs.msg.ControlAllocatorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__control_allocator_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__control_allocator_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__control_allocator_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__control_allocator_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__control_allocator_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACTUATOR_SATURATION_OK': cls.__constants['ACTUATOR_SATURATION_OK'],
            'ACTUATOR_SATURATION_UPPER_DYN': cls.__constants['ACTUATOR_SATURATION_UPPER_DYN'],
            'ACTUATOR_SATURATION_UPPER': cls.__constants['ACTUATOR_SATURATION_UPPER'],
            'ACTUATOR_SATURATION_LOWER_DYN': cls.__constants['ACTUATOR_SATURATION_LOWER_DYN'],
            'ACTUATOR_SATURATION_LOWER': cls.__constants['ACTUATOR_SATURATION_LOWER'],
        }

    @property
    def ACTUATOR_SATURATION_OK(self):
        """Message constant 'ACTUATOR_SATURATION_OK'."""
        return Metaclass_ControlAllocatorStatus.__constants['ACTUATOR_SATURATION_OK']

    @property
    def ACTUATOR_SATURATION_UPPER_DYN(self):
        """Message constant 'ACTUATOR_SATURATION_UPPER_DYN'."""
        return Metaclass_ControlAllocatorStatus.__constants['ACTUATOR_SATURATION_UPPER_DYN']

    @property
    def ACTUATOR_SATURATION_UPPER(self):
        """Message constant 'ACTUATOR_SATURATION_UPPER'."""
        return Metaclass_ControlAllocatorStatus.__constants['ACTUATOR_SATURATION_UPPER']

    @property
    def ACTUATOR_SATURATION_LOWER_DYN(self):
        """Message constant 'ACTUATOR_SATURATION_LOWER_DYN'."""
        return Metaclass_ControlAllocatorStatus.__constants['ACTUATOR_SATURATION_LOWER_DYN']

    @property
    def ACTUATOR_SATURATION_LOWER(self):
        """Message constant 'ACTUATOR_SATURATION_LOWER'."""
        return Metaclass_ControlAllocatorStatus.__constants['ACTUATOR_SATURATION_LOWER']


class ControlAllocatorStatus(metaclass=Metaclass_ControlAllocatorStatus):
    """
    Message class 'ControlAllocatorStatus'.

    Constants:
      ACTUATOR_SATURATION_OK
      ACTUATOR_SATURATION_UPPER_DYN
      ACTUATOR_SATURATION_UPPER
      ACTUATOR_SATURATION_LOWER_DYN
      ACTUATOR_SATURATION_LOWER
    """

    __slots__ = [
        '_timestamp',
        '_torque_setpoint_achieved',
        '_unallocated_torque',
        '_thrust_setpoint_achieved',
        '_unallocated_thrust',
        '_actuator_saturation',
        '_handled_motor_failure_mask',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'torque_setpoint_achieved': 'boolean',
        'unallocated_torque': 'float[3]',
        'thrust_setpoint_achieved': 'boolean',
        'unallocated_thrust': 'float[3]',
        'actuator_saturation': 'int8[16]',
        'handled_motor_failure_mask': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('int8'), 16),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.torque_setpoint_achieved = kwargs.get('torque_setpoint_achieved', bool())
        if 'unallocated_torque' not in kwargs:
            self.unallocated_torque = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.unallocated_torque = numpy.array(kwargs.get('unallocated_torque'), dtype=numpy.float32)
            assert self.unallocated_torque.shape == (3, )
        self.thrust_setpoint_achieved = kwargs.get('thrust_setpoint_achieved', bool())
        if 'unallocated_thrust' not in kwargs:
            self.unallocated_thrust = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.unallocated_thrust = numpy.array(kwargs.get('unallocated_thrust'), dtype=numpy.float32)
            assert self.unallocated_thrust.shape == (3, )
        if 'actuator_saturation' not in kwargs:
            self.actuator_saturation = numpy.zeros(16, dtype=numpy.int8)
        else:
            self.actuator_saturation = numpy.array(kwargs.get('actuator_saturation'), dtype=numpy.int8)
            assert self.actuator_saturation.shape == (16, )
        self.handled_motor_failure_mask = kwargs.get('handled_motor_failure_mask', int())

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
        if self.torque_setpoint_achieved != other.torque_setpoint_achieved:
            return False
        if all(self.unallocated_torque != other.unallocated_torque):
            return False
        if self.thrust_setpoint_achieved != other.thrust_setpoint_achieved:
            return False
        if all(self.unallocated_thrust != other.unallocated_thrust):
            return False
        if all(self.actuator_saturation != other.actuator_saturation):
            return False
        if self.handled_motor_failure_mask != other.handled_motor_failure_mask:
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
    def torque_setpoint_achieved(self):
        """Message field 'torque_setpoint_achieved'."""
        return self._torque_setpoint_achieved

    @torque_setpoint_achieved.setter
    def torque_setpoint_achieved(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'torque_setpoint_achieved' field must be of type 'bool'"
        self._torque_setpoint_achieved = value

    @builtins.property
    def unallocated_torque(self):
        """Message field 'unallocated_torque'."""
        return self._unallocated_torque

    @unallocated_torque.setter
    def unallocated_torque(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'unallocated_torque' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'unallocated_torque' numpy.ndarray() must have a size of 3"
            self._unallocated_torque = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'unallocated_torque' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._unallocated_torque = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def thrust_setpoint_achieved(self):
        """Message field 'thrust_setpoint_achieved'."""
        return self._thrust_setpoint_achieved

    @thrust_setpoint_achieved.setter
    def thrust_setpoint_achieved(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'thrust_setpoint_achieved' field must be of type 'bool'"
        self._thrust_setpoint_achieved = value

    @builtins.property
    def unallocated_thrust(self):
        """Message field 'unallocated_thrust'."""
        return self._unallocated_thrust

    @unallocated_thrust.setter
    def unallocated_thrust(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'unallocated_thrust' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'unallocated_thrust' numpy.ndarray() must have a size of 3"
            self._unallocated_thrust = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'unallocated_thrust' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._unallocated_thrust = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def actuator_saturation(self):
        """Message field 'actuator_saturation'."""
        return self._actuator_saturation

    @actuator_saturation.setter
    def actuator_saturation(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.int8, \
                "The 'actuator_saturation' numpy.ndarray() must have the dtype of 'numpy.int8'"
            assert value.size == 16, \
                "The 'actuator_saturation' numpy.ndarray() must have a size of 16"
            self._actuator_saturation = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= -128 and val < 128 for val in value)), \
                "The 'actuator_saturation' field must be a set or sequence with length 16 and each value of type 'int' and each integer in [-128, 127]"
        self._actuator_saturation = numpy.array(value, dtype=numpy.int8)

    @builtins.property
    def handled_motor_failure_mask(self):
        """Message field 'handled_motor_failure_mask'."""
        return self._handled_motor_failure_mask

    @handled_motor_failure_mask.setter
    def handled_motor_failure_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'handled_motor_failure_mask' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'handled_motor_failure_mask' field must be an unsigned integer in [0, 65535]"
        self._handled_motor_failure_mask = value
