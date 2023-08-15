# generated from rosidl_generator_py/resource/_idl.py.em
# with input from imc_ros_msgs:msg/PlanDBState.idl
# generated code does not contain a copyright notice


# Import statements for member types

# Member 'md5'
import array  # noqa: E402, I100

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanDBState(type):
    """Metaclass of message 'PlanDBState'."""

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
            module = import_type_support('imc_ros_msgs')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'imc_ros_msgs.msg.PlanDBState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__plan_db_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__plan_db_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__plan_db_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__plan_db_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__plan_db_state

            from imc_ros_msgs.msg import PlanDBInformation
            if PlanDBInformation.__class__._TYPE_SUPPORT is None:
                PlanDBInformation.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PlanDBState(metaclass=Metaclass_PlanDBState):
    """Message class 'PlanDBState'."""

    __slots__ = [
        '_plan_count',
        '_plan_size',
        '_change_time',
        '_change_sid',
        '_change_sname',
        '_md5',
        '_plans_info',
    ]

    _fields_and_field_types = {
        'plan_count': 'uint16',
        'plan_size': 'uint32',
        'change_time': 'double',
        'change_sid': 'uint16',
        'change_sname': 'string',
        'md5': 'sequence<uint8>',
        'plans_info': 'sequence<imc_ros_msgs/PlanDBInformation>',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint32'),  # noqa: E501
        rosidl_parser.definition.BasicType('double'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.BasicType('uint8')),  # noqa: E501
        rosidl_parser.definition.UnboundedSequence(rosidl_parser.definition.NamespacedType(['imc_ros_msgs', 'msg'], 'PlanDBInformation')),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.plan_count = kwargs.get('plan_count', int())
        self.plan_size = kwargs.get('plan_size', int())
        self.change_time = kwargs.get('change_time', float())
        self.change_sid = kwargs.get('change_sid', int())
        self.change_sname = kwargs.get('change_sname', str())
        self.md5 = array.array('B', kwargs.get('md5', []))
        self.plans_info = kwargs.get('plans_info', [])

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
        if self.plan_count != other.plan_count:
            return False
        if self.plan_size != other.plan_size:
            return False
        if self.change_time != other.change_time:
            return False
        if self.change_sid != other.change_sid:
            return False
        if self.change_sname != other.change_sname:
            return False
        if self.md5 != other.md5:
            return False
        if self.plans_info != other.plans_info:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def plan_count(self):
        """Message field 'plan_count'."""
        return self._plan_count

    @plan_count.setter
    def plan_count(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plan_count' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'plan_count' field must be an unsigned integer in [0, 65535]"
        self._plan_count = value

    @builtins.property
    def plan_size(self):
        """Message field 'plan_size'."""
        return self._plan_size

    @plan_size.setter
    def plan_size(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plan_size' field must be of type 'int'"
            assert value >= 0 and value < 4294967296, \
                "The 'plan_size' field must be an unsigned integer in [0, 4294967295]"
        self._plan_size = value

    @builtins.property
    def change_time(self):
        """Message field 'change_time'."""
        return self._change_time

    @change_time.setter
    def change_time(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'change_time' field must be of type 'float'"
            assert not (value < -1.7976931348623157e+308 or value > 1.7976931348623157e+308) or math.isinf(value), \
                "The 'change_time' field must be a double in [-1.7976931348623157e+308, 1.7976931348623157e+308]"
        self._change_time = value

    @builtins.property
    def change_sid(self):
        """Message field 'change_sid'."""
        return self._change_sid

    @change_sid.setter
    def change_sid(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'change_sid' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'change_sid' field must be an unsigned integer in [0, 65535]"
        self._change_sid = value

    @builtins.property
    def change_sname(self):
        """Message field 'change_sname'."""
        return self._change_sname

    @change_sname.setter
    def change_sname(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'change_sname' field must be of type 'str'"
        self._change_sname = value

    @builtins.property
    def md5(self):
        """Message field 'md5'."""
        return self._md5

    @md5.setter
    def md5(self, value):
        if isinstance(value, array.array):
            assert value.typecode == 'B', \
                "The 'md5' array.array() must have the type code of 'B'"
            self._md5 = value
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
                 all(isinstance(v, int) for v in value) and
                 all(val >= 0 and val < 256 for val in value)), \
                "The 'md5' field must be a set or sequence and each value of type 'int' and each unsigned integer in [0, 255]"
        self._md5 = array.array('B', value)

    @builtins.property
    def plans_info(self):
        """Message field 'plans_info'."""
        return self._plans_info

    @plans_info.setter
    def plans_info(self, value):
        if __debug__:
            from imc_ros_msgs.msg import PlanDBInformation
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
                 all(isinstance(v, PlanDBInformation) for v in value) and
                 True), \
                "The 'plans_info' field must be a set or sequence and each value of type 'PlanDBInformation'"
        self._plans_info = value
