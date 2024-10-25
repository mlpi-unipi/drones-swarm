# generated from rosidl_generator_py/resource/_idl.py.em
# with input from gazebo_msgs:msg/ODEPhysics.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_ODEPhysics(type):
    """Metaclass of message 'ODEPhysics'."""

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
                'gazebo_msgs.msg.ODEPhysics')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ode_physics
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ode_physics
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ode_physics
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ode_physics
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ode_physics

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class ODEPhysics(metaclass=Metaclass_ODEPhysics):
    """Message class 'ODEPhysics'."""

    __slots__ = [
        '_auto_disable_bodies',
        '_sor_pgs_precon_iters',
        '_sor_pgs_iters',
        '_sor_pgs_w',
        '_sor_pgs_rms_error_tol',
        '_contact_surface_layer',
        '_contact_max_correcting_vel',
        '_cfm',
        '_erp',
        '_max_contacts',
    ]

    _fields_and_field_types = {
        'auto_disable_bodies': 'boolean',
        'sor_pgs_precon_iters': 'uint32',
        'sor_pgs_iters': 'uint32',
        'sor_pgs_w': 'double',
        'sor_pgs_rms_error_tol': 'double',
        'contact_surface_layer': 'double',
        'contact_max_correcting_vel': 'double',
        'cfm': 'double',
        'erp': 'double',
        'max_contacts': 'uint32',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.auto_disable_bodies = kwargs.get('auto_disable_bodies', bool())
        self.sor_pgs_precon_iters = kwargs.get('sor_pgs_precon_iters', int())
        self.sor_pgs_iters = kwargs.get('sor_pgs_iters', int())
        self.sor_pgs_w = kwargs.get('sor_pgs_w', float())
        self.sor_pgs_rms_error_tol = kwargs.get('sor_pgs_rms_error_tol', float())
        self.contact_surface_layer = kwargs.get('contact_surface_layer', float())
        self.contact_max_correcting_vel = kwargs.get('contact_max_correcting_vel', float())
        self.cfm = kwargs.get('cfm', float())
        self.erp = kwargs.get('erp', float())
        self.max_contacts = kwargs.get('max_contacts', int())

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
        if self.auto_disable_bodies != other.auto_disable_bodies:
            return False
        if self.sor_pgs_precon_iters != other.sor_pgs_precon_iters:
            return False
        if self.sor_pgs_iters != other.sor_pgs_iters:
            return False
        if self.sor_pgs_w != other.sor_pgs_w:
            return False
        if self.sor_pgs_rms_error_tol != other.sor_pgs_rms_error_tol:
            return False
        if self.contact_surface_layer != other.contact_surface_layer:
            return False
        if self.contact_max_correcting_vel != other.contact_max_correcting_vel:
            return False
        if self.cfm != other.cfm:
            return False
        if self.erp != other.erp:
            return False
        if self.max_contacts != other.max_contacts:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def auto_disable_bodies(self):
        """Message field 'auto_disable_bodies'."""
        return self._auto_disable_bodies

    @auto_disable_bodies.setter
    def auto_disable_bodies(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'auto_disable_bodies' field must be of type 'bool'"
        self._auto_disable_bodies = value

    @builtins.property
    def sor_pgs_precon_iters(self):
        """Message field 'sor_pgs_precon_iters'."""
        return self._sor_pgs_precon_iters

    @sor_pgs_precon_iters.setter
    def sor_pgs_precon_iters(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sor_pgs_precon_iters' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sor_pgs_precon_iters' field must be an unsigned integer in [0, 4294967295]"
        self._sor_pgs_precon_iters = value

    @builtins.property
    def sor_pgs_iters(self):
        """Message field 'sor_pgs_iters'."""
        return self._sor_pgs_iters

    @sor_pgs_iters.setter
    def sor_pgs_iters(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'sor_pgs_iters' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'sor_pgs_iters' field must be an unsigned integer in [0, 4294967295]"
        self._sor_pgs_iters = value

    @builtins.property
    def sor_pgs_w(self):
        """Message field 'sor_pgs_w'."""
        return self._sor_pgs_w

    @sor_pgs_w.setter
    def sor_pgs_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sor_pgs_w' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sor_pgs_w' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sor_pgs_w = value

    @builtins.property
    def sor_pgs_rms_error_tol(self):
        """Message field 'sor_pgs_rms_error_tol'."""
        return self._sor_pgs_rms_error_tol

    @sor_pgs_rms_error_tol.setter
    def sor_pgs_rms_error_tol(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'sor_pgs_rms_error_tol' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'sor_pgs_rms_error_tol' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._sor_pgs_rms_error_tol = value

    @builtins.property
    def contact_surface_layer(self):
        """Message field 'contact_surface_layer'."""
        return self._contact_surface_layer

    @contact_surface_layer.setter
    def contact_surface_layer(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'contact_surface_layer' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'contact_surface_layer' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._contact_surface_layer = value

    @builtins.property
    def contact_max_correcting_vel(self):
        """Message field 'contact_max_correcting_vel'."""
        return self._contact_max_correcting_vel

    @contact_max_correcting_vel.setter
    def contact_max_correcting_vel(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'contact_max_correcting_vel' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'contact_max_correcting_vel' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._contact_max_correcting_vel = value

    @builtins.property
    def cfm(self):
        """Message field 'cfm'."""
        return self._cfm

    @cfm.setter
    def cfm(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'cfm' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'cfm' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._cfm = value

    @builtins.property
    def erp(self):
        """Message field 'erp'."""
        return self._erp

    @erp.setter
    def erp(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'erp' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'erp' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._erp = value

    @builtins.property
    def max_contacts(self):
        """Message field 'max_contacts'."""
        return self._max_contacts

    @max_contacts.setter
    def max_contacts(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'max_contacts' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'max_contacts' field must be an unsigned integer in [0, 4294967295]"
        self._max_contacts = value
