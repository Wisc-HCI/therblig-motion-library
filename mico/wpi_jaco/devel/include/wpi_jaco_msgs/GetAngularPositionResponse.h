// Generated by gencpp from file wpi_jaco_msgs/GetAngularPositionResponse.msg
// DO NOT EDIT!


#ifndef WPI_JACO_MSGS_MESSAGE_GETANGULARPOSITIONRESPONSE_H
#define WPI_JACO_MSGS_MESSAGE_GETANGULARPOSITIONRESPONSE_H


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
struct GetAngularPositionResponse_
{
  typedef GetAngularPositionResponse_<ContainerAllocator> Type;

  GetAngularPositionResponse_()
    : pos()  {
    }
  GetAngularPositionResponse_(const ContainerAllocator& _alloc)
    : pos(_alloc)  {
    }



   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _pos_type;
  _pos_type pos;




  typedef boost::shared_ptr< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetAngularPositionResponse_

typedef ::wpi_jaco_msgs::GetAngularPositionResponse_<std::allocator<void> > GetAngularPositionResponse;

typedef boost::shared_ptr< ::wpi_jaco_msgs::GetAngularPositionResponse > GetAngularPositionResponsePtr;
typedef boost::shared_ptr< ::wpi_jaco_msgs::GetAngularPositionResponse const> GetAngularPositionResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "2ddbdf76cbefd59cd9a914780fdf2963";
  }

  static const char* value(const ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x2ddbdf76cbefd59cULL;
  static const uint64_t static_value2 = 0xd9a914780fdf2963ULL;
};

template<class ContainerAllocator>
struct DataType< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "wpi_jaco_msgs/GetAngularPositionResponse";
  }

  static const char* value(const ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32[] pos\n\
\n\
";
  }

  static const char* value(const ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct GetAngularPositionResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::wpi_jaco_msgs::GetAngularPositionResponse_<ContainerAllocator>& v)
  {
    s << indent << "pos[]" << std::endl;
    for (size_t i = 0; i < v.pos.size(); ++i)
    {
      s << indent << "  pos[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.pos[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // WPI_JACO_MSGS_MESSAGE_GETANGULARPOSITIONRESPONSE_H
