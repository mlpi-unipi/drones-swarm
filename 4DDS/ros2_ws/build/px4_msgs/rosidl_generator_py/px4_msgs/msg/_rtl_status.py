# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/RtlStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_RtlStatus(type):
    """Metaclass of message 'RtlStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'RTL_STATUS_TYPE_NONE': 0,
        'RTL_STATUS_TYPE_DIRECT_SAFE_POINT': 1,
        'RTL_STATUS_TYPE_DIRECT_MISSION_LAND': 2,
        'RTL_STATUS_TYPE_FOLLOW_MISSION': 3,
        'RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE': 4,
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
                'px4_msgs.msg.RtlStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__rtl_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__rtl_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__rtl_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__rtl_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__rtl_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'RTL_STATUS_TYPE_NONE': cls.__constants['RTL_STATUS_TYPE_NONE'],
            'RTL_STATUS_TYPE_DIRECT_SAFE_POINT': cls.__constants['RTL_STATUS_TYPE_DIRECT_SAFE_POINT'],
            'RTL_STATUS_TYPE_DIRECT_MISSION_LAND': cls.__constants['RTL_STATUS_TYPE_DIRECT_MISSION_LAND'],
            'RTL_STATUS_TYPE_FOLLOW_MISSION': cls.__constants['RTL_STATUS_TYPE_FOLLOW_MISSION'],
            'RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE': cls.__constants['RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE'],
        }

    @property
    def RTL_STATUS_TYPE_NONE(self):
        """Message constant 'RTL_STATUS_TYPE_NONE'."""
        return Metaclass_RtlStatus.__constants['RTL_STATUS_TYPE_NONE']

    @property
    def RTL_STATUS_TYPE_DIRECT_SAFE_POINT(self):
        """Message constant 'RTL_STATUS_TYPE_DIRECT_SAFE_POINT'."""
        return Metaclass_RtlStatus.__constants['RTL_STATUS_TYPE_DIRECT_SAFE_POINT']

    @property
    def RTL_STATUS_TYPE_DIRECT_MISSION_LAND(self):
        """Message constant 'RTL_STATUS_TYPE_DIRECT_MISSION_LAND'."""
        return Metaclass_RtlStatus.__constants['RTL_STATUS_TYPE_DIRECT_MISSION_LAND']

    @property
    def RTL_STATUS_TYPE_FOLLOW_MISSION(self):
        """Message constant 'RTL_STATUS_TYPE_FOLLOW_MISSION'."""
        return Metaclass_RtlStatus.__constants['RTL_STATUS_TYPE_FOLLOW_MISSION']

    @property
    def RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE(self):
        """Message constant 'RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE'."""
        return Metaclass_RtlStatus.__constants['RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE']


class RtlStatus(metaclass=Metaclass_RtlStatus):
    """
    Message class 'RtlStatus'.

    Constants:
      RTL_STATUS_TYPE_NONE
      RTL_STATUS_TYPE_DIRECT_SAFE_POINT
      RTL_STATUS_TYPE_DIRECT_MISSION_LAND
      RTL_STATUS_TYPE_FOLLOW_MISSION
      RTL_STATUS_TYPE_FOLLOW_MISSION_REVERSE
    """

    __slots__ = [
        '_timestamp',
        '_safe_points_id',
        '_is_evaluation_pending',
        '_has_vtol_approach',
        '_rtl_type',
        '_safe_point_index',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'safe_points_id': 'uint32',
        'is_evaluation_pending': 'boolean',
        'has_vtol_approach': 'boolean',
        'rtl_type': 'uint8',
        'safe_point_index': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.safe_points_id = kwargs.get('safe_points_id', int())
        self.is_evaluation_pending = kwargs.get('is_evaluation_pending', bool())
        self.has_vtol_approach = kwargs.get('has_vtol_approach', bool())
        self.rtl_type = kwargs.get('rtl_type', int())
        self.safe_point_index = kwargs.get('safe_point_index', int())

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
        if self.safe_points_id != other.safe_points_id:
            return False
        if self.is_evaluation_pending != other.is_evaluation_pending:
            return False
        if self.has_vtol_approach != other.has_vtol_approach:
            return False
        if self.rtl_type != other.rtl_type:
            return False
        if self.safe_point_index != other.safe_point_index:
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
    def safe_points_id(self):
        """Message field 'safe_points_id'."""
        return self._safe_points_id

    @safe_points_id.setter
    def safe_points_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'safe_points_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'safe_points_id' field must be an unsigned integer in [0, 4294967295]"
        self._safe_points_id = value

    @builtins.property
    def is_evaluation_pending(self):
        """Message field 'is_evaluation_pending'."""
        return self._is_evaluation_pending

    @is_evaluation_pending.setter
    def is_evaluation_pending(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_evaluation_pending' field must be of type 'bool'"
        self._is_evaluation_pending = value

    @builtins.property
    def has_vtol_approach(self):
        """Message field 'has_vtol_approach'."""
        return self._has_vtol_approach

    @has_vtol_approach.setter
    def has_vtol_approach(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'has_vtol_approach' field must be of type 'bool'"
        self._has_vtol_approach = value

    @builtins.property
    def rtl_type(self):
        """Message field 'rtl_type'."""
        return self._rtl_type

    @rtl_type.setter
    def rtl_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'rtl_type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'rtl_type' field must be an unsigned integer in [0, 255]"
        self._rtl_type = value

    @builtins.property
    def safe_point_index(self):
        """Message field 'safe_point_index'."""
        return self._safe_point_index

    @safe_point_index.setter
    def safe_point_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'safe_point_index' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'safe_point_index' field must be an unsigned integer in [0, 255]"
        self._safe_point_index = value
