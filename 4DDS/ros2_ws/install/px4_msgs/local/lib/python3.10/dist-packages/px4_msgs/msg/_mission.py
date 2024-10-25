# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/Mission.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_Mission(type):
    """Metaclass of message 'Mission'."""

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
                'px4_msgs.msg.Mission')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__mission
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__mission
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__mission
            cls._TYPE_SUPPORT = module.type_support_msg__msg__mission
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__mission

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class Mission(metaclass=Metaclass_Mission):
    """Message class 'Mission'."""

    __slots__ = [
        '_timestamp',
        '_mission_dataman_id',
        '_fence_dataman_id',
        '_safepoint_dataman_id',
        '_count',
        '_current_seq',
        '_land_start_index',
        '_land_index',
        '_mission_id',
        '_geofence_id',
        '_safe_points_id',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'mission_dataman_id': 'uint8',
        'fence_dataman_id': 'uint8',
        'safepoint_dataman_id': 'uint8',
        'count': 'uint16',
        'current_seq': 'int32',
        'land_start_index': 'int32',
        'land_index': 'int32',
        'mission_id': 'uint32',
        'geofence_id': 'uint32',
        'safe_points_id': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.mission_dataman_id = kwargs.get('mission_dataman_id', int())
        self.fence_dataman_id = kwargs.get('fence_dataman_id', int())
        self.safepoint_dataman_id = kwargs.get('safepoint_dataman_id', int())
        self.count = kwargs.get('count', int())
        self.current_seq = kwargs.get('current_seq', int())
        self.land_start_index = kwargs.get('land_start_index', int())
        self.land_index = kwargs.get('land_index', int())
        self.mission_id = kwargs.get('mission_id', int())
        self.geofence_id = kwargs.get('geofence_id', int())
        self.safe_points_id = kwargs.get('safe_points_id', int())

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
        if self.mission_dataman_id != other.mission_dataman_id:
            return False
        if self.fence_dataman_id != other.fence_dataman_id:
            return False
        if self.safepoint_dataman_id != other.safepoint_dataman_id:
            return False
        if self.count != other.count:
            return False
        if self.current_seq != other.current_seq:
            return False
        if self.land_start_index != other.land_start_index:
            return False
        if self.land_index != other.land_index:
            return False
        if self.mission_id != other.mission_id:
            return False
        if self.geofence_id != other.geofence_id:
            return False
        if self.safe_points_id != other.safe_points_id:
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
    def mission_dataman_id(self):
        """Message field 'mission_dataman_id'."""
        return self._mission_dataman_id

    @mission_dataman_id.setter
    def mission_dataman_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission_dataman_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'mission_dataman_id' field must be an unsigned integer in [0, 255]"
        self._mission_dataman_id = value

    @builtins.property
    def fence_dataman_id(self):
        """Message field 'fence_dataman_id'."""
        return self._fence_dataman_id

    @fence_dataman_id.setter
    def fence_dataman_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'fence_dataman_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'fence_dataman_id' field must be an unsigned integer in [0, 255]"
        self._fence_dataman_id = value

    @builtins.property
    def safepoint_dataman_id(self):
        """Message field 'safepoint_dataman_id'."""
        return self._safepoint_dataman_id

    @safepoint_dataman_id.setter
    def safepoint_dataman_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'safepoint_dataman_id' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'safepoint_dataman_id' field must be an unsigned integer in [0, 255]"
        self._safepoint_dataman_id = value

    @builtins.property
    def count(self):
        """Message field 'count'."""
        return self._count

    @count.setter
    def count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'count' field must be an unsigned integer in [0, 65535]"
        self._count = value

    @builtins.property
    def current_seq(self):
        """Message field 'current_seq'."""
        return self._current_seq

    @current_seq.setter
    def current_seq(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'current_seq' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'current_seq' field must be an integer in [-2147483648, 2147483647]"
        self._current_seq = value

    @builtins.property
    def land_start_index(self):
        """Message field 'land_start_index'."""
        return self._land_start_index

    @land_start_index.setter
    def land_start_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'land_start_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'land_start_index' field must be an integer in [-2147483648, 2147483647]"
        self._land_start_index = value

    @builtins.property
    def land_index(self):
        """Message field 'land_index'."""
        return self._land_index

    @land_index.setter
    def land_index(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'land_index' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'land_index' field must be an integer in [-2147483648, 2147483647]"
        self._land_index = value

    @builtins.property
    def mission_id(self):
        """Message field 'mission_id'."""
        return self._mission_id

    @mission_id.setter
    def mission_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mission_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mission_id' field must be an unsigned integer in [0, 4294967295]"
        self._mission_id = value

    @builtins.property
    def geofence_id(self):
        """Message field 'geofence_id'."""
        return self._geofence_id

    @geofence_id.setter
    def geofence_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'geofence_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'geofence_id' field must be an unsigned integer in [0, 4294967295]"
        self._geofence_id = value

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
