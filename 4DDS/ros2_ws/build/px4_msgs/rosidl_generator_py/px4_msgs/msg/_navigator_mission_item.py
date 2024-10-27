# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/NavigatorMissionItem.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_NavigatorMissionItem(type):
    """Metaclass of message 'NavigatorMissionItem'."""

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
                'px4_msgs.msg.NavigatorMissionItem')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__navigator_mission_item
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__navigator_mission_item
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__navigator_mission_item
            cls._TYPE_SUPPORT = module.type_support_msg__msg__navigator_mission_item
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__navigator_mission_item

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class NavigatorMissionItem(metaclass=Metaclass_NavigatorMissionItem):
    """Message class 'NavigatorMissionItem'."""

    __slots__ = [
        '_timestamp',
        '_instance_count',
        '_sequence_current',
        '_nav_cmd',
        '_latitude',
        '_longitude',
        '_time_inside',
        '_acceptance_radius',
        '_loiter_radius',
        '_yaw',
        '_altitude',
        '_frame',
        '_origin',
        '_loiter_exit_xtrack',
        '_force_heading',
        '_altitude_is_relative',
        '_autocontinue',
        '_vtol_back_transition',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'instance_count': 'uint32',
        'sequence_current': 'uint16',
        'nav_cmd': 'uint16',
        'latitude': 'float',
        'longitude': 'float',
        'time_inside': 'float',
        'acceptance_radius': 'float',
        'loiter_radius': 'float',
        'yaw': 'float',
        'altitude': 'float',
        'frame': 'uint8',
        'origin': 'uint8',
        'loiter_exit_xtrack': 'boolean',
        'force_heading': 'boolean',
        'altitude_is_relative': 'boolean',
        'autocontinue': 'boolean',
        'vtol_back_transition': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.instance_count = kwargs.get('instance_count', int())
        self.sequence_current = kwargs.get('sequence_current', int())
        self.nav_cmd = kwargs.get('nav_cmd', int())
        self.latitude = kwargs.get('latitude', float())
        self.longitude = kwargs.get('longitude', float())
        self.time_inside = kwargs.get('time_inside', float())
        self.acceptance_radius = kwargs.get('acceptance_radius', float())
        self.loiter_radius = kwargs.get('loiter_radius', float())
        self.yaw = kwargs.get('yaw', float())
        self.altitude = kwargs.get('altitude', float())
        self.frame = kwargs.get('frame', int())
        self.origin = kwargs.get('origin', int())
        self.loiter_exit_xtrack = kwargs.get('loiter_exit_xtrack', bool())
        self.force_heading = kwargs.get('force_heading', bool())
        self.altitude_is_relative = kwargs.get('altitude_is_relative', bool())
        self.autocontinue = kwargs.get('autocontinue', bool())
        self.vtol_back_transition = kwargs.get('vtol_back_transition', bool())

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
        if self.instance_count != other.instance_count:
            return False
        if self.sequence_current != other.sequence_current:
            return False
        if self.nav_cmd != other.nav_cmd:
            return False
        if self.latitude != other.latitude:
            return False
        if self.longitude != other.longitude:
            return False
        if self.time_inside != other.time_inside:
            return False
        if self.acceptance_radius != other.acceptance_radius:
            return False
        if self.loiter_radius != other.loiter_radius:
            return False
        if self.yaw != other.yaw:
            return False
        if self.altitude != other.altitude:
            return False
        if self.frame != other.frame:
            return False
        if self.origin != other.origin:
            return False
        if self.loiter_exit_xtrack != other.loiter_exit_xtrack:
            return False
        if self.force_heading != other.force_heading:
            return False
        if self.altitude_is_relative != other.altitude_is_relative:
            return False
        if self.autocontinue != other.autocontinue:
            return False
        if self.vtol_back_transition != other.vtol_back_transition:
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
    def instance_count(self):
        """Message field 'instance_count'."""
        return self._instance_count

    @instance_count.setter
    def instance_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'instance_count' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'instance_count' field must be an unsigned integer in [0, 4294967295]"
        self._instance_count = value

    @builtins.property
    def sequence_current(self):
        """Message field 'sequence_current'."""
        return self._sequence_current

    @sequence_current.setter
    def sequence_current(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sequence_current' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'sequence_current' field must be an unsigned integer in [0, 65535]"
        self._sequence_current = value

    @builtins.property
    def nav_cmd(self):
        """Message field 'nav_cmd'."""
        return self._nav_cmd

    @nav_cmd.setter
    def nav_cmd(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'nav_cmd' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'nav_cmd' field must be an unsigned integer in [0, 65535]"
        self._nav_cmd = value

    @builtins.property
    def latitude(self):
        """Message field 'latitude'."""
        return self._latitude

    @latitude.setter
    def latitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'latitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'latitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._latitude = value

    @builtins.property
    def longitude(self):
        """Message field 'longitude'."""
        return self._longitude

    @longitude.setter
    def longitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'longitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'longitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._longitude = value

    @builtins.property
    def time_inside(self):
        """Message field 'time_inside'."""
        return self._time_inside

    @time_inside.setter
    def time_inside(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_inside' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_inside' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_inside = value

    @builtins.property
    def acceptance_radius(self):
        """Message field 'acceptance_radius'."""
        return self._acceptance_radius

    @acceptance_radius.setter
    def acceptance_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'acceptance_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'acceptance_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._acceptance_radius = value

    @builtins.property
    def loiter_radius(self):
        """Message field 'loiter_radius'."""
        return self._loiter_radius

    @loiter_radius.setter
    def loiter_radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'loiter_radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'loiter_radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._loiter_radius = value

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
    def altitude(self):
        """Message field 'altitude'."""
        return self._altitude

    @altitude.setter
    def altitude(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'altitude' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'altitude' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._altitude = value

    @builtins.property
    def frame(self):
        """Message field 'frame'."""
        return self._frame

    @frame.setter
    def frame(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'frame' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'frame' field must be an unsigned integer in [0, 255]"
        self._frame = value

    @builtins.property
    def origin(self):
        """Message field 'origin'."""
        return self._origin

    @origin.setter
    def origin(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'origin' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'origin' field must be an unsigned integer in [0, 255]"
        self._origin = value

    @builtins.property
    def loiter_exit_xtrack(self):
        """Message field 'loiter_exit_xtrack'."""
        return self._loiter_exit_xtrack

    @loiter_exit_xtrack.setter
    def loiter_exit_xtrack(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'loiter_exit_xtrack' field must be of type 'bool'"
        self._loiter_exit_xtrack = value

    @builtins.property
    def force_heading(self):
        """Message field 'force_heading'."""
        return self._force_heading

    @force_heading.setter
    def force_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'force_heading' field must be of type 'bool'"
        self._force_heading = value

    @builtins.property
    def altitude_is_relative(self):
        """Message field 'altitude_is_relative'."""
        return self._altitude_is_relative

    @altitude_is_relative.setter
    def altitude_is_relative(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'altitude_is_relative' field must be of type 'bool'"
        self._altitude_is_relative = value

    @builtins.property
    def autocontinue(self):
        """Message field 'autocontinue'."""
        return self._autocontinue

    @autocontinue.setter
    def autocontinue(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'autocontinue' field must be of type 'bool'"
        self._autocontinue = value

    @builtins.property
    def vtol_back_transition(self):
        """Message field 'vtol_back_transition'."""
        return self._vtol_back_transition

    @vtol_back_transition.setter
    def vtol_back_transition(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'vtol_back_transition' field must be of type 'bool'"
        self._vtol_back_transition = value
