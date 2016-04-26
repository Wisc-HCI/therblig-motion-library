// Generated by gencpp from file moveit_msgs/CostSource.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_COSTSOURCE_H
#define MOVEIT_MSGS_MESSAGE_COSTSOURCE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Vector3.h>
#include <geometry_msgs/Vector3.h>

namespace moveit_msgs
{
template <class ContainerAllocator>
struct CostSource_
{
  typedef CostSource_<ContainerAllocator> Type;

  CostSource_()
    : cost_density(0.0)
    , aabb_min()
    , aabb_max()  {
    }
  CostSource_(const ContainerAllocator& _alloc)
    : cost_density(0.0)
    , aabb_min(_alloc)
    , aabb_max(_alloc)  {
    }



   typedef double _cost_density_type;
  _cost_density_type cost_density;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _aabb_min_type;
  _aabb_min_type aabb_min;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _aabb_max_type;
  _aabb_max_type aabb_max;




  typedef boost::shared_ptr< ::moveit_msgs::CostSource_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::moveit_msgs::CostSource_<ContainerAllocator> const> ConstPtr;

}; // struct CostSource_

typedef ::moveit_msgs::CostSource_<std::allocator<void> > CostSource;

typedef boost::shared_ptr< ::moveit_msgs::CostSource > CostSourcePtr;
typedef boost::shared_ptr< ::moveit_msgs::CostSource const> CostSourceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::moveit_msgs::CostSource_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::moveit_msgs::CostSource_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace moveit_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'shape_msgs': ['/opt/ros/indigo/share/shape_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg'], 'moveit_msgs': ['/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/devel/share/moveit_msgs/msg', '/home/hcilab/Documents/John/nri-authoring-environment/wpi_jaco/src/moveit_msgs/msg'], 'trajectory_msgs': ['/opt/ros/indigo/share/trajectory_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/indigo/share/sensor_msgs/cmake/../msg'], 'object_recognition_msgs': ['/opt/ros/indigo/share/object_recognition_msgs/cmake/../msg'], 'octomap_msgs': ['/opt/ros/indigo/share/octomap_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::CostSource_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::moveit_msgs::CostSource_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::CostSource_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::moveit_msgs::CostSource_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::CostSource_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::moveit_msgs::CostSource_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::moveit_msgs::CostSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "abb7e013237dacaaa8b97e704102f908";
  }

  static const char* value(const ::moveit_msgs::CostSource_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xabb7e013237dacaaULL;
  static const uint64_t static_value2 = 0xa8b97e704102f908ULL;
};

template<class ContainerAllocator>
struct DataType< ::moveit_msgs::CostSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "moveit_msgs/CostSource";
  }

  static const char* value(const ::moveit_msgs::CostSource_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::moveit_msgs::CostSource_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The density of the cost source\n\
float64 cost_density\n\
\n\
# The volume of the cost source is represented as an\n\
# axis-aligned bounding box (AABB)\n\
# The AABB is specified by two of its opposite corners\n\
\n\
geometry_msgs/Vector3 aabb_min\n\
\n\
geometry_msgs/Vector3 aabb_max\n\
\n\
================================================================================\n\
MSG: geometry_msgs/Vector3\n\
# This represents a vector in free space. \n\
\n\
float64 x\n\
float64 y\n\
float64 z\n\
";
  }

  static const char* value(const ::moveit_msgs::CostSource_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::moveit_msgs::CostSource_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.cost_density);
      stream.next(m.aabb_min);
      stream.next(m.aabb_max);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct CostSource_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::moveit_msgs::CostSource_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::moveit_msgs::CostSource_<ContainerAllocator>& v)
  {
    s << indent << "cost_density: ";
    Printer<double>::stream(s, indent + "  ", v.cost_density);
    s << indent << "aabb_min: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.aabb_min);
    s << indent << "aabb_max: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.aabb_max);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_COSTSOURCE_H
