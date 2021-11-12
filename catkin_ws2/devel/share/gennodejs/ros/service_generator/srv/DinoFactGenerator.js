// Auto-generated. Do not edit!

// (in-package service_generator.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class DinoFactGeneratorRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.user_word = null;
    }
    else {
      if (initObj.hasOwnProperty('user_word')) {
        this.user_word = initObj.user_word
      }
      else {
        this.user_word = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DinoFactGeneratorRequest
    // Serialize message field [user_word]
    bufferOffset = _serializer.string(obj.user_word, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DinoFactGeneratorRequest
    let len;
    let data = new DinoFactGeneratorRequest(null);
    // Deserialize message field [user_word]
    data.user_word = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.user_word);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'service_generator/DinoFactGeneratorRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '67652868f1dd38aa10dc946553e6b9f4';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string user_word
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DinoFactGeneratorRequest(null);
    if (msg.user_word !== undefined) {
      resolved.user_word = msg.user_word;
    }
    else {
      resolved.user_word = ''
    }

    return resolved;
    }
};

class DinoFactGeneratorResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.dino_fact = null;
    }
    else {
      if (initObj.hasOwnProperty('dino_fact')) {
        this.dino_fact = initObj.dino_fact
      }
      else {
        this.dino_fact = '';
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type DinoFactGeneratorResponse
    // Serialize message field [dino_fact]
    bufferOffset = _serializer.string(obj.dino_fact, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type DinoFactGeneratorResponse
    let len;
    let data = new DinoFactGeneratorResponse(null);
    // Deserialize message field [dino_fact]
    data.dino_fact = _deserializer.string(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += _getByteLength(object.dino_fact);
    return length + 4;
  }

  static datatype() {
    // Returns string type for a service object
    return 'service_generator/DinoFactGeneratorResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a3b479ce65926041d6c97ef1ab24beaf';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string dino_fact
    
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new DinoFactGeneratorResponse(null);
    if (msg.dino_fact !== undefined) {
      resolved.dino_fact = msg.dino_fact;
    }
    else {
      resolved.dino_fact = ''
    }

    return resolved;
    }
};

module.exports = {
  Request: DinoFactGeneratorRequest,
  Response: DinoFactGeneratorResponse,
  md5sum() { return '45c86d5d7dfcd02fa17ec95f669893aa'; },
  datatype() { return 'service_generator/DinoFactGenerator'; }
};
