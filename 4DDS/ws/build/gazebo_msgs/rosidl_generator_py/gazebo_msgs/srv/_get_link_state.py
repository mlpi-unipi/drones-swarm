# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gazebo_msgs:srv/GetLinkState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetLinkState_Request(type):
    """Metaclass of message 'GetLinkState_Request'."""

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
                'gazebo_msgs.srv.GetLinkState_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_link_state__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_link_state__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_link_state__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_link_state__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_link_state__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetLinkState_Request(metaclass=Metaclass_GetLinkState_Request):
    """Message class 'GetLinkState_Request'."""

    __slots__ = [
        '_link_name',
        '_reference_frame',
    ]

    _fields_and_field_types = {
        'link_name': 'string',
        'reference_frame': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.link_name = kwargs.get('link_name', str())
        self.reference_frame = kwargs.get('reference_frame', str())

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
        if self.link_name != other.link_name:
            return False
        if self.reference_frame != other.reference_frame:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def link_name(self):
        """Message field 'link_name'."""
        return self._link_name

    @link_name.setter
    def link_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'link_name' field must be of type 'str'"
        self._link_name = value

    @builtins.property
    def reference_frame(self):
        """Message field 'reference_frame'."""
        return self._reference_frame

    @reference_frame.setter
    def reference_frame(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'reference_frame' field must be of type 'str'"
        self._reference_frame = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetLinkState_Response(type):
    """Metaclass of message 'GetLinkState_Response'."""

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
                'gazebo_msgs.srv.GetLinkState_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_link_state__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_link_state__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_link_state__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_link_state__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_link_state__response

            from gazebo_msgs.msg import LinkState
            if LinkState.__class__._TYPE_SUPPORT is None:
                LinkState.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetLinkState_Response(metaclass=Metaclass_GetLinkState_Response):
    """Message class 'GetLinkState_Response'."""

    __slots__ = [
        '_link_state',
        '_success',
        '_status_message',
    ]

    _fields_and_field_types = {
        'link_state': 'gazebo_msgs/LinkState',
        'success': 'boolean',
        'status_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['gazebo_msgs', 'msg'], 'LinkState'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from gazebo_msgs.msg import LinkState
        self.link_state = kwargs.get('link_state', LinkState())
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
        if self.link_state != other.link_state:
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
    def link_state(self):
        """Message field 'link_state'."""
        return self._link_state

    @link_state.setter
    def link_state(self, value):
        if __debug__:
            from gazebo_msgs.msg import LinkState
            assert \
                isinstance(value, LinkState), \
                "The 'link_state' field must be a sub message of type 'LinkState'"
        self._link_state = value

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


class Metaclass_GetLinkState(type):
    """Metaclass of service 'GetLinkState'."""

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
                'gazebo_msgs.srv.GetLinkState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_link_state

            from gazebo_msgs.srv import _get_link_state
            if _get_link_state.Metaclass_GetLinkState_Request._TYPE_SUPPORT is None:
                _get_link_state.Metaclass_GetLinkState_Request.__import_type_support__()
            if _get_link_state.Metaclass_GetLinkState_Response._TYPE_SUPPORT is None:
                _get_link_state.Metaclass_GetLinkState_Response.__import_type_support__()


class GetLinkState(metaclass=Metaclass_GetLinkState):
    from gazebo_msgs.srv._get_link_state import GetLinkState_Request as Request
    from gazebo_msgs.srv._get_link_state import GetLinkState_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
