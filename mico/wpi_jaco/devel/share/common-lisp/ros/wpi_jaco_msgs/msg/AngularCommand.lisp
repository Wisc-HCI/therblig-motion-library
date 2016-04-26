; Auto-generated. Do not edit!


(cl:in-package wpi_jaco_msgs-msg)


;//! \htmlinclude AngularCommand.msg.html

(cl:defclass <AngularCommand> (roslisp-msg-protocol:ros-message)
  ((position
    :reader position
    :initarg :position
    :type cl:boolean
    :initform cl:nil)
   (armCommand
    :reader armCommand
    :initarg :armCommand
    :type cl:boolean
    :initform cl:nil)
   (fingerCommand
    :reader fingerCommand
    :initarg :fingerCommand
    :type cl:boolean
    :initform cl:nil)
   (repeat
    :reader repeat
    :initarg :repeat
    :type cl:boolean
    :initform cl:nil)
   (joints
    :reader joints
    :initarg :joints
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0))
   (fingers
    :reader fingers
    :initarg :fingers
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass AngularCommand (<AngularCommand>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <AngularCommand>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'AngularCommand)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-msg:<AngularCommand> is deprecated: use wpi_jaco_msgs-msg:AngularCommand instead.")))

(cl:ensure-generic-function 'position-val :lambda-list '(m))
(cl:defmethod position-val ((m <AngularCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-msg:position-val is deprecated.  Use wpi_jaco_msgs-msg:position instead.")
  (position m))

(cl:ensure-generic-function 'armCommand-val :lambda-list '(m))
(cl:defmethod armCommand-val ((m <AngularCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-msg:armCommand-val is deprecated.  Use wpi_jaco_msgs-msg:armCommand instead.")
  (armCommand m))

(cl:ensure-generic-function 'fingerCommand-val :lambda-list '(m))
(cl:defmethod fingerCommand-val ((m <AngularCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-msg:fingerCommand-val is deprecated.  Use wpi_jaco_msgs-msg:fingerCommand instead.")
  (fingerCommand m))

(cl:ensure-generic-function 'repeat-val :lambda-list '(m))
(cl:defmethod repeat-val ((m <AngularCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-msg:repeat-val is deprecated.  Use wpi_jaco_msgs-msg:repeat instead.")
  (repeat m))

(cl:ensure-generic-function 'joints-val :lambda-list '(m))
(cl:defmethod joints-val ((m <AngularCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-msg:joints-val is deprecated.  Use wpi_jaco_msgs-msg:joints instead.")
  (joints m))

(cl:ensure-generic-function 'fingers-val :lambda-list '(m))
(cl:defmethod fingers-val ((m <AngularCommand>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-msg:fingers-val is deprecated.  Use wpi_jaco_msgs-msg:fingers instead.")
  (fingers m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <AngularCommand>) ostream)
  "Serializes a message object of type '<AngularCommand>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'position) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'armCommand) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'fingerCommand) 1 0)) ostream)
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'repeat) 1 0)) ostream)
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'joints))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'joints))
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'fingers))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'fingers))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <AngularCommand>) istream)
  "Deserializes a message object of type '<AngularCommand>"
    (cl:setf (cl:slot-value msg 'position) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'armCommand) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'fingerCommand) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:setf (cl:slot-value msg 'repeat) (cl:not (cl:zerop (cl:read-byte istream))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'joints) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'joints)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'fingers) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'fingers)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<AngularCommand>)))
  "Returns string type for a message object of type '<AngularCommand>"
  "wpi_jaco_msgs/AngularCommand")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'AngularCommand)))
  "Returns string type for a message object of type 'AngularCommand"
  "wpi_jaco_msgs/AngularCommand")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<AngularCommand>)))
  "Returns md5sum for a message object of type '<AngularCommand>"
  "f29b6dabb764f8caf0ebba4c1ef528d8")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'AngularCommand)))
  "Returns md5sum for a message object of type 'AngularCommand"
  "f29b6dabb764f8caf0ebba4c1ef528d8")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<AngularCommand>)))
  "Returns full string definition for message of type '<AngularCommand>"
  (cl:format cl:nil "bool position       # true for a position command, false for a velocity command~%bool armCommand     # true if this command includes arm joint inputs~%bool fingerCommand  # true if this command includes finger inputs~%bool repeat         # true if the command should be repeatedly sent over a short interval~%float32[] joints    # position (rad) or velocity (rad/s) arm command~%float32[] fingers   # position (rad) or velocity (rad/s) finger command~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'AngularCommand)))
  "Returns full string definition for message of type 'AngularCommand"
  (cl:format cl:nil "bool position       # true for a position command, false for a velocity command~%bool armCommand     # true if this command includes arm joint inputs~%bool fingerCommand  # true if this command includes finger inputs~%bool repeat         # true if the command should be repeatedly sent over a short interval~%float32[] joints    # position (rad) or velocity (rad/s) arm command~%float32[] fingers   # position (rad) or velocity (rad/s) finger command~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <AngularCommand>))
  (cl:+ 0
     1
     1
     1
     1
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'joints) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'fingers) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <AngularCommand>))
  "Converts a ROS message object to a list"
  (cl:list 'AngularCommand
    (cl:cons ':position (position msg))
    (cl:cons ':armCommand (armCommand msg))
    (cl:cons ':fingerCommand (fingerCommand msg))
    (cl:cons ':repeat (repeat msg))
    (cl:cons ':joints (joints msg))
    (cl:cons ':fingers (fingers msg))
))
