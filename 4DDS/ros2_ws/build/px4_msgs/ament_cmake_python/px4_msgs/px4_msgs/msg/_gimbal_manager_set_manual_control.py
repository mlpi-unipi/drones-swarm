# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/GimbalManagerSetManualControl.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GimbalManagerSetManualControl(type):
    """Metaclass of message 'GimbalManagerSetManualControl'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GIMBAL_MANAGER_FLAGS_RETRACT': 1,
        'GIMBAL_MANAGER_FLAGS_NEUTRAL': 2,
        'GIMBAL_MANAGER_FLAGS_ROLL_LOCK': 4,
        'GIMBAL_MANAGER_FLAGS_PITCH_LOCK': 8,
        'GIMBAL_MANAGER_FLAGS_YAW_LOCK': 16,
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
                'px4_msgs.msg.GimbalManagerSetManualControl')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gimbal_manager_set_manual_control
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gimbal_manager_set_manual_control
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gimbal_manager_set_manual_control
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gimbal_manager_set_manual_control
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gimbal_manager_set_manual_control

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GIMBAL_MANAGER_FLAGS_RETRACT': cls.__constants['GIMBAL_MANAGER_FLAGS_RETRACT'],
            'GIMBAL_MANAGER_FLAGS_NEUTRAL': cls.__constants['GIMBAL_MANAGER_FLAGS_NEUTRAL'],
            'GIMBAL_MANAGER_FLAGS_ROLL_LOCK': cls.__constants['GIMBAL_MANAGER_FLAGS_ROLL_LOCK'],
            'GIMBAL_MANAGER_FLAGS_PITCH_LOCK': cls.__constants['GIMBAL_MANAGER_FLAGS_PITCH_LOCK'],
            'GIMBAL_MANAGER_FLAGS_YAW_LOCK': cls.__constants['GIMBAL_MANAGER_FLAGS_YAW_LOCK'],
        }

    @property
    def GIMBAL_MANAGER_FLAGS_RETRACT(self):
        """Message constant 'GIMBAL_MANAGER_FLAGS_RETRACT'."""
        return Metaclass_GimbalManagerSetManualControl.__constants['GIMBAL_MANAGER_FLAGS_RETRACT']

    @property
    def GIMBAL_MANAGER_FLAGS_NEUTRAL(self):
        """Message constant 'GIMBAL_MANAGER_FLAGS_NEUTRAL'."""
        return Metaclass_GimbalManagerSetManualControl.__constants['GIMBAL_MANAGER_FLAGS_NEUTRAL']

    @property
    def GIMBAL_MANAGER_FLAGS_ROLL_LOCK(self):
        """Message constant 'GIMBAL_MANAGER_FLAGS_ROLL_LOCK'."""
        return Metaclass_GimbalManagerSetManualControl.__constants['GIMBAL_MANAGER_FLAGS_ROLL_LOCK']

    @property
    def GIMBAL_MANAGER_FLAGS_PITCH_LOCK(self):
        """Message constant 'GIMBAL_MANAGER_FLAGS_PITCH_LOCK'."""
        return Metaclass_GimbalManagerSetManualControl.__constants['GIMBAL_MANAGER_FLAGS_PITCH_LOCK']

    @property
    def GIMBAL_MANAGER_FLAGS_YAW_LOCK(self):
        """Message constant 'GIMBAL_MANAGER_FLAGS_YAW_LOCK'."""
        return Metaclass_GimbalManagerSetManualControl.__constants['GIMBAL_MANAGER_FLAGS_YAW_LOCK']


class GimbalManagerSetManualControl(metaclass=Metaclass_GimbalManagerSetManualControl):
    """
    Message class 'GimbalManagerSetManualControl'.

    Constants:
      GIMBAL_MANAGER_FLAGS_RETRACT
      GIMBAL_MANAGER_FLAGS_NEUTRAL
      GIMBAL_MANAGER_FLAGS_ROLL_LOCK
      GIMBAL_MANAGER_FLAGS_PITCH_LOCK
      GIMBAL_MANAGER_FLAGS_YAW_LOCK
    """

    __slots__ = [
        '_timestamp',
        '_origin_sysid',
        '_origin_compid',
        '_target_system',
        '_target_component',
        '_flags',
        '_gimbal_device_id',
        '_pitch',
        '_yaw',
        '_pitch_rate',
        '_yaw_rate',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'origin_sysid': 'uint8',
        'origin_compid': 'uint8',
        'target_system': 'uint8',
        'target_component': 'uint8',
        'flags': 'uint32',
        'gimbal_device_id': 'uint8',
        'pitch': 'float',
        'yaw': 'float',
        'pitch_rate': 'float',
        'yaw_rate': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.origin_sysid = kwargs.get('origin_sysid', int())
        self.origin_compid = kwargs.get('origin_compid', int())
        self.target_system = kwargs.get('target_system', int())
        self.target_component = kwargs.get('target_component', int())
        self.flags = kwargs.get('flags', int())
        self.gimbal_device_id = kwargs.get('gimbal_device_id', int())
        self.pitch = kwargs.get('pitch', float())
        self.yaw = kwargs.get('yaw', float())
        self.pitch_rate = kwargs.get('pitch_rate', float())
        self.yaw_rate = kwargs.get('yaw_rate', float())

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
        if self.origin_sysid != other.origin_sysid:
            return False
        if self.origin_compid != other.origin_compid:
            return False
        if self.target_system != other.target_system:
            return False
        if self.target_component != other.target_component:
            return False
        if self.flags != other.flags:
            return False
        if self.gimbal_device_id != other.gimbal_device_id:
            return False
        if self.pitch != other.pitch:
            return False
        if self.yaw != other.yaw:
            return False
        if self.pitch_rate != other.pitch_rate:
            return False
        if self.yaw_rate != other.yaw_rate:
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
    def origin_sysid(self):
        """Message field 'origin_sysid'."""
        return self._origin_sysid

    @origin_sysid.setter
    def origin_sysid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'origin_sysid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'origin_sysid' field must be an unsigned integer in [0, 255]"
        self._origin_sysid = value

    @builtins.property
    def origin_compid(self):
        """Message field 'origin_compid'."""
        return self._origin_compid

    @origin_compid.setter
    def origin_compid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'origin_compid' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'origin_compid' field must be an unsigned integer in [0, 255]"
        self._origin_compid = value

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
    def flags(self):
        """Message field 'flags'."""
        return self._flags

    @flags.setter
    def flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'flags' field must be an unsigned integer in [0, 4294967295]"
        self._flags = value

    @builtins.property
    def gimbal_device_id(self):
        """Message field 'gimbal_device_id'."""
        return self._gimbal_device_id

    @gimbal_device_id.setter
    def gimbal_device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gimbal_device_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gimbal_device_id' field must be an unsigned integer in [0, 255]"
        self._gimbal_device_id = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch = value

    @builtins.property
    def yaw(self):
        """Message field 'yaw'."""
        return self._yaw

    @yaw.setter
    def yaw(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw = value

    @builtins.property
    def pitch_rate(self):
        """Message field 'pitch_rate'."""
        return self._pitch_rate

    @pitch_rate.setter
    def pitch_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_rate = value

    @builtins.property
    def yaw_rate(self):
        """Message field 'yaw_rate'."""
        return self._yaw_rate

    @yaw_rate.setter
    def yaw_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_rate' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_rate' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_rate = value
