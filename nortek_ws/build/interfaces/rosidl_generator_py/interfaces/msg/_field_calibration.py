# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/FieldCalibration.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_FieldCalibration(type):
    """Metaclass of message 'FieldCalibration'."""

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
            module = import_type_support('interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'interfaces.msg.FieldCalibration')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__field_calibration
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__field_calibration
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__field_calibration
            cls._TYPE_SUPPORT = module.type_support_msg__msg__field_calibration
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__field_calibration

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class FieldCalibration(metaclass=Metaclass_FieldCalibration):
    """Message class 'FieldCalibration'."""

    __slots__ = [
        '_system_timestamp',
        '_posix_time',
        '_timestamp',
        '_microseconds',
        '_points_used_in_estimation',
        '_hard_iron_x',
        '_hard_iron_y',
        '_hard_iron_z',
        '_s_axis_0',
        '_s_axis_1',
        '_s_axis_2',
        '_s_axis_3',
        '_s_axis_4',
        '_s_axis_5',
        '_s_axis_6',
        '_s_axis_7',
        '_s_axis_8',
        '_new_point_x',
        '_new_point_y',
        '_new_point_z',
        '_fom_field_calibration',
        '_coverage',
    ]

    _fields_and_field_types = {
        'system_timestamp': 'builtin_interfaces/Time',
        'posix_time': 'boolean',
        'timestamp': 'uint32',
        'microseconds': 'uint32',
        'points_used_in_estimation': 'boolean',
        'hard_iron_x': 'float',
        'hard_iron_y': 'float',
        'hard_iron_z': 'float',
        's_axis_0': 'float',
        's_axis_1': 'float',
        's_axis_2': 'float',
        's_axis_3': 'float',
        's_axis_4': 'float',
        's_axis_5': 'float',
        's_axis_6': 'float',
        's_axis_7': 'float',
        's_axis_8': 'float',
        'new_point_x': 'float',
        'new_point_y': 'float',
        'new_point_z': 'float',
        'fom_field_calibration': 'float',
        'coverage': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
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
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from builtin_interfaces.msg import Time
        self.system_timestamp = kwargs.get('system_timestamp', Time())
        self.posix_time = kwargs.get('posix_time', bool())
        self.timestamp = kwargs.get('timestamp', int())
        self.microseconds = kwargs.get('microseconds', int())
        self.points_used_in_estimation = kwargs.get('points_used_in_estimation', bool())
        self.hard_iron_x = kwargs.get('hard_iron_x', float())
        self.hard_iron_y = kwargs.get('hard_iron_y', float())
        self.hard_iron_z = kwargs.get('hard_iron_z', float())
        self.s_axis_0 = kwargs.get('s_axis_0', float())
        self.s_axis_1 = kwargs.get('s_axis_1', float())
        self.s_axis_2 = kwargs.get('s_axis_2', float())
        self.s_axis_3 = kwargs.get('s_axis_3', float())
        self.s_axis_4 = kwargs.get('s_axis_4', float())
        self.s_axis_5 = kwargs.get('s_axis_5', float())
        self.s_axis_6 = kwargs.get('s_axis_6', float())
        self.s_axis_7 = kwargs.get('s_axis_7', float())
        self.s_axis_8 = kwargs.get('s_axis_8', float())
        self.new_point_x = kwargs.get('new_point_x', float())
        self.new_point_y = kwargs.get('new_point_y', float())
        self.new_point_z = kwargs.get('new_point_z', float())
        self.fom_field_calibration = kwargs.get('fom_field_calibration', float())
        self.coverage = kwargs.get('coverage', float())

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
        if self.system_timestamp != other.system_timestamp:
            return False
        if self.posix_time != other.posix_time:
            return False
        if self.timestamp != other.timestamp:
            return False
        if self.microseconds != other.microseconds:
            return False
        if self.points_used_in_estimation != other.points_used_in_estimation:
            return False
        if self.hard_iron_x != other.hard_iron_x:
            return False
        if self.hard_iron_y != other.hard_iron_y:
            return False
        if self.hard_iron_z != other.hard_iron_z:
            return False
        if self.s_axis_0 != other.s_axis_0:
            return False
        if self.s_axis_1 != other.s_axis_1:
            return False
        if self.s_axis_2 != other.s_axis_2:
            return False
        if self.s_axis_3 != other.s_axis_3:
            return False
        if self.s_axis_4 != other.s_axis_4:
            return False
        if self.s_axis_5 != other.s_axis_5:
            return False
        if self.s_axis_6 != other.s_axis_6:
            return False
        if self.s_axis_7 != other.s_axis_7:
            return False
        if self.s_axis_8 != other.s_axis_8:
            return False
        if self.new_point_x != other.new_point_x:
            return False
        if self.new_point_y != other.new_point_y:
            return False
        if self.new_point_z != other.new_point_z:
            return False
        if self.fom_field_calibration != other.fom_field_calibration:
            return False
        if self.coverage != other.coverage:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def system_timestamp(self):
        """Message field 'system_timestamp'."""
        return self._system_timestamp

    @system_timestamp.setter
    def system_timestamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'system_timestamp' field must be a sub message of type 'Time'"
        self._system_timestamp = value

    @builtins.property
    def posix_time(self):
        """Message field 'posix_time'."""
        return self._posix_time

    @posix_time.setter
    def posix_time(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'posix_time' field must be of type 'bool'"
        self._posix_time = value

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
            assert value >= 0 and value < 4294967296, \
                "The 'timestamp' field must be an unsigned integer in [0, 4294967295]"
        self._timestamp = value

    @builtins.property
    def microseconds(self):
        """Message field 'microseconds'."""
        return self._microseconds

    @microseconds.setter
    def microseconds(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'microseconds' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'microseconds' field must be an unsigned integer in [0, 4294967295]"
        self._microseconds = value

    @builtins.property
    def points_used_in_estimation(self):
        """Message field 'points_used_in_estimation'."""
        return self._points_used_in_estimation

    @points_used_in_estimation.setter
    def points_used_in_estimation(self, value):
        if __debug__:
            assert \
                isinstance(value, bool), \
                "The 'points_used_in_estimation' field must be of type 'bool'"
        self._points_used_in_estimation = value

    @builtins.property
    def hard_iron_x(self):
        """Message field 'hard_iron_x'."""
        return self._hard_iron_x

    @hard_iron_x.setter
    def hard_iron_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hard_iron_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hard_iron_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hard_iron_x = value

    @builtins.property
    def hard_iron_y(self):
        """Message field 'hard_iron_y'."""
        return self._hard_iron_y

    @hard_iron_y.setter
    def hard_iron_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hard_iron_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hard_iron_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hard_iron_y = value

    @builtins.property
    def hard_iron_z(self):
        """Message field 'hard_iron_z'."""
        return self._hard_iron_z

    @hard_iron_z.setter
    def hard_iron_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'hard_iron_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'hard_iron_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._hard_iron_z = value

    @builtins.property
    def s_axis_0(self):
        """Message field 's_axis_0'."""
        return self._s_axis_0

    @s_axis_0.setter
    def s_axis_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_axis_0' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's_axis_0' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s_axis_0 = value

    @builtins.property
    def s_axis_1(self):
        """Message field 's_axis_1'."""
        return self._s_axis_1

    @s_axis_1.setter
    def s_axis_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_axis_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's_axis_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s_axis_1 = value

    @builtins.property
    def s_axis_2(self):
        """Message field 's_axis_2'."""
        return self._s_axis_2

    @s_axis_2.setter
    def s_axis_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_axis_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's_axis_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s_axis_2 = value

    @builtins.property
    def s_axis_3(self):
        """Message field 's_axis_3'."""
        return self._s_axis_3

    @s_axis_3.setter
    def s_axis_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_axis_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's_axis_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s_axis_3 = value

    @builtins.property
    def s_axis_4(self):
        """Message field 's_axis_4'."""
        return self._s_axis_4

    @s_axis_4.setter
    def s_axis_4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_axis_4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's_axis_4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s_axis_4 = value

    @builtins.property
    def s_axis_5(self):
        """Message field 's_axis_5'."""
        return self._s_axis_5

    @s_axis_5.setter
    def s_axis_5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_axis_5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's_axis_5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s_axis_5 = value

    @builtins.property
    def s_axis_6(self):
        """Message field 's_axis_6'."""
        return self._s_axis_6

    @s_axis_6.setter
    def s_axis_6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_axis_6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's_axis_6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s_axis_6 = value

    @builtins.property
    def s_axis_7(self):
        """Message field 's_axis_7'."""
        return self._s_axis_7

    @s_axis_7.setter
    def s_axis_7(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_axis_7' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's_axis_7' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s_axis_7 = value

    @builtins.property
    def s_axis_8(self):
        """Message field 's_axis_8'."""
        return self._s_axis_8

    @s_axis_8.setter
    def s_axis_8(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 's_axis_8' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 's_axis_8' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._s_axis_8 = value

    @builtins.property
    def new_point_x(self):
        """Message field 'new_point_x'."""
        return self._new_point_x

    @new_point_x.setter
    def new_point_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'new_point_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'new_point_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._new_point_x = value

    @builtins.property
    def new_point_y(self):
        """Message field 'new_point_y'."""
        return self._new_point_y

    @new_point_y.setter
    def new_point_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'new_point_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'new_point_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._new_point_y = value

    @builtins.property
    def new_point_z(self):
        """Message field 'new_point_z'."""
        return self._new_point_z

    @new_point_z.setter
    def new_point_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'new_point_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'new_point_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._new_point_z = value

    @builtins.property
    def fom_field_calibration(self):
        """Message field 'fom_field_calibration'."""
        return self._fom_field_calibration

    @fom_field_calibration.setter
    def fom_field_calibration(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fom_field_calibration' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fom_field_calibration' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fom_field_calibration = value

    @builtins.property
    def coverage(self):
        """Message field 'coverage'."""
        return self._coverage

    @coverage.setter
    def coverage(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'coverage' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'coverage' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._coverage = value
