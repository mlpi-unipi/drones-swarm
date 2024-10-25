# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/ArmingCheckReply.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ArmingCheckReply(type):
    """Metaclass of message 'ArmingCheckReply'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'HEALTH_COMPONENT_INDEX_NONE': 0,
        'HEALTH_COMPONENT_INDEX_AVOIDANCE': 19,
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
                'px4_msgs.msg.ArmingCheckReply')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__arming_check_reply
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__arming_check_reply
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__arming_check_reply
            cls._TYPE_SUPPORT = module.type_support_msg__msg__arming_check_reply
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__arming_check_reply

            from px4_msgs.msg import Event
            if Event.__class__._TYPE_SUPPORT is None:
                Event.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'HEALTH_COMPONENT_INDEX_NONE': cls.__constants['HEALTH_COMPONENT_INDEX_NONE'],
            'HEALTH_COMPONENT_INDEX_AVOIDANCE': cls.__constants['HEALTH_COMPONENT_INDEX_AVOIDANCE'],
            'ORB_QUEUE_LENGTH': cls.__constants['ORB_QUEUE_LENGTH'],
        }

    @property
    def HEALTH_COMPONENT_INDEX_NONE(self):
        """Message constant 'HEALTH_COMPONENT_INDEX_NONE'."""
        return Metaclass_ArmingCheckReply.__constants['HEALTH_COMPONENT_INDEX_NONE']

    @property
    def HEALTH_COMPONENT_INDEX_AVOIDANCE(self):
        """Message constant 'HEALTH_COMPONENT_INDEX_AVOIDANCE'."""
        return Metaclass_ArmingCheckReply.__constants['HEALTH_COMPONENT_INDEX_AVOIDANCE']

    @property
    def ORB_QUEUE_LENGTH(self):
        """Message constant 'ORB_QUEUE_LENGTH'."""
        return Metaclass_ArmingCheckReply.__constants['ORB_QUEUE_LENGTH']


class ArmingCheckReply(metaclass=Metaclass_ArmingCheckReply):
    """
    Message class 'ArmingCheckReply'.

    Constants:
      HEALTH_COMPONENT_INDEX_NONE
      HEALTH_COMPONENT_INDEX_AVOIDANCE
      ORB_QUEUE_LENGTH
    """

    __slots__ = [
        '_timestamp',
        '_request_id',
        '_registration_id',
        '_health_component_index',
        '_health_component_is_present',
        '_health_component_warning',
        '_health_component_error',
        '_can_arm_and_run',
        '_num_events',
        '_events',
        '_mode_req_angular_velocity',
        '_mode_req_attitude',
        '_mode_req_local_alt',
        '_mode_req_local_position',
        '_mode_req_local_position_relaxed',
        '_mode_req_global_position',
        '_mode_req_mission',
        '_mode_req_home_position',
        '_mode_req_prevent_arming',
        '_mode_req_manual_control',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'request_id': 'uint8',
        'registration_id': 'uint8',
        'health_component_index': 'uint8',
        'health_component_is_present': 'boolean',
        'health_component_warning': 'boolean',
        'health_component_error': 'boolean',
        'can_arm_and_run': 'boolean',
        'num_events': 'uint8',
        'events': 'px4_msgs/Event[5]',
        'mode_req_angular_velocity': 'boolean',
        'mode_req_attitude': 'boolean',
        'mode_req_local_alt': 'boolean',
        'mode_req_local_position': 'boolean',
        'mode_req_local_position_relaxed': 'boolean',
        'mode_req_global_position': 'boolean',
        'mode_req_mission': 'boolean',
        'mode_req_home_position': 'boolean',
        'mode_req_prevent_arming': 'boolean',
        'mode_req_manual_control': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['px4_msgs', 'msg'], 'Event'), 5),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.request_id = kwargs.get('request_id', int())
        self.registration_id = kwargs.get('registration_id', int())
        self.health_component_index = kwargs.get('health_component_index', int())
        self.health_component_is_present = kwargs.get('health_component_is_present', bool())
        self.health_component_warning = kwargs.get('health_component_warning', bool())
        self.health_component_error = kwargs.get('health_component_error', bool())
        self.can_arm_and_run = kwargs.get('can_arm_and_run', bool())
        self.num_events = kwargs.get('num_events', int())
        from px4_msgs.msg import Event
        self.events = kwargs.get(
            'events',
            [Event() for x in range(5)]
        )
        self.mode_req_angular_velocity = kwargs.get('mode_req_angular_velocity', bool())
        self.mode_req_attitude = kwargs.get('mode_req_attitude', bool())
        self.mode_req_local_alt = kwargs.get('mode_req_local_alt', bool())
        self.mode_req_local_position = kwargs.get('mode_req_local_position', bool())
        self.mode_req_local_position_relaxed = kwargs.get('mode_req_local_position_relaxed', bool())
        self.mode_req_global_position = kwargs.get('mode_req_global_position', bool())
        self.mode_req_mission = kwargs.get('mode_req_mission', bool())
        self.mode_req_home_position = kwargs.get('mode_req_home_position', bool())
        self.mode_req_prevent_arming = kwargs.get('mode_req_prevent_arming', bool())
        self.mode_req_manual_control = kwargs.get('mode_req_manual_control', bool())

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
        if self.request_id != other.request_id:
            return False
        if self.registration_id != other.registration_id:
            return False
        if self.health_component_index != other.health_component_index:
            return False
        if self.health_component_is_present != other.health_component_is_present:
            return False
        if self.health_component_warning != other.health_component_warning:
            return False
        if self.health_component_error != other.health_component_error:
            return False
        if self.can_arm_and_run != other.can_arm_and_run:
            return False
        if self.num_events != other.num_events:
            return False
        if self.events != other.events:
            return False
        if self.mode_req_angular_velocity != other.mode_req_angular_velocity:
            return False
        if self.mode_req_attitude != other.mode_req_attitude:
            return False
        if self.mode_req_local_alt != other.mode_req_local_alt:
            return False
        if self.mode_req_local_position != other.mode_req_local_position:
            return False
        if self.mode_req_local_position_relaxed != other.mode_req_local_position_relaxed:
            return False
        if self.mode_req_global_position != other.mode_req_global_position:
            return False
        if self.mode_req_mission != other.mode_req_mission:
            return False
        if self.mode_req_home_position != other.mode_req_home_position:
            return False
        if self.mode_req_prevent_arming != other.mode_req_prevent_arming:
            return False
        if self.mode_req_manual_control != other.mode_req_manual_control:
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
    def request_id(self):
        """Message field 'request_id'."""
        return self._request_id

    @request_id.setter
    def request_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'request_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'request_id' field must be an unsigned integer in [0, 255]"
        self._request_id = value

    @builtins.property
    def registration_id(self):
        """Message field 'registration_id'."""
        return self._registration_id

    @registration_id.setter
    def registration_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'registration_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'registration_id' field must be an unsigned integer in [0, 255]"
        self._registration_id = value

    @builtins.property
    def health_component_index(self):
        """Message field 'health_component_index'."""
        return self._health_component_index

    @health_component_index.setter
    def health_component_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'health_component_index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'health_component_index' field must be an unsigned integer in [0, 255]"
        self._health_component_index = value

    @builtins.property
    def health_component_is_present(self):
        """Message field 'health_component_is_present'."""
        return self._health_component_is_present

    @health_component_is_present.setter
    def health_component_is_present(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'health_component_is_present' field must be of type 'bool'"
        self._health_component_is_present = value

    @builtins.property
    def health_component_warning(self):
        """Message field 'health_component_warning'."""
        return self._health_component_warning

    @health_component_warning.setter
    def health_component_warning(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'health_component_warning' field must be of type 'bool'"
        self._health_component_warning = value

    @builtins.property
    def health_component_error(self):
        """Message field 'health_component_error'."""
        return self._health_component_error

    @health_component_error.setter
    def health_component_error(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'health_component_error' field must be of type 'bool'"
        self._health_component_error = value

    @builtins.property
    def can_arm_and_run(self):
        """Message field 'can_arm_and_run'."""
        return self._can_arm_and_run

    @can_arm_and_run.setter
    def can_arm_and_run(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'can_arm_and_run' field must be of type 'bool'"
        self._can_arm_and_run = value

    @builtins.property
    def num_events(self):
        """Message field 'num_events'."""
        return self._num_events

    @num_events.setter
    def num_events(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'num_events' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'num_events' field must be an unsigned integer in [0, 255]"
        self._num_events = value

    @builtins.property
    def events(self):
        """Message field 'events'."""
        return self._events

    @events.setter
    def events(self, value):
        if __debug__:
            from px4_msgs.msg import Event
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
                 len(value) == 5 and
                 all(isinstance(v, Event) for v in value) and
                 True), \
                "The 'events' field must be a set or sequence with length 5 and each value of type 'Event'"
        self._events = value

    @builtins.property
    def mode_req_angular_velocity(self):
        """Message field 'mode_req_angular_velocity'."""
        return self._mode_req_angular_velocity

    @mode_req_angular_velocity.setter
    def mode_req_angular_velocity(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_angular_velocity' field must be of type 'bool'"
        self._mode_req_angular_velocity = value

    @builtins.property
    def mode_req_attitude(self):
        """Message field 'mode_req_attitude'."""
        return self._mode_req_attitude

    @mode_req_attitude.setter
    def mode_req_attitude(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_attitude' field must be of type 'bool'"
        self._mode_req_attitude = value

    @builtins.property
    def mode_req_local_alt(self):
        """Message field 'mode_req_local_alt'."""
        return self._mode_req_local_alt

    @mode_req_local_alt.setter
    def mode_req_local_alt(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_local_alt' field must be of type 'bool'"
        self._mode_req_local_alt = value

    @builtins.property
    def mode_req_local_position(self):
        """Message field 'mode_req_local_position'."""
        return self._mode_req_local_position

    @mode_req_local_position.setter
    def mode_req_local_position(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_local_position' field must be of type 'bool'"
        self._mode_req_local_position = value

    @builtins.property
    def mode_req_local_position_relaxed(self):
        """Message field 'mode_req_local_position_relaxed'."""
        return self._mode_req_local_position_relaxed

    @mode_req_local_position_relaxed.setter
    def mode_req_local_position_relaxed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_local_position_relaxed' field must be of type 'bool'"
        self._mode_req_local_position_relaxed = value

    @builtins.property
    def mode_req_global_position(self):
        """Message field 'mode_req_global_position'."""
        return self._mode_req_global_position

    @mode_req_global_position.setter
    def mode_req_global_position(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_global_position' field must be of type 'bool'"
        self._mode_req_global_position = value

    @builtins.property
    def mode_req_mission(self):
        """Message field 'mode_req_mission'."""
        return self._mode_req_mission

    @mode_req_mission.setter
    def mode_req_mission(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_mission' field must be of type 'bool'"
        self._mode_req_mission = value

    @builtins.property
    def mode_req_home_position(self):
        """Message field 'mode_req_home_position'."""
        return self._mode_req_home_position

    @mode_req_home_position.setter
    def mode_req_home_position(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_home_position' field must be of type 'bool'"
        self._mode_req_home_position = value

    @builtins.property
    def mode_req_prevent_arming(self):
        """Message field 'mode_req_prevent_arming'."""
        return self._mode_req_prevent_arming

    @mode_req_prevent_arming.setter
    def mode_req_prevent_arming(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_prevent_arming' field must be of type 'bool'"
        self._mode_req_prevent_arming = value

    @builtins.property
    def mode_req_manual_control(self):
        """Message field 'mode_req_manual_control'."""
        return self._mode_req_manual_control

    @mode_req_manual_control.setter
    def mode_req_manual_control(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'mode_req_manual_control' field must be of type 'bool'"
        self._mode_req_manual_control = value
