// Generated by gencpp from file xarm_msgs/Move.msg
// DO NOT EDIT!


#ifndef XARM_MSGS_MESSAGE_MOVE_H
#define XARM_MSGS_MESSAGE_MOVE_H

#include <ros/service_traits.h>


#include <xarm_msgs/MoveRequest.h>
#include <xarm_msgs/MoveResponse.h>


namespace xarm_msgs
{

struct Move
{

typedef MoveRequest Request;
typedef MoveResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Move
} // namespace xarm_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::xarm_msgs::Move > {
  static const char* value()
  {
    return "149d0c53b84d9002e7f64f44b16335dd";
  }

  static const char* value(const ::xarm_msgs::Move&) { return value(); }
};

template<>
struct DataType< ::xarm_msgs::Move > {
  static const char* value()
  {
    return "xarm_msgs/Move";
  }

  static const char* value(const ::xarm_msgs::Move&) { return value(); }
};


// service_traits::MD5Sum< ::xarm_msgs::MoveRequest> should match
// service_traits::MD5Sum< ::xarm_msgs::Move >
template<>
struct MD5Sum< ::xarm_msgs::MoveRequest>
{
  static const char* value()
  {
    return MD5Sum< ::xarm_msgs::Move >::value();
  }
  static const char* value(const ::xarm_msgs::MoveRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::xarm_msgs::MoveRequest> should match
// service_traits::DataType< ::xarm_msgs::Move >
template<>
struct DataType< ::xarm_msgs::MoveRequest>
{
  static const char* value()
  {
    return DataType< ::xarm_msgs::Move >::value();
  }
  static const char* value(const ::xarm_msgs::MoveRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::xarm_msgs::MoveResponse> should match
// service_traits::MD5Sum< ::xarm_msgs::Move >
template<>
struct MD5Sum< ::xarm_msgs::MoveResponse>
{
  static const char* value()
  {
    return MD5Sum< ::xarm_msgs::Move >::value();
  }
  static const char* value(const ::xarm_msgs::MoveResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::xarm_msgs::MoveResponse> should match
// service_traits::DataType< ::xarm_msgs::Move >
template<>
struct DataType< ::xarm_msgs::MoveResponse>
{
  static const char* value()
  {
    return DataType< ::xarm_msgs::Move >::value();
  }
  static const char* value(const ::xarm_msgs::MoveResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // XARM_MSGS_MESSAGE_MOVE_H