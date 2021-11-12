; Auto-generated. Do not edit!


(cl:in-package service_generator-srv)


;//! \htmlinclude DinoFactGenerator-request.msg.html

(cl:defclass <DinoFactGenerator-request> (roslisp-msg-protocol:ros-message)
  ((user_word
    :reader user_word
    :initarg :user_word
    :type cl:string
    :initform ""))
)

(cl:defclass DinoFactGenerator-request (<DinoFactGenerator-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DinoFactGenerator-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DinoFactGenerator-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name service_generator-srv:<DinoFactGenerator-request> is deprecated: use service_generator-srv:DinoFactGenerator-request instead.")))

(cl:ensure-generic-function 'user_word-val :lambda-list '(m))
(cl:defmethod user_word-val ((m <DinoFactGenerator-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader service_generator-srv:user_word-val is deprecated.  Use service_generator-srv:user_word instead.")
  (user_word m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DinoFactGenerator-request>) ostream)
  "Serializes a message object of type '<DinoFactGenerator-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'user_word))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'user_word))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DinoFactGenerator-request>) istream)
  "Deserializes a message object of type '<DinoFactGenerator-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'user_word) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'user_word) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DinoFactGenerator-request>)))
  "Returns string type for a service object of type '<DinoFactGenerator-request>"
  "service_generator/DinoFactGeneratorRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DinoFactGenerator-request)))
  "Returns string type for a service object of type 'DinoFactGenerator-request"
  "service_generator/DinoFactGeneratorRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DinoFactGenerator-request>)))
  "Returns md5sum for a message object of type '<DinoFactGenerator-request>"
  "45c86d5d7dfcd02fa17ec95f669893aa")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DinoFactGenerator-request)))
  "Returns md5sum for a message object of type 'DinoFactGenerator-request"
  "45c86d5d7dfcd02fa17ec95f669893aa")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DinoFactGenerator-request>)))
  "Returns full string definition for message of type '<DinoFactGenerator-request>"
  (cl:format cl:nil "string user_word~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DinoFactGenerator-request)))
  "Returns full string definition for message of type 'DinoFactGenerator-request"
  (cl:format cl:nil "string user_word~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DinoFactGenerator-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'user_word))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DinoFactGenerator-request>))
  "Converts a ROS message object to a list"
  (cl:list 'DinoFactGenerator-request
    (cl:cons ':user_word (user_word msg))
))
;//! \htmlinclude DinoFactGenerator-response.msg.html

(cl:defclass <DinoFactGenerator-response> (roslisp-msg-protocol:ros-message)
  ((dino_fact
    :reader dino_fact
    :initarg :dino_fact
    :type cl:string
    :initform ""))
)

(cl:defclass DinoFactGenerator-response (<DinoFactGenerator-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <DinoFactGenerator-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'DinoFactGenerator-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name service_generator-srv:<DinoFactGenerator-response> is deprecated: use service_generator-srv:DinoFactGenerator-response instead.")))

(cl:ensure-generic-function 'dino_fact-val :lambda-list '(m))
(cl:defmethod dino_fact-val ((m <DinoFactGenerator-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader service_generator-srv:dino_fact-val is deprecated.  Use service_generator-srv:dino_fact instead.")
  (dino_fact m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <DinoFactGenerator-response>) ostream)
  "Serializes a message object of type '<DinoFactGenerator-response>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'dino_fact))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'dino_fact))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <DinoFactGenerator-response>) istream)
  "Deserializes a message object of type '<DinoFactGenerator-response>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'dino_fact) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'dino_fact) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<DinoFactGenerator-response>)))
  "Returns string type for a service object of type '<DinoFactGenerator-response>"
  "service_generator/DinoFactGeneratorResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DinoFactGenerator-response)))
  "Returns string type for a service object of type 'DinoFactGenerator-response"
  "service_generator/DinoFactGeneratorResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<DinoFactGenerator-response>)))
  "Returns md5sum for a message object of type '<DinoFactGenerator-response>"
  "45c86d5d7dfcd02fa17ec95f669893aa")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'DinoFactGenerator-response)))
  "Returns md5sum for a message object of type 'DinoFactGenerator-response"
  "45c86d5d7dfcd02fa17ec95f669893aa")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<DinoFactGenerator-response>)))
  "Returns full string definition for message of type '<DinoFactGenerator-response>"
  (cl:format cl:nil "string dino_fact~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'DinoFactGenerator-response)))
  "Returns full string definition for message of type 'DinoFactGenerator-response"
  (cl:format cl:nil "string dino_fact~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <DinoFactGenerator-response>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'dino_fact))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <DinoFactGenerator-response>))
  "Converts a ROS message object to a list"
  (cl:list 'DinoFactGenerator-response
    (cl:cons ':dino_fact (dino_fact msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'DinoFactGenerator)))
  'DinoFactGenerator-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'DinoFactGenerator)))
  'DinoFactGenerator-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'DinoFactGenerator)))
  "Returns string type for a service object of type '<DinoFactGenerator>"
  "service_generator/DinoFactGenerator")