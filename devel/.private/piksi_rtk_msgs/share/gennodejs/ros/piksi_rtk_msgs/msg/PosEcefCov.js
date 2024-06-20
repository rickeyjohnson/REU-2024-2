// Auto-generated. Do not edit!

// (in-package piksi_rtk_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class PosEcefCov {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.tow = null;
      this.x = null;
      this.y = null;
      this.z = null;
      this.cov_x_x = null;
      this.cov_x_y = null;
      this.cov_x_z = null;
      this.cov_y_y = null;
      this.cov_y_z = null;
      this.cov_z_z = null;
      this.n_sats = null;
      this.flags = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('tow')) {
        this.tow = initObj.tow
      }
      else {
        this.tow = 0;
      }
      if (initObj.hasOwnProperty('x')) {
        this.x = initObj.x
      }
      else {
        this.x = 0.0;
      }
      if (initObj.hasOwnProperty('y')) {
        this.y = initObj.y
      }
      else {
        this.y = 0.0;
      }
      if (initObj.hasOwnProperty('z')) {
        this.z = initObj.z
      }
      else {
        this.z = 0.0;
      }
      if (initObj.hasOwnProperty('cov_x_x')) {
        this.cov_x_x = initObj.cov_x_x
      }
      else {
        this.cov_x_x = 0.0;
      }
      if (initObj.hasOwnProperty('cov_x_y')) {
        this.cov_x_y = initObj.cov_x_y
      }
      else {
        this.cov_x_y = 0.0;
      }
      if (initObj.hasOwnProperty('cov_x_z')) {
        this.cov_x_z = initObj.cov_x_z
      }
      else {
        this.cov_x_z = 0.0;
      }
      if (initObj.hasOwnProperty('cov_y_y')) {
        this.cov_y_y = initObj.cov_y_y
      }
      else {
        this.cov_y_y = 0.0;
      }
      if (initObj.hasOwnProperty('cov_y_z')) {
        this.cov_y_z = initObj.cov_y_z
      }
      else {
        this.cov_y_z = 0.0;
      }
      if (initObj.hasOwnProperty('cov_z_z')) {
        this.cov_z_z = initObj.cov_z_z
      }
      else {
        this.cov_z_z = 0.0;
      }
      if (initObj.hasOwnProperty('n_sats')) {
        this.n_sats = initObj.n_sats
      }
      else {
        this.n_sats = 0;
      }
      if (initObj.hasOwnProperty('flags')) {
        this.flags = initObj.flags
      }
      else {
        this.flags = 0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type PosEcefCov
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [tow]
    bufferOffset = _serializer.uint32(obj.tow, buffer, bufferOffset);
    // Serialize message field [x]
    bufferOffset = _serializer.float64(obj.x, buffer, bufferOffset);
    // Serialize message field [y]
    bufferOffset = _serializer.float64(obj.y, buffer, bufferOffset);
    // Serialize message field [z]
    bufferOffset = _serializer.float64(obj.z, buffer, bufferOffset);
    // Serialize message field [cov_x_x]
    bufferOffset = _serializer.float32(obj.cov_x_x, buffer, bufferOffset);
    // Serialize message field [cov_x_y]
    bufferOffset = _serializer.float32(obj.cov_x_y, buffer, bufferOffset);
    // Serialize message field [cov_x_z]
    bufferOffset = _serializer.float32(obj.cov_x_z, buffer, bufferOffset);
    // Serialize message field [cov_y_y]
    bufferOffset = _serializer.float32(obj.cov_y_y, buffer, bufferOffset);
    // Serialize message field [cov_y_z]
    bufferOffset = _serializer.float32(obj.cov_y_z, buffer, bufferOffset);
    // Serialize message field [cov_z_z]
    bufferOffset = _serializer.float32(obj.cov_z_z, buffer, bufferOffset);
    // Serialize message field [n_sats]
    bufferOffset = _serializer.uint8(obj.n_sats, buffer, bufferOffset);
    // Serialize message field [flags]
    bufferOffset = _serializer.uint8(obj.flags, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type PosEcefCov
    let len;
    let data = new PosEcefCov(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [tow]
    data.tow = _deserializer.uint32(buffer, bufferOffset);
    // Deserialize message field [x]
    data.x = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [y]
    data.y = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [z]
    data.z = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [cov_x_x]
    data.cov_x_x = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [cov_x_y]
    data.cov_x_y = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [cov_x_z]
    data.cov_x_z = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [cov_y_y]
    data.cov_y_y = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [cov_y_z]
    data.cov_y_z = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [cov_z_z]
    data.cov_z_z = _deserializer.float32(buffer, bufferOffset);
    // Deserialize message field [n_sats]
    data.n_sats = _deserializer.uint8(buffer, bufferOffset);
    // Deserialize message field [flags]
    data.flags = _deserializer.uint8(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 54;
  }

  static datatype() {
    // Returns string type for a message object
    return 'piksi_rtk_msgs/PosEcefCov';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '41c67f8041e1de7f7989d20b09004845';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # The position solution message reports absolute Earth Centered Earth Fixed
    # (ECEF) coordinates and the status (single point vs pseudo-absolute RTK) of the
    # position solution. The message also reports the upper triangular portion of
    # the 3x3 covariance matrix. If the receiver knows the surveyed position of the
    # base station and has an RTK solution, this reports a pseudo-absolute position
    # solution using the base station position and the rover’s RTK baseline vector.
    # The full GPS time is given by the preceding MSG GPS TIME with the matching
    # time-of-week (tow).
    
    Header header
    
    uint32 tow          # GPS Time of Week [ms].
    float64 x           # ECEF X coordinate [m].
    float64 y           # ECEF Y coordinate [m].
    float64 z           # ECEF Z coordinate [m].
    float32 cov_x_x     # Estimated variance of x [m^2].
    float32 cov_x_y     # Estimated covariance of x and y [m^2].
    float32 cov_x_z     # Estimated covariance of x and z [m^2].
    float32 cov_y_y     # Estimated variance of y [m^2].
    float32 cov_y_z     # Estimated covariance of y and z [m^2].
    float32 cov_z_z     # Estimated variance of z [m^2].
    uint8 n_sats        # Number of satellites used in solution.
    uint8 flags         # Status flags, see MSG_POS_ECEF message description in SBP documentation.
    
    uint8 FIX_MODE_INVALID = 0
    uint8 FIX_MODE_SPP = 1
    uint8 FIX_MODE_DGNSS = 2
    uint8 FIX_MODE_FLOAT_RTK = 3
    uint8 FIX_MODE_FIX_RTK = 4
    uint8 FIX_MODE_DEAD_RECKONING = 5
    uint8 FIX_MODE_SBAS = 6
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new PosEcefCov(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.tow !== undefined) {
      resolved.tow = msg.tow;
    }
    else {
      resolved.tow = 0
    }

    if (msg.x !== undefined) {
      resolved.x = msg.x;
    }
    else {
      resolved.x = 0.0
    }

    if (msg.y !== undefined) {
      resolved.y = msg.y;
    }
    else {
      resolved.y = 0.0
    }

    if (msg.z !== undefined) {
      resolved.z = msg.z;
    }
    else {
      resolved.z = 0.0
    }

    if (msg.cov_x_x !== undefined) {
      resolved.cov_x_x = msg.cov_x_x;
    }
    else {
      resolved.cov_x_x = 0.0
    }

    if (msg.cov_x_y !== undefined) {
      resolved.cov_x_y = msg.cov_x_y;
    }
    else {
      resolved.cov_x_y = 0.0
    }

    if (msg.cov_x_z !== undefined) {
      resolved.cov_x_z = msg.cov_x_z;
    }
    else {
      resolved.cov_x_z = 0.0
    }

    if (msg.cov_y_y !== undefined) {
      resolved.cov_y_y = msg.cov_y_y;
    }
    else {
      resolved.cov_y_y = 0.0
    }

    if (msg.cov_y_z !== undefined) {
      resolved.cov_y_z = msg.cov_y_z;
    }
    else {
      resolved.cov_y_z = 0.0
    }

    if (msg.cov_z_z !== undefined) {
      resolved.cov_z_z = msg.cov_z_z;
    }
    else {
      resolved.cov_z_z = 0.0
    }

    if (msg.n_sats !== undefined) {
      resolved.n_sats = msg.n_sats;
    }
    else {
      resolved.n_sats = 0
    }

    if (msg.flags !== undefined) {
      resolved.flags = msg.flags;
    }
    else {
      resolved.flags = 0
    }

    return resolved;
    }
};

// Constants for message
PosEcefCov.Constants = {
  FIX_MODE_INVALID: 0,
  FIX_MODE_SPP: 1,
  FIX_MODE_DGNSS: 2,
  FIX_MODE_FLOAT_RTK: 3,
  FIX_MODE_FIX_RTK: 4,
  FIX_MODE_DEAD_RECKONING: 5,
  FIX_MODE_SBAS: 6,
}

module.exports = PosEcefCov;
