/* Auto-generated by genmsg_cpp for file /home/disa1301/Documents/Codigo/Manfred/ros/manfred_arm_msgs/msg/ControlMoveArmActionFeedback.msg */
#ifndef MANFRED_ARM_MSGS_MESSAGE_CONTROLMOVEARMACTIONFEEDBACK_H
#define MANFRED_ARM_MSGS_MESSAGE_CONTROLMOVEARMACTIONFEEDBACK_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "std_msgs/Header.h"
#include "actionlib_msgs/GoalStatus.h"
#include "manfred_arm_msgs/ControlMoveArmFeedback.h"

namespace manfred_arm_msgs
{
template <class ContainerAllocator>
struct ControlMoveArmActionFeedback_ {
  typedef ControlMoveArmActionFeedback_<ContainerAllocator> Type;

  ControlMoveArmActionFeedback_()
  : header()
  , status()
  , feedback()
  {
  }

  ControlMoveArmActionFeedback_(const ContainerAllocator& _alloc)
  : header(_alloc)
  , status(_alloc)
  , feedback(_alloc)
  {
  }

  typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
   ::std_msgs::Header_<ContainerAllocator>  header;

  typedef  ::actionlib_msgs::GoalStatus_<ContainerAllocator>  _status_type;
   ::actionlib_msgs::GoalStatus_<ContainerAllocator>  status;

  typedef  ::manfred_arm_msgs::ControlMoveArmFeedback_<ContainerAllocator>  _feedback_type;
   ::manfred_arm_msgs::ControlMoveArmFeedback_<ContainerAllocator>  feedback;


  typedef boost::shared_ptr< ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct ControlMoveArmActionFeedback
typedef  ::manfred_arm_msgs::ControlMoveArmActionFeedback_<std::allocator<void> > ControlMoveArmActionFeedback;

typedef boost::shared_ptr< ::manfred_arm_msgs::ControlMoveArmActionFeedback> ControlMoveArmActionFeedbackPtr;
typedef boost::shared_ptr< ::manfred_arm_msgs::ControlMoveArmActionFeedback const> ControlMoveArmActionFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace manfred_arm_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "fef70dac7f85a70e5f2509f70f6cfde8";
  }

  static const char* value(const  ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xfef70dac7f85a70eULL;
  static const uint64_t static_value2 = 0x5f2509f70f6cfde8ULL;
};

template<class ContainerAllocator>
struct DataType< ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manfred_arm_msgs/ControlMoveArmActionFeedback";
  }

  static const char* value(const  ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
\n\
Header header\n\
actionlib_msgs/GoalStatus status\n\
ControlMoveArmFeedback feedback\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalStatus\n\
GoalID goal_id\n\
uint8 status\n\
uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n\
uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n\
uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n\
                            #   and has since completed its execution (Terminal State)\n\
uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n\
uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n\
                            #    to some failure (Terminal State)\n\
uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n\
                            #    because the goal was unattainable or invalid (Terminal State)\n\
uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n\
                            #    and has not yet completed execution\n\
uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n\
                            #    but the action server has not yet confirmed that the goal is canceled\n\
uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n\
                            #    and was successfully cancelled (Terminal State)\n\
uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n\
                            #    sent over the wire by an action server\n\
\n\
#Allow for the user to associate a string with GoalStatus for debugging\n\
string text\n\
\n\
\n\
================================================================================\n\
MSG: actionlib_msgs/GoalID\n\
# The stamp should store the time at which this goal was requested.\n\
# It is used by an action server when it tries to preempt all\n\
# goals that were requested before a certain time\n\
time stamp\n\
\n\
# The id provides a way to associate feedback and\n\
# result message with specific goal requests. The id\n\
# specified must be unique.\n\
string id\n\
\n\
\n\
================================================================================\n\
MSG: manfred_arm_msgs/ControlMoveArmFeedback\n\
# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
#Header header\n\
actionlib_msgs/GoalStatus feedbackStatus\n\
geometry_msgs/Point32 posic_goal\n\
geometry_msgs/Vector3 rpy_goal\n\
geometry_msgs/Point32 posic_actual\n\
geometry_msgs/Vector3 rpy_actual\n\
#Permite indicar si hay que tener en cuanta la orientación del efector final\n\
bool ori\n\
#Marca la última posición de una trayectoria\n\
bool ultimo\n\
#para simulacion\n\
sensor_msgs/JointState joint_state\n\
\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Point32\n\
# This contains the position of a point in free space(with 32 bits of precision).\n\
# It is recommeded to use Point wherever possible instead of Point32.  \n\
# \n\
# This recommendation is to promote interoperability.  \n\
#\n\
# This message is designed to take up less space when sending\n\
# lots of points at once, as in the case of a PointCloud.  \n\
\n\
float32 x\n\
float32 y\n\
float32 z\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
================================================================================\n\
MSG: sensor_msgs/JointState\n\
# This is a message that holds data to describe the state of a set of torque controlled joints. \n\
#\n\
# The state of each joint (revolute or prismatic) is defined by:\n\
#  * the position of the joint (rad or m),\n\
#  * the velocity of the joint (rad/s or m/s) and \n\
#  * the effort that is applied in the joint (Nm or N).\n\
#\n\
# Each joint is uniquely identified by its name\n\
# The header specifies the time at which the joint states were recorded. All the joint states\n\
# in one message have to be recorded at the same time.\n\
#\n\
# This message consists of a multiple arrays, one for each part of the joint state. \n\
# The goal is to make each of the fields optional. When e.g. your joints have no\n\
# effort associated with them, you can leave the effort array empty. \n\
#\n\
# All arrays in this message should have the same size, or be empty.\n\
# This is the only way to uniquely associate the joint name with the correct\n\
# states.\n\
\n\
\n\
Header header\n\
\n\
string[] name\n\
float64[] position\n\
float64[] velocity\n\
float64[] effort\n\
\n\
";
  }

  static const char* value(const  ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct HasHeader< ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct HasHeader< const ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.header);
    stream.next(m.status);
    stream.next(m.feedback);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct ControlMoveArmActionFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::manfred_arm_msgs::ControlMoveArmActionFeedback_<ContainerAllocator> & v) 
  {
    s << indent << "header: ";
s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
s << std::endl;
    Printer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "feedback: ";
s << std::endl;
    Printer< ::manfred_arm_msgs::ControlMoveArmFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.feedback);
  }
};


} // namespace message_operations
} // namespace ros

#endif // MANFRED_ARM_MSGS_MESSAGE_CONTROLMOVEARMACTIONFEEDBACK_H

