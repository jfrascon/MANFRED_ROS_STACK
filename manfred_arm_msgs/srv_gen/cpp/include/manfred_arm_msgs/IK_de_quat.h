/* Auto-generated by genmsg_cpp for file /home/disa1301/Documents/Codigo/Manfred/ros/manfred_arm_msgs/srv/IK_de_quat.srv */
#ifndef MANFRED_ARM_MSGS_SERVICE_IK_DE_QUAT_H
#define MANFRED_ARM_MSGS_SERVICE_IK_DE_QUAT_H
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

#include "ros/service_traits.h"

#include "sensor_msgs/JointState.h"
#include "geometry_msgs/Point32.h"
#include "geometry_msgs/Quaternion.h"


#include "sensor_msgs/JointState.h"

namespace manfred_arm_msgs
{
template <class ContainerAllocator>
struct IK_de_quatRequest_ {
  typedef IK_de_quatRequest_<ContainerAllocator> Type;

  IK_de_quatRequest_()
  : joint_state()
  , goal_posic()
  , goal_quat()
  {
  }

  IK_de_quatRequest_(const ContainerAllocator& _alloc)
  : joint_state(_alloc)
  , goal_posic(_alloc)
  , goal_quat(_alloc)
  {
  }

  typedef  ::sensor_msgs::JointState_<ContainerAllocator>  _joint_state_type;
   ::sensor_msgs::JointState_<ContainerAllocator>  joint_state;

  typedef  ::geometry_msgs::Point32_<ContainerAllocator>  _goal_posic_type;
   ::geometry_msgs::Point32_<ContainerAllocator>  goal_posic;

  typedef  ::geometry_msgs::Quaternion_<ContainerAllocator>  _goal_quat_type;
   ::geometry_msgs::Quaternion_<ContainerAllocator>  goal_quat;


  typedef boost::shared_ptr< ::manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct IK_de_quatRequest
typedef  ::manfred_arm_msgs::IK_de_quatRequest_<std::allocator<void> > IK_de_quatRequest;

typedef boost::shared_ptr< ::manfred_arm_msgs::IK_de_quatRequest> IK_de_quatRequestPtr;
typedef boost::shared_ptr< ::manfred_arm_msgs::IK_de_quatRequest const> IK_de_quatRequestConstPtr;


template <class ContainerAllocator>
struct IK_de_quatResponse_ {
  typedef IK_de_quatResponse_<ContainerAllocator> Type;

  IK_de_quatResponse_()
  : joint_state()
  , error_code(0)
  {
  }

  IK_de_quatResponse_(const ContainerAllocator& _alloc)
  : joint_state(_alloc)
  , error_code(0)
  {
  }

  typedef  ::sensor_msgs::JointState_<ContainerAllocator>  _joint_state_type;
   ::sensor_msgs::JointState_<ContainerAllocator>  joint_state;

  typedef int64_t _error_code_type;
  int64_t error_code;


  typedef boost::shared_ptr< ::manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct IK_de_quatResponse
typedef  ::manfred_arm_msgs::IK_de_quatResponse_<std::allocator<void> > IK_de_quatResponse;

typedef boost::shared_ptr< ::manfred_arm_msgs::IK_de_quatResponse> IK_de_quatResponsePtr;
typedef boost::shared_ptr< ::manfred_arm_msgs::IK_de_quatResponse const> IK_de_quatResponseConstPtr;

struct IK_de_quat
{

typedef IK_de_quatRequest Request;
typedef IK_de_quatResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct IK_de_quat
} // namespace manfred_arm_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "e945210c3599cc77e16c481fde7892ed";
  }

  static const char* value(const  ::manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xe945210c3599cc77ULL;
  static const uint64_t static_value2 = 0xe16c481fde7892edULL;
};

template<class ContainerAllocator>
struct DataType< ::manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manfred_arm_msgs/IK_de_quatRequest";
  }

  static const char* value(const  ::manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
sensor_msgs/JointState joint_state\n\
\n\
\n\
geometry_msgs/Point32 goal_posic\n\
geometry_msgs/Quaternion goal_quat\n\
\n\
\n\
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
MSG: geometry_msgs/Quaternion\n\
# This represents an orientation in free space in quaternion form.\n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
float64 w\n\
\n\
";
  }

  static const char* value(const  ::manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "f4bdee3e3858d66a1df599b51bb85a7a";
  }

  static const char* value(const  ::manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xf4bdee3e3858d66aULL;
  static const uint64_t static_value2 = 0x1df599b51bb85a7aULL;
};

template<class ContainerAllocator>
struct DataType< ::manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manfred_arm_msgs/IK_de_quatResponse";
  }

  static const char* value(const  ::manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
sensor_msgs/JointState joint_state\n\
\n\
int64 error_code\n\
\n\
\n\
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
";
  }

  static const char* value(const  ::manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.joint_state);
    stream.next(m.goal_posic);
    stream.next(m.goal_quat);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct IK_de_quatRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.joint_state);
    stream.next(m.error_code);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct IK_de_quatResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<manfred_arm_msgs::IK_de_quat> {
  static const char* value() 
  {
    return "c9e231805aca89efded59e5284014ced";
  }

  static const char* value(const manfred_arm_msgs::IK_de_quat&) { return value(); } 
};

template<>
struct DataType<manfred_arm_msgs::IK_de_quat> {
  static const char* value() 
  {
    return "manfred_arm_msgs/IK_de_quat";
  }

  static const char* value(const manfred_arm_msgs::IK_de_quat&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c9e231805aca89efded59e5284014ced";
  }

  static const char* value(const manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manfred_arm_msgs/IK_de_quat";
  }

  static const char* value(const manfred_arm_msgs::IK_de_quatRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "c9e231805aca89efded59e5284014ced";
  }

  static const char* value(const manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manfred_arm_msgs/IK_de_quat";
  }

  static const char* value(const manfred_arm_msgs::IK_de_quatResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // MANFRED_ARM_MSGS_SERVICE_IK_DE_QUAT_H
