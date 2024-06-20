# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from piksi_rtk_msgs/VelEcefCov.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class VelEcefCov(genpy.Message):
  _md5sum = "3b1a393d40744915fd3904d558c780af"
  _type = "piksi_rtk_msgs/VelEcefCov"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# This message reports the velocity in local North East Down (NED) coordinates.
# The NED coordinate system is defined as the local WGS84 tangent plane centered
# at the current position. The full GPS time is given by the preceding MSG GPS
# TIME with the matching time-of-week (tow). This message is similar to the MSG
# VEL NED, but it includes the upper triangular portion of the 3x3 covariance
# matrix.

uint32 tow          # GPS Time of Week.
int32 x             # Velocity North coordinate [mm/s].
int32 y             # Velocity East coordinate [mm/s].
int32 z             # Velocity Down coordinate [mm/s].
float32 cov_x_x     # Estimated variance of x [m^2/s^2].
float32 cov_x_y     # Estimated covariance of x and y [m^2/s^2].
float32 cov_x_z     # Estimated covariance of x and z [m^2/s^2].
float32 cov_y_y     # Estimated variance of y [m^2/s^2].
float32 cov_y_z     # Estimated covariance of y and z [m^2/s^2].
float32 cov_z_z     # Estimated variance of z [m^2/s^2].
uint8 n_sats        # Number of satellites used in solution.
uint8 flags         # Status flags

uint8 VEL_MODE_INVALID = 0
uint8 VEL_MODE_MEAS_DOPPLER = 1
uint8 VEL_MODE_DERIVED_DOPPLER = 2
uint8 VEL_MODE_DEAD_RECKONING = 3
"""
  # Pseudo-constants
  VEL_MODE_INVALID = 0
  VEL_MODE_MEAS_DOPPLER = 1
  VEL_MODE_DERIVED_DOPPLER = 2
  VEL_MODE_DEAD_RECKONING = 3

  __slots__ = ['tow','x','y','z','cov_x_x','cov_x_y','cov_x_z','cov_y_y','cov_y_z','cov_z_z','n_sats','flags']
  _slot_types = ['uint32','int32','int32','int32','float32','float32','float32','float32','float32','float32','uint8','uint8']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       tow,x,y,z,cov_x_x,cov_x_y,cov_x_z,cov_y_y,cov_y_z,cov_z_z,n_sats,flags

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(VelEcefCov, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.tow is None:
        self.tow = 0
      if self.x is None:
        self.x = 0
      if self.y is None:
        self.y = 0
      if self.z is None:
        self.z = 0
      if self.cov_x_x is None:
        self.cov_x_x = 0.
      if self.cov_x_y is None:
        self.cov_x_y = 0.
      if self.cov_x_z is None:
        self.cov_x_z = 0.
      if self.cov_y_y is None:
        self.cov_y_y = 0.
      if self.cov_y_z is None:
        self.cov_y_z = 0.
      if self.cov_z_z is None:
        self.cov_z_z = 0.
      if self.n_sats is None:
        self.n_sats = 0
      if self.flags is None:
        self.flags = 0
    else:
      self.tow = 0
      self.x = 0
      self.y = 0
      self.z = 0
      self.cov_x_x = 0.
      self.cov_x_y = 0.
      self.cov_x_z = 0.
      self.cov_y_y = 0.
      self.cov_y_z = 0.
      self.cov_z_z = 0.
      self.n_sats = 0
      self.flags = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_I3i6f2B().pack(_x.tow, _x.x, _x.y, _x.z, _x.cov_x_x, _x.cov_x_y, _x.cov_x_z, _x.cov_y_y, _x.cov_y_z, _x.cov_z_z, _x.n_sats, _x.flags))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 42
      (_x.tow, _x.x, _x.y, _x.z, _x.cov_x_x, _x.cov_x_y, _x.cov_x_z, _x.cov_y_y, _x.cov_y_z, _x.cov_z_z, _x.n_sats, _x.flags,) = _get_struct_I3i6f2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_I3i6f2B().pack(_x.tow, _x.x, _x.y, _x.z, _x.cov_x_x, _x.cov_x_y, _x.cov_x_z, _x.cov_y_y, _x.cov_y_z, _x.cov_z_z, _x.n_sats, _x.flags))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 42
      (_x.tow, _x.x, _x.y, _x.z, _x.cov_x_x, _x.cov_x_y, _x.cov_x_z, _x.cov_y_y, _x.cov_y_z, _x.cov_z_z, _x.n_sats, _x.flags,) = _get_struct_I3i6f2B().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_I3i6f2B = None
def _get_struct_I3i6f2B():
    global _struct_I3i6f2B
    if _struct_I3i6f2B is None:
        _struct_I3i6f2B = struct.Struct("<I3i6f2B")
    return _struct_I3i6f2B
