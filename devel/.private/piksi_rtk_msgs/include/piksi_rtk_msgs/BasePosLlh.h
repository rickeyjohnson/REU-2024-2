// Generated by gencpp from file piksi_rtk_msgs/BasePosLlh.msg
// DO NOT EDIT!


#ifndef PIKSI_RTK_MSGS_MESSAGE_BASEPOSLLH_H
#define PIKSI_RTK_MSGS_MESSAGE_BASEPOSLLH_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace piksi_rtk_msgs
{
template <class ContainerAllocator>
struct BasePosLlh_
{
  typedef BasePosLlh_<ContainerAllocator> Type;

  BasePosLlh_()
    : header()
    , lat(0.0)
    , lon(0.0)
    , height(0.0)  {
    }
  BasePosLlh_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , lat(0.0)
    , lon(0.0)
    , height(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef double _lat_type;
  _lat_type lat;

   typedef double _lon_type;
  _lon_type lon;

   typedef double _height_type;
  _height_type height;





  typedef boost::shared_ptr< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> const> ConstPtr;

}; // struct BasePosLlh_

typedef ::piksi_rtk_msgs::BasePosLlh_<std::allocator<void> > BasePosLlh;

typedef boost::shared_ptr< ::piksi_rtk_msgs::BasePosLlh > BasePosLlhPtr;
typedef boost::shared_ptr< ::piksi_rtk_msgs::BasePosLlh const> BasePosLlhConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.lat == rhs.lat &&
    lhs.lon == rhs.lon &&
    lhs.height == rhs.height;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace piksi_rtk_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ecab87c8bc63ce24dedbbc842fe1261b";
  }

  static const char* value(const ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xecab87c8bc63ce24ULL;
  static const uint64_t static_value2 = 0xdedbbc842fe1261bULL;
};

template<class ContainerAllocator>
struct DataType< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piksi_rtk_msgs/BasePosLlh";
  }

  static const char* value(const ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# The base station position message is the position reported by the base station itself.\n"
"# It is used for pseudo-absolute RTK positioning, and is required to be a high-accuracy surveyed location of\n"
"# the base station. Any error here will result in an error in the pseudo-absolute position output.\n"
"\n"
"Header header\n"
"\n"
"float64 lat             # Latitude [deg].\n"
"float64 lon             # Longitude [deg].\n"
"float64 height          # Height [m].\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
;
  }

  static const char* value(const ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.lat);
      stream.next(m.lon);
      stream.next(m.height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct BasePosLlh_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piksi_rtk_msgs::BasePosLlh_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "lat: ";
    Printer<double>::stream(s, indent + "  ", v.lat);
    s << indent << "lon: ";
    Printer<double>::stream(s, indent + "  ", v.lon);
    s << indent << "height: ";
    Printer<double>::stream(s, indent + "  ", v.height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIKSI_RTK_MSGS_MESSAGE_BASEPOSLLH_H
