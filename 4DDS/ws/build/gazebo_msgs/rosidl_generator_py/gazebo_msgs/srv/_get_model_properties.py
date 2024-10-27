# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gazebo_msgs:srv/GetModelProperties.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_GetModelProperties_Request(type):
    """Metaclass of message 'GetModelProperties_Request'."""

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
                'gazebo_msgs.srv.GetModelProperties_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_model_properties__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_model_properties__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_model_properties__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_model_properties__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_model_properties__request

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetModelProperties_Request(metaclass=Metaclass_GetModelProperties_Request):
    """Message class 'GetModelProperties_Request'."""

    __slots__ = [
        '_model_name',
    ]

    _fields_and_field_types = {
        'model_name': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.model_name = kwargs.get('model_name', str())

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
        if self.model_name != other.model_name:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def model_name(self):
        """Message field 'model_name'."""
        return self._model_name

    @model_name.setter
    def model_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'model_name' field must be of type 'str'"
        self._model_name = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_GetModelProperties_Response(type):
    """Metaclass of message 'GetModelProperties_Response'."""

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
                'gazebo_msgs.srv.GetModelProperties_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__get_model_properties__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__get_model_properties__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__get_model_properties__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__get_model_properties__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__get_model_properties__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class GetModelProperties_Response(metaclass=Metaclass_GetModelProperties_Response):
    """Message class 'GetModelProperties_Response'."""

    __slots__ = [
        '_parent_model_name',
        '_canonical_body_name',
        '_body_names',
        '_geom_names',
        '_joint_names',
        '_child_model_names',
        '_is_static',
        '_success',
        '_status_message',
    ]

    _fields_and_field_types = {
        'parent_model_name': 'string',
        'canonical_body_name': 'string',
        'body_names': 'sequence<string>',
        'geom_names': 'sequence<string>',
        'joint_names': 'sequence<string>',
        'child_model_names': 'sequence<string>',
        'is_static': 'boolean',
        'success': 'boolean',
        'status_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.UnboundedString()),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.parent_model_name = kwargs.get('parent_model_name', str())
        self.canonical_body_name = kwargs.get('canonical_body_name', str())
        self.body_names = kwargs.get('body_names', [])
        self.geom_names = kwargs.get('geom_names', [])
        self.joint_names = kwargs.get('joint_names', [])
        self.child_model_names = kwargs.get('child_model_names', [])
        self.is_static = kwargs.get('is_static', bool())
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
        if self.parent_model_name != other.parent_model_name:
            return False
        if self.canonical_body_name != other.canonical_body_name:
            return False
        if self.body_names != other.body_names:
            return False
        if self.geom_names != other.geom_names:
            return False
        if self.joint_names != other.joint_names:
            return False
        if self.child_model_names != other.child_model_names:
            return False
        if self.is_static != other.is_static:
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
    def parent_model_name(self):
        """Message field 'parent_model_name'."""
        return self._parent_model_name

    @parent_model_name.setter
    def parent_model_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'parent_model_name' field must be of type 'str'"
        self._parent_model_name = value

    @builtins.property
    def canonical_body_name(self):
        """Message field 'canonical_body_name'."""
        return self._canonical_body_name

    @canonical_body_name.setter
    def canonical_body_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'canonical_body_name' field must be of type 'str'"
        self._canonical_body_name = value

    @builtins.property
    def body_names(self):
        """Message field 'body_names'."""
        return self._body_names

    @body_names.setter
    def body_names(self, value):
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
                "The 'body_names' field must be a set or sequence and each value of type 'str'"
        self._body_names = value

    @builtins.property
    def geom_names(self):
        """Message field 'geom_names'."""
        return self._geom_names

    @geom_names.setter
    def geom_names(self, value):
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
                "The 'geom_names' field must be a set or sequence and each value of type 'str'"
        self._geom_names = value

    @builtins.property
    def joint_names(self):
        """Message field 'joint_names'."""
        return self._joint_names

    @joint_names.setter
    def joint_names(self, value):
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
                "The 'joint_names' field must be a set or sequence and each value of type 'str'"
        self._joint_names = value

    @builtins.property
    def child_model_names(self):
        """Message field 'child_model_names'."""
        return self._child_model_names

    @child_model_names.setter
    def child_model_names(self, value):
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
                "The 'child_model_names' field must be a set or sequence and each value of type 'str'"
        self._child_model_names = value

    @builtins.property
    def is_static(self):
        """Message field 'is_static'."""
        return self._is_static

    @is_static.setter
    def is_static(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'is_static' field must be of type 'bool'"
        self._is_static = value

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


class Metaclass_GetModelProperties(type):
    """Metaclass of service 'GetModelProperties'."""

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
                'gazebo_msgs.srv.GetModelProperties')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__get_model_properties

            from gazebo_msgs.srv import _get_model_properties
            if _get_model_properties.Metaclass_GetModelProperties_Request._TYPE_SUPPORT is None:
                _get_model_properties.Metaclass_GetModelProperties_Request.__import_type_support__()
            if _get_model_properties.Metaclass_GetModelProperties_Response._TYPE_SUPPORT is None:
                _get_model_properties.Metaclass_GetModelProperties_Response.__import_type_support__()


class GetModelProperties(metaclass=Metaclass_GetModelProperties):
    from gazebo_msgs.srv._get_model_properties import GetModelProperties_Request as Request
    from gazebo_msgs.srv._get_model_properties import GetModelProperties_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
