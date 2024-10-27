# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gazebo_msgs:srv/GetPhysicsProperties.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetPhysicsProperties_Request(type):
    """Metaclass of message 'GetPhysicsProperties_Request'."""

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
            module = import_type_support('gazebo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gazebo_msgs.srv.GetPhysicsProperties_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_physics_properties__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_physics_properties__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_physics_properties__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_physics_properties__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_physics_properties__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPhysicsProperties_Request(metaclass=Metaclass_GetPhysicsProperties_Request):
    """Message class 'GetPhysicsProperties_Request'."""

    __slots__ = [
    ]

    _fields_and_field_types = {
    }

    SLOT_TYPES = (
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))

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
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# already imported above
# import rosidl_parser.definition


class Metaclass_GetPhysicsProperties_Response(type):
    """Metaclass of message 'GetPhysicsProperties_Response'."""

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
            module = import_type_support('gazebo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gazebo_msgs.srv.GetPhysicsProperties_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_physics_properties__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_physics_properties__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_physics_properties__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_physics_properties__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_physics_properties__response

            from gazebo_msgs.msg import ODEPhysics
            if ODEPhysics.__class__._TYPE_SUPPORT is None:
                ODEPhysics.__class__.__import_type_support__()

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetPhysicsProperties_Response(metaclass=Metaclass_GetPhysicsProperties_Response):
    """Message class 'GetPhysicsProperties_Response'."""

    __slots__ = [
        '_time_step',
        '_pause',
        '_max_update_rate',
        '_gravity',
        '_ode_config',
        '_success',
        '_status_message',
    ]

    _fields_and_field_types = {
        'time_step': 'double',
        'pause': 'boolean',
        'max_update_rate': 'double',
        'gravity': 'geometry_msgs/Vector3',
        'ode_config': 'gazebo_msgs/ODEPhysics',
        'success': 'boolean',
        'status_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['gazebo_msgs', 'msg'], 'ODEPhysics'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.time_step = kwargs.get('time_step', float())
        self.pause = kwargs.get('pause', bool())
        self.max_update_rate = kwargs.get('max_update_rate', float())
        from geometry_msgs.msg import Vector3
        self.gravity = kwargs.get('gravity', Vector3())
        from gazebo_msgs.msg import ODEPhysics
        self.ode_config = kwargs.get('ode_config', ODEPhysics())
        self.success = kwargs.get('success', bool())
        self.status_message = kwargs.get('status_message', str())

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
        if self.time_step != other.time_step:
            return False
        if self.pause != other.pause:
            return False
        if self.max_update_rate != other.max_update_rate:
            return False
        if self.gravity != other.gravity:
            return False
        if self.ode_config != other.ode_config:
            return False
        if self.success != other.success:
            return False
        if self.status_message != other.status_message:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def time_step(self):
        """Message field 'time_step'."""
        return self._time_step

    @time_step.setter
    def time_step(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_step' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'time_step' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._time_step = value

    @builtins.property
    def pause(self):
        """Message field 'pause'."""
        return self._pause

    @pause.setter
    def pause(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pause' field must be of type 'bool'"
        self._pause = value

    @builtins.property
    def max_update_rate(self):
        """Message field 'max_update_rate'."""
        return self._max_update_rate

    @max_update_rate.setter
    def max_update_rate(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'max_update_rate' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'max_update_rate' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._max_update_rate = value

    @builtins.property
    def gravity(self):
        """Message field 'gravity'."""
        return self._gravity

    @gravity.setter
    def gravity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'gravity' field must be a sub message of type 'Vector3'"
        self._gravity = value

    @builtins.property
    def ode_config(self):
        """Message field 'ode_config'."""
        return self._ode_config

    @ode_config.setter
    def ode_config(self, value):
        if __debug__:
            from gazebo_msgs.msg import ODEPhysics
            assert \
                isinstance(value, ODEPhysics), \
                "The 'ode_config' field must be a sub message of type 'ODEPhysics'"
        self._ode_config = value

    @builtins.property
    def success(self):
        """Message field 'success'."""
        return self._success

    @success.setter
    def success(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'success' field must be of type 'bool'"
        self._success = value

    @builtins.property
    def status_message(self):
        """Message field 'status_message'."""
        return self._status_message

    @status_message.setter
    def status_message(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'status_message' field must be of type 'str'"
        self._status_message = value


class Metaclass_GetPhysicsProperties(type):
    """Metaclass of service 'GetPhysicsProperties'."""

    _TYPE_SUPPORT = None

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('gazebo_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'gazebo_msgs.srv.GetPhysicsProperties')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_physics_properties

            from gazebo_msgs.srv import _get_physics_properties
            if _get_physics_properties.Metaclass_GetPhysicsProperties_Request._TYPE_SUPPORT is None:
                _get_physics_properties.Metaclass_GetPhysicsProperties_Request.__import_type_support__()
            if _get_physics_properties.Metaclass_GetPhysicsProperties_Response._TYPE_SUPPORT is None:
                _get_physics_properties.Metaclass_GetPhysicsProperties_Response.__import_type_support__()


class GetPhysicsProperties(metaclass=Metaclass_GetPhysicsProperties):
    from gazebo_msgs.srv._get_physics_properties import GetPhysicsProperties_Request as Request
    from gazebo_msgs.srv._get_physics_properties import GetPhysicsProperties_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
