; Auto-generated. Do not edit!


(cl:in-package wpi_jaco_msgs-srv)


;//! \htmlinclude EStop-request.msg.html

(cl:defclass <EStop-request> (roslisp-msg-protocol:ros-message)
  ((enableEStop
    :reader enableEStop
    :initarg :enableEStop
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass EStop-request (<EStop-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EStop-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EStop-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-srv:<EStop-request> is deprecated: use wpi_jaco_msgs-srv:EStop-request instead.")))

(cl:ensure-generic-function 'enableEStop-val :lambda-list '(m))
(cl:defmethod enableEStop-val ((m <EStop-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:enableEStop-val is deprecated.  Use wpi_jaco_msgs-srv:enableEStop instead.")
  (enableEStop m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EStop-request>) ostream)
  "Serializes a message object of type '<EStop-request>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'enableEStop) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EStop-request>) istream)
  "Deserializes a message object of type '<EStop-request>"
    (cl:setf (cl:slot-value msg 'enableEStop) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EStop-request>)))
  "Returns string type for a service object of type '<EStop-request>"
  "wpi_jaco_msgs/EStopRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EStop-request)))
  "Returns string type for a service object of type 'EStop-request"
  "wpi_jaco_msgs/EStopRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EStop-request>)))
  "Returns md5sum for a message object of type '<EStop-request>"
  "41f7cecff29b7a7b77475ec005e19010")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EStop-request)))
  "Returns md5sum for a message object of type 'EStop-request"
  "41f7cecff29b7a7b77475ec005e19010")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EStop-request>)))
  "Returns full string definition for message of type '<EStop-request>"
  (cl:format cl:nil "bool enableEStop~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EStop-request)))
  "Returns full string definition for message of type 'EStop-request"
  (cl:format cl:nil "bool enableEStop~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EStop-request>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EStop-request>))
  "Converts a ROS message object to a list"
  (cl:list 'EStop-request
    (cl:cons ':enableEStop (enableEStop msg))
))
;//! \htmlinclude EStop-response.msg.html

(cl:defclass <EStop-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass EStop-response (<EStop-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <EStop-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'EStop-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-srv:<EStop-response> is deprecated: use wpi_jaco_msgs-srv:EStop-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <EStop-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:success-val is deprecated.  Use wpi_jaco_msgs-srv:success instead.")
  (success m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <EStop-response>) ostream)
  "Serializes a message object of type '<EStop-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <EStop-response>) istream)
  "Deserializes a message object of type '<EStop-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<EStop-response>)))
  "Returns string type for a service object of type '<EStop-response>"
  "wpi_jaco_msgs/EStopResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EStop-response)))
  "Returns string type for a service object of type 'EStop-response"
  "wpi_jaco_msgs/EStopResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<EStop-response>)))
  "Returns md5sum for a message object of type '<EStop-response>"
  "41f7cecff29b7a7b77475ec005e19010")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'EStop-response)))
  "Returns md5sum for a message object of type 'EStop-response"
  "41f7cecff29b7a7b77475ec005e19010")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<EStop-response>)))
  "Returns full string definition for message of type '<EStop-response>"
  (cl:format cl:nil "bool success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'EStop-response)))
  "Returns full string definition for message of type 'EStop-response"
  (cl:format cl:nil "bool success~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <EStop-response>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <EStop-response>))
  "Converts a ROS message object to a list"
  (cl:list 'EStop-response
    (cl:cons ':success (success msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'EStop)))
  'EStop-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'EStop)))
  'EStop-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'EStop)))
  "Returns string type for a service object of type '<EStop>"
  "wpi_jaco_msgs/EStop")