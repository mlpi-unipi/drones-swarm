# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gazebo_msgs:msg/ContactState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'depths'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ContactState(type):
    """Metaclass of message 'ContactState'."""

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
                'gazebo_msgs.msg.ContactState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__contact_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__contact_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__contact_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__contact_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__contact_state

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

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


class ContactState(metaclass=Metaclass_ContactState):
    """Message class 'ContactState'."""

    __slots__ = [
        '_info',
        '_collision1_name',
        '_collision2_name',
        '_wrenches',
        '_total_wrench',
        '_contact_positions',
        '_contact_normals',
        '_depths',
    ]

    _fields_and_field_types = {
        'info': 'string',
        'collision1_name': 'string',
        'collision2_name': 'string',
        'wrenches': 'sequence<geometry_msgs/Wrench>',
        'total_wrench': 'geometry_msgs/Wrench',
        'contact_positions': 'sequence<geometry_msgs/Vector3>',
        'contact_normals': 'sequence<geometry_msgs/Vector3>',
        'depths': 'sequence<double>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Wrench')),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Wrench'),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('double')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.info = kwargs.get('info', str())
        self.collision1_name = kwargs.get('collision1_name', str())
        self.collision2_name = kwargs.get('collision2_name', str())
        self.wrenches = kwargs.get('wrenches', [])
        from geometry_msgs.msg import Wrench
        self.total_wrench = kwargs.get('total_wrench', Wrench())
        self.contact_positions = kwargs.get('contact_positions', [])
        self.contact_normals = kwargs.get('contact_normals', [])
        self.depths = array.array('d', kwargs.get('depths', []))

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
        if self.info != other.info:
            return False
        if self.collision1_name != other.collision1_name:
            return False
        if self.collision2_name != other.collision2_name:
            return False
        if self.wrenches != other.wrenches:
            return False
        if self.total_wrench != other.total_wrench:
            return False
        if self.contact_positions != other.contact_positions:
            return False
        if self.contact_normals != other.contact_normals:
            return False
        if self.depths != other.depths:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def info(self):
        """Message field 'info'."""
        return self._info

    @info.setter
    def info(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'info' field must be of type 'str'"
        self._info = value

    @builtins.property
    def collision1_name(self):
        """Message field 'collision1_name'."""
        return self._collision1_name

    @collision1_name.setter
    def collision1_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'collision1_name' field must be of type 'str'"
        self._collision1_name = value

    @builtins.property
    def collision2_name(self):
        """Message field 'collision2_name'."""
        return self._collision2_name

    @collision2_name.setter
    def collision2_name(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'collision2_name' field must be of type 'str'"
        self._collision2_name = value

    @builtins.property
    def wrenches(self):
        """Message field 'wrenches'."""
        return self._wrenches

    @wrenches.setter
    def wrenches(self, value):
        if __debug__:
            from geometry_msgs.msg import Wrench
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
                 all(isinstance(v, Wrench) for v in value) and
                 True), \
                "The 'wrenches' field must be a set or sequence and each value of type 'Wrench'"
        self._wrenches = value

    @builtins.property
    def total_wrench(self):
        """Message field 'total_wrench'."""
        return self._total_wrench

    @total_wrench.setter
    def total_wrench(self, value):
        if __debug__:
            from geometry_msgs.msg import Wrench
            assert \
                isinstance(value, Wrench), \
                "The 'total_wrench' field must be a sub message of type 'Wrench'"
        self._total_wrench = value

    @builtins.property
    def contact_positions(self):
        """Message field 'contact_positions'."""
        return self._contact_positions

    @contact_positions.setter
    def contact_positions(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
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
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'contact_positions' field must be a set or sequence and each value of type 'Vector3'"
        self._contact_positions = value

    @builtins.property
    def contact_normals(self):
        """Message field 'contact_normals'."""
        return self._contact_normals

    @contact_normals.setter
    def contact_normals(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
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
                 all(isinstance(v, Vector3) for v in value) and
                 True), \
                "The 'contact_normals' field must be a set or sequence and each value of type 'Vector3'"
        self._contact_normals = value

    @builtins.property
    def depths(self):
        """Message field 'depths'."""
        return self._depths

    @depths.setter
    def depths(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'd', \
                "The 'depths' array.array() must have the type code of 'd'"
            self._depths = value
            return
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
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -1.7976931348623157e+308 or val > 1.7976931348623157e+308) or math.isinf(val) for val in value)), \
                "The 'depths' field must be a set or sequence and each value of type 'float' and each double in [-179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000, 179769313486231570814527423731704356798070567525844996598917476803157260780028538760589558632766878171540458953514382464234321326889464182768467546703537516986049910576551282076245490090389328944075868508455133942304583236903222948165808559332123348274797826204144723168738177180919299881250404026184124858368.000000]"
        self._depths = array.array('d', value)
