// Generated by gencpp from file moveit_msgs/GetMotionPlan.msg
// DO NOT EDIT!


#ifndef MOVEIT_MSGS_MESSAGE_GETMOTIONPLAN_H
#define MOVEIT_MSGS_MESSAGE_GETMOTIONPLAN_H

#include <ros/service_traits.h>


#include <moveit_msgs/GetMotionPlanRequest.h>
#include <moveit_msgs/GetMotionPlanResponse.h>


namespace moveit_msgs
{

struct GetMotionPlan
{

typedef GetMotionPlanRequest Request;
typedef GetMotionPlanResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct GetMotionPlan
} // namespace moveit_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::moveit_msgs::GetMotionPlan > {
  static const char* value()
  {
    return "838cce25b2e64abc57c0c12ca2b6eae6";
  }

  static const char* value(const ::moveit_msgs::GetMotionPlan&) { return value(); }
};

template<>
struct DataType< ::moveit_msgs::GetMotionPlan > {
  static const char* value()
  {
    return "moveit_msgs/GetMotionPlan";
  }

  static const char* value(const ::moveit_msgs::GetMotionPlan&) { return value(); }
};


// service_traits::MD5Sum< ::moveit_msgs::GetMotionPlanRequest> should match 
// service_traits::MD5Sum< ::moveit_msgs::GetMotionPlan > 
template<>
struct MD5Sum< ::moveit_msgs::GetMotionPlanRequest>
{
  static const char* value()
  {
    return MD5Sum< ::moveit_msgs::GetMotionPlan >::value();
  }
  static const char* value(const ::moveit_msgs::GetMotionPlanRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::moveit_msgs::GetMotionPlanRequest> should match 
// service_traits::DataType< ::moveit_msgs::GetMotionPlan > 
template<>
struct DataType< ::moveit_msgs::GetMotionPlanRequest>
{
  static const char* value()
  {
    return DataType< ::moveit_msgs::GetMotionPlan >::value();
  }
  static const char* value(const ::moveit_msgs::GetMotionPlanRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::moveit_msgs::GetMotionPlanResponse> should match 
// service_traits::MD5Sum< ::moveit_msgs::GetMotionPlan > 
template<>
struct MD5Sum< ::moveit_msgs::GetMotionPlanResponse>
{
  static const char* value()
  {
    return MD5Sum< ::moveit_msgs::GetMotionPlan >::value();
  }
  static const char* value(const ::moveit_msgs::GetMotionPlanResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::moveit_msgs::GetMotionPlanResponse> should match 
// service_traits::DataType< ::moveit_msgs::GetMotionPlan > 
template<>
struct DataType< ::moveit_msgs::GetMotionPlanResponse>
{
  static const char* value()
  {
    return DataType< ::moveit_msgs::GetMotionPlan >::value();
  }
  static const char* value(const ::moveit_msgs::GetMotionPlanResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // MOVEIT_MSGS_MESSAGE_GETMOTIONPLAN_H
