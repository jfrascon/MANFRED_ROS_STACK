; Auto-generated. Do not edit!


(cl:in-package manfred_arm_msgs-msg)


;//! \htmlinclude LocalizacionEvolucionDiferencialFeedback.msg.html

(cl:defclass <LocalizacionEvolucionDiferencialFeedback> (roslisp-msg-protocol:ros-message)
  ((dummyFlagFeedback
    :reader dummyFlagFeedback
    :initarg :dummyFlagFeedback
    :type cl:boolean
    :initform cl:nil))
)

(cl:defclass LocalizacionEvolucionDiferencialFeedback (<LocalizacionEvolucionDiferencialFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <LocalizacionEvolucionDiferencialFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'LocalizacionEvolucionDiferencialFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name manfred_arm_msgs-msg:<LocalizacionEvolucionDiferencialFeedback> is deprecated: use manfred_arm_msgs-msg:LocalizacionEvolucionDiferencialFeedback instead.")))

(cl:ensure-generic-function 'dummyFlagFeedback-val :lambda-list '(m))
(cl:defmethod dummyFlagFeedback-val ((m <LocalizacionEvolucionDiferencialFeedback>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader manfred_arm_msgs-msg:dummyFlagFeedback-val is deprecated.  Use manfred_arm_msgs-msg:dummyFlagFeedback instead.")
  (dummyFlagFeedback m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <LocalizacionEvolucionDiferencialFeedback>) ostream)
  "Serializes a message object of type '<LocalizacionEvolucionDiferencialFeedback>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'dummyFlagFeedback) 1 0)) ostream)
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <LocalizacionEvolucionDiferencialFeedback>) istream)
  "Deserializes a message object of type '<LocalizacionEvolucionDiferencialFeedback>"
    (cl:setf (cl:slot-value msg 'dummyFlagFeedback) (cl:not (cl:zerop (cl:read-byte istream))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<LocalizacionEvolucionDiferencialFeedback>)))
  "Returns string type for a message object of type '<LocalizacionEvolucionDiferencialFeedback>"
  "manfred_arm_msgs/LocalizacionEvolucionDiferencialFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'LocalizacionEvolucionDiferencialFeedback)))
  "Returns string type for a message object of type 'LocalizacionEvolucionDiferencialFeedback"
  "manfred_arm_msgs/LocalizacionEvolucionDiferencialFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<LocalizacionEvolucionDiferencialFeedback>)))
  "Returns md5sum for a message object of type '<LocalizacionEvolucionDiferencialFeedback>"
  "de60e3150c6ea2eb60ae39cab8f8fa1b")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'LocalizacionEvolucionDiferencialFeedback)))
  "Returns md5sum for a message object of type 'LocalizacionEvolucionDiferencialFeedback"
  "de60e3150c6ea2eb60ae39cab8f8fa1b")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<LocalizacionEvolucionDiferencialFeedback>)))
  "Returns full string definition for message of type '<LocalizacionEvolucionDiferencialFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%bool dummyFlagFeedback~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'LocalizacionEvolucionDiferencialFeedback)))
  "Returns full string definition for message of type 'LocalizacionEvolucionDiferencialFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%#feedback~%bool dummyFlagFeedback~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <LocalizacionEvolucionDiferencialFeedback>))
  (cl:+ 0
     1
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <LocalizacionEvolucionDiferencialFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'LocalizacionEvolucionDiferencialFeedback
    (cl:cons ':dummyFlagFeedback (dummyFlagFeedback msg))
))
