# generated from rosidl_generator_py/resource/_idl.py.em
# with input from imc_ros_msgs:msg/VehicleState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_VehicleState(type):
    """Metaclass of message 'VehicleState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'SERVICE': 0,
        'CALIBRATION': 1,
        'ERROR': 2,
        'MANEUVER': 3,
        'EXTERNAL': 4,
        'BOOT': 5,
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('imc_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'imc_ros_msgs.msg.VehicleState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__vehicle_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__vehicle_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__vehicle_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__vehicle_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__vehicle_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'SERVICE': cls.__constants['SERVICE'],
            'CALIBRATION': cls.__constants['CALIBRATION'],
            'ERROR': cls.__constants['ERROR'],
            'MANEUVER': cls.__constants['MANEUVER'],
            'EXTERNAL': cls.__constants['EXTERNAL'],
            'BOOT': cls.__constants['BOOT'],
        }

    @property
    def SERVICE(self):
        """Message constant 'SERVICE'."""
        return Metaclass_VehicleState.__constants['SERVICE']

    @property
    def CALIBRATION(self):
        """Message constant 'CALIBRATION'."""
        return Metaclass_VehicleState.__constants['CALIBRATION']

    @property
    def ERROR(self):
        """Message constant 'ERROR'."""
        return Metaclass_VehicleState.__constants['ERROR']

    @property
    def MANEUVER(self):
        """Message constant 'MANEUVER'."""
        return Metaclass_VehicleState.__constants['MANEUVER']

    @property
    def EXTERNAL(self):
        """Message constant 'EXTERNAL'."""
        return Metaclass_VehicleState.__constants['EXTERNAL']

    @property
    def BOOT(self):
        """Message constant 'BOOT'."""
        return Metaclass_VehicleState.__constants['BOOT']


class VehicleState(metaclass=Metaclass_VehicleState):
    """
    Message class 'VehicleState'.

    Constants:
      SERVICE
      CALIBRATION
      ERROR
      MANEUVER
      EXTERNAL
      BOOT
    """

    __slots__ = [
        '_op_mode',
        '_error_count',
        '_error_ents',
        '_maneuver_type',
        '_maneuver_stime',
        '_maneuver_eta',
        '_control_loops',
        '_flags',
        '_last_error',
        '_last_error_time',
    ]

    _fields_and_field_types = {
        'op_mode': 'uint8',
        'error_count': 'uint8',
        'error_ents': 'string',
        'maneuver_type': 'uint16',
        'maneuver_stime': 'double',
        'maneuver_eta': 'uint16',
        'control_loops': 'uint32',
        'flags': 'uint8',
        'last_error': 'string',
        'last_error_time': 'double',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.op_mode = kwargs.get('op_mode', int())
        self.error_count = kwargs.get('error_count', int())
        self.error_ents = kwargs.get('error_ents', str())
        self.maneuver_type = kwargs.get('maneuver_type', int())
        self.maneuver_stime = kwargs.get('maneuver_stime', float())
        self.maneuver_eta = kwargs.get('maneuver_eta', int())
        self.control_loops = kwargs.get('control_loops', int())
        self.flags = kwargs.get('flags', int())
        self.last_error = kwargs.get('last_error', str())
        self.last_error_time = kwargs.get('last_error_time', float())

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
        if self.op_mode != other.op_mode:
            return False
        if self.error_count != other.error_count:
            return False
        if self.error_ents != other.error_ents:
            return False
        if self.maneuver_type != other.maneuver_type:
            return False
        if self.maneuver_stime != other.maneuver_stime:
            return False
        if self.maneuver_eta != other.maneuver_eta:
            return False
        if self.control_loops != other.control_loops:
            return False
        if self.flags != other.flags:
            return False
        if self.last_error != other.last_error:
            return False
        if self.last_error_time != other.last_error_time:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def op_mode(self):
        """Message field 'op_mode'."""
        return self._op_mode

    @op_mode.setter
    def op_mode(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'op_mode' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'op_mode' field must be an unsigned integer in [0, 255]"
        self._op_mode = value

    @builtins.property
    def error_count(self):
        """Message field 'error_count'."""
        return self._error_count

    @error_count.setter
    def error_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'error_count' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'error_count' field must be an unsigned integer in [0, 255]"
        self._error_count = value

    @builtins.property
    def error_ents(self):
        """Message field 'error_ents'."""
        return self._error_ents

    @error_ents.setter
    def error_ents(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'error_ents' field must be of type 'str'"
        self._error_ents = value

    @builtins.property
    def maneuver_type(self):
        """Message field 'maneuver_type'."""
        return self._maneuver_type

    @maneuver_type.setter
    def maneuver_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maneuver_type' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'maneuver_type' field must be an unsigned integer in [0, 65535]"
        self._maneuver_type = value

    @builtins.property
    def maneuver_stime(self):
        """Message field 'maneuver_stime'."""
        return self._maneuver_stime

    @maneuver_stime.setter
    def maneuver_stime(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'maneuver_stime' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'maneuver_stime' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._maneuver_stime = value

    @builtins.property
    def maneuver_eta(self):
        """Message field 'maneuver_eta'."""
        return self._maneuver_eta

    @maneuver_eta.setter
    def maneuver_eta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'maneuver_eta' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'maneuver_eta' field must be an unsigned integer in [0, 65535]"
        self._maneuver_eta = value

    @builtins.property
    def control_loops(self):
        """Message field 'control_loops'."""
        return self._control_loops

    @control_loops.setter
    def control_loops(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'control_loops' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'control_loops' field must be an unsigned integer in [0, 4294967295]"
        self._control_loops = value

    @builtins.property
    def flags(self):
        """Message field 'flags'."""
        return self._flags

    @flags.setter
    def flags(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'flags' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'flags' field must be an unsigned integer in [0, 255]"
        self._flags = value

    @builtins.property
    def last_error(self):
        """Message field 'last_error'."""
        return self._last_error

    @last_error.setter
    def last_error(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'last_error' field must be of type 'str'"
        self._last_error = value

    @builtins.property
    def last_error_time(self):
        """Message field 'last_error_time'."""
        return self._last_error_time

    @last_error_time.setter
    def last_error_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'last_error_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'last_error_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._last_error_time = value
