# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/OrbitStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_OrbitStatus(type):
    """Metaclass of message 'OrbitStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER': 0,
        'ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING': 1,
        'ORBIT_YAW_BEHAVIOUR_UNCONTROLLED': 2,
        'ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE': 3,
        'ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED': 4,
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
                'px4_msgs.msg.OrbitStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__orbit_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__orbit_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__orbit_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__orbit_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__orbit_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER': cls.__constants['ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER'],
            'ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING': cls.__constants['ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING'],
            'ORBIT_YAW_BEHAVIOUR_UNCONTROLLED': cls.__constants['ORBIT_YAW_BEHAVIOUR_UNCONTROLLED'],
            'ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE': cls.__constants['ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE'],
            'ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED': cls.__constants['ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED'],
        }

    @property
    def ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER(self):
        """Message constant 'ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER'."""
        return Metaclass_OrbitStatus.__constants['ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER']

    @property
    def ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING(self):
        """Message constant 'ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING'."""
        return Metaclass_OrbitStatus.__constants['ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING']

    @property
    def ORBIT_YAW_BEHAVIOUR_UNCONTROLLED(self):
        """Message constant 'ORBIT_YAW_BEHAVIOUR_UNCONTROLLED'."""
        return Metaclass_OrbitStatus.__constants['ORBIT_YAW_BEHAVIOUR_UNCONTROLLED']

    @property
    def ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE(self):
        """Message constant 'ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE'."""
        return Metaclass_OrbitStatus.__constants['ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE']

    @property
    def ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED(self):
        """Message constant 'ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED'."""
        return Metaclass_OrbitStatus.__constants['ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED']


class OrbitStatus(metaclass=Metaclass_OrbitStatus):
    """
    Message class 'OrbitStatus'.

    Constants:
      ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TO_CIRCLE_CENTER
      ORBIT_YAW_BEHAVIOUR_HOLD_INITIAL_HEADING
      ORBIT_YAW_BEHAVIOUR_UNCONTROLLED
      ORBIT_YAW_BEHAVIOUR_HOLD_FRONT_TANGENT_TO_CIRCLE
      ORBIT_YAW_BEHAVIOUR_RC_CONTROLLED
    """

    __slots__ = [
        '_timestamp',
        '_radius',
        '_frame',
        '_x',
        '_y',
        '_z',
        '_yaw_behaviour',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'radius': 'float',
        'frame': 'uint8',
        'x': 'double',
        'y': 'double',
        'z': 'float',
        'yaw_behaviour': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.radius = kwargs.get('radius', float())
        self.frame = kwargs.get('frame', int())
        self.x = kwargs.get('x', float())
        self.y = kwargs.get('y', float())
        self.z = kwargs.get('z', float())
        self.yaw_behaviour = kwargs.get('yaw_behaviour', int())

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
        if self.radius != other.radius:
            return False
        if self.frame != other.frame:
            return False
        if self.x != other.x:
            return False
        if self.y != other.y:
            return False
        if self.z != other.z:
            return False
        if self.yaw_behaviour != other.yaw_behaviour:
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
    def radius(self):
        """Message field 'radius'."""
        return self._radius

    @radius.setter
    def radius(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'radius' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'radius' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._radius = value

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
    def x(self):
        """Message field 'x'."""
        return self._x

    @x.setter
    def x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'x' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._x = value

    @builtins.property
    def y(self):
        """Message field 'y'."""
        return self._y

    @y.setter
    def y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'y' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._y = value

    @builtins.property
    def z(self):
        """Message field 'z'."""
        return self._z

    @z.setter
    def z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z = value

    @builtins.property
    def yaw_behaviour(self):
        """Message field 'yaw_behaviour'."""
        return self._yaw_behaviour

    @yaw_behaviour.setter
    def yaw_behaviour(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'yaw_behaviour' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'yaw_behaviour' field must be an unsigned integer in [0, 255]"
        self._yaw_behaviour = value
