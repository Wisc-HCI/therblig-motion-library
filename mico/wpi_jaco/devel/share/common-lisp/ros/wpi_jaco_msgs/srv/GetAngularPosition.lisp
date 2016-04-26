; Auto-generated. Do not edit!


(cl:in-package wpi_jaco_msgs-srv)


;//! \htmlinclude GetAngularPosition-request.msg.html

(cl:defclass <GetAngularPosition-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass GetAngularPosition-request (<GetAngularPosition-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetAngularPosition-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetAngularPosition-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-srv:<GetAngularPosition-request> is deprecated: use wpi_jaco_msgs-srv:GetAngularPosition-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetAngularPosition-request>) ostream)
  "Serializes a message object of type '<GetAngularPosition-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetAngularPosition-request>) istream)
  "Deserializes a message object of type '<GetAngularPosition-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetAngularPosition-request>)))
  "Returns string type for a service object of type '<GetAngularPosition-request>"
  "wpi_jaco_msgs/GetAngularPositionRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetAngularPosition-request)))
  "Returns string type for a service object of type 'GetAngularPosition-request"
  "wpi_jaco_msgs/GetAngularPositionRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetAngularPosition-request>)))
  "Returns md5sum for a message object of type '<GetAngularPosition-request>"
  "2ddbdf76cbefd59cd9a914780fdf2963")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetAngularPosition-request)))
  "Returns md5sum for a message object of type 'GetAngularPosition-request"
  "2ddbdf76cbefd59cd9a914780fdf2963")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetAngularPosition-request>)))
  "Returns full string definition for message of type '<GetAngularPosition-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetAngularPosition-request)))
  "Returns full string definition for message of type 'GetAngularPosition-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetAngularPosition-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetAngularPosition-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetAngularPosition-request
))
;//! \htmlinclude GetAngularPosition-response.msg.html

(cl:defclass <GetAngularPosition-response> (roslisp-msg-protocol:ros-message)
  ((pos
    :reader pos
    :initarg :pos
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass GetAngularPosition-response (<GetAngularPosition-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetAngularPosition-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetAngularPosition-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-srv:<GetAngularPosition-response> is deprecated: use wpi_jaco_msgs-srv:GetAngularPosition-response instead.")))

(cl:ensure-generic-function 'pos-val :lambda-list '(m))
(cl:defmethod pos-val ((m <GetAngularPosition-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:pos-val is deprecated.  Use wpi_jaco_msgs-srv:pos instead.")
  (pos m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetAngularPosition-response>) ostream)
  "Serializes a message object of type '<GetAngularPosition-response>"
  (cl:let ((__ros_arr_len (cl:length (cl:slot-value msg 'pos))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_arr_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_arr_len) ostream))
  (cl:map cl:nil #'(cl:lambda (ele) (cl:let ((bits (roslisp-utils:encode-single-float-bits ele)))
    (cl:write-byte (cl:ldb (cl:byte 8 0) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) bits) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) bits) ostream)))
   (cl:slot-value msg 'pos))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetAngularPosition-response>) istream)
  "Deserializes a message object of type '<GetAngularPosition-response>"
  (cl:let ((__ros_arr_len 0))
    (cl:setf (cl:ldb (cl:byte 8 0) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 8) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 16) __ros_arr_len) (cl:read-byte istream))
    (cl:setf (cl:ldb (cl:byte 8 24) __ros_arr_len) (cl:read-byte istream))
  (cl:setf (cl:slot-value msg 'pos) (cl:make-array __ros_arr_len))
  (cl:let ((vals (cl:slot-value msg 'pos)))
    (cl:dotimes (i __ros_arr_len)
    (cl:let ((bits 0))
      (cl:setf (cl:ldb (cl:byte 8 0) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) bits) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) bits) (cl:read-byte istream))
    (cl:setf (cl:aref vals i) (roslisp-utils:decode-single-float-bits bits))))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetAngularPosition-response>)))
  "Returns string type for a service object of type '<GetAngularPosition-response>"
  "wpi_jaco_msgs/GetAngularPositionResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetAngularPosition-response)))
  "Returns string type for a service object of type 'GetAngularPosition-response"
  "wpi_jaco_msgs/GetAngularPositionResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetAngularPosition-response>)))
  "Returns md5sum for a message object of type '<GetAngularPosition-response>"
  "2ddbdf76cbefd59cd9a914780fdf2963")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetAngularPosition-response)))
  "Returns md5sum for a message object of type 'GetAngularPosition-response"
  "2ddbdf76cbefd59cd9a914780fdf2963")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetAngularPosition-response>)))
  "Returns full string definition for message of type '<GetAngularPosition-response>"
  (cl:format cl:nil "float32[] pos~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetAngularPosition-response)))
  "Returns full string definition for message of type 'GetAngularPosition-response"
  (cl:format cl:nil "float32[] pos~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetAngularPosition-response>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'pos) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetAngularPosition-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetAngularPosition-response
    (cl:cons ':pos (pos msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetAngularPosition)))
  'GetAngularPosition-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetAngularPosition)))
  'GetAngularPosition-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetAngularPosition)))
  "Returns string type for a service object of type '<GetAngularPosition>"
  "wpi_jaco_msgs/GetAngularPosition")