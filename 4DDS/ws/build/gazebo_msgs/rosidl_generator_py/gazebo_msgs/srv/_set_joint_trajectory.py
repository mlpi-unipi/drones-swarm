# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gazebo_msgs:srv/SetJointTrajectory.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SetJointTrajectory_Request(type):
    """Metaclass of message 'SetJointTrajectory_Request'."""

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
                'gazebo_msgs.srv.SetJointTrajectory_Request')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_joint_trajectory__request
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_joint_trajectory__request
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_joint_trajectory__request
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_joint_trajectory__request
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_joint_trajectory__request

            from geometry_msgs.msg import Pose
            if Pose.__class__._TYPE_SUPPORT is None:
                Pose.__class__.__import_type_support__()

            from trajectory_msgs.msg import JointTrajectory
            if JointTrajectory.__class__._TYPE_SUPPORT is None:
                JointTrajectory.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetJointTrajectory_Request(metaclass=Metaclass_SetJointTrajectory_Request):
    """Message class 'SetJointTrajectory_Request'."""

    __slots__ = [
        '_model_name',
        '_joint_trajectory',
        '_model_pose',
        '_set_model_pose',
        '_disable_physics_updates',
    ]

    _fields_and_field_types = {
        'model_name': 'string',
        'joint_trajectory': 'trajectory_msgs/JointTrajectory',
        'model_pose': 'geometry_msgs/Pose',
        'set_model_pose': 'boolean',
        'disable_physics_updates': 'boolean',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['trajectory_msgs', 'msg'], 'JointTrajectory'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Pose'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.model_name = kwargs.get('model_name', str())
        from trajectory_msgs.msg import JointTrajectory
        self.joint_trajectory = kwargs.get('joint_trajectory', JointTrajectory())
        from geometry_msgs.msg import Pose
        self.model_pose = kwargs.get('model_pose', Pose())
        self.set_model_pose = kwargs.get('set_model_pose', bool())
        self.disable_physics_updates = kwargs.get('disable_physics_updates', bool())

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
        if self.joint_trajectory != other.joint_trajectory:
            return False
        if self.model_pose != other.model_pose:
            return False
        if self.set_model_pose != other.set_model_pose:
            return False
        if self.disable_physics_updates != other.disable_physics_updates:
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

    @builtins.property
    def joint_trajectory(self):
        """Message field 'joint_trajectory'."""
        return self._joint_trajectory

    @joint_trajectory.setter
    def joint_trajectory(self, value):
        if __debug__:
            from trajectory_msgs.msg import JointTrajectory
            assert \
                isinstance(value, JointTrajectory), \
                "The 'joint_trajectory' field must be a sub message of type 'JointTrajectory'"
        self._joint_trajectory = value

    @builtins.property
    def model_pose(self):
        """Message field 'model_pose'."""
        return self._model_pose

    @model_pose.setter
    def model_pose(self, value):
        if __debug__:
            from geometry_msgs.msg import Pose
            assert \
                isinstance(value, Pose), \
                "The 'model_pose' field must be a sub message of type 'Pose'"
        self._model_pose = value

    @builtins.property
    def set_model_pose(self):
        """Message field 'set_model_pose'."""
        return self._set_model_pose

    @set_model_pose.setter
    def set_model_pose(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'set_model_pose' field must be of type 'bool'"
        self._set_model_pose = value

    @builtins.property
    def disable_physics_updates(self):
        """Message field 'disable_physics_updates'."""
        return self._disable_physics_updates

    @disable_physics_updates.setter
    def disable_physics_updates(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'disable_physics_updates' field must be of type 'bool'"
        self._disable_physics_updates = value


# Import statements for member types

# already imported above
# import builtins

# already imported above
# import rosidl_parser.definition


class Metaclass_SetJointTrajectory_Response(type):
    """Metaclass of message 'SetJointTrajectory_Response'."""

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
                'gazebo_msgs.srv.SetJointTrajectory_Response')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__srv__set_joint_trajectory__response
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__srv__set_joint_trajectory__response
            cls._CONVERT_TO_PY = module.convert_to_py_msg__srv__set_joint_trajectory__response
            cls._TYPE_SUPPORT = module.type_support_msg__srv__set_joint_trajectory__response
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__srv__set_joint_trajectory__response

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SetJointTrajectory_Response(metaclass=Metaclass_SetJointTrajectory_Response):
    """Message class 'SetJointTrajectory_Response'."""

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


class Metaclass_SetJointTrajectory(type):
    """Metaclass of service 'SetJointTrajectory'."""

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
                'gazebo_msgs.srv.SetJointTrajectory')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._TYPE_SUPPORT = module.type_support_srv__srv__set_joint_trajectory

            from gazebo_msgs.srv import _set_joint_trajectory
            if _set_joint_trajectory.Metaclass_SetJointTrajectory_Request._TYPE_SUPPORT is None:
                _set_joint_trajectory.Metaclass_SetJointTrajectory_Request.__import_type_support__()
            if _set_joint_trajectory.Metaclass_SetJointTrajectory_Response._TYPE_SUPPORT is None:
                _set_joint_trajectory.Metaclass_SetJointTrajectory_Response.__import_type_support__()


class SetJointTrajectory(metaclass=Metaclass_SetJointTrajectory):
    from gazebo_msgs.srv._set_joint_trajectory import SetJointTrajectory_Request as Request
    from gazebo_msgs.srv._set_joint_trajectory import SetJointTrajectory_Response as Response

    def __init__(self):
        raise NotImplementedError('Service classes can not be instantiated')
