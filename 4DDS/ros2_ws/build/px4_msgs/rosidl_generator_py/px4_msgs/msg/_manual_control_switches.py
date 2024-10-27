# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/ManualControlSwitches.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ManualControlSwitches(type):
    """Metaclass of message 'ManualControlSwitches'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SWITCH_POS_NONE': 0,
        'SWITCH_POS_ON': 1,
        'SWITCH_POS_MIDDLE': 2,
        'SWITCH_POS_OFF': 3,
        'MODE_SLOT_NONE': 0,
        'MODE_SLOT_1': 1,
        'MODE_SLOT_2': 2,
        'MODE_SLOT_3': 3,
        'MODE_SLOT_4': 4,
        'MODE_SLOT_5': 5,
        'MODE_SLOT_6': 6,
        'MODE_SLOT_NUM': 6,
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
                'px4_msgs.msg.ManualControlSwitches')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__manual_control_switches
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__manual_control_switches
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__manual_control_switches
            cls._TYPE_SUPPORT = module.type_support_msg__msg__manual_control_switches
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__manual_control_switches

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SWITCH_POS_NONE': cls.__constants['SWITCH_POS_NONE'],
            'SWITCH_POS_ON': cls.__constants['SWITCH_POS_ON'],
            'SWITCH_POS_MIDDLE': cls.__constants['SWITCH_POS_MIDDLE'],
            'SWITCH_POS_OFF': cls.__constants['SWITCH_POS_OFF'],
            'MODE_SLOT_NONE': cls.__constants['MODE_SLOT_NONE'],
            'MODE_SLOT_1': cls.__constants['MODE_SLOT_1'],
            'MODE_SLOT_2': cls.__constants['MODE_SLOT_2'],
            'MODE_SLOT_3': cls.__constants['MODE_SLOT_3'],
            'MODE_SLOT_4': cls.__constants['MODE_SLOT_4'],
            'MODE_SLOT_5': cls.__constants['MODE_SLOT_5'],
            'MODE_SLOT_6': cls.__constants['MODE_SLOT_6'],
            'MODE_SLOT_NUM': cls.__constants['MODE_SLOT_NUM'],
        }

    @property
    def SWITCH_POS_NONE(self):
        """Message constant 'SWITCH_POS_NONE'."""
        return Metaclass_ManualControlSwitches.__constants['SWITCH_POS_NONE']

    @property
    def SWITCH_POS_ON(self):
        """Message constant 'SWITCH_POS_ON'."""
        return Metaclass_ManualControlSwitches.__constants['SWITCH_POS_ON']

    @property
    def SWITCH_POS_MIDDLE(self):
        """Message constant 'SWITCH_POS_MIDDLE'."""
        return Metaclass_ManualControlSwitches.__constants['SWITCH_POS_MIDDLE']

    @property
    def SWITCH_POS_OFF(self):
        """Message constant 'SWITCH_POS_OFF'."""
        return Metaclass_ManualControlSwitches.__constants['SWITCH_POS_OFF']

    @property
    def MODE_SLOT_NONE(self):
        """Message constant 'MODE_SLOT_NONE'."""
        return Metaclass_ManualControlSwitches.__constants['MODE_SLOT_NONE']

    @property
    def MODE_SLOT_1(self):
        """Message constant 'MODE_SLOT_1'."""
        return Metaclass_ManualControlSwitches.__constants['MODE_SLOT_1']

    @property
    def MODE_SLOT_2(self):
        """Message constant 'MODE_SLOT_2'."""
        return Metaclass_ManualControlSwitches.__constants['MODE_SLOT_2']

    @property
    def MODE_SLOT_3(self):
        """Message constant 'MODE_SLOT_3'."""
        return Metaclass_ManualControlSwitches.__constants['MODE_SLOT_3']

    @property
    def MODE_SLOT_4(self):
        """Message constant 'MODE_SLOT_4'."""
        return Metaclass_ManualControlSwitches.__constants['MODE_SLOT_4']

    @property
    def MODE_SLOT_5(self):
        """Message constant 'MODE_SLOT_5'."""
        return Metaclass_ManualControlSwitches.__constants['MODE_SLOT_5']

    @property
    def MODE_SLOT_6(self):
        """Message constant 'MODE_SLOT_6'."""
        return Metaclass_ManualControlSwitches.__constants['MODE_SLOT_6']

    @property
    def MODE_SLOT_NUM(self):
        """Message constant 'MODE_SLOT_NUM'."""
        return Metaclass_ManualControlSwitches.__constants['MODE_SLOT_NUM']


class ManualControlSwitches(metaclass=Metaclass_ManualControlSwitches):
    """
    Message class 'ManualControlSwitches'.

    Constants:
      SWITCH_POS_NONE
      SWITCH_POS_ON
      SWITCH_POS_MIDDLE
      SWITCH_POS_OFF
      MODE_SLOT_NONE
      MODE_SLOT_1
      MODE_SLOT_2
      MODE_SLOT_3
      MODE_SLOT_4
      MODE_SLOT_5
      MODE_SLOT_6
      MODE_SLOT_NUM
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_mode_slot',
        '_arm_switch',
        '_return_switch',
        '_loiter_switch',
        '_offboard_switch',
        '_kill_switch',
        '_gear_switch',
        '_transition_switch',
        '_photo_switch',
        '_video_switch',
        '_engage_main_motor_switch',
        '_switch_changes',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'mode_slot': 'uint8',
        'arm_switch': 'uint8',
        'return_switch': 'uint8',
        'loiter_switch': 'uint8',
        'offboard_switch': 'uint8',
        'kill_switch': 'uint8',
        'gear_switch': 'uint8',
        'transition_switch': 'uint8',
        'photo_switch': 'uint8',
        'video_switch': 'uint8',
        'engage_main_motor_switch': 'uint8',
        'switch_changes': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        self.mode_slot = kwargs.get('mode_slot', int())
        self.arm_switch = kwargs.get('arm_switch', int())
        self.return_switch = kwargs.get('return_switch', int())
        self.loiter_switch = kwargs.get('loiter_switch', int())
        self.offboard_switch = kwargs.get('offboard_switch', int())
        self.kill_switch = kwargs.get('kill_switch', int())
        self.gear_switch = kwargs.get('gear_switch', int())
        self.transition_switch = kwargs.get('transition_switch', int())
        self.photo_switch = kwargs.get('photo_switch', int())
        self.video_switch = kwargs.get('video_switch', int())
        self.engage_main_motor_switch = kwargs.get('engage_main_motor_switch', int())
        self.switch_changes = kwargs.get('switch_changes', int())

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
        if self.timestamp_sample != other.timestamp_sample:
            return False
        if self.mode_slot != other.mode_slot:
            return False
        if self.arm_switch != other.arm_switch:
            return False
        if self.return_switch != other.return_switch:
            return False
        if self.loiter_switch != other.loiter_switch:
            return False
        if self.offboard_switch != other.offboard_switch:
            return False
        if self.kill_switch != other.kill_switch:
            return False
        if self.gear_switch != other.gear_switch:
            return False
        if self.transition_switch != other.transition_switch:
            return False
        if self.photo_switch != other.photo_switch:
            return False
        if self.video_switch != other.video_switch:
            return False
        if self.engage_main_motor_switch != other.engage_main_motor_switch:
            return False
        if self.switch_changes != other.switch_changes:
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
    def timestamp_sample(self):
        """Message field 'timestamp_sample'."""
        return self._timestamp_sample

    @timestamp_sample.setter
    def timestamp_sample(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_sample' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_sample' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_sample = value

    @builtins.property
    def mode_slot(self):
        """Message field 'mode_slot'."""
        return self._mode_slot

    @mode_slot.setter
    def mode_slot(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode_slot' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode_slot' field must be an unsigned integer in [0, 255]"
        self._mode_slot = value

    @builtins.property
    def arm_switch(self):
        """Message field 'arm_switch'."""
        return self._arm_switch

    @arm_switch.setter
    def arm_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'arm_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'arm_switch' field must be an unsigned integer in [0, 255]"
        self._arm_switch = value

    @builtins.property
    def return_switch(self):
        """Message field 'return_switch'."""
        return self._return_switch

    @return_switch.setter
    def return_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'return_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'return_switch' field must be an unsigned integer in [0, 255]"
        self._return_switch = value

    @builtins.property
    def loiter_switch(self):
        """Message field 'loiter_switch'."""
        return self._loiter_switch

    @loiter_switch.setter
    def loiter_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'loiter_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'loiter_switch' field must be an unsigned integer in [0, 255]"
        self._loiter_switch = value

    @builtins.property
    def offboard_switch(self):
        """Message field 'offboard_switch'."""
        return self._offboard_switch

    @offboard_switch.setter
    def offboard_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'offboard_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'offboard_switch' field must be an unsigned integer in [0, 255]"
        self._offboard_switch = value

    @builtins.property
    def kill_switch(self):
        """Message field 'kill_switch'."""
        return self._kill_switch

    @kill_switch.setter
    def kill_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'kill_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'kill_switch' field must be an unsigned integer in [0, 255]"
        self._kill_switch = value

    @builtins.property
    def gear_switch(self):
        """Message field 'gear_switch'."""
        return self._gear_switch

    @gear_switch.setter
    def gear_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gear_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'gear_switch' field must be an unsigned integer in [0, 255]"
        self._gear_switch = value

    @builtins.property
    def transition_switch(self):
        """Message field 'transition_switch'."""
        return self._transition_switch

    @transition_switch.setter
    def transition_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'transition_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'transition_switch' field must be an unsigned integer in [0, 255]"
        self._transition_switch = value

    @builtins.property
    def photo_switch(self):
        """Message field 'photo_switch'."""
        return self._photo_switch

    @photo_switch.setter
    def photo_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'photo_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'photo_switch' field must be an unsigned integer in [0, 255]"
        self._photo_switch = value

    @builtins.property
    def video_switch(self):
        """Message field 'video_switch'."""
        return self._video_switch

    @video_switch.setter
    def video_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'video_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'video_switch' field must be an unsigned integer in [0, 255]"
        self._video_switch = value

    @builtins.property
    def engage_main_motor_switch(self):
        """Message field 'engage_main_motor_switch'."""
        return self._engage_main_motor_switch

    @engage_main_motor_switch.setter
    def engage_main_motor_switch(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'engage_main_motor_switch' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'engage_main_motor_switch' field must be an unsigned integer in [0, 255]"
        self._engage_main_motor_switch = value

    @builtins.property
    def switch_changes(self):
        """Message field 'switch_changes'."""
        return self._switch_changes

    @switch_changes.setter
    def switch_changes(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'switch_changes' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'switch_changes' field must be an unsigned integer in [0, 4294967295]"
        self._switch_changes = value
