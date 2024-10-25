# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/ActionRequest.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ActionRequest(type):
    """Metaclass of message 'ActionRequest'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ACTION_DISARM': 0,
        'ACTION_ARM': 1,
        'ACTION_TOGGLE_ARMING': 2,
        'ACTION_UNKILL': 3,
        'ACTION_KILL': 4,
        'ACTION_SWITCH_MODE': 5,
        'ACTION_VTOL_TRANSITION_TO_MULTICOPTER': 6,
        'ACTION_VTOL_TRANSITION_TO_FIXEDWING': 7,
        'SOURCE_RC_STICK_GESTURE': 0,
        'SOURCE_RC_SWITCH': 1,
        'SOURCE_RC_BUTTON': 2,
        'SOURCE_RC_MODE_SLOT': 3,
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
                'px4_msgs.msg.ActionRequest')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__action_request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__action_request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__action_request
            cls._TYPE_SUPPORT = module.type_support_msg__msg__action_request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__action_request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ACTION_DISARM': cls.__constants['ACTION_DISARM'],
            'ACTION_ARM': cls.__constants['ACTION_ARM'],
            'ACTION_TOGGLE_ARMING': cls.__constants['ACTION_TOGGLE_ARMING'],
            'ACTION_UNKILL': cls.__constants['ACTION_UNKILL'],
            'ACTION_KILL': cls.__constants['ACTION_KILL'],
            'ACTION_SWITCH_MODE': cls.__constants['ACTION_SWITCH_MODE'],
            'ACTION_VTOL_TRANSITION_TO_MULTICOPTER': cls.__constants['ACTION_VTOL_TRANSITION_TO_MULTICOPTER'],
            'ACTION_VTOL_TRANSITION_TO_FIXEDWING': cls.__constants['ACTION_VTOL_TRANSITION_TO_FIXEDWING'],
            'SOURCE_RC_STICK_GESTURE': cls.__constants['SOURCE_RC_STICK_GESTURE'],
            'SOURCE_RC_SWITCH': cls.__constants['SOURCE_RC_SWITCH'],
            'SOURCE_RC_BUTTON': cls.__constants['SOURCE_RC_BUTTON'],
            'SOURCE_RC_MODE_SLOT': cls.__constants['SOURCE_RC_MODE_SLOT'],
        }

    @property
    def ACTION_DISARM(self):
        """Message constant 'ACTION_DISARM'."""
        return Metaclass_ActionRequest.__constants['ACTION_DISARM']

    @property
    def ACTION_ARM(self):
        """Message constant 'ACTION_ARM'."""
        return Metaclass_ActionRequest.__constants['ACTION_ARM']

    @property
    def ACTION_TOGGLE_ARMING(self):
        """Message constant 'ACTION_TOGGLE_ARMING'."""
        return Metaclass_ActionRequest.__constants['ACTION_TOGGLE_ARMING']

    @property
    def ACTION_UNKILL(self):
        """Message constant 'ACTION_UNKILL'."""
        return Metaclass_ActionRequest.__constants['ACTION_UNKILL']

    @property
    def ACTION_KILL(self):
        """Message constant 'ACTION_KILL'."""
        return Metaclass_ActionRequest.__constants['ACTION_KILL']

    @property
    def ACTION_SWITCH_MODE(self):
        """Message constant 'ACTION_SWITCH_MODE'."""
        return Metaclass_ActionRequest.__constants['ACTION_SWITCH_MODE']

    @property
    def ACTION_VTOL_TRANSITION_TO_MULTICOPTER(self):
        """Message constant 'ACTION_VTOL_TRANSITION_TO_MULTICOPTER'."""
        return Metaclass_ActionRequest.__constants['ACTION_VTOL_TRANSITION_TO_MULTICOPTER']

    @property
    def ACTION_VTOL_TRANSITION_TO_FIXEDWING(self):
        """Message constant 'ACTION_VTOL_TRANSITION_TO_FIXEDWING'."""
        return Metaclass_ActionRequest.__constants['ACTION_VTOL_TRANSITION_TO_FIXEDWING']

    @property
    def SOURCE_RC_STICK_GESTURE(self):
        """Message constant 'SOURCE_RC_STICK_GESTURE'."""
        return Metaclass_ActionRequest.__constants['SOURCE_RC_STICK_GESTURE']

    @property
    def SOURCE_RC_SWITCH(self):
        """Message constant 'SOURCE_RC_SWITCH'."""
        return Metaclass_ActionRequest.__constants['SOURCE_RC_SWITCH']

    @property
    def SOURCE_RC_BUTTON(self):
        """Message constant 'SOURCE_RC_BUTTON'."""
        return Metaclass_ActionRequest.__constants['SOURCE_RC_BUTTON']

    @property
    def SOURCE_RC_MODE_SLOT(self):
        """Message constant 'SOURCE_RC_MODE_SLOT'."""
        return Metaclass_ActionRequest.__constants['SOURCE_RC_MODE_SLOT']


class ActionRequest(metaclass=Metaclass_ActionRequest):
    """
    Message class 'ActionRequest'.

    Constants:
      ACTION_DISARM
      ACTION_ARM
      ACTION_TOGGLE_ARMING
      ACTION_UNKILL
      ACTION_KILL
      ACTION_SWITCH_MODE
      ACTION_VTOL_TRANSITION_TO_MULTICOPTER
      ACTION_VTOL_TRANSITION_TO_FIXEDWING
      SOURCE_RC_STICK_GESTURE
      SOURCE_RC_SWITCH
      SOURCE_RC_BUTTON
      SOURCE_RC_MODE_SLOT
    """

    __slots__ = [
        '_timestamp',
        '_action',
        '_source',
        '_mode',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'action': 'uint8',
        'source': 'uint8',
        'mode': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.action = kwargs.get('action', int())
        self.source = kwargs.get('source', int())
        self.mode = kwargs.get('mode', int())

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
        if self.source != other.source:
            return False
        if self.mode != other.mode:
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
    def source(self):
        """Message field 'source'."""
        return self._source

    @source.setter
    def source(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'source' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'source' field must be an unsigned integer in [0, 255]"
        self._source = value

    @builtins.property
    def mode(self):
        """Message field 'mode'."""
        return self._mode

    @mode.setter
    def mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mode' field must be an unsigned integer in [0, 255]"
        self._mode = value
