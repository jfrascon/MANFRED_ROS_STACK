/* Auto-generated by genmsg_cpp for file /home/disa1301/Documents/Codigo/Manfred/ros/manfred_arm_msgs/msg/LocalizacionEvolucionDiferencialFeedback.msg */
#ifndef MANFRED_ARM_MSGS_MESSAGE_LOCALIZACIONEVOLUCIONDIFERENCIALFEEDBACK_H
#define MANFRED_ARM_MSGS_MESSAGE_LOCALIZACIONEVOLUCIONDIFERENCIALFEEDBACK_H
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


namespace manfred_arm_msgs
{
template <class ContainerAllocator>
struct LocalizacionEvolucionDiferencialFeedback_ {
  typedef LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> Type;

  LocalizacionEvolucionDiferencialFeedback_()
  : dummyFlagFeedback(false)
  {
  }

  LocalizacionEvolucionDiferencialFeedback_(const ContainerAllocator& _alloc)
  : dummyFlagFeedback(false)
  {
  }

  typedef uint8_t _dummyFlagFeedback_type;
  uint8_t dummyFlagFeedback;


  typedef boost::shared_ptr< ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct LocalizacionEvolucionDiferencialFeedback
typedef  ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<std::allocator<void> > LocalizacionEvolucionDiferencialFeedback;

typedef boost::shared_ptr< ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback> LocalizacionEvolucionDiferencialFeedbackPtr;
typedef boost::shared_ptr< ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback const> LocalizacionEvolucionDiferencialFeedbackConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace manfred_arm_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "de60e3150c6ea2eb60ae39cab8f8fa1b";
  }

  static const char* value(const  ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xde60e3150c6ea2ebULL;
  static const uint64_t static_value2 = 0x60ae39cab8f8fa1bULL;
};

template<class ContainerAllocator>
struct DataType< ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "manfred_arm_msgs/LocalizacionEvolucionDiferencialFeedback";
  }

  static const char* value(const  ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n\
#feedback\n\
bool dummyFlagFeedback\n\
\n\
\n\
";
  }

  static const char* value(const  ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.dummyFlagFeedback);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct LocalizacionEvolucionDiferencialFeedback_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::manfred_arm_msgs::LocalizacionEvolucionDiferencialFeedback_<ContainerAllocator> & v) 
  {
    s << indent << "dummyFlagFeedback: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.dummyFlagFeedback);
  }
};


} // namespace message_operations
} // namespace ros

#endif // MANFRED_ARM_MSGS_MESSAGE_LOCALIZACIONEVOLUCIONDIFERENCIALFEEDBACK_H
