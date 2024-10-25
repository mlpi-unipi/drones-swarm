# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/LandingTargetPose.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_LandingTargetPose(type):
    """Metaclass of message 'LandingTargetPose'."""

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
                'px4_msgs.msg.LandingTargetPose')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__landing_target_pose
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__landing_target_pose
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__landing_target_pose
            cls._TYPE_SUPPORT = module.type_support_msg__msg__landing_target_pose
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__landing_target_pose

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class LandingTargetPose(metaclass=Metaclass_LandingTargetPose):
    """Message class 'LandingTargetPose'."""

    __slots__ = [
        '_timestamp',
        '_is_static',
        '_rel_pos_valid',
        '_rel_vel_valid',
        '_x_rel',
        '_y_rel',
        '_z_rel',
        '_vx_rel',
        '_vy_rel',
        '_cov_x_rel',
        '_cov_y_rel',
        '_cov_vx_rel',
        '_cov_vy_rel',
        '_abs_pos_valid',
        '_x_abs',
        '_y_abs',
        '_z_abs',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'is_static': 'boolean',
        'rel_pos_valid': 'boolean',
        'rel_vel_valid': 'boolean',
        'x_rel': 'float',
        'y_rel': 'float',
        'z_rel': 'float',
        'vx_rel': 'float',
        'vy_rel': 'float',
        'cov_x_rel': 'float',
        'cov_y_rel': 'float',
        'cov_vx_rel': 'float',
        'cov_vy_rel': 'float',
        'abs_pos_valid': 'boolean',
        'x_abs': 'float',
        'y_abs': 'float',
        'z_abs': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.is_static = kwargs.get('is_static', bool())
        self.rel_pos_valid = kwargs.get('rel_pos_valid', bool())
        self.rel_vel_valid = kwargs.get('rel_vel_valid', bool())
        self.x_rel = kwargs.get('x_rel', float())
        self.y_rel = kwargs.get('y_rel', float())
        self.z_rel = kwargs.get('z_rel', float())
        self.vx_rel = kwargs.get('vx_rel', float())
        self.vy_rel = kwargs.get('vy_rel', float())
        self.cov_x_rel = kwargs.get('cov_x_rel', float())
        self.cov_y_rel = kwargs.get('cov_y_rel', float())
        self.cov_vx_rel = kwargs.get('cov_vx_rel', float())
        self.cov_vy_rel = kwargs.get('cov_vy_rel', float())
        self.abs_pos_valid = kwargs.get('abs_pos_valid', bool())
        self.x_abs = kwargs.get('x_abs', float())
        self.y_abs = kwargs.get('y_abs', float())
        self.z_abs = kwargs.get('z_abs', float())

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
        if self.is_static != other.is_static:
            return False
        if self.rel_pos_valid != other.rel_pos_valid:
            return False
        if self.rel_vel_valid != other.rel_vel_valid:
            return False
        if self.x_rel != other.x_rel:
            return False
        if self.y_rel != other.y_rel:
            return False
        if self.z_rel != other.z_rel:
            return False
        if self.vx_rel != other.vx_rel:
            return False
        if self.vy_rel != other.vy_rel:
            return False
        if self.cov_x_rel != other.cov_x_rel:
            return False
        if self.cov_y_rel != other.cov_y_rel:
            return False
        if self.cov_vx_rel != other.cov_vx_rel:
            return False
        if self.cov_vy_rel != other.cov_vy_rel:
            return False
        if self.abs_pos_valid != other.abs_pos_valid:
            return False
        if self.x_abs != other.x_abs:
            return False
        if self.y_abs != other.y_abs:
            return False
        if self.z_abs != other.z_abs:
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
    def rel_pos_valid(self):
        """Message field 'rel_pos_valid'."""
        return self._rel_pos_valid

    @rel_pos_valid.setter
    def rel_pos_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rel_pos_valid' field must be of type 'bool'"
        self._rel_pos_valid = value

    @builtins.property
    def rel_vel_valid(self):
        """Message field 'rel_vel_valid'."""
        return self._rel_vel_valid

    @rel_vel_valid.setter
    def rel_vel_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'rel_vel_valid' field must be of type 'bool'"
        self._rel_vel_valid = value

    @builtins.property
    def x_rel(self):
        """Message field 'x_rel'."""
        return self._x_rel

    @x_rel.setter
    def x_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_rel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_rel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_rel = value

    @builtins.property
    def y_rel(self):
        """Message field 'y_rel'."""
        return self._y_rel

    @y_rel.setter
    def y_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_rel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_rel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_rel = value

    @builtins.property
    def z_rel(self):
        """Message field 'z_rel'."""
        return self._z_rel

    @z_rel.setter
    def z_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_rel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_rel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_rel = value

    @builtins.property
    def vx_rel(self):
        """Message field 'vx_rel'."""
        return self._vx_rel

    @vx_rel.setter
    def vx_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vx_rel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vx_rel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vx_rel = value

    @builtins.property
    def vy_rel(self):
        """Message field 'vy_rel'."""
        return self._vy_rel

    @vy_rel.setter
    def vy_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vy_rel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vy_rel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vy_rel = value

    @builtins.property
    def cov_x_rel(self):
        """Message field 'cov_x_rel'."""
        return self._cov_x_rel

    @cov_x_rel.setter
    def cov_x_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_x_rel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_x_rel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_x_rel = value

    @builtins.property
    def cov_y_rel(self):
        """Message field 'cov_y_rel'."""
        return self._cov_y_rel

    @cov_y_rel.setter
    def cov_y_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_y_rel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_y_rel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_y_rel = value

    @builtins.property
    def cov_vx_rel(self):
        """Message field 'cov_vx_rel'."""
        return self._cov_vx_rel

    @cov_vx_rel.setter
    def cov_vx_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vx_rel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vx_rel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vx_rel = value

    @builtins.property
    def cov_vy_rel(self):
        """Message field 'cov_vy_rel'."""
        return self._cov_vy_rel

    @cov_vy_rel.setter
    def cov_vy_rel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cov_vy_rel' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'cov_vy_rel' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._cov_vy_rel = value

    @builtins.property
    def abs_pos_valid(self):
        """Message field 'abs_pos_valid'."""
        return self._abs_pos_valid

    @abs_pos_valid.setter
    def abs_pos_valid(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'abs_pos_valid' field must be of type 'bool'"
        self._abs_pos_valid = value

    @builtins.property
    def x_abs(self):
        """Message field 'x_abs'."""
        return self._x_abs

    @x_abs.setter
    def x_abs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'x_abs' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'x_abs' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._x_abs = value

    @builtins.property
    def y_abs(self):
        """Message field 'y_abs'."""
        return self._y_abs

    @y_abs.setter
    def y_abs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'y_abs' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'y_abs' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._y_abs = value

    @builtins.property
    def z_abs(self):
        """Message field 'z_abs'."""
        return self._z_abs

    @z_abs.setter
    def z_abs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'z_abs' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'z_abs' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._z_abs = value
