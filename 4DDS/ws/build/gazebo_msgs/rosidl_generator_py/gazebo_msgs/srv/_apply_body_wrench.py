# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gazebo_msgs:srv/ApplyBodyWrench.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ApplyBodyWrench_Request(type):
    """Metaclass of message 'ApplyBodyWrench_Request'."""

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
                'gazebo_msgs.srv.ApplyBodyWrench_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__apply_body_wrench__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__apply_body_wrench__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__apply_body_wrench__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__apply_body_wrench__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__apply_body_wrench__request

            from builtin_interfaces.msg import Duration
            if Duration.__class__._TYPE_SUPPORT is None:
                Duration.__class__.__import_type_support__()

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

            from geometry_msgs.msg import Point
            if Point.__class__._TYPE_SUPPORT is None:
                Point.__class__.__import_type_support__()

            from geometry_msgs.msg import Wrench
            if Wrench.__class__._TYPE_SUPPORT is None:
                Wrench.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApplyBodyWrench_Request(metaclass=Metaclass_ApplyBodyWrench_Request):
    """Message class 'ApplyBodyWrench_Request'."""

    __slots__ = [
        '_body_name',
        '_reference_frame',
        '_reference_point',
        '_wrench',
        '_start_time',
        '_duration',
    ]

    _fields_and_field_types = {
        'body_name': 'string',
        'reference_frame': 'string',
        'reference_point': 'geometry_msgs/Point',
        'wrench': 'geometry_msgs/Wrench',
        'start_time': 'builtin_interfaces/Time',
        'duration': 'builtin_interfaces/Duration',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Point'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Wrench'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Duration'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.body_name = kwargs.get('body_name', str())
        self.reference_frame = kwargs.get('reference_frame', str())
        from geometry_msgs.msg import Point
        self.reference_point = kwargs.get('reference_point', Point())
        from geometry_msgs.msg import Wrench
        self.wrench = kwargs.get('wrench', Wrench())
        from builtin_interfaces.msg import Time
        self.start_time = kwargs.get('start_time', Time())
        from builtin_interfaces.msg import Duration
        self.duration = kwargs.get('duration', Duration())

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
        if self.body_name != other.body_name:
            return False
        if self.reference_frame != other.reference_frame:
            return False
        if self.reference_point != other.reference_point:
            return False
        if self.wrench != other.wrench:
            return False
        if self.start_time != other.start_time:
            return False
        if self.duration != other.duration:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def body_name(self):
        """Message field 'body_name'."""
        return self._body_name

    @body_name.setter
    def body_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'body_name' field must be of type 'str'"
        self._body_name = value

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

    @builtins.property
    def reference_point(self):
        """Message field 'reference_point'."""
        return self._reference_point

    @reference_point.setter
    def reference_point(self, value):
        if __debug__:
            from geometry_msgs.msg import Point
            assert \
                isinstance(value, Point), \
                "The 'reference_point' field must be a sub message of type 'Point'"
        self._reference_point = value

    @builtins.property
    def wrench(self):
        """Message field 'wrench'."""
        return self._wrench

    @wrench.setter
    def wrench(self, value):
        if __debug__:
            from geometry_msgs.msg import Wrench
            assert \
                isinstance(value, Wrench), \
                "The 'wrench' field must be a sub message of type 'Wrench'"
        self._wrench = value

    @builtins.property
    def start_time(self):
        """Message field 'start_time'."""
        return self._start_time

    @start_time.setter
    def start_time(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'start_time' field must be a sub message of type 'Time'"
        self._start_time = value

    @builtins.property
    def duration(self):
        """Message field 'duration'."""
        return self._duration

    @duration.setter
    def duration(self, value):
        if __debug__:
            from builtin_interfaces.msg import Duration
            assert \
                isinstance(value, Duration), \
                "The 'duration' field must be a sub message of type 'Duration'"
        self._duration = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_ApplyBodyWrench_Response(type):
    """Metaclass of message 'ApplyBodyWrench_Response'."""

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
                'gazebo_msgs.srv.ApplyBodyWrench_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__apply_body_wrench__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__apply_body_wrench__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__apply_body_wrench__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__apply_body_wrench__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__apply_body_wrench__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ApplyBodyWrench_Response(metaclass=Metaclass_ApplyBodyWrench_Response):
    """Message class 'ApplyBodyWrench_Response'."""

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


class Metaclass_ApplyBodyWrench(type):
    """Metaclass of service 'ApplyBodyWrench'."""

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
                'gazebo_msgs.srv.ApplyBodyWrench')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__apply_body_wrench

            from gazebo_msgs.srv import _apply_body_wrench
            if _apply_body_wrench.Metaclass_ApplyBodyWrench_Request._TYPE_SUPPORT is None:
                _apply_body_wrench.Metaclass_ApplyBodyWrench_Request.__import_type_support__()
            if _apply_body_wrench.Metaclass_ApplyBodyWrench_Response._TYPE_SUPPORT is None:
                _apply_body_wrench.Metaclass_ApplyBodyWrench_Response.__import_type_support__()


class ApplyBodyWrench(metaclass=Metaclass_ApplyBodyWrench):
    from gazebo_msgs.srv._apply_body_wrench import ApplyBodyWrench_Request as Request
    from gazebo_msgs.srv._apply_body_wrench import ApplyBodyWrench_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
