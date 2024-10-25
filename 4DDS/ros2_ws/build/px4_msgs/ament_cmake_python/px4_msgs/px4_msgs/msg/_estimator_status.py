# generated from rosidl_generator_py/resource/_idl.py.em
# with input from px4_msgs:msg/EstimatorStatus.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

# Member 'output_tracking_error'
import numpy  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_EstimatorStatus(type):
    """Metaclass of message 'EstimatorStatus'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'GPS_CHECK_FAIL_GPS_FIX': 0,
        'GPS_CHECK_FAIL_MIN_SAT_COUNT': 1,
        'GPS_CHECK_FAIL_MAX_PDOP': 2,
        'GPS_CHECK_FAIL_MAX_HORZ_ERR': 3,
        'GPS_CHECK_FAIL_MAX_VERT_ERR': 4,
        'GPS_CHECK_FAIL_MAX_SPD_ERR': 5,
        'GPS_CHECK_FAIL_MAX_HORZ_DRIFT': 6,
        'GPS_CHECK_FAIL_MAX_VERT_DRIFT': 7,
        'GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR': 8,
        'GPS_CHECK_FAIL_MAX_VERT_SPD_ERR': 9,
        'CS_TILT_ALIGN': 0,
        'CS_YAW_ALIGN': 1,
        'CS_GPS': 2,
        'CS_OPT_FLOW': 3,
        'CS_MAG_HDG': 4,
        'CS_MAG_3D': 5,
        'CS_MAG_DEC': 6,
        'CS_IN_AIR': 7,
        'CS_WIND': 8,
        'CS_BARO_HGT': 9,
        'CS_RNG_HGT': 10,
        'CS_GPS_HGT': 11,
        'CS_EV_POS': 12,
        'CS_EV_YAW': 13,
        'CS_EV_HGT': 14,
        'CS_BETA': 15,
        'CS_MAG_FIELD': 16,
        'CS_FIXED_WING': 17,
        'CS_MAG_FAULT': 18,
        'CS_ASPD': 19,
        'CS_GND_EFFECT': 20,
        'CS_RNG_STUCK': 21,
        'CS_GPS_YAW': 22,
        'CS_MAG_ALIGNED': 23,
        'CS_EV_VEL': 24,
        'CS_SYNTHETIC_MAG_Z': 25,
        'CS_VEHICLE_AT_REST': 26,
        'CS_GPS_YAW_FAULT': 27,
        'CS_RNG_FAULT': 28,
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
                'px4_msgs.msg.EstimatorStatus')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__estimator_status
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__estimator_status
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__estimator_status
            cls._TYPE_SUPPORT = module.type_support_msg__msg__estimator_status
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__estimator_status

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'GPS_CHECK_FAIL_GPS_FIX': cls.__constants['GPS_CHECK_FAIL_GPS_FIX'],
            'GPS_CHECK_FAIL_MIN_SAT_COUNT': cls.__constants['GPS_CHECK_FAIL_MIN_SAT_COUNT'],
            'GPS_CHECK_FAIL_MAX_PDOP': cls.__constants['GPS_CHECK_FAIL_MAX_PDOP'],
            'GPS_CHECK_FAIL_MAX_HORZ_ERR': cls.__constants['GPS_CHECK_FAIL_MAX_HORZ_ERR'],
            'GPS_CHECK_FAIL_MAX_VERT_ERR': cls.__constants['GPS_CHECK_FAIL_MAX_VERT_ERR'],
            'GPS_CHECK_FAIL_MAX_SPD_ERR': cls.__constants['GPS_CHECK_FAIL_MAX_SPD_ERR'],
            'GPS_CHECK_FAIL_MAX_HORZ_DRIFT': cls.__constants['GPS_CHECK_FAIL_MAX_HORZ_DRIFT'],
            'GPS_CHECK_FAIL_MAX_VERT_DRIFT': cls.__constants['GPS_CHECK_FAIL_MAX_VERT_DRIFT'],
            'GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR': cls.__constants['GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR'],
            'GPS_CHECK_FAIL_MAX_VERT_SPD_ERR': cls.__constants['GPS_CHECK_FAIL_MAX_VERT_SPD_ERR'],
            'CS_TILT_ALIGN': cls.__constants['CS_TILT_ALIGN'],
            'CS_YAW_ALIGN': cls.__constants['CS_YAW_ALIGN'],
            'CS_GPS': cls.__constants['CS_GPS'],
            'CS_OPT_FLOW': cls.__constants['CS_OPT_FLOW'],
            'CS_MAG_HDG': cls.__constants['CS_MAG_HDG'],
            'CS_MAG_3D': cls.__constants['CS_MAG_3D'],
            'CS_MAG_DEC': cls.__constants['CS_MAG_DEC'],
            'CS_IN_AIR': cls.__constants['CS_IN_AIR'],
            'CS_WIND': cls.__constants['CS_WIND'],
            'CS_BARO_HGT': cls.__constants['CS_BARO_HGT'],
            'CS_RNG_HGT': cls.__constants['CS_RNG_HGT'],
            'CS_GPS_HGT': cls.__constants['CS_GPS_HGT'],
            'CS_EV_POS': cls.__constants['CS_EV_POS'],
            'CS_EV_YAW': cls.__constants['CS_EV_YAW'],
            'CS_EV_HGT': cls.__constants['CS_EV_HGT'],
            'CS_BETA': cls.__constants['CS_BETA'],
            'CS_MAG_FIELD': cls.__constants['CS_MAG_FIELD'],
            'CS_FIXED_WING': cls.__constants['CS_FIXED_WING'],
            'CS_MAG_FAULT': cls.__constants['CS_MAG_FAULT'],
            'CS_ASPD': cls.__constants['CS_ASPD'],
            'CS_GND_EFFECT': cls.__constants['CS_GND_EFFECT'],
            'CS_RNG_STUCK': cls.__constants['CS_RNG_STUCK'],
            'CS_GPS_YAW': cls.__constants['CS_GPS_YAW'],
            'CS_MAG_ALIGNED': cls.__constants['CS_MAG_ALIGNED'],
            'CS_EV_VEL': cls.__constants['CS_EV_VEL'],
            'CS_SYNTHETIC_MAG_Z': cls.__constants['CS_SYNTHETIC_MAG_Z'],
            'CS_VEHICLE_AT_REST': cls.__constants['CS_VEHICLE_AT_REST'],
            'CS_GPS_YAW_FAULT': cls.__constants['CS_GPS_YAW_FAULT'],
            'CS_RNG_FAULT': cls.__constants['CS_RNG_FAULT'],
        }

    @property
    def GPS_CHECK_FAIL_GPS_FIX(self):
        """Message constant 'GPS_CHECK_FAIL_GPS_FIX'."""
        return Metaclass_EstimatorStatus.__constants['GPS_CHECK_FAIL_GPS_FIX']

    @property
    def GPS_CHECK_FAIL_MIN_SAT_COUNT(self):
        """Message constant 'GPS_CHECK_FAIL_MIN_SAT_COUNT'."""
        return Metaclass_EstimatorStatus.__constants['GPS_CHECK_FAIL_MIN_SAT_COUNT']

    @property
    def GPS_CHECK_FAIL_MAX_PDOP(self):
        """Message constant 'GPS_CHECK_FAIL_MAX_PDOP'."""
        return Metaclass_EstimatorStatus.__constants['GPS_CHECK_FAIL_MAX_PDOP']

    @property
    def GPS_CHECK_FAIL_MAX_HORZ_ERR(self):
        """Message constant 'GPS_CHECK_FAIL_MAX_HORZ_ERR'."""
        return Metaclass_EstimatorStatus.__constants['GPS_CHECK_FAIL_MAX_HORZ_ERR']

    @property
    def GPS_CHECK_FAIL_MAX_VERT_ERR(self):
        """Message constant 'GPS_CHECK_FAIL_MAX_VERT_ERR'."""
        return Metaclass_EstimatorStatus.__constants['GPS_CHECK_FAIL_MAX_VERT_ERR']

    @property
    def GPS_CHECK_FAIL_MAX_SPD_ERR(self):
        """Message constant 'GPS_CHECK_FAIL_MAX_SPD_ERR'."""
        return Metaclass_EstimatorStatus.__constants['GPS_CHECK_FAIL_MAX_SPD_ERR']

    @property
    def GPS_CHECK_FAIL_MAX_HORZ_DRIFT(self):
        """Message constant 'GPS_CHECK_FAIL_MAX_HORZ_DRIFT'."""
        return Metaclass_EstimatorStatus.__constants['GPS_CHECK_FAIL_MAX_HORZ_DRIFT']

    @property
    def GPS_CHECK_FAIL_MAX_VERT_DRIFT(self):
        """Message constant 'GPS_CHECK_FAIL_MAX_VERT_DRIFT'."""
        return Metaclass_EstimatorStatus.__constants['GPS_CHECK_FAIL_MAX_VERT_DRIFT']

    @property
    def GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR(self):
        """Message constant 'GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR'."""
        return Metaclass_EstimatorStatus.__constants['GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR']

    @property
    def GPS_CHECK_FAIL_MAX_VERT_SPD_ERR(self):
        """Message constant 'GPS_CHECK_FAIL_MAX_VERT_SPD_ERR'."""
        return Metaclass_EstimatorStatus.__constants['GPS_CHECK_FAIL_MAX_VERT_SPD_ERR']

    @property
    def CS_TILT_ALIGN(self):
        """Message constant 'CS_TILT_ALIGN'."""
        return Metaclass_EstimatorStatus.__constants['CS_TILT_ALIGN']

    @property
    def CS_YAW_ALIGN(self):
        """Message constant 'CS_YAW_ALIGN'."""
        return Metaclass_EstimatorStatus.__constants['CS_YAW_ALIGN']

    @property
    def CS_GPS(self):
        """Message constant 'CS_GPS'."""
        return Metaclass_EstimatorStatus.__constants['CS_GPS']

    @property
    def CS_OPT_FLOW(self):
        """Message constant 'CS_OPT_FLOW'."""
        return Metaclass_EstimatorStatus.__constants['CS_OPT_FLOW']

    @property
    def CS_MAG_HDG(self):
        """Message constant 'CS_MAG_HDG'."""
        return Metaclass_EstimatorStatus.__constants['CS_MAG_HDG']

    @property
    def CS_MAG_3D(self):
        """Message constant 'CS_MAG_3D'."""
        return Metaclass_EstimatorStatus.__constants['CS_MAG_3D']

    @property
    def CS_MAG_DEC(self):
        """Message constant 'CS_MAG_DEC'."""
        return Metaclass_EstimatorStatus.__constants['CS_MAG_DEC']

    @property
    def CS_IN_AIR(self):
        """Message constant 'CS_IN_AIR'."""
        return Metaclass_EstimatorStatus.__constants['CS_IN_AIR']

    @property
    def CS_WIND(self):
        """Message constant 'CS_WIND'."""
        return Metaclass_EstimatorStatus.__constants['CS_WIND']

    @property
    def CS_BARO_HGT(self):
        """Message constant 'CS_BARO_HGT'."""
        return Metaclass_EstimatorStatus.__constants['CS_BARO_HGT']

    @property
    def CS_RNG_HGT(self):
        """Message constant 'CS_RNG_HGT'."""
        return Metaclass_EstimatorStatus.__constants['CS_RNG_HGT']

    @property
    def CS_GPS_HGT(self):
        """Message constant 'CS_GPS_HGT'."""
        return Metaclass_EstimatorStatus.__constants['CS_GPS_HGT']

    @property
    def CS_EV_POS(self):
        """Message constant 'CS_EV_POS'."""
        return Metaclass_EstimatorStatus.__constants['CS_EV_POS']

    @property
    def CS_EV_YAW(self):
        """Message constant 'CS_EV_YAW'."""
        return Metaclass_EstimatorStatus.__constants['CS_EV_YAW']

    @property
    def CS_EV_HGT(self):
        """Message constant 'CS_EV_HGT'."""
        return Metaclass_EstimatorStatus.__constants['CS_EV_HGT']

    @property
    def CS_BETA(self):
        """Message constant 'CS_BETA'."""
        return Metaclass_EstimatorStatus.__constants['CS_BETA']

    @property
    def CS_MAG_FIELD(self):
        """Message constant 'CS_MAG_FIELD'."""
        return Metaclass_EstimatorStatus.__constants['CS_MAG_FIELD']

    @property
    def CS_FIXED_WING(self):
        """Message constant 'CS_FIXED_WING'."""
        return Metaclass_EstimatorStatus.__constants['CS_FIXED_WING']

    @property
    def CS_MAG_FAULT(self):
        """Message constant 'CS_MAG_FAULT'."""
        return Metaclass_EstimatorStatus.__constants['CS_MAG_FAULT']

    @property
    def CS_ASPD(self):
        """Message constant 'CS_ASPD'."""
        return Metaclass_EstimatorStatus.__constants['CS_ASPD']

    @property
    def CS_GND_EFFECT(self):
        """Message constant 'CS_GND_EFFECT'."""
        return Metaclass_EstimatorStatus.__constants['CS_GND_EFFECT']

    @property
    def CS_RNG_STUCK(self):
        """Message constant 'CS_RNG_STUCK'."""
        return Metaclass_EstimatorStatus.__constants['CS_RNG_STUCK']

    @property
    def CS_GPS_YAW(self):
        """Message constant 'CS_GPS_YAW'."""
        return Metaclass_EstimatorStatus.__constants['CS_GPS_YAW']

    @property
    def CS_MAG_ALIGNED(self):
        """Message constant 'CS_MAG_ALIGNED'."""
        return Metaclass_EstimatorStatus.__constants['CS_MAG_ALIGNED']

    @property
    def CS_EV_VEL(self):
        """Message constant 'CS_EV_VEL'."""
        return Metaclass_EstimatorStatus.__constants['CS_EV_VEL']

    @property
    def CS_SYNTHETIC_MAG_Z(self):
        """Message constant 'CS_SYNTHETIC_MAG_Z'."""
        return Metaclass_EstimatorStatus.__constants['CS_SYNTHETIC_MAG_Z']

    @property
    def CS_VEHICLE_AT_REST(self):
        """Message constant 'CS_VEHICLE_AT_REST'."""
        return Metaclass_EstimatorStatus.__constants['CS_VEHICLE_AT_REST']

    @property
    def CS_GPS_YAW_FAULT(self):
        """Message constant 'CS_GPS_YAW_FAULT'."""
        return Metaclass_EstimatorStatus.__constants['CS_GPS_YAW_FAULT']

    @property
    def CS_RNG_FAULT(self):
        """Message constant 'CS_RNG_FAULT'."""
        return Metaclass_EstimatorStatus.__constants['CS_RNG_FAULT']


class EstimatorStatus(metaclass=Metaclass_EstimatorStatus):
    """
    Message class 'EstimatorStatus'.

    Constants:
      GPS_CHECK_FAIL_GPS_FIX
      GPS_CHECK_FAIL_MIN_SAT_COUNT
      GPS_CHECK_FAIL_MAX_PDOP
      GPS_CHECK_FAIL_MAX_HORZ_ERR
      GPS_CHECK_FAIL_MAX_VERT_ERR
      GPS_CHECK_FAIL_MAX_SPD_ERR
      GPS_CHECK_FAIL_MAX_HORZ_DRIFT
      GPS_CHECK_FAIL_MAX_VERT_DRIFT
      GPS_CHECK_FAIL_MAX_HORZ_SPD_ERR
      GPS_CHECK_FAIL_MAX_VERT_SPD_ERR
      CS_TILT_ALIGN
      CS_YAW_ALIGN
      CS_GPS
      CS_OPT_FLOW
      CS_MAG_HDG
      CS_MAG_3D
      CS_MAG_DEC
      CS_IN_AIR
      CS_WIND
      CS_BARO_HGT
      CS_RNG_HGT
      CS_GPS_HGT
      CS_EV_POS
      CS_EV_YAW
      CS_EV_HGT
      CS_BETA
      CS_MAG_FIELD
      CS_FIXED_WING
      CS_MAG_FAULT
      CS_ASPD
      CS_GND_EFFECT
      CS_RNG_STUCK
      CS_GPS_YAW
      CS_MAG_ALIGNED
      CS_EV_VEL
      CS_SYNTHETIC_MAG_Z
      CS_VEHICLE_AT_REST
      CS_GPS_YAW_FAULT
      CS_RNG_FAULT
    """

    __slots__ = [
        '_timestamp',
        '_timestamp_sample',
        '_output_tracking_error',
        '_gps_check_fail_flags',
        '_control_mode_flags',
        '_filter_fault_flags',
        '_pos_horiz_accuracy',
        '_pos_vert_accuracy',
        '_innovation_check_flags',
        '_mag_test_ratio',
        '_vel_test_ratio',
        '_pos_test_ratio',
        '_hgt_test_ratio',
        '_tas_test_ratio',
        '_hagl_test_ratio',
        '_beta_test_ratio',
        '_solution_status_flags',
        '_reset_count_vel_ne',
        '_reset_count_vel_d',
        '_reset_count_pos_ne',
        '_reset_count_pod_d',
        '_reset_count_quat',
        '_time_slip',
        '_pre_flt_fail_innov_heading',
        '_pre_flt_fail_innov_vel_horiz',
        '_pre_flt_fail_innov_vel_vert',
        '_pre_flt_fail_innov_height',
        '_pre_flt_fail_mag_field_disturbed',
        '_accel_device_id',
        '_gyro_device_id',
        '_baro_device_id',
        '_mag_device_id',
        '_health_flags',
        '_timeout_flags',
        '_mag_inclination_deg',
        '_mag_inclination_ref_deg',
        '_mag_strength_gs',
        '_mag_strength_ref_gs',
    ]

    _fields_and_field_types = {
        'timestamp': 'uint64',
        'timestamp_sample': 'uint64',
        'output_tracking_error': 'float[3]',
        'gps_check_fail_flags': 'uint16',
        'control_mode_flags': 'uint64',
        'filter_fault_flags': 'uint32',
        'pos_horiz_accuracy': 'float',
        'pos_vert_accuracy': 'float',
        'innovation_check_flags': 'uint16',
        'mag_test_ratio': 'float',
        'vel_test_ratio': 'float',
        'pos_test_ratio': 'float',
        'hgt_test_ratio': 'float',
        'tas_test_ratio': 'float',
        'hagl_test_ratio': 'float',
        'beta_test_ratio': 'float',
        'solution_status_flags': 'uint16',
        'reset_count_vel_ne': 'uint8',
        'reset_count_vel_d': 'uint8',
        'reset_count_pos_ne': 'uint8',
        'reset_count_pod_d': 'uint8',
        'reset_count_quat': 'uint8',
        'time_slip': 'float',
        'pre_flt_fail_innov_heading': 'boolean',
        'pre_flt_fail_innov_vel_horiz': 'boolean',
        'pre_flt_fail_innov_vel_vert': 'boolean',
        'pre_flt_fail_innov_height': 'boolean',
        'pre_flt_fail_mag_field_disturbed': 'boolean',
        'accel_device_id': 'uint32',
        'gyro_device_id': 'uint32',
        'baro_device_id': 'uint32',
        'mag_device_id': 'uint32',
        'health_flags': 'uint8',
        'timeout_flags': 'uint8',
        'mag_inclination_deg': 'float',
        'mag_inclination_ref_deg': 'float',
        'mag_strength_gs': 'float',
        'mag_strength_ref_gs': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.Array(rosidl_parser.definition.BasicType('float'), 3),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint64'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.timestamp = kwargs.get('timestamp', int())
        self.timestamp_sample = kwargs.get('timestamp_sample', int())
        if 'output_tracking_error' not in kwargs:
            self.output_tracking_error = numpy.zeros(3, dtype=numpy.float32)
        else:
            self.output_tracking_error = numpy.array(kwargs.get('output_tracking_error'), dtype=numpy.float32)
            assert self.output_tracking_error.shape == (3, )
        self.gps_check_fail_flags = kwargs.get('gps_check_fail_flags', int())
        self.control_mode_flags = kwargs.get('control_mode_flags', int())
        self.filter_fault_flags = kwargs.get('filter_fault_flags', int())
        self.pos_horiz_accuracy = kwargs.get('pos_horiz_accuracy', float())
        self.pos_vert_accuracy = kwargs.get('pos_vert_accuracy', float())
        self.innovation_check_flags = kwargs.get('innovation_check_flags', int())
        self.mag_test_ratio = kwargs.get('mag_test_ratio', float())
        self.vel_test_ratio = kwargs.get('vel_test_ratio', float())
        self.pos_test_ratio = kwargs.get('pos_test_ratio', float())
        self.hgt_test_ratio = kwargs.get('hgt_test_ratio', float())
        self.tas_test_ratio = kwargs.get('tas_test_ratio', float())
        self.hagl_test_ratio = kwargs.get('hagl_test_ratio', float())
        self.beta_test_ratio = kwargs.get('beta_test_ratio', float())
        self.solution_status_flags = kwargs.get('solution_status_flags', int())
        self.reset_count_vel_ne = kwargs.get('reset_count_vel_ne', int())
        self.reset_count_vel_d = kwargs.get('reset_count_vel_d', int())
        self.reset_count_pos_ne = kwargs.get('reset_count_pos_ne', int())
        self.reset_count_pod_d = kwargs.get('reset_count_pod_d', int())
        self.reset_count_quat = kwargs.get('reset_count_quat', int())
        self.time_slip = kwargs.get('time_slip', float())
        self.pre_flt_fail_innov_heading = kwargs.get('pre_flt_fail_innov_heading', bool())
        self.pre_flt_fail_innov_vel_horiz = kwargs.get('pre_flt_fail_innov_vel_horiz', bool())
        self.pre_flt_fail_innov_vel_vert = kwargs.get('pre_flt_fail_innov_vel_vert', bool())
        self.pre_flt_fail_innov_height = kwargs.get('pre_flt_fail_innov_height', bool())
        self.pre_flt_fail_mag_field_disturbed = kwargs.get('pre_flt_fail_mag_field_disturbed', bool())
        self.accel_device_id = kwargs.get('accel_device_id', int())
        self.gyro_device_id = kwargs.get('gyro_device_id', int())
        self.baro_device_id = kwargs.get('baro_device_id', int())
        self.mag_device_id = kwargs.get('mag_device_id', int())
        self.health_flags = kwargs.get('health_flags', int())
        self.timeout_flags = kwargs.get('timeout_flags', int())
        self.mag_inclination_deg = kwargs.get('mag_inclination_deg', float())
        self.mag_inclination_ref_deg = kwargs.get('mag_inclination_ref_deg', float())
        self.mag_strength_gs = kwargs.get('mag_strength_gs', float())
        self.mag_strength_ref_gs = kwargs.get('mag_strength_ref_gs', float())

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
        if self.timestamp_sample != other.timestamp_sample:
            return False
        if all(self.output_tracking_error != other.output_tracking_error):
            return False
        if self.gps_check_fail_flags != other.gps_check_fail_flags:
            return False
        if self.control_mode_flags != other.control_mode_flags:
            return False
        if self.filter_fault_flags != other.filter_fault_flags:
            return False
        if self.pos_horiz_accuracy != other.pos_horiz_accuracy:
            return False
        if self.pos_vert_accuracy != other.pos_vert_accuracy:
            return False
        if self.innovation_check_flags != other.innovation_check_flags:
            return False
        if self.mag_test_ratio != other.mag_test_ratio:
            return False
        if self.vel_test_ratio != other.vel_test_ratio:
            return False
        if self.pos_test_ratio != other.pos_test_ratio:
            return False
        if self.hgt_test_ratio != other.hgt_test_ratio:
            return False
        if self.tas_test_ratio != other.tas_test_ratio:
            return False
        if self.hagl_test_ratio != other.hagl_test_ratio:
            return False
        if self.beta_test_ratio != other.beta_test_ratio:
            return False
        if self.solution_status_flags != other.solution_status_flags:
            return False
        if self.reset_count_vel_ne != other.reset_count_vel_ne:
            return False
        if self.reset_count_vel_d != other.reset_count_vel_d:
            return False
        if self.reset_count_pos_ne != other.reset_count_pos_ne:
            return False
        if self.reset_count_pod_d != other.reset_count_pod_d:
            return False
        if self.reset_count_quat != other.reset_count_quat:
            return False
        if self.time_slip != other.time_slip:
            return False
        if self.pre_flt_fail_innov_heading != other.pre_flt_fail_innov_heading:
            return False
        if self.pre_flt_fail_innov_vel_horiz != other.pre_flt_fail_innov_vel_horiz:
            return False
        if self.pre_flt_fail_innov_vel_vert != other.pre_flt_fail_innov_vel_vert:
            return False
        if self.pre_flt_fail_innov_height != other.pre_flt_fail_innov_height:
            return False
        if self.pre_flt_fail_mag_field_disturbed != other.pre_flt_fail_mag_field_disturbed:
            return False
        if self.accel_device_id != other.accel_device_id:
            return False
        if self.gyro_device_id != other.gyro_device_id:
            return False
        if self.baro_device_id != other.baro_device_id:
            return False
        if self.mag_device_id != other.mag_device_id:
            return False
        if self.health_flags != other.health_flags:
            return False
        if self.timeout_flags != other.timeout_flags:
            return False
        if self.mag_inclination_deg != other.mag_inclination_deg:
            return False
        if self.mag_inclination_ref_deg != other.mag_inclination_ref_deg:
            return False
        if self.mag_strength_gs != other.mag_strength_gs:
            return False
        if self.mag_strength_ref_gs != other.mag_strength_ref_gs:
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
    def timestamp_sample(self):
        """Message field 'timestamp_sample'."""
        return self._timestamp_sample

    @timestamp_sample.setter
    def timestamp_sample(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timestamp_sample' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'timestamp_sample' field must be an unsigned integer in [0, 18446744073709551615]"
        self._timestamp_sample = value

    @builtins.property
    def output_tracking_error(self):
        """Message field 'output_tracking_error'."""
        return self._output_tracking_error

    @output_tracking_error.setter
    def output_tracking_error(self, value):
        if isinstance(value, numpy.ndarray):
            assert value.dtype == numpy.float32, \
                "The 'output_tracking_error' numpy.ndarray() must have the dtype of 'numpy.float32'"
            assert value.size == 3, \
                "The 'output_tracking_error' numpy.ndarray() must have a size of 3"
            self._output_tracking_error = value
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
                 len(value) == 3 and
                 all(isinstance(v, float) for v in value) and
                 all(not (val < -3.402823466e+38 or val > 3.402823466e+38) or math.isinf(val) for val in value)), \
                "The 'output_tracking_error' field must be a set or sequence with length 3 and each value of type 'float' and each float in [-340282346600000016151267322115014000640.000000, 340282346600000016151267322115014000640.000000]"
        self._output_tracking_error = numpy.array(value, dtype=numpy.float32)

    @builtins.property
    def gps_check_fail_flags(self):
        """Message field 'gps_check_fail_flags'."""
        return self._gps_check_fail_flags

    @gps_check_fail_flags.setter
    def gps_check_fail_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_check_fail_flags' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'gps_check_fail_flags' field must be an unsigned integer in [0, 65535]"
        self._gps_check_fail_flags = value

    @builtins.property
    def control_mode_flags(self):
        """Message field 'control_mode_flags'."""
        return self._control_mode_flags

    @control_mode_flags.setter
    def control_mode_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_mode_flags' field must be of type 'int'"
            assert value >= 0 and value < 18446744073709551616, \
                "The 'control_mode_flags' field must be an unsigned integer in [0, 18446744073709551615]"
        self._control_mode_flags = value

    @builtins.property
    def filter_fault_flags(self):
        """Message field 'filter_fault_flags'."""
        return self._filter_fault_flags

    @filter_fault_flags.setter
    def filter_fault_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'filter_fault_flags' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'filter_fault_flags' field must be an unsigned integer in [0, 4294967295]"
        self._filter_fault_flags = value

    @builtins.property
    def pos_horiz_accuracy(self):
        """Message field 'pos_horiz_accuracy'."""
        return self._pos_horiz_accuracy

    @pos_horiz_accuracy.setter
    def pos_horiz_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_horiz_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos_horiz_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos_horiz_accuracy = value

    @builtins.property
    def pos_vert_accuracy(self):
        """Message field 'pos_vert_accuracy'."""
        return self._pos_vert_accuracy

    @pos_vert_accuracy.setter
    def pos_vert_accuracy(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_vert_accuracy' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos_vert_accuracy' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos_vert_accuracy = value

    @builtins.property
    def innovation_check_flags(self):
        """Message field 'innovation_check_flags'."""
        return self._innovation_check_flags

    @innovation_check_flags.setter
    def innovation_check_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'innovation_check_flags' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'innovation_check_flags' field must be an unsigned integer in [0, 65535]"
        self._innovation_check_flags = value

    @builtins.property
    def mag_test_ratio(self):
        """Message field 'mag_test_ratio'."""
        return self._mag_test_ratio

    @mag_test_ratio.setter
    def mag_test_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mag_test_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mag_test_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mag_test_ratio = value

    @builtins.property
    def vel_test_ratio(self):
        """Message field 'vel_test_ratio'."""
        return self._vel_test_ratio

    @vel_test_ratio.setter
    def vel_test_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'vel_test_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'vel_test_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._vel_test_ratio = value

    @builtins.property
    def pos_test_ratio(self):
        """Message field 'pos_test_ratio'."""
        return self._pos_test_ratio

    @pos_test_ratio.setter
    def pos_test_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pos_test_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pos_test_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pos_test_ratio = value

    @builtins.property
    def hgt_test_ratio(self):
        """Message field 'hgt_test_ratio'."""
        return self._hgt_test_ratio

    @hgt_test_ratio.setter
    def hgt_test_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hgt_test_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hgt_test_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hgt_test_ratio = value

    @builtins.property
    def tas_test_ratio(self):
        """Message field 'tas_test_ratio'."""
        return self._tas_test_ratio

    @tas_test_ratio.setter
    def tas_test_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'tas_test_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'tas_test_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._tas_test_ratio = value

    @builtins.property
    def hagl_test_ratio(self):
        """Message field 'hagl_test_ratio'."""
        return self._hagl_test_ratio

    @hagl_test_ratio.setter
    def hagl_test_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hagl_test_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hagl_test_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hagl_test_ratio = value

    @builtins.property
    def beta_test_ratio(self):
        """Message field 'beta_test_ratio'."""
        return self._beta_test_ratio

    @beta_test_ratio.setter
    def beta_test_ratio(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'beta_test_ratio' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'beta_test_ratio' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._beta_test_ratio = value

    @builtins.property
    def solution_status_flags(self):
        """Message field 'solution_status_flags'."""
        return self._solution_status_flags

    @solution_status_flags.setter
    def solution_status_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'solution_status_flags' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'solution_status_flags' field must be an unsigned integer in [0, 65535]"
        self._solution_status_flags = value

    @builtins.property
    def reset_count_vel_ne(self):
        """Message field 'reset_count_vel_ne'."""
        return self._reset_count_vel_ne

    @reset_count_vel_ne.setter
    def reset_count_vel_ne(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reset_count_vel_ne' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reset_count_vel_ne' field must be an unsigned integer in [0, 255]"
        self._reset_count_vel_ne = value

    @builtins.property
    def reset_count_vel_d(self):
        """Message field 'reset_count_vel_d'."""
        return self._reset_count_vel_d

    @reset_count_vel_d.setter
    def reset_count_vel_d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reset_count_vel_d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reset_count_vel_d' field must be an unsigned integer in [0, 255]"
        self._reset_count_vel_d = value

    @builtins.property
    def reset_count_pos_ne(self):
        """Message field 'reset_count_pos_ne'."""
        return self._reset_count_pos_ne

    @reset_count_pos_ne.setter
    def reset_count_pos_ne(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reset_count_pos_ne' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reset_count_pos_ne' field must be an unsigned integer in [0, 255]"
        self._reset_count_pos_ne = value

    @builtins.property
    def reset_count_pod_d(self):
        """Message field 'reset_count_pod_d'."""
        return self._reset_count_pod_d

    @reset_count_pod_d.setter
    def reset_count_pod_d(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reset_count_pod_d' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reset_count_pod_d' field must be an unsigned integer in [0, 255]"
        self._reset_count_pod_d = value

    @builtins.property
    def reset_count_quat(self):
        """Message field 'reset_count_quat'."""
        return self._reset_count_quat

    @reset_count_quat.setter
    def reset_count_quat(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'reset_count_quat' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'reset_count_quat' field must be an unsigned integer in [0, 255]"
        self._reset_count_quat = value

    @builtins.property
    def time_slip(self):
        """Message field 'time_slip'."""
        return self._time_slip

    @time_slip.setter
    def time_slip(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'time_slip' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'time_slip' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._time_slip = value

    @builtins.property
    def pre_flt_fail_innov_heading(self):
        """Message field 'pre_flt_fail_innov_heading'."""
        return self._pre_flt_fail_innov_heading

    @pre_flt_fail_innov_heading.setter
    def pre_flt_fail_innov_heading(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pre_flt_fail_innov_heading' field must be of type 'bool'"
        self._pre_flt_fail_innov_heading = value

    @builtins.property
    def pre_flt_fail_innov_vel_horiz(self):
        """Message field 'pre_flt_fail_innov_vel_horiz'."""
        return self._pre_flt_fail_innov_vel_horiz

    @pre_flt_fail_innov_vel_horiz.setter
    def pre_flt_fail_innov_vel_horiz(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pre_flt_fail_innov_vel_horiz' field must be of type 'bool'"
        self._pre_flt_fail_innov_vel_horiz = value

    @builtins.property
    def pre_flt_fail_innov_vel_vert(self):
        """Message field 'pre_flt_fail_innov_vel_vert'."""
        return self._pre_flt_fail_innov_vel_vert

    @pre_flt_fail_innov_vel_vert.setter
    def pre_flt_fail_innov_vel_vert(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pre_flt_fail_innov_vel_vert' field must be of type 'bool'"
        self._pre_flt_fail_innov_vel_vert = value

    @builtins.property
    def pre_flt_fail_innov_height(self):
        """Message field 'pre_flt_fail_innov_height'."""
        return self._pre_flt_fail_innov_height

    @pre_flt_fail_innov_height.setter
    def pre_flt_fail_innov_height(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pre_flt_fail_innov_height' field must be of type 'bool'"
        self._pre_flt_fail_innov_height = value

    @builtins.property
    def pre_flt_fail_mag_field_disturbed(self):
        """Message field 'pre_flt_fail_mag_field_disturbed'."""
        return self._pre_flt_fail_mag_field_disturbed

    @pre_flt_fail_mag_field_disturbed.setter
    def pre_flt_fail_mag_field_disturbed(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'pre_flt_fail_mag_field_disturbed' field must be of type 'bool'"
        self._pre_flt_fail_mag_field_disturbed = value

    @builtins.property
    def accel_device_id(self):
        """Message field 'accel_device_id'."""
        return self._accel_device_id

    @accel_device_id.setter
    def accel_device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'accel_device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'accel_device_id' field must be an unsigned integer in [0, 4294967295]"
        self._accel_device_id = value

    @builtins.property
    def gyro_device_id(self):
        """Message field 'gyro_device_id'."""
        return self._gyro_device_id

    @gyro_device_id.setter
    def gyro_device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gyro_device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gyro_device_id' field must be an unsigned integer in [0, 4294967295]"
        self._gyro_device_id = value

    @builtins.property
    def baro_device_id(self):
        """Message field 'baro_device_id'."""
        return self._baro_device_id

    @baro_device_id.setter
    def baro_device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'baro_device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'baro_device_id' field must be an unsigned integer in [0, 4294967295]"
        self._baro_device_id = value

    @builtins.property
    def mag_device_id(self):
        """Message field 'mag_device_id'."""
        return self._mag_device_id

    @mag_device_id.setter
    def mag_device_id(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'mag_device_id' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'mag_device_id' field must be an unsigned integer in [0, 4294967295]"
        self._mag_device_id = value

    @builtins.property
    def health_flags(self):
        """Message field 'health_flags'."""
        return self._health_flags

    @health_flags.setter
    def health_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'health_flags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'health_flags' field must be an unsigned integer in [0, 255]"
        self._health_flags = value

    @builtins.property
    def timeout_flags(self):
        """Message field 'timeout_flags'."""
        return self._timeout_flags

    @timeout_flags.setter
    def timeout_flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'timeout_flags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'timeout_flags' field must be an unsigned integer in [0, 255]"
        self._timeout_flags = value

    @builtins.property
    def mag_inclination_deg(self):
        """Message field 'mag_inclination_deg'."""
        return self._mag_inclination_deg

    @mag_inclination_deg.setter
    def mag_inclination_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mag_inclination_deg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mag_inclination_deg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mag_inclination_deg = value

    @builtins.property
    def mag_inclination_ref_deg(self):
        """Message field 'mag_inclination_ref_deg'."""
        return self._mag_inclination_ref_deg

    @mag_inclination_ref_deg.setter
    def mag_inclination_ref_deg(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mag_inclination_ref_deg' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mag_inclination_ref_deg' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mag_inclination_ref_deg = value

    @builtins.property
    def mag_strength_gs(self):
        """Message field 'mag_strength_gs'."""
        return self._mag_strength_gs

    @mag_strength_gs.setter
    def mag_strength_gs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mag_strength_gs' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mag_strength_gs' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mag_strength_gs = value

    @builtins.property
    def mag_strength_ref_gs(self):
        """Message field 'mag_strength_ref_gs'."""
        return self._mag_strength_ref_gs

    @mag_strength_ref_gs.setter
    def mag_strength_ref_gs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'mag_strength_ref_gs' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'mag_strength_ref_gs' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._mag_strength_ref_gs = value
