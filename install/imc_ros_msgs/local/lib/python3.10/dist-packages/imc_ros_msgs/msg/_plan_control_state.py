# generated from rosidl_generator_py/resource/_idl.py.em
# with input from imc_ros_msgs:msg/PlanControlState.idl
# generated code does not contain a copyright notice


# Import statements for member types

import builtins  # noqa: E402, I100

import math  # noqa: E402, I100

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PlanControlState(type):
    """Metaclass of message 'PlanControlState'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
        'BLOCKED': 0,
        'READY': 1,
        'INITIALIZING': 2,
        'EXECUTING': 3,
        'NONE': 0,
        'SUCCESS': 1,
        'FAILURE': 2,
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
                'imc_ros_msgs.msg.PlanControlState')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__plan_control_state
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__plan_control_state
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__plan_control_state
            cls._TYPE_SUPPORT = module.type_support_msg__msg__plan_control_state
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__plan_control_state

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
            'BLOCKED': cls.__constants['BLOCKED'],
            'READY': cls.__constants['READY'],
            'INITIALIZING': cls.__constants['INITIALIZING'],
            'EXECUTING': cls.__constants['EXECUTING'],
            'NONE': cls.__constants['NONE'],
            'SUCCESS': cls.__constants['SUCCESS'],
            'FAILURE': cls.__constants['FAILURE'],
        }

    @property
    def BLOCKED(self):
        """Message constant 'BLOCKED'."""
        return Metaclass_PlanControlState.__constants['BLOCKED']

    @property
    def READY(self):
        """Message constant 'READY'."""
        return Metaclass_PlanControlState.__constants['READY']

    @property
    def INITIALIZING(self):
        """Message constant 'INITIALIZING'."""
        return Metaclass_PlanControlState.__constants['INITIALIZING']

    @property
    def EXECUTING(self):
        """Message constant 'EXECUTING'."""
        return Metaclass_PlanControlState.__constants['EXECUTING']

    @property
    def NONE(self):
        """Message constant 'NONE'."""
        return Metaclass_PlanControlState.__constants['NONE']

    @property
    def SUCCESS(self):
        """Message constant 'SUCCESS'."""
        return Metaclass_PlanControlState.__constants['SUCCESS']

    @property
    def FAILURE(self):
        """Message constant 'FAILURE'."""
        return Metaclass_PlanControlState.__constants['FAILURE']


class PlanControlState(metaclass=Metaclass_PlanControlState):
    """
    Message class 'PlanControlState'.

    Constants:
      BLOCKED
      READY
      INITIALIZING
      EXECUTING
      NONE
      SUCCESS
      FAILURE
    """

    __slots__ = [
        '_state',
        '_plan_id',
        '_plan_eta',
        '_plan_progress',
        '_man_id',
        '_man_type',
        '_man_eta',
        '_last_outcome',
    ]

    _fields_and_field_types = {
        'state': 'uint8',
        'plan_id': 'string',
        'plan_eta': 'int32',
        'plan_progress': 'float',
        'man_id': 'string',
        'man_type': 'uint16',
        'man_eta': 'int32',
        'last_outcome': 'uint8',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('float'),  # noqa: E501
        rosidl_parser.definition.UnboundedString(),  # noqa: E501
        rosidl_parser.definition.BasicType('uint16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('uint8'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.state = kwargs.get('state', int())
        self.plan_id = kwargs.get('plan_id', str())
        self.plan_eta = kwargs.get('plan_eta', int())
        self.plan_progress = kwargs.get('plan_progress', float())
        self.man_id = kwargs.get('man_id', str())
        self.man_type = kwargs.get('man_type', int())
        self.man_eta = kwargs.get('man_eta', int())
        self.last_outcome = kwargs.get('last_outcome', int())

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
        if self.state != other.state:
            return False
        if self.plan_id != other.plan_id:
            return False
        if self.plan_eta != other.plan_eta:
            return False
        if self.plan_progress != other.plan_progress:
            return False
        if self.man_id != other.man_id:
            return False
        if self.man_type != other.man_type:
            return False
        if self.man_eta != other.man_eta:
            return False
        if self.last_outcome != other.last_outcome:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @builtins.property
    def state(self):
        """Message field 'state'."""
        return self._state

    @state.setter
    def state(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'state' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'state' field must be an unsigned integer in [0, 255]"
        self._state = value

    @builtins.property
    def plan_id(self):
        """Message field 'plan_id'."""
        return self._plan_id

    @plan_id.setter
    def plan_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'plan_id' field must be of type 'str'"
        self._plan_id = value

    @builtins.property
    def plan_eta(self):
        """Message field 'plan_eta'."""
        return self._plan_eta

    @plan_eta.setter
    def plan_eta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'plan_eta' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'plan_eta' field must be an integer in [-2147483648, 2147483647]"
        self._plan_eta = value

    @builtins.property
    def plan_progress(self):
        """Message field 'plan_progress'."""
        return self._plan_progress

    @plan_progress.setter
    def plan_progress(self, value):
        if __debug__:
            assert \
                isinstance(value, float), \
                "The 'plan_progress' field must be of type 'float'"
            assert not (value < -3.402823466e+38 or value > 3.402823466e+38) or math.isinf(value), \
                "The 'plan_progress' field must be a float in [-3.402823466e+38, 3.402823466e+38]"
        self._plan_progress = value

    @builtins.property
    def man_id(self):
        """Message field 'man_id'."""
        return self._man_id

    @man_id.setter
    def man_id(self, value):
        if __debug__:
            assert \
                isinstance(value, str), \
                "The 'man_id' field must be of type 'str'"
        self._man_id = value

    @builtins.property
    def man_type(self):
        """Message field 'man_type'."""
        return self._man_type

    @man_type.setter
    def man_type(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'man_type' field must be of type 'int'"
            assert value >= 0 and value < 65536, \
                "The 'man_type' field must be an unsigned integer in [0, 65535]"
        self._man_type = value

    @builtins.property
    def man_eta(self):
        """Message field 'man_eta'."""
        return self._man_eta

    @man_eta.setter
    def man_eta(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'man_eta' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'man_eta' field must be an integer in [-2147483648, 2147483647]"
        self._man_eta = value

    @builtins.property
    def last_outcome(self):
        """Message field 'last_outcome'."""
        return self._last_outcome

    @last_outcome.setter
    def last_outcome(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'last_outcome' field must be of type 'int'"
            assert value >= 0 and value < 256, \
                "The 'last_outcome' field must be an unsigned integer in [0, 255]"
        self._last_outcome = value
