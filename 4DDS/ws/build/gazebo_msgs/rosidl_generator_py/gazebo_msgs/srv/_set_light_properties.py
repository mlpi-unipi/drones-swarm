# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gazebo_msgs:srv/SetLightProperties.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetLightProperties_Request(type):
    """Metaclass of message 'SetLightProperties_Request'."""

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
                'gazebo_msgs.srv.SetLightProperties_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_light_properties__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_light_properties__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_light_properties__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_light_properties__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_light_properties__request

            from std_msgs.msg import ColorRGBA
            if ColorRGBA.__class__._TYPE_SUPPORT is None:
                ColorRGBA.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLightProperties_Request(metaclass=Metaclass_SetLightProperties_Request):
    """Message class 'SetLightProperties_Request'."""

    __slots__ = [
        '_light_name',
        '_diffuse',
        '_attenuation_constant',
        '_attenuation_linear',
        '_attenuation_quadratic',
    ]

    _fields_and_field_types = {
        'light_name': 'string',
        'diffuse': 'std_msgs/ColorRGBA',
        'attenuation_constant': 'double',
        'attenuation_linear': 'double',
        'attenuation_quadratic': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'ColorRGBA'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.light_name = kwargs.get('light_name', str())
        from std_msgs.msg import ColorRGBA
        self.diffuse = kwargs.get('diffuse', ColorRGBA())
        self.attenuation_constant = kwargs.get('attenuation_constant', float())
        self.attenuation_linear = kwargs.get('attenuation_linear', float())
        self.attenuation_quadratic = kwargs.get('attenuation_quadratic', float())

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
        if self.light_name != other.light_name:
            return False
        if self.diffuse != other.diffuse:
            return False
        if self.attenuation_constant != other.attenuation_constant:
            return False
        if self.attenuation_linear != other.attenuation_linear:
            return False
        if self.attenuation_quadratic != other.attenuation_quadratic:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def light_name(self):
        """Message field 'light_name'."""
        return self._light_name

    @light_name.setter
    def light_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'light_name' field must be of type 'str'"
        self._light_name = value

    @builtins.property
    def diffuse(self):
        """Message field 'diffuse'."""
        return self._diffuse

    @diffuse.setter
    def diffuse(self, value):
        if __debug__:
            from std_msgs.msg import ColorRGBA
            assert \
                isinstance(value, ColorRGBA), \
                "The 'diffuse' field must be a sub message of type 'ColorRGBA'"
        self._diffuse = value

    @builtins.property
    def attenuation_constant(self):
        """Message field 'attenuation_constant'."""
        return self._attenuation_constant

    @attenuation_constant.setter
    def attenuation_constant(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'attenuation_constant' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'attenuation_constant' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._attenuation_constant = value

    @builtins.property
    def attenuation_linear(self):
        """Message field 'attenuation_linear'."""
        return self._attenuation_linear

    @attenuation_linear.setter
    def attenuation_linear(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'attenuation_linear' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'attenuation_linear' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._attenuation_linear = value

    @builtins.property
    def attenuation_quadratic(self):
        """Message field 'attenuation_quadratic'."""
        return self._attenuation_quadratic

    @attenuation_quadratic.setter
    def attenuation_quadratic(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'attenuation_quadratic' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'attenuation_quadratic' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._attenuation_quadratic = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetLightProperties_Response(type):
    """Metaclass of message 'SetLightProperties_Response'."""

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
                'gazebo_msgs.srv.SetLightProperties_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_light_properties__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_light_properties__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_light_properties__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_light_properties__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_light_properties__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetLightProperties_Response(metaclass=Metaclass_SetLightProperties_Response):
    """Message class 'SetLightProperties_Response'."""

    __slots__ = [
        '_success',
        '_status_message',
    ]

    _fields_and_field_types = {
        'success': 'boolean',
        'status_message': 'string',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
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


class Metaclass_SetLightProperties(type):
    """Metaclass of service 'SetLightProperties'."""

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
                'gazebo_msgs.srv.SetLightProperties')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_light_properties

            from gazebo_msgs.srv import _set_light_properties
            if _set_light_properties.Metaclass_SetLightProperties_Request._TYPE_SUPPORT is None:
                _set_light_properties.Metaclass_SetLightProperties_Request.__import_type_support__()
            if _set_light_properties.Metaclass_SetLightProperties_Response._TYPE_SUPPORT is None:
                _set_light_properties.Metaclass_SetLightProperties_Response.__import_type_support__()


class SetLightProperties(metaclass=Metaclass_SetLightProperties):
    from gazebo_msgs.srv._set_light_properties import SetLightProperties_Request as Request
    from gazebo_msgs.srv._set_light_properties import SetLightProperties_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
