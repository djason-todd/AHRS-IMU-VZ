# generated from rosidl_generator_py/resource/_idl.py.em
# with input from sbg_driver:msg/SbgGpsVel.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_SbgGpsVel(type):
    """Metaclass of message 'SbgGpsVel'."""

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
            module = import_type_support('sbg_driver')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'sbg_driver.msg.SbgGpsVel')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__sbg_gps_vel
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__sbg_gps_vel
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__sbg_gps_vel
            cls._TYPE_SUPPORT = module.type_support_msg__msg__sbg_gps_vel
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__sbg_gps_vel

            from geometry_msgs.msg import Vector3
            if Vector3.__class__._TYPE_SUPPORT is None:
                Vector3.__class__.__import_type_support__()

            from sbg_driver.msg import SbgGpsVelStatus
            if SbgGpsVelStatus.__class__._TYPE_SUPPORT is None:
                SbgGpsVelStatus.__class__.__import_type_support__()

            from std_msgs.msg import Header
            if Header.__class__._TYPE_SUPPORT is None:
                Header.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class SbgGpsVel(metaclass=Metaclass_SbgGpsVel):
    """Message class 'SbgGpsVel'."""

    __slots__ = [
        '_header',
        '_time_stamp',
        '_status',
        '_gps_tow',
        '_velocity',
        '_velocity_accuracy',
        '_course',
        '_course_acc',
    ]

    _fields_and_field_types = {
        'header': 'std_msgs/Header',
        'time_stamp': 'uint32',
        'status': 'sbg_driver/SbgGpsVelStatus',
        'gps_tow': 'uint32',
        'velocity': 'geometry_msgs/Vector3',
        'velocity_accuracy': 'geometry_msgs/Vector3',
        'course': 'float',
        'course_acc': 'float',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.NamespacedType(['std_msgs', 'msg'], 'Header'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['sbg_driver', 'msg'], 'SbgGpsVelStatus'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['geometry_msgs', 'msg'], 'Vector3'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        from std_msgs.msg import Header
        self.header = kwargs.get('header', Header())
        self.time_stamp = kwargs.get('time_stamp', int())
        from sbg_driver.msg import SbgGpsVelStatus
        self.status = kwargs.get('status', SbgGpsVelStatus())
        self.gps_tow = kwargs.get('gps_tow', int())
        from geometry_msgs.msg import Vector3
        self.velocity = kwargs.get('velocity', Vector3())
        from geometry_msgs.msg import Vector3
        self.velocity_accuracy = kwargs.get('velocity_accuracy', Vector3())
        self.course = kwargs.get('course', float())
        self.course_acc = kwargs.get('course_acc', float())

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
        if self.header != other.header:
            return False
        if self.time_stamp != other.time_stamp:
            return False
        if self.status != other.status:
            return False
        if self.gps_tow != other.gps_tow:
            return False
        if self.velocity != other.velocity:
            return False
        if self.velocity_accuracy != other.velocity_accuracy:
            return False
        if self.course != other.course:
            return False
        if self.course_acc != other.course_acc:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def header(self):
        """Message field 'header'."""
        return self._header

    @header.setter
    def header(self, value):
        if __debug__:
            from std_msgs.msg import Header
            assert \
                isinstance(value, Header), \
                "The 'header' field must be a sub message of type 'Header'"
        self._header = value

    @builtins.property
    def time_stamp(self):
        """Message field 'time_stamp'."""
        return self._time_stamp

    @time_stamp.setter
    def time_stamp(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'time_stamp' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'time_stamp' field must be an unsigned integer in [0, 4294967295]"
        self._time_stamp = value

    @builtins.property
    def status(self):
        """Message field 'status'."""
        return self._status

    @status.setter
    def status(self, value):
        if __debug__:
            from sbg_driver.msg import SbgGpsVelStatus
            assert \
                isinstance(value, SbgGpsVelStatus), \
                "The 'status' field must be a sub message of type 'SbgGpsVelStatus'"
        self._status = value

    @builtins.property
    def gps_tow(self):
        """Message field 'gps_tow'."""
        return self._gps_tow

    @gps_tow.setter
    def gps_tow(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'gps_tow' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'gps_tow' field must be an unsigned integer in [0, 4294967295]"
        self._gps_tow = value

    @builtins.property
    def velocity(self):
        """Message field 'velocity'."""
        return self._velocity

    @velocity.setter
    def velocity(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'velocity' field must be a sub message of type 'Vector3'"
        self._velocity = value

    @builtins.property
    def velocity_accuracy(self):
        """Message field 'velocity_accuracy'."""
        return self._velocity_accuracy

    @velocity_accuracy.setter
    def velocity_accuracy(self, value):
        if __debug__:
            from geometry_msgs.msg import Vector3
            assert \
                isinstance(value, Vector3), \
                "The 'velocity_accuracy' field must be a sub message of type 'Vector3'"
        self._velocity_accuracy = value

    @builtins.property
    def course(self):
        """Message field 'course'."""
        return self._course

    @course.setter
    def course(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'course' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'course' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._course = value

    @builtins.property
    def course_acc(self):
        """Message field 'course_acc'."""
        return self._course_acc

    @course_acc.setter
    def course_acc(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'course_acc' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'course_acc' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._course_acc = value
