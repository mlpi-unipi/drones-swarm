# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/LaunchDetectionStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LaunchDetectionStatus(type):
    """Metaclass of message 'LaunchDetectionStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'STATE_WAITING_FOR_LAUNCH': 0,
        'STATE_LAUNCH_DETECTED_DISABLED_MOTOR': 1,
        'STATE_FLYING': 2,
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
                'px4_msgs.msg.LaunchDetectionStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__launch_detection_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__launch_detection_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__launch_detection_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__launch_detection_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__launch_detection_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'STATE_WAITING_FOR_LAUNCH': cls.__constants['STATE_WAITING_FOR_LAUNCH'],
            'STATE_LAUNCH_DETECTED_DISABLED_MOTOR': cls.__constants['STATE_LAUNCH_DETECTED_DISABLED_MOTOR'],
            'STATE_FLYING': cls.__constants['STATE_FLYING'],
        }

    @property
    def STATE_WAITING_FOR_LAUNCH(self):
        """Message constant 'STATE_WAITING_FOR_LAUNCH'."""
        return Metaclass_LaunchDetectionStatus.__constants['STATE_WAITING_FOR_LAUNCH']

    @property
    def STATE_LAUNCH_DETECTED_DISABLED_MOTOR(self):
        """Message constant 'STATE_LAUNCH_DETECTED_DISABLED_MOTOR'."""
        return Metaclass_LaunchDetectionStatus.__constants['STATE_LAUNCH_DETECTED_DISABLED_MOTOR']

    @property
    def STATE_FLYING(self):
        """Message constant 'STATE_FLYING'."""
        return Metaclass_LaunchDetectionStatus.__constants['STATE_FLYING']


class LaunchDetectionStatus(metaclass=Metaclass_LaunchDetectionStatus):
    """
    Message class 'LaunchDetectionStatus'.

    Constants:
      STATE_WAITING_FOR_LAUNCH
      STATE_LAUNCH_DETECTED_DISABLED_MOTOR
      STATE_FLYING
    """

    __slots__ = [
        '_timestamp',
        '_launch_detection_state',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'launch_detection_state': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.launch_detection_state = kwargs.get('launch_detection_state', int())

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
        if self.launch_detection_state != other.launch_detection_state:
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
    def launch_detection_state(self):
        """Message field 'launch_detection_state'."""
        return self._launch_detection_state

    @launch_detection_state.setter
    def launch_detection_state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'launch_detection_state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'launch_detection_state' field must be an unsigned integer in [0, 255]"
        self._launch_detection_state = value
