# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/GimbalManagerInformation.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GimbalManagerInformation(type):
    """Metaclass of message 'GimbalManagerInformation'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT': 1,
        'GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL': 2,
        'GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS': 4,
        'GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW': 8,
        'GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK': 16,
        'GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS': 32,
        'GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW': 64,
        'GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK': 128,
        'GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS': 256,
        'GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW': 512,
        'GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK': 1024,
        'GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW': 2048,
        'GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL': 65536,
        'GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL': 131072,
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
                'px4_msgs.msg.GimbalManagerInformation')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__gimbal_manager_information
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__gimbal_manager_information
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__gimbal_manager_information
            cls._TYPE_SUPPORT = module.type_support_msg__msg__gimbal_manager_information
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__gimbal_manager_information

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT'],
            'GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL'],
            'GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS'],
            'GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW'],
            'GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK'],
            'GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS'],
            'GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW'],
            'GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK'],
            'GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS'],
            'GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW'],
            'GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK'],
            'GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW'],
            'GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL'],
            'GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL': cls.__constants['GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL'],
        }

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT']

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL']

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS']

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW']

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK']

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS']

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW']

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK']

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS']

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW']

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK']

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW']

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL']

    @property
    def GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL(self):
        """Message constant 'GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL'."""
        return Metaclass_GimbalManagerInformation.__constants['GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL']


class GimbalManagerInformation(metaclass=Metaclass_GimbalManagerInformation):
    """
    Message class 'GimbalManagerInformation'.

    Constants:
      GIMBAL_MANAGER_CAP_FLAGS_HAS_RETRACT
      GIMBAL_MANAGER_CAP_FLAGS_HAS_NEUTRAL
      GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_AXIS
      GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_FOLLOW
      GIMBAL_MANAGER_CAP_FLAGS_HAS_ROLL_LOCK
      GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_AXIS
      GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_FOLLOW
      GIMBAL_MANAGER_CAP_FLAGS_HAS_PITCH_LOCK
      GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_AXIS
      GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_FOLLOW
      GIMBAL_MANAGER_CAP_FLAGS_HAS_YAW_LOCK
      GIMBAL_MANAGER_CAP_FLAGS_SUPPORTS_INFINITE_YAW
      GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_LOCAL
      GIMBAL_MANAGER_CAP_FLAGS_CAN_POINT_LOCATION_GLOBAL
    """

    __slots__ = [
        '_timestamp',
        '_cap_flags',
        '_gimbal_device_id',
        '_roll_min',
        '_roll_max',
        '_pitch_min',
        '_pitch_max',
        '_yaw_min',
        '_yaw_max',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'cap_flags': 'uint32',
        'gimbal_device_id': 'uint8',
        'roll_min': 'float',
        'roll_max': 'float',
        'pitch_min': 'float',
        'pitch_max': 'float',
        'yaw_min': 'float',
        'yaw_max': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
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
        self.cap_flags = kwargs.get('cap_flags', int())
        self.gimbal_device_id = kwargs.get('gimbal_device_id', int())
        self.roll_min = kwargs.get('roll_min', float())
        self.roll_max = kwargs.get('roll_max', float())
        self.pitch_min = kwargs.get('pitch_min', float())
        self.pitch_max = kwargs.get('pitch_max', float())
        self.yaw_min = kwargs.get('yaw_min', float())
        self.yaw_max = kwargs.get('yaw_max', float())

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
        if self.cap_flags != other.cap_flags:
            return False
        if self.gimbal_device_id != other.gimbal_device_id:
            return False
        if self.roll_min != other.roll_min:
            return False
        if self.roll_max != other.roll_max:
            return False
        if self.pitch_min != other.pitch_min:
            return False
        if self.pitch_max != other.pitch_max:
            return False
        if self.yaw_min != other.yaw_min:
            return False
        if self.yaw_max != other.yaw_max:
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
    def cap_flags(self):
        """Message field 'cap_flags'."""
        return self._cap_flags

    @cap_flags.setter
    def cap_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'cap_flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'cap_flags' field must be an unsigned integer in [0, 4294967295]"
        self._cap_flags = value

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
    def roll_min(self):
        """Message field 'roll_min'."""
        return self._roll_min

    @roll_min.setter
    def roll_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll_min = value

    @builtins.property
    def roll_max(self):
        """Message field 'roll_max'."""
        return self._roll_max

    @roll_max.setter
    def roll_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll_max = value

    @builtins.property
    def pitch_min(self):
        """Message field 'pitch_min'."""
        return self._pitch_min

    @pitch_min.setter
    def pitch_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_min = value

    @builtins.property
    def pitch_max(self):
        """Message field 'pitch_max'."""
        return self._pitch_max

    @pitch_max.setter
    def pitch_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch_max = value

    @builtins.property
    def yaw_min(self):
        """Message field 'yaw_min'."""
        return self._yaw_min

    @yaw_min.setter
    def yaw_min(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_min' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_min' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_min = value

    @builtins.property
    def yaw_max(self):
        """Message field 'yaw_max'."""
        return self._yaw_max

    @yaw_max.setter
    def yaw_max(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'yaw_max' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'yaw_max' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._yaw_max = value
