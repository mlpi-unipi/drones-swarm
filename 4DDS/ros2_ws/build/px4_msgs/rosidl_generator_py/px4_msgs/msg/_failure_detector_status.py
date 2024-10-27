# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/FailureDetectorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FailureDetectorStatus(type):
    """Metaclass of message 'FailureDetectorStatus'."""

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
                'px4_msgs.msg.FailureDetectorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__failure_detector_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__failure_detector_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__failure_detector_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__failure_detector_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__failure_detector_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FailureDetectorStatus(metaclass=Metaclass_FailureDetectorStatus):
    """Message class 'FailureDetectorStatus'."""

    __slots__ = [
        '_timestamp',
        '_fd_roll',
        '_fd_pitch',
        '_fd_alt',
        '_fd_ext',
        '_fd_arm_escs',
        '_fd_battery',
        '_fd_imbalanced_prop',
        '_fd_motor',
        '_imbalanced_prop_metric',
        '_motor_failure_mask',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'fd_roll': 'boolean',
        'fd_pitch': 'boolean',
        'fd_alt': 'boolean',
        'fd_ext': 'boolean',
        'fd_arm_escs': 'boolean',
        'fd_battery': 'boolean',
        'fd_imbalanced_prop': 'boolean',
        'fd_motor': 'boolean',
        'imbalanced_prop_metric': 'float',
        'motor_failure_mask': 'uint16',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.fd_roll = kwargs.get('fd_roll', bool())
        self.fd_pitch = kwargs.get('fd_pitch', bool())
        self.fd_alt = kwargs.get('fd_alt', bool())
        self.fd_ext = kwargs.get('fd_ext', bool())
        self.fd_arm_escs = kwargs.get('fd_arm_escs', bool())
        self.fd_battery = kwargs.get('fd_battery', bool())
        self.fd_imbalanced_prop = kwargs.get('fd_imbalanced_prop', bool())
        self.fd_motor = kwargs.get('fd_motor', bool())
        self.imbalanced_prop_metric = kwargs.get('imbalanced_prop_metric', float())
        self.motor_failure_mask = kwargs.get('motor_failure_mask', int())

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
        if self.fd_roll != other.fd_roll:
            return False
        if self.fd_pitch != other.fd_pitch:
            return False
        if self.fd_alt != other.fd_alt:
            return False
        if self.fd_ext != other.fd_ext:
            return False
        if self.fd_arm_escs != other.fd_arm_escs:
            return False
        if self.fd_battery != other.fd_battery:
            return False
        if self.fd_imbalanced_prop != other.fd_imbalanced_prop:
            return False
        if self.fd_motor != other.fd_motor:
            return False
        if self.imbalanced_prop_metric != other.imbalanced_prop_metric:
            return False
        if self.motor_failure_mask != other.motor_failure_mask:
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
    def fd_roll(self):
        """Message field 'fd_roll'."""
        return self._fd_roll

    @fd_roll.setter
    def fd_roll(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fd_roll' field must be of type 'bool'"
        self._fd_roll = value

    @builtins.property
    def fd_pitch(self):
        """Message field 'fd_pitch'."""
        return self._fd_pitch

    @fd_pitch.setter
    def fd_pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fd_pitch' field must be of type 'bool'"
        self._fd_pitch = value

    @builtins.property
    def fd_alt(self):
        """Message field 'fd_alt'."""
        return self._fd_alt

    @fd_alt.setter
    def fd_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fd_alt' field must be of type 'bool'"
        self._fd_alt = value

    @builtins.property
    def fd_ext(self):
        """Message field 'fd_ext'."""
        return self._fd_ext

    @fd_ext.setter
    def fd_ext(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fd_ext' field must be of type 'bool'"
        self._fd_ext = value

    @builtins.property
    def fd_arm_escs(self):
        """Message field 'fd_arm_escs'."""
        return self._fd_arm_escs

    @fd_arm_escs.setter
    def fd_arm_escs(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fd_arm_escs' field must be of type 'bool'"
        self._fd_arm_escs = value

    @builtins.property
    def fd_battery(self):
        """Message field 'fd_battery'."""
        return self._fd_battery

    @fd_battery.setter
    def fd_battery(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fd_battery' field must be of type 'bool'"
        self._fd_battery = value

    @builtins.property
    def fd_imbalanced_prop(self):
        """Message field 'fd_imbalanced_prop'."""
        return self._fd_imbalanced_prop

    @fd_imbalanced_prop.setter
    def fd_imbalanced_prop(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fd_imbalanced_prop' field must be of type 'bool'"
        self._fd_imbalanced_prop = value

    @builtins.property
    def fd_motor(self):
        """Message field 'fd_motor'."""
        return self._fd_motor

    @fd_motor.setter
    def fd_motor(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'fd_motor' field must be of type 'bool'"
        self._fd_motor = value

    @builtins.property
    def imbalanced_prop_metric(self):
        """Message field 'imbalanced_prop_metric'."""
        return self._imbalanced_prop_metric

    @imbalanced_prop_metric.setter
    def imbalanced_prop_metric(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'imbalanced_prop_metric' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'imbalanced_prop_metric' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._imbalanced_prop_metric = value

    @builtins.property
    def motor_failure_mask(self):
        """Message field 'motor_failure_mask'."""
        return self._motor_failure_mask

    @motor_failure_mask.setter
    def motor_failure_mask(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_failure_mask' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'motor_failure_mask' field must be an unsigned integer in [0, 65535]"
        self._motor_failure_mask = value
