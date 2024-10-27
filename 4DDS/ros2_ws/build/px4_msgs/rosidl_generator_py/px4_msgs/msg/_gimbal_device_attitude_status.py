# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/GimbalDeviceAttitudeStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'q'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GimbalDeviceAttitudeStatus(type):
    """Metaclass of message 'GimbalDeviceAttitudeStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'DEVICE_FLAGS_RETRACT': 1,
        'DEVICE_FLAGS_NEUTRAL': 2,
        'DEVICE_FLAGS_ROLL_LOCK': 4,
        'DEVICE_FLAGS_PITCH_LOCK': 8,
        'DEVICE_FLAGS_YAW_LOCK': 16,
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
                'px4_msgs.msg.GimbalDeviceAttitudeStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gimbal_device_attitude_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gimbal_device_attitude_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gimbal_device_attitude_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gimbal_device_attitude_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gimbal_device_attitude_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'DEVICE_FLAGS_RETRACT': cls.__constants['DEVICE_FLAGS_RETRACT'],
            'DEVICE_FLAGS_NEUTRAL': cls.__constants['DEVICE_FLAGS_NEUTRAL'],
            'DEVICE_FLAGS_ROLL_LOCK': cls.__constants['DEVICE_FLAGS_ROLL_LOCK'],
            'DEVICE_FLAGS_PITCH_LOCK': cls.__constants['DEVICE_FLAGS_PITCH_LOCK'],
            'DEVICE_FLAGS_YAW_LOCK': cls.__constants['DEVICE_FLAGS_YAW_LOCK'],
        }

    @property
    def DEVICE_FLAGS_RETRACT(self):
        """Message constant 'DEVICE_FLAGS_RETRACT'."""
        return Metaclass_GimbalDeviceAttitudeStatus.__constants['DEVICE_FLAGS_RETRACT']

    @property
    def DEVICE_FLAGS_NEUTRAL(self):
        """Message constant 'DEVICE_FLAGS_NEUTRAL'."""
        return Metaclass_GimbalDeviceAttitudeStatus.__constants['DEVICE_FLAGS_NEUTRAL']

    @property
    def DEVICE_FLAGS_ROLL_LOCK(self):
        """Message constant 'DEVICE_FLAGS_ROLL_LOCK'."""
        return Metaclass_GimbalDeviceAttitudeStatus.__constants['DEVICE_FLAGS_ROLL_LOCK']

    @property
    def DEVICE_FLAGS_PITCH_LOCK(self):
        """Message constant 'DEVICE_FLAGS_PITCH_LOCK'."""
        return Metaclass_GimbalDeviceAttitudeStatus.__constants['DEVICE_FLAGS_PITCH_LOCK']

    @property
    def DEVICE_FLAGS_YAW_LOCK(self):
        """Message constant 'DEVICE_FLAGS_YAW_LOCK'."""
        return Metaclass_GimbalDeviceAttitudeStatus.__constants['DEVICE_FLAGS_YAW_LOCK']


class GimbalDeviceAttitudeStatus(metaclass=Metaclass_GimbalDeviceAttitudeStatus):
    """
    Message class 'GimbalDeviceAttitudeStatus'.

    Constants:
      DEVICE_FLAGS_RETRACT
      DEVICE_FLAGS_NEUTRAL
      DEVICE_FLAGS_ROLL_LOCK
      DEVICE_FLAGS_PITCH_LOCK
      DEVICE_FLAGS_YAW_LOCK
    """

    __slots__ = [
        '_timestamp',
        '_target_system',
        '_target_component',
        '_device_flags',
        '_q',
        '_angular_velocity_x',
        '_angular_velocity_y',
        '_angular_velocity_z',
        '_failure_flags',
        '_received_from_mavlink',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'target_system': 'uint8',
        'target_component': 'uint8',
        'device_flags': 'uint16',
        'q': 'float[4]',
        'angular_velocity_x': 'float',
        'angular_velocity_y': 'float',
        'angular_velocity_z': 'float',
        'failure_flags': 'uint32',
        'received_from_mavlink': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 4),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.target_system = kwargs.get('target_system', int())
        self.target_component = kwargs.get('target_component', int())
        self.device_flags = kwargs.get('device_flags', int())
        if 'q' not in kwargs:
            self.q = numpy.zeros(4, dtype=numpy.float32)
        else:
            self.q = numpy.array(kwargs.get('q'), dtype=numpy.float32)
            assert self.q.shape == (4, )
        self.angular_velocity_x = kwargs.get('angular_velocity_x', float())
        self.angular_velocity_y = kwargs.get('angular_velocity_y', float())
        self.angular_velocity_z = kwargs.get('angular_velocity_z', float())
        self.failure_flags = kwargs.get('failure_flags', int())
        self.received_from_mavlink = kwargs.get('received_from_mavlink', bool())

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
        if self.target_system != other.target_system:
            return False
        if self.target_component != other.target_component:
            return False
        if self.device_flags != other.device_flags:
            return False
        if all(self.q != other.q):
            return False
        if self.angular_velocity_x != other.angular_velocity_x:
            return False
        if self.angular_velocity_y != other.angular_velocity_y:
            return False
        if self.angular_velocity_z != other.angular_velocity_z:
            return False
        if self.failure_flags != other.failure_flags:
            return False
        if self.received_from_mavlink != other.received_from_mavlink:
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
            assert value >= 0 and value < 256, \
                "The 'target_component' field must be an unsigned integer in [0, 255]"
        self._target_component = value

    @builtins.property
    def device_flags(self):
        """Message field 'device_flags'."""
        return self._device_flags

    @device_flags.setter
    def device_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'device_flags' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'device_flags' field must be an unsigned integer in [0, 65535]"
        self._device_flags = value

    @builtins.property
    def q(self):
        """Message field 'q'."""
        return self._q

    @q.setter
    def q(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'q' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 4, \
                "The 'q' numpy.ndarray() must have a size of 4"
            self._q = value
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
                "The 'q' field must be a set or sequence with length 4 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._q = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def angular_velocity_x(self):
        """Message field 'angular_velocity_x'."""
        return self._angular_velocity_x

    @angular_velocity_x.setter
    def angular_velocity_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_velocity_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angular_velocity_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angular_velocity_x = value

    @builtins.property
    def angular_velocity_y(self):
        """Message field 'angular_velocity_y'."""
        return self._angular_velocity_y

    @angular_velocity_y.setter
    def angular_velocity_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_velocity_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angular_velocity_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angular_velocity_y = value

    @builtins.property
    def angular_velocity_z(self):
        """Message field 'angular_velocity_z'."""
        return self._angular_velocity_z

    @angular_velocity_z.setter
    def angular_velocity_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'angular_velocity_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'angular_velocity_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._angular_velocity_z = value

    @builtins.property
    def failure_flags(self):
        """Message field 'failure_flags'."""
        return self._failure_flags

    @failure_flags.setter
    def failure_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'failure_flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'failure_flags' field must be an unsigned integer in [0, 4294967295]"
        self._failure_flags = value

    @builtins.property
    def received_from_mavlink(self):
        """Message field 'received_from_mavlink'."""
        return self._received_from_mavlink

    @received_from_mavlink.setter
    def received_from_mavlink(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'received_from_mavlink' field must be of type 'bool'"
        self._received_from_mavlink = value
