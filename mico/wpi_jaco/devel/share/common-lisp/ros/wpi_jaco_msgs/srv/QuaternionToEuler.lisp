; Auto-generated. Do not edit!


(cl:in-package wpi_jaco_msgs-srv)


;//! \htmlinclude QuaternionToEuler-request.msg.html

(cl:defclass <QuaternionToEuler-request> (roslisp-msg-protocol:ros-message)
  ((orientation
    :reader orientation
    :initarg :orientation
    :type geometry_msgs-msg:Quaternion
    :initform (cl:make-instance 'geometry_msgs-msg:Quaternion)))
)

(cl:defclass QuaternionToEuler-request (<QuaternionToEuler-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <QuaternionToEuler-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'QuaternionToEuler-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-srv:<QuaternionToEuler-request> is deprecated: use wpi_jaco_msgs-srv:QuaternionToEuler-request instead.")))

(cl:ensure-generic-function 'orientation-val :lambda-list '(m))
(cl:defmethod orientation-val ((m <QuaternionToEuler-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:orientation-val is deprecated.  Use wpi_jaco_msgs-srv:orientation instead.")
  (orientation m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <QuaternionToEuler-request>) ostream)
  "Serializes a message object of type '<QuaternionToEuler-request>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'orientation) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <QuaternionToEuler-request>) istream)
  "Deserializes a message object of type '<QuaternionToEuler-request>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'orientation) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<QuaternionToEuler-request>)))
  "Returns string type for a service object of type '<QuaternionToEuler-request>"
  "wpi_jaco_msgs/QuaternionToEulerRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'QuaternionToEuler-request)))
  "Returns string type for a service object of type 'QuaternionToEuler-request"
  "wpi_jaco_msgs/QuaternionToEulerRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<QuaternionToEuler-request>)))
  "Returns md5sum for a message object of type '<QuaternionToEuler-request>"
  "a23128af411fb0dcecf2ec6aa414b1f5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'QuaternionToEuler-request)))
  "Returns md5sum for a message object of type 'QuaternionToEuler-request"
  "a23128af411fb0dcecf2ec6aa414b1f5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<QuaternionToEuler-request>)))
  "Returns full string definition for message of type '<QuaternionToEuler-request>"
  (cl:format cl:nil "geometry_msgs/Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'QuaternionToEuler-request)))
  "Returns full string definition for message of type 'QuaternionToEuler-request"
  (cl:format cl:nil "geometry_msgs/Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <QuaternionToEuler-request>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'orientation))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <QuaternionToEuler-request>))
  "Converts a ROS message object to a list"
  (cl:list 'QuaternionToEuler-request
    (cl:cons ':orientation (orientation msg))
))
;//! \htmlinclude QuaternionToEuler-response.msg.html

(cl:defclass <QuaternionToEuler-response> (roslisp-msg-protocol:ros-message)
  ((roll
    :reader roll
    :initarg :roll
    :type cl:float
    :initform 0.0)
   (pitch
    :reader pitch
    :initarg :pitch
    :type cl:float
    :initform 0.0)
   (yaw
    :reader yaw
    :initarg :yaw
    :type cl:float
    :initform 0.0))
)

(cl:defclass QuaternionToEuler-response (<QuaternionToEuler-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <QuaternionToEuler-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'QuaternionToEuler-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-srv:<QuaternionToEuler-response> is deprecated: use wpi_jaco_msgs-srv:QuaternionToEuler-response instead.")))

(cl:ensure-generic-function 'roll-val :lambda-list '(m))
(cl:defmethod roll-val ((m <QuaternionToEuler-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:roll-val is deprecated.  Use wpi_jaco_msgs-srv:roll instead.")
  (roll m))

(cl:ensure-generic-function 'pitch-val :lambda-list '(m))
(cl:defmethod pitch-val ((m <QuaternionToEuler-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:pitch-val is deprecated.  Use wpi_jaco_msgs-srv:pitch instead.")
  (pitch m))

(cl:ensure-generic-function 'yaw-val :lambda-list '(m))
(cl:defmethod yaw-val ((m <QuaternionToEuler-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:yaw-val is deprecated.  Use wpi_jaco_msgs-srv:yaw instead.")
  (yaw m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <QuaternionToEuler-response>) ostream)
  "Serializes a message object of type '<QuaternionToEuler-response>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'roll))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'pitch))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'yaw))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <QuaternionToEuler-response>) istream)
  "Deserializes a message object of type '<QuaternionToEuler-response>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'roll) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'pitch) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'yaw) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<QuaternionToEuler-response>)))
  "Returns string type for a service object of type '<QuaternionToEuler-response>"
  "wpi_jaco_msgs/QuaternionToEulerResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'QuaternionToEuler-response)))
  "Returns string type for a service object of type 'QuaternionToEuler-response"
  "wpi_jaco_msgs/QuaternionToEulerResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<QuaternionToEuler-response>)))
  "Returns md5sum for a message object of type '<QuaternionToEuler-response>"
  "a23128af411fb0dcecf2ec6aa414b1f5")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'QuaternionToEuler-response)))
  "Returns md5sum for a message object of type 'QuaternionToEuler-response"
  "a23128af411fb0dcecf2ec6aa414b1f5")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<QuaternionToEuler-response>)))
  "Returns full string definition for message of type '<QuaternionToEuler-response>"
  (cl:format cl:nil "float32 roll~%float32 pitch~%float32 yaw~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'QuaternionToEuler-response)))
  "Returns full string definition for message of type 'QuaternionToEuler-response"
  (cl:format cl:nil "float32 roll~%float32 pitch~%float32 yaw~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <QuaternionToEuler-response>))
  (cl:+ 0
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <QuaternionToEuler-response>))
  "Converts a ROS message object to a list"
  (cl:list 'QuaternionToEuler-response
    (cl:cons ':roll (roll msg))
    (cl:cons ':pitch (pitch msg))
    (cl:cons ':yaw (yaw msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'QuaternionToEuler)))
  'QuaternionToEuler-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'QuaternionToEuler)))
  'QuaternionToEuler-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'QuaternionToEuler)))
  "Returns string type for a service object of type '<QuaternionToEuler>"
  "wpi_jaco_msgs/QuaternionToEuler")