; Auto-generated. Do not edit!


(cl:in-package wpi_jaco_msgs-srv)


;//! \htmlinclude GetCartesianPosition-request.msg.html

(cl:defclass <GetCartesianPosition-request> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass GetCartesianPosition-request (<GetCartesianPosition-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetCartesianPosition-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetCartesianPosition-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-srv:<GetCartesianPosition-request> is deprecated: use wpi_jaco_msgs-srv:GetCartesianPosition-request instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetCartesianPosition-request>) ostream)
  "Serializes a message object of type '<GetCartesianPosition-request>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetCartesianPosition-request>) istream)
  "Deserializes a message object of type '<GetCartesianPosition-request>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetCartesianPosition-request>)))
  "Returns string type for a service object of type '<GetCartesianPosition-request>"
  "wpi_jaco_msgs/GetCartesianPositionRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetCartesianPosition-request)))
  "Returns string type for a service object of type 'GetCartesianPosition-request"
  "wpi_jaco_msgs/GetCartesianPositionRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetCartesianPosition-request>)))
  "Returns md5sum for a message object of type '<GetCartesianPosition-request>"
  "90eff4f5bd7896007c2525f114434660")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetCartesianPosition-request)))
  "Returns md5sum for a message object of type 'GetCartesianPosition-request"
  "90eff4f5bd7896007c2525f114434660")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetCartesianPosition-request>)))
  "Returns full string definition for message of type '<GetCartesianPosition-request>"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetCartesianPosition-request)))
  "Returns full string definition for message of type 'GetCartesianPosition-request"
  (cl:format cl:nil "~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetCartesianPosition-request>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetCartesianPosition-request>))
  "Converts a ROS message object to a list"
  (cl:list 'GetCartesianPosition-request
))
;//! \htmlinclude GetCartesianPosition-response.msg.html

(cl:defclass <GetCartesianPosition-response> (roslisp-msg-protocol:ros-message)
  ((pos
    :reader pos
    :initarg :pos
    :type geometry_msgs-msg:Twist
    :initform (cl:make-instance 'geometry_msgs-msg:Twist)))
)

(cl:defclass GetCartesianPosition-response (<GetCartesianPosition-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <GetCartesianPosition-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'GetCartesianPosition-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-srv:<GetCartesianPosition-response> is deprecated: use wpi_jaco_msgs-srv:GetCartesianPosition-response instead.")))

(cl:ensure-generic-function 'pos-val :lambda-list '(m))
(cl:defmethod pos-val ((m <GetCartesianPosition-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:pos-val is deprecated.  Use wpi_jaco_msgs-srv:pos instead.")
  (pos m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <GetCartesianPosition-response>) ostream)
  "Serializes a message object of type '<GetCartesianPosition-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'pos) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <GetCartesianPosition-response>) istream)
  "Deserializes a message object of type '<GetCartesianPosition-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'pos) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<GetCartesianPosition-response>)))
  "Returns string type for a service object of type '<GetCartesianPosition-response>"
  "wpi_jaco_msgs/GetCartesianPositionResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetCartesianPosition-response)))
  "Returns string type for a service object of type 'GetCartesianPosition-response"
  "wpi_jaco_msgs/GetCartesianPositionResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<GetCartesianPosition-response>)))
  "Returns md5sum for a message object of type '<GetCartesianPosition-response>"
  "90eff4f5bd7896007c2525f114434660")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'GetCartesianPosition-response)))
  "Returns md5sum for a message object of type 'GetCartesianPosition-response"
  "90eff4f5bd7896007c2525f114434660")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<GetCartesianPosition-response>)))
  "Returns full string definition for message of type '<GetCartesianPosition-response>"
  (cl:format cl:nil "geometry_msgs/Twist pos~%~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'GetCartesianPosition-response)))
  "Returns full string definition for message of type 'GetCartesianPosition-response"
  (cl:format cl:nil "geometry_msgs/Twist pos~%~%~%================================================================================~%MSG: geometry_msgs/Twist~%# This expresses velocity in free space broken into its linear and angular parts.~%Vector3  linear~%Vector3  angular~%~%================================================================================~%MSG: geometry_msgs/Vector3~%# This represents a vector in free space. ~%~%float64 x~%float64 y~%float64 z~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <GetCartesianPosition-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'pos))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <GetCartesianPosition-response>))
  "Converts a ROS message object to a list"
  (cl:list 'GetCartesianPosition-response
    (cl:cons ':pos (pos msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'GetCartesianPosition)))
  'GetCartesianPosition-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'GetCartesianPosition)))
  'GetCartesianPosition-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'GetCartesianPosition)))
  "Returns string type for a service object of type '<GetCartesianPosition>"
  "wpi_jaco_msgs/GetCartesianPosition")