; Auto-generated. Do not edit!


(cl:in-package wpi_jaco_msgs-srv)


;//! \htmlinclude JacoFK-request.msg.html

(cl:defclass <JacoFK-request> (roslisp-msg-protocol:ros-message)
  ((joints
    :reader joints
    :initarg :joints
    :type (cl:vector cl:float)
   :initform (cl:make-array 0 :element-type 'cl:float :initial-element 0.0)))
)

(cl:defclass JacoFK-request (<JacoFK-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <JacoFK-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'JacoFK-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-srv:<JacoFK-request> is deprecated: use wpi_jaco_msgs-srv:JacoFK-request instead.")))

(cl:ensure-generic-function 'joints-val :lambda-list '(m))
(cl:defmethod joints-val ((m <JacoFK-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:joints-val is deprecated.  Use wpi_jaco_msgs-srv:joints instead.")
  (joints m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <JacoFK-request>) ostream)
  "Serializes a message object of type '<JacoFK-request>"
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
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <JacoFK-request>) istream)
  "Deserializes a message object of type '<JacoFK-request>"
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
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<JacoFK-request>)))
  "Returns string type for a service object of type '<JacoFK-request>"
  "wpi_jaco_msgs/JacoFKRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'JacoFK-request)))
  "Returns string type for a service object of type 'JacoFK-request"
  "wpi_jaco_msgs/JacoFKRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<JacoFK-request>)))
  "Returns md5sum for a message object of type '<JacoFK-request>"
  "c50123dac67d739b4055eead59e5c12f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'JacoFK-request)))
  "Returns md5sum for a message object of type 'JacoFK-request"
  "c50123dac67d739b4055eead59e5c12f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<JacoFK-request>)))
  "Returns full string definition for message of type '<JacoFK-request>"
  (cl:format cl:nil "float32[] joints~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'JacoFK-request)))
  "Returns full string definition for message of type 'JacoFK-request"
  (cl:format cl:nil "float32[] joints~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <JacoFK-request>))
  (cl:+ 0
     4 (cl:reduce #'cl:+ (cl:slot-value msg 'joints) :key #'(cl:lambda (ele) (cl:declare (cl:ignorable ele)) (cl:+ 4)))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <JacoFK-request>))
  "Converts a ROS message object to a list"
  (cl:list 'JacoFK-request
    (cl:cons ':joints (joints msg))
))
;//! \htmlinclude JacoFK-response.msg.html

(cl:defclass <JacoFK-response> (roslisp-msg-protocol:ros-message)
  ((handPose
    :reader handPose
    :initarg :handPose
    :type geometry_msgs-msg:PoseStamped
    :initform (cl:make-instance 'geometry_msgs-msg:PoseStamped)))
)

(cl:defclass JacoFK-response (<JacoFK-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <JacoFK-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'JacoFK-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name wpi_jaco_msgs-srv:<JacoFK-response> is deprecated: use wpi_jaco_msgs-srv:JacoFK-response instead.")))

(cl:ensure-generic-function 'handPose-val :lambda-list '(m))
(cl:defmethod handPose-val ((m <JacoFK-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader wpi_jaco_msgs-srv:handPose-val is deprecated.  Use wpi_jaco_msgs-srv:handPose instead.")
  (handPose m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <JacoFK-response>) ostream)
  "Serializes a message object of type '<JacoFK-response>"
  (roslisp-msg-protocol:serialize (cl:slot-value msg 'handPose) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <JacoFK-response>) istream)
  "Deserializes a message object of type '<JacoFK-response>"
  (roslisp-msg-protocol:deserialize (cl:slot-value msg 'handPose) istream)
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<JacoFK-response>)))
  "Returns string type for a service object of type '<JacoFK-response>"
  "wpi_jaco_msgs/JacoFKResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'JacoFK-response)))
  "Returns string type for a service object of type 'JacoFK-response"
  "wpi_jaco_msgs/JacoFKResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<JacoFK-response>)))
  "Returns md5sum for a message object of type '<JacoFK-response>"
  "c50123dac67d739b4055eead59e5c12f")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'JacoFK-response)))
  "Returns md5sum for a message object of type 'JacoFK-response"
  "c50123dac67d739b4055eead59e5c12f")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<JacoFK-response>)))
  "Returns full string definition for message of type '<JacoFK-response>"
  (cl:format cl:nil "geometry_msgs/PoseStamped handPose~%~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of postion and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'JacoFK-response)))
  "Returns full string definition for message of type 'JacoFK-response"
  (cl:format cl:nil "geometry_msgs/PoseStamped handPose~%~%~%================================================================================~%MSG: geometry_msgs/PoseStamped~%# A Pose with reference coordinate frame and timestamp~%Header header~%Pose pose~%~%================================================================================~%MSG: std_msgs/Header~%# Standard metadata for higher-level stamped data types.~%# This is generally used to communicate timestamped data ~%# in a particular coordinate frame.~%# ~%# sequence ID: consecutively increasing ID ~%uint32 seq~%#Two-integer timestamp that is expressed as:~%# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')~%# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')~%# time-handling sugar is provided by the client library~%time stamp~%#Frame this data is associated with~%# 0: no frame~%# 1: global frame~%string frame_id~%~%================================================================================~%MSG: geometry_msgs/Pose~%# A representation of pose in free space, composed of postion and orientation. ~%Point position~%Quaternion orientation~%~%================================================================================~%MSG: geometry_msgs/Point~%# This contains the position of a point in free space~%float64 x~%float64 y~%float64 z~%~%================================================================================~%MSG: geometry_msgs/Quaternion~%# This represents an orientation in free space in quaternion form.~%~%float64 x~%float64 y~%float64 z~%float64 w~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <JacoFK-response>))
  (cl:+ 0
     (roslisp-msg-protocol:serialization-length (cl:slot-value msg 'handPose))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <JacoFK-response>))
  "Converts a ROS message object to a list"
  (cl:list 'JacoFK-response
    (cl:cons ':handPose (handPose msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'JacoFK)))
  'JacoFK-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'JacoFK)))
  'JacoFK-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'JacoFK)))
  "Returns string type for a service object of type '<JacoFK>"
  "wpi_jaco_msgs/JacoFK")