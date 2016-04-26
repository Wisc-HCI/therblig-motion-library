; Auto-generated. Do not edit!


(cl:in-package wpi_jaco_msgs-msg)


;//! \htmlinclude JacoFingerVel.msg.html

(cl:defclass <JacoFingerVel> (roslisp-msg-protocol:ros-message)
  ((finger1Vel
    :reader finger1Vel
    :initarg :finger1Vel
    :type cl:float
    :initform 0.0)
   (finger2Vel
    :reader finger2Vel
    :initarg :finger2Vel
    :type cl:float
    :initform 0.0)
   (finger3Vel
    :reader finger3Vel
    :initarg :finger3Vel
    :type cl:float
    :initform 0.0))
)

(cl:defclass JacoFingerVel (<JacoFingerVel>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <JacoFingerVel>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'JacoFingerVel)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-msg:<JacoFingerVel> is deprecated: use wpi_jaco_msgs-msg:JacoFingerVel instead.")))

(cl:ensure-generic-function 'finger1Vel-val :lambda-list '(m))
(cl:defmethod finger1Vel-val ((m <JacoFingerVel>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-msg:finger1Vel-val is deprecated.  Use wpi_jaco_msgs-msg:finger1Vel instead.")
  (finger1Vel m))

(cl:ensure-generic-function 'finger2Vel-val :lambda-list '(m))
(cl:defmethod finger2Vel-val ((m <JacoFingerVel>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-msg:finger2Vel-val is deprecated.  Use wpi_jaco_msgs-msg:finger2Vel instead.")
  (finger2Vel m))

(cl:ensure-generic-function 'finger3Vel-val :lambda-list '(m))
(cl:defmethod finger3Vel-val ((m <JacoFingerVel>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-msg:finger3Vel-val is deprecated.  Use wpi_jaco_msgs-msg:finger3Vel instead.")
  (finger3Vel m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <JacoFingerVel>) ostream)
  "Serializes a message object of type '<JacoFingerVel>"
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'finger1Vel))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'finger2Vel))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
  (cl:let ((bits (roslisp-utils:encode-single-float-bits (cl:slot-value msg 'finger3Vel))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <JacoFingerVel>) istream)
  "Deserializes a message object of type '<JacoFingerVel>"
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'finger1Vel) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'finger2Vel) (roslisp-utils:decode-single-float-bits bits)))
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:slot-value msg 'finger3Vel) (roslisp-utils:decode-single-float-bits bits)))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<JacoFingerVel>)))
  "Returns string type for a message object of type '<JacoFingerVel>"
  "wpi_jaco_msgs/JacoFingerVel")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'JacoFingerVel)))
  "Returns string type for a message object of type 'JacoFingerVel"
  "wpi_jaco_msgs/JacoFingerVel")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<JacoFingerVel>)))
  "Returns md5sum for a message object of type '<JacoFingerVel>"
  "a931e1014161865b6137e2ee19991131")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'JacoFingerVel)))
  "Returns md5sum for a message object of type 'JacoFingerVel"
  "a931e1014161865b6137e2ee19991131")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<JacoFingerVel>)))
  "Returns full string definition for message of type '<JacoFingerVel>"
  (cl:format cl:nil "float32 finger1Vel  # velocity for thumb~%float32 finger2Vel  # velocity for top finger~%float32 finger3Vel  # velocity for bottom finger~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'JacoFingerVel)))
  "Returns full string definition for message of type 'JacoFingerVel"
  (cl:format cl:nil "float32 finger1Vel  # velocity for thumb~%float32 finger2Vel  # velocity for top finger~%float32 finger3Vel  # velocity for bottom finger~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <JacoFingerVel>))
  (cl:+ 0
     4
     4
     4
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <JacoFingerVel>))
  "Converts a ROS message object to a list"
  (cl:list 'JacoFingerVel
    (cl:cons ':finger1Vel (finger1Vel msg))
    (cl:cons ':finger2Vel (finger2Vel msg))
    (cl:cons ':finger3Vel (finger3Vel msg))
))
