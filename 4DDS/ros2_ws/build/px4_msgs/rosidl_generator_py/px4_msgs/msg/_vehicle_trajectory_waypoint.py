# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/VehicleTrajectoryWaypoint.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleTrajectoryWaypoint(type):
    """Metaclass of message 'VehicleTrajectoryWaypoint'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS': 0,
        'POINT_0': 0,
        'POINT_1': 1,
        'POINT_2': 2,
        'POINT_3': 3,
        'POINT_4': 4,
        'NUMBER_POINTS': 5,
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
                'px4_msgs.msg.VehicleTrajectoryWaypoint')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_trajectory_waypoint
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_trajectory_waypoint
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_trajectory_waypoint
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_trajectory_waypoint
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_trajectory_waypoint

            from px4_msgs.msg import TrajectoryWaypoint
            if TrajectoryWaypoint.__class__._TYPE_SUPPORT is None:
                TrajectoryWaypoint.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS': cls.__constants['MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS'],
            'POINT_0': cls.__constants['POINT_0'],
            'POINT_1': cls.__constants['POINT_1'],
            'POINT_2': cls.__constants['POINT_2'],
            'POINT_3': cls.__constants['POINT_3'],
            'POINT_4': cls.__constants['POINT_4'],
            'NUMBER_POINTS': cls.__constants['NUMBER_POINTS'],
        }

    @property
    def MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS(self):
        """Message constant 'MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS'."""
        return Metaclass_VehicleTrajectoryWaypoint.__constants['MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS']

    @property
    def POINT_0(self):
        """Message constant 'POINT_0'."""
        return Metaclass_VehicleTrajectoryWaypoint.__constants['POINT_0']

    @property
    def POINT_1(self):
        """Message constant 'POINT_1'."""
        return Metaclass_VehicleTrajectoryWaypoint.__constants['POINT_1']

    @property
    def POINT_2(self):
        """Message constant 'POINT_2'."""
        return Metaclass_VehicleTrajectoryWaypoint.__constants['POINT_2']

    @property
    def POINT_3(self):
        """Message constant 'POINT_3'."""
        return Metaclass_VehicleTrajectoryWaypoint.__constants['POINT_3']

    @property
    def POINT_4(self):
        """Message constant 'POINT_4'."""
        return Metaclass_VehicleTrajectoryWaypoint.__constants['POINT_4']

    @property
    def NUMBER_POINTS(self):
        """Message constant 'NUMBER_POINTS'."""
        return Metaclass_VehicleTrajectoryWaypoint.__constants['NUMBER_POINTS']


class VehicleTrajectoryWaypoint(metaclass=Metaclass_VehicleTrajectoryWaypoint):
    """
    Message class 'VehicleTrajectoryWaypoint'.

    Constants:
      MAV_TRAJECTORY_REPRESENTATION_WAYPOINTS
      POINT_0
      POINT_1
      POINT_2
      POINT_3
      POINT_4
      NUMBER_POINTS
    """

    __slots__ = [
        '_timestamp',
        '_type',
        '_waypoints',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'type': 'uint8',
        'waypoints': 'px4_msgs/TrajectoryWaypoint[5]',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.NamespacedType(['px4_msgs', 'msg'], 'TrajectoryWaypoint'), 5),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.type = kwargs.get('type', int())
        from px4_msgs.msg import TrajectoryWaypoint
        self.waypoints = kwargs.get(
            'waypoints',
            [TrajectoryWaypoint() for x in range(5)]
        )

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
        if self.type != other.type:
            return False
        if self.waypoints != other.waypoints:
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

    @builtins.property  # noqa: A003
    def type(self):  # noqa: A003
        """Message field 'type'."""
        return self._type

    @type.setter  # noqa: A003
    def type(self, value):  # noqa: A003
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'type' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'type' field must be an unsigned integer in [0, 255]"
        self._type = value

    @builtins.property
    def waypoints(self):
        """Message field 'waypoints'."""
        return self._waypoints

    @waypoints.setter
    def waypoints(self, value):
        if __debug__:
            from px4_msgs.msg import TrajectoryWaypoint
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
                 all(isinstance(v, TrajectoryWaypoint) for v in value) and
                 True), \
                "The 'waypoints' field must be a set or sequence with length 5 and each value of type 'TrajectoryWaypoint'"
        self._waypoints = value
