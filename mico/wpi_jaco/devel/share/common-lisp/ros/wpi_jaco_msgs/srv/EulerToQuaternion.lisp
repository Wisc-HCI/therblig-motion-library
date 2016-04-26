; Auto-generated. Do not edit!


(cl:in-package wpi_jaco_msgs-srv)


;//! \htmlinclude EulerToQuaternion-request.msg.html

(cl:defclass <EulerToQuaternion-request> (roslisp-msg-protocol:ros-message)
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

(cl:defclass EulerToQuaternion-request (<EulerToQuaternion-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EulerToQuaternion-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EulerToQuaternion-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-srv:<EulerToQuaternion-request> is deprecated: use wpi_jaco_msgs-srv:EulerToQuaternion-request instead.")))

(cl:ensure-generic-function 'roll-val :lambda-list '(m))
(cl:defmethod roll-val ((m <EulerToQuaternion-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:roll-val is deprecated.  Use wpi_jaco_msgs-srv:roll instead.")
  (roll m))

(cl:ensure-generic-function 'pitch-val :lambda-list '(m))
(cl:defmethod pitch-val ((m <EulerToQuaternion-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:pitch-val is deprecated.  Use wpi_jaco_msgs-srv:pitch instead.")
  (pitch m))

(cl:ensure-generic-function 'yaw-val :lambda-list '(m))
(cl:defmethod yaw-val ((m <EulerToQuaternion-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:yaw-val is deprecated.  Use wpi_jaco_msgs-srv:yaw instead.")
  (yaw m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EulerToQuaternion-request>) ostream)
  "Serializes a message object of type '<EulerToQuaternion-request>"
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
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EulerToQuaternion-request>) istream)
  "Deserializes a message object of type '<EulerToQuaternion-request>"
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
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EulerToQuaternion-request>)))
  "Returns string type for a service object of type '<EulerToQuaternion-request>"
  "wpi_jaco_msgs/EulerToQuaternionRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EulerToQuaternion-request)))
  "Returns string type for a service object of type 'EulerToQuaternion-request"
  "wpi_jaco_msgs/EulerToQuaternionRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EulerToQuaternion-request>)))
  "Returns md5sum for a message object of type '<EulerToQuaternion-request>"
  "da90a880255964dba6fc422dcbad3806")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EulerToQuaternion-request)))
  "Returns md5sum for a message object of type 'EulerToQuaternion-request"
  "da90a880255964dba6fc422dcbad3806")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EulerToQuaternion-request>)))
  "Returns full string definition for message of type '<EulerToQuaternion-request>"
  (cl:format cl:nil "float32 roll~%float32 pitch~%float32 yaw~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EulerToQuaternion-request)))
  "Returns full string definition for message of type 'EulerToQuaternion-request"
  (cl:format cl:nil "float32 roll~%float32 pitch~%float32 yaw~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EulerToQuaternion-request>))
  (cl:+ 0
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EulerToQuaternion-request>))
  "Converts a ROS message object to a list"
  (cl:list 'EulerToQuaternion-request
    (cl:cons ':roll (roll msg))
    (cl:cons ':pitch (pitch msg))
    (cl:cons ':yaw (yaw msg))
))
;//! \htmlinclude EulerToQuaternion-response.msg.html

(cl:defclass <EulerToQuaternion-response> (roslisp-msg-protocol:ros-message)
  ((orientation
    :reader orientation
    :initarg :orientation
    :type geometry_msgs-msg:Quaternion
    :initform (cl:make-instance 'geometry_msgs-msg:Quaternion)))
)

(cl:defclass EulerToQuaternion-response (<EulerToQuaternion-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EulerToQuaternion-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EulerToQuaternion-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-srv:<EulerToQuaternion-response> is deprecated: use wpi_jaco_msgs-srv:EulerToQuaternion-response instead.")))

(cl:ensure-generic-function 'orientation-val :lambda-list '(m))
(cl:defmethod orientation-val ((m <EulerToQuaternion-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:orientation-val is deprecated.  Use wpi_jaco_msgs-srv:orientation instead.")
  (orientation m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EulerToQuaternion-response>) ostream)
  "Serializes a message object of type '<EulerToQuaternion-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'orientation) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EulerToQuaternion-response>) istream)
  "Deserializes a message object of type '<EulerToQuaternion-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'orientation) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EulerToQuaternion-response>)))
  "Returns string type for a service object of type '<EulerToQuaternion-response>"
  "wpi_jaco_msgs/EulerToQuaternionResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EulerToQuaternion-response)))
  "Returns string type for a service object of type 'EulerToQuaternion-response"
  "wpi_jaco_msgs/EulerToQuaternionResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EulerToQuaternion-response>)))
  "Returns md5sum for a message object of type '<EulerToQuaternion-response>"
  "da90a880255964dba6fc422dcbad3806")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EulerToQuaternion-response)))
  "Returns md5sum for a message object of type 'EulerToQuaternion-response"
  "da90a880255964dba6fc422dcbad3806")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EulerToQuaternion-response>)))
  "Returns full string definition for message of type '<EulerToQuaternion-response>"
  (cl:format cl:nil "geometry_msgs/Quaternion orientation~%~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EulerToQuaternion-response)))
  "Returns full string definition for message of type 'EulerToQuaternion-response"
  (cl:format cl:nil "geometry_msgs/Quaternion orientation~%~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EulerToQuaternion-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'orientation))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EulerToQuaternion-response>))
  "Converts a ROS message object to a list"
  (cl:list 'EulerToQuaternion-response
    (cl:cons ':orientation (orientation msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'EulerToQuaternion)))
  'EulerToQuaternion-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'EulerToQuaternion)))
  'EulerToQuaternion-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EulerToQuaternion)))
  "Returns string type for a service object of type '<EulerToQuaternion>"
  "wpi_jaco_msgs/EulerToQuaternion")