// Generated by gencpp from file wpi_jaco_msgs/AngularCommand.msg
// DO NOT EDIT!


#ifndef WPI_JACO_MSGS_MESSAGE_ANGULARCOMMAND_H
#define WPI_JACO_MSGS_MESSAGE_ANGULARCOMMAND_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace wpi_jaco_msgs
{
template <class ContainerAllocator>
struct AngularCommand_
{
  typedef AngularCommand_<ContainerAllocator> Type;

  AngularCommand_()
    : position(false)
    , armCommand(false)
    , fingerCommand(false)
    , repeat(false)
    , joints()
    , fingers()  {
    }
  AngularCommand_(const ContainerAllocator& _alloc)
    : position(false)
    , armCommand(false)
    , fingerCommand(false)
    , repeat(false)
    , joints(_alloc)
    , fingers(_alloc)  {
    }



   typedef uint8_t _position_type;
  _position_type position;

   typedef uint8_t _armCommand_type;
  _armCommand_type armCommand;

   typedef uint8_t _fingerCommand_type;
  _fingerCommand_type fingerCommand;

   typedef uint8_t _repeat_type;
  _repeat_type repeat;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _joints_type;
  _joints_type joints;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _fingers_type;
  _fingers_type fingers;




  typedef boost::shared_ptr< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> const> ConstPtr;

}; // struct AngularCommand_

typedef ::wpi_jaco_msgs::AngularCommand_<std::allocator<void> > AngularCommand;

typedef boost::shared_ptr< ::wpi_jaco_msgs::AngularCommand > AngularCommandPtr;
typedef boost::shared_ptr< ::wpi_jaco_msgs::AngularCommand const> AngularCommandConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace wpi_jaco_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'wpi_jaco_msgs': ['/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src/wpi_jaco_msgs/msg', '/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/share/wpi_jaco_msgs/msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f29b6dabb764f8caf0ebba4c1ef528d8";
  }

  static const char* value(const ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf29b6dabb764f8caULL;
  static const uint64_t static_value2 = 0xf0ebba4c1ef528d8ULL;
};

template<class ContainerAllocator>
struct DataType< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wpi_jaco_msgs/AngularCommand";
  }

  static const char* value(const ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool position       # true for a position command, false for a velocity command\n\
bool armCommand     # true if this command includes arm joint inputs\n\
bool fingerCommand  # true if this command includes finger inputs\n\
bool repeat         # true if the command should be repeatedly sent over a short interval\n\
float32[] joints    # position (rad) or velocity (rad/s) arm command\n\
float32[] fingers   # position (rad) or velocity (rad/s) finger command\n\
";
  }

  static const char* value(const ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.armCommand);
      stream.next(m.fingerCommand);
      stream.next(m.repeat);
      stream.next(m.joints);
      stream.next(m.fingers);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct AngularCommand_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wpi_jaco_msgs::AngularCommand_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.position);
    s << indent << "armCommand: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.armCommand);
    s << indent << "fingerCommand: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.fingerCommand);
    s << indent << "repeat: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.repeat);
    s << indent << "joints[]" << std::endl;
    for (size_t i = 0; i < v.joints.size(); ++i)
    {
      s << indent << "  joints[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.joints[i]);
    }
    s << indent << "fingers[]" << std::endl;
    for (size_t i = 0; i < v.fingers.size(); ++i)
    {
      s << indent << "  fingers[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.fingers[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // WPI_JACO_MSGS_MESSAGE_ANGULARCOMMAND_H