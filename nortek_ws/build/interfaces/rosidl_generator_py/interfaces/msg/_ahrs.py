# generated from rosidl_generator_py/resource/_idl.py.em
# with input from interfaces:msg/AHRS.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_AHRS(type):
    """Metaclass of message 'AHRS'."""

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
                'interfaces.msg.AHRS')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__ahrs
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__ahrs
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__ahrs
            cls._TYPE_SUPPORT = module.type_support_msg__msg__ahrs
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__ahrs

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


class AHRS(metaclass=Metaclass_AHRS):
    """Message class 'AHRS'."""

    __slots__ = [
        '_system_timestamp',
        '_posix_time',
        '_timestamp',
        '_microseconds',
        '_serial_number',
        '_operation_mode',
        '_fom_ahrs',
        '_fom_fc1',
        '_roll',
        '_pitch',
        '_heading',
        '_quaternion_w',
        '_quaternion_x',
        '_quaternion_y',
        '_quaternion_z',
        '_rotation_matrix_0',
        '_rotation_matrix_1',
        '_rotation_matrix_2',
        '_rotation_matrix_3',
        '_rotation_matrix_4',
        '_rotation_matrix_5',
        '_rotation_matrix_6',
        '_rotation_matrix_7',
        '_rotation_matrix_8',
        '_declination',
        '_depth',
    ]

    _fields_and_field_types = {
        'system_timestamp': 'builtin_interfaces/Time',
        'posix_time': 'boolean',
        'timestamp': 'uint32',
        'microseconds': 'uint32',
        'serial_number': 'uint32',
        'operation_mode': 'uint8',
        'fom_ahrs': 'float',
        'fom_fc1': 'float',
        'roll': 'float',
        'pitch': 'float',
        'heading': 'float',
        'quaternion_w': 'float',
        'quaternion_x': 'float',
        'quaternion_y': 'float',
        'quaternion_z': 'float',
        'rotation_matrix_0': 'float',
        'rotation_matrix_1': 'float',
        'rotation_matrix_2': 'float',
        'rotation_matrix_3': 'float',
        'rotation_matrix_4': 'float',
        'rotation_matrix_5': 'float',
        'rotation_matrix_6': 'float',
        'rotation_matrix_7': 'float',
        'rotation_matrix_8': 'float',
        'declination': 'float',
        'depth': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
        rosidl_parser.definition.BasicType('boolean'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
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
        self.serial_number = kwargs.get('serial_number', int())
        self.operation_mode = kwargs.get('operation_mode', int())
        self.fom_ahrs = kwargs.get('fom_ahrs', float())
        self.fom_fc1 = kwargs.get('fom_fc1', float())
        self.roll = kwargs.get('roll', float())
        self.pitch = kwargs.get('pitch', float())
        self.heading = kwargs.get('heading', float())
        self.quaternion_w = kwargs.get('quaternion_w', float())
        self.quaternion_x = kwargs.get('quaternion_x', float())
        self.quaternion_y = kwargs.get('quaternion_y', float())
        self.quaternion_z = kwargs.get('quaternion_z', float())
        self.rotation_matrix_0 = kwargs.get('rotation_matrix_0', float())
        self.rotation_matrix_1 = kwargs.get('rotation_matrix_1', float())
        self.rotation_matrix_2 = kwargs.get('rotation_matrix_2', float())
        self.rotation_matrix_3 = kwargs.get('rotation_matrix_3', float())
        self.rotation_matrix_4 = kwargs.get('rotation_matrix_4', float())
        self.rotation_matrix_5 = kwargs.get('rotation_matrix_5', float())
        self.rotation_matrix_6 = kwargs.get('rotation_matrix_6', float())
        self.rotation_matrix_7 = kwargs.get('rotation_matrix_7', float())
        self.rotation_matrix_8 = kwargs.get('rotation_matrix_8', float())
        self.declination = kwargs.get('declination', float())
        self.depth = kwargs.get('depth', float())

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
        if self.serial_number != other.serial_number:
            return False
        if self.operation_mode != other.operation_mode:
            return False
        if self.fom_ahrs != other.fom_ahrs:
            return False
        if self.fom_fc1 != other.fom_fc1:
            return False
        if self.roll != other.roll:
            return False
        if self.pitch != other.pitch:
            return False
        if self.heading != other.heading:
            return False
        if self.quaternion_w != other.quaternion_w:
            return False
        if self.quaternion_x != other.quaternion_x:
            return False
        if self.quaternion_y != other.quaternion_y:
            return False
        if self.quaternion_z != other.quaternion_z:
            return False
        if self.rotation_matrix_0 != other.rotation_matrix_0:
            return False
        if self.rotation_matrix_1 != other.rotation_matrix_1:
            return False
        if self.rotation_matrix_2 != other.rotation_matrix_2:
            return False
        if self.rotation_matrix_3 != other.rotation_matrix_3:
            return False
        if self.rotation_matrix_4 != other.rotation_matrix_4:
            return False
        if self.rotation_matrix_5 != other.rotation_matrix_5:
            return False
        if self.rotation_matrix_6 != other.rotation_matrix_6:
            return False
        if self.rotation_matrix_7 != other.rotation_matrix_7:
            return False
        if self.rotation_matrix_8 != other.rotation_matrix_8:
            return False
        if self.declination != other.declination:
            return False
        if self.depth != other.depth:
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
    def serial_number(self):
        """Message field 'serial_number'."""
        return self._serial_number

    @serial_number.setter
    def serial_number(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'serial_number' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'serial_number' field must be an unsigned integer in [0, 4294967295]"
        self._serial_number = value

    @builtins.property
    def operation_mode(self):
        """Message field 'operation_mode'."""
        return self._operation_mode

    @operation_mode.setter
    def operation_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'operation_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'operation_mode' field must be an unsigned integer in [0, 255]"
        self._operation_mode = value

    @builtins.property
    def fom_ahrs(self):
        """Message field 'fom_ahrs'."""
        return self._fom_ahrs

    @fom_ahrs.setter
    def fom_ahrs(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fom_ahrs' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fom_ahrs' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fom_ahrs = value

    @builtins.property
    def fom_fc1(self):
        """Message field 'fom_fc1'."""
        return self._fom_fc1

    @fom_fc1.setter
    def fom_fc1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'fom_fc1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'fom_fc1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._fom_fc1 = value

    @builtins.property
    def roll(self):
        """Message field 'roll'."""
        return self._roll

    @roll.setter
    def roll(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'roll' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'roll' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._roll = value

    @builtins.property
    def pitch(self):
        """Message field 'pitch'."""
        return self._pitch

    @pitch.setter
    def pitch(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'pitch' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'pitch' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._pitch = value

    @builtins.property
    def heading(self):
        """Message field 'heading'."""
        return self._heading

    @heading.setter
    def heading(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'heading' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'heading' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._heading = value

    @builtins.property
    def quaternion_w(self):
        """Message field 'quaternion_w'."""
        return self._quaternion_w

    @quaternion_w.setter
    def quaternion_w(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'quaternion_w' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'quaternion_w' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._quaternion_w = value

    @builtins.property
    def quaternion_x(self):
        """Message field 'quaternion_x'."""
        return self._quaternion_x

    @quaternion_x.setter
    def quaternion_x(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'quaternion_x' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'quaternion_x' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._quaternion_x = value

    @builtins.property
    def quaternion_y(self):
        """Message field 'quaternion_y'."""
        return self._quaternion_y

    @quaternion_y.setter
    def quaternion_y(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'quaternion_y' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'quaternion_y' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._quaternion_y = value

    @builtins.property
    def quaternion_z(self):
        """Message field 'quaternion_z'."""
        return self._quaternion_z

    @quaternion_z.setter
    def quaternion_z(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'quaternion_z' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'quaternion_z' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._quaternion_z = value

    @builtins.property
    def rotation_matrix_0(self):
        """Message field 'rotation_matrix_0'."""
        return self._rotation_matrix_0

    @rotation_matrix_0.setter
    def rotation_matrix_0(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotation_matrix_0' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rotation_matrix_0' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rotation_matrix_0 = value

    @builtins.property
    def rotation_matrix_1(self):
        """Message field 'rotation_matrix_1'."""
        return self._rotation_matrix_1

    @rotation_matrix_1.setter
    def rotation_matrix_1(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotation_matrix_1' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rotation_matrix_1' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rotation_matrix_1 = value

    @builtins.property
    def rotation_matrix_2(self):
        """Message field 'rotation_matrix_2'."""
        return self._rotation_matrix_2

    @rotation_matrix_2.setter
    def rotation_matrix_2(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotation_matrix_2' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rotation_matrix_2' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rotation_matrix_2 = value

    @builtins.property
    def rotation_matrix_3(self):
        """Message field 'rotation_matrix_3'."""
        return self._rotation_matrix_3

    @rotation_matrix_3.setter
    def rotation_matrix_3(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotation_matrix_3' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rotation_matrix_3' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rotation_matrix_3 = value

    @builtins.property
    def rotation_matrix_4(self):
        """Message field 'rotation_matrix_4'."""
        return self._rotation_matrix_4

    @rotation_matrix_4.setter
    def rotation_matrix_4(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotation_matrix_4' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rotation_matrix_4' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rotation_matrix_4 = value

    @builtins.property
    def rotation_matrix_5(self):
        """Message field 'rotation_matrix_5'."""
        return self._rotation_matrix_5

    @rotation_matrix_5.setter
    def rotation_matrix_5(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotation_matrix_5' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rotation_matrix_5' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rotation_matrix_5 = value

    @builtins.property
    def rotation_matrix_6(self):
        """Message field 'rotation_matrix_6'."""
        return self._rotation_matrix_6

    @rotation_matrix_6.setter
    def rotation_matrix_6(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotation_matrix_6' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rotation_matrix_6' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rotation_matrix_6 = value

    @builtins.property
    def rotation_matrix_7(self):
        """Message field 'rotation_matrix_7'."""
        return self._rotation_matrix_7

    @rotation_matrix_7.setter
    def rotation_matrix_7(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotation_matrix_7' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rotation_matrix_7' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rotation_matrix_7 = value

    @builtins.property
    def rotation_matrix_8(self):
        """Message field 'rotation_matrix_8'."""
        return self._rotation_matrix_8

    @rotation_matrix_8.setter
    def rotation_matrix_8(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'rotation_matrix_8' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'rotation_matrix_8' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._rotation_matrix_8 = value

    @builtins.property
    def declination(self):
        """Message field 'declination'."""
        return self._declination

    @declination.setter
    def declination(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'declination' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'declination' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._declination = value

    @builtins.property
    def depth(self):
        """Message field 'depth'."""
        return self._depth

    @depth.setter
    def depth(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'depth' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'depth' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._depth = value
