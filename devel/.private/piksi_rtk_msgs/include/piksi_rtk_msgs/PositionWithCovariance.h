// Generated by gencpp from file piksi_rtk_msgs/PositionWithCovariance.msg
// DO NOT EDIT!


#ifndef PIKSI_RTK_MSGS_MESSAGE_POSITIONWITHCOVARIANCE_H
#define PIKSI_RTK_MSGS_MESSAGE_POSITIONWITHCOVARIANCE_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace piksi_rtk_msgs
{
template <class ContainerAllocator>
struct PositionWithCovariance_
{
  typedef PositionWithCovariance_<ContainerAllocator> Type;

  PositionWithCovariance_()
    : position()
    , covariance()  {
      covariance.assign(0.0);
  }
  PositionWithCovariance_(const ContainerAllocator& _alloc)
    : position(_alloc)
    , covariance()  {
  (void)_alloc;
      covariance.assign(0.0);
  }



   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _position_type;
  _position_type position;

   typedef boost::array<double, 9>  _covariance_type;
  _covariance_type covariance;





  typedef boost::shared_ptr< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> const> ConstPtr;

}; // struct PositionWithCovariance_

typedef ::piksi_rtk_msgs::PositionWithCovariance_<std::allocator<void> > PositionWithCovariance;

typedef boost::shared_ptr< ::piksi_rtk_msgs::PositionWithCovariance > PositionWithCovariancePtr;
typedef boost::shared_ptr< ::piksi_rtk_msgs::PositionWithCovariance const> PositionWithCovarianceConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator2> & rhs)
{
  return lhs.position == rhs.position &&
    lhs.covariance == rhs.covariance;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace piksi_rtk_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a6c3298f48dbe12e3bb3539524548bf0";
  }

  static const char* value(const ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa6c3298f48dbe12eULL;
  static const uint64_t static_value2 = 0x3bb3539524548bf0ULL;
};

template<class ContainerAllocator>
struct DataType< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piksi_rtk_msgs/PositionWithCovariance";
  }

  static const char* value(const ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Point position\n"
"float64[9] covariance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.position);
      stream.next(m.covariance);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PositionWithCovariance_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piksi_rtk_msgs::PositionWithCovariance_<ContainerAllocator>& v)
  {
    s << indent << "position: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.position);
    s << indent << "covariance[]" << std::endl;
    for (size_t i = 0; i < v.covariance.size(); ++i)
    {
      s << indent << "  covariance[" << i << "]: ";
      Printer<double>::stream(s, indent + "  ", v.covariance[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIKSI_RTK_MSGS_MESSAGE_POSITIONWITHCOVARIANCE_H