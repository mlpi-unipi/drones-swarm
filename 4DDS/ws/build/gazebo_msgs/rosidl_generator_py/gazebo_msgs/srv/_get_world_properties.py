# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gazebo_msgs:srv/GetWorldProperties.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetWorldProperties_Request(type):
    """Metaclass of message 'GetWorldProperties_Request'."""

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
                'gazebo_msgs.srv.GetWorldProperties_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_world_properties__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_world_properties__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_world_properties__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_world_properties__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_world_properties__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetWorldProperties_Request(metaclass=Metaclass_GetWorldProperties_Request):
    """Message class 'GetWorldProperties_Request'."""

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


class Metaclass_GetWorldProperties_Response(type):
    """Metaclass of message 'GetWorldProperties_Response'."""

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
                'gazebo_msgs.srv.GetWorldProperties_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_world_properties__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_world_properties__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_world_properties__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_world_properties__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_world_properties__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetWorldProperties_Response(metaclass=Metaclass_GetWorldProperties_Response):
    """Message class 'GetWorldProperties_Response'."""

    __slots__ = [
        '_sim_time',
        '_model_names',
        '_rendering_enabled',
        '_success',
        '_status_message',
    ]

    _fields_and_field_types = {
        'sim_time': 'double',
        'model_names': 'sequence<string>',
        'rendering_enabled': 'boolean',
        'success': 'boolean',
        'status_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.sim_time = kwargs.get('sim_time', float())
        self.model_names = kwargs.get('model_names', [])
        self.rendering_enabled = kwargs.get('rendering_enabled', bool())
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
        if self.sim_time != other.sim_time:
            return False
        if self.model_names != other.model_names:
            return False
        if self.rendering_enabled != other.rendering_enabled:
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
    def sim_time(self):
        """Message field 'sim_time'."""
        return self._sim_time

    @sim_time.setter
    def sim_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sim_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sim_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sim_time = value

    @builtins.property
    def model_names(self):
        """Message field 'model_names'."""
        return self._model_names

    @model_names.setter
    def model_names(self, value):
        if __debug__:
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
                 all(isinstance(v, str) for v in value) and
                 True), \
                "The 'model_names' field must be a set or sequence and each value of type 'str'"
        self._model_names = value

    @builtins.property
    def rendering_enabled(self):
        """Message field 'rendering_enabled'."""
        return self._rendering_enabled

    @rendering_enabled.setter
    def rendering_enabled(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rendering_enabled' field must be of type 'bool'"
        self._rendering_enabled = value

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


class Metaclass_GetWorldProperties(type):
    """Metaclass of service 'GetWorldProperties'."""

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
                'gazebo_msgs.srv.GetWorldProperties')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_world_properties

            from gazebo_msgs.srv import _get_world_properties
            if _get_world_properties.Metaclass_GetWorldProperties_Request._TYPE_SUPPORT is None:
                _get_world_properties.Metaclass_GetWorldProperties_Request.__import_type_support__()
            if _get_world_properties.Metaclass_GetWorldProperties_Response._TYPE_SUPPORT is None:
                _get_world_properties.Metaclass_GetWorldProperties_Response.__import_type_support__()


class GetWorldProperties(metaclass=Metaclass_GetWorldProperties):
    from gazebo_msgs.srv._get_world_properties import GetWorldProperties_Request as Request
    from gazebo_msgs.srv._get_world_properties import GetWorldProperties_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
