// Generated by gencpp from file piksi_rtk_msgs/VelNedCov.msg
// DO NOT EDIT!


#ifndef PIKSI_RTK_MSGS_MESSAGE_VELNEDCOV_H
#define PIKSI_RTK_MSGS_MESSAGE_VELNEDCOV_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace piksi_rtk_msgs
{
template <class ContainerAllocator>
struct VelNedCov_
{
  typedef VelNedCov_<ContainerAllocator> Type;

  VelNedCov_()
    : tow(0)
    , n(0)
    , e(0)
    , d(0)
    , cov_n_n(0.0)
    , cov_n_e(0.0)
    , cov_n_d(0.0)
    , cov_e_e(0.0)
    , cov_e_d(0.0)
    , cov_d_d(0.0)
    , n_sats(0)
    , flags(0)  {
    }
  VelNedCov_(const ContainerAllocator& _alloc)
    : tow(0)
    , n(0)
    , e(0)
    , d(0)
    , cov_n_n(0.0)
    , cov_n_e(0.0)
    , cov_n_d(0.0)
    , cov_e_e(0.0)
    , cov_e_d(0.0)
    , cov_d_d(0.0)
    , n_sats(0)
    , flags(0)  {
  (void)_alloc;
    }



   typedef uint32_t _tow_type;
  _tow_type tow;

   typedef int32_t _n_type;
  _n_type n;

   typedef int32_t _e_type;
  _e_type e;

   typedef int32_t _d_type;
  _d_type d;

   typedef float _cov_n_n_type;
  _cov_n_n_type cov_n_n;

   typedef float _cov_n_e_type;
  _cov_n_e_type cov_n_e;

   typedef float _cov_n_d_type;
  _cov_n_d_type cov_n_d;

   typedef float _cov_e_e_type;
  _cov_e_e_type cov_e_e;

   typedef float _cov_e_d_type;
  _cov_e_d_type cov_e_d;

   typedef float _cov_d_d_type;
  _cov_d_d_type cov_d_d;

   typedef uint8_t _n_sats_type;
  _n_sats_type n_sats;

   typedef uint8_t _flags_type;
  _flags_type flags;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(VEL_MODE_INVALID)
  #undef VEL_MODE_INVALID
#endif
#if defined(_WIN32) && defined(VEL_MODE_MEAS_DOPPLER)
  #undef VEL_MODE_MEAS_DOPPLER
#endif
#if defined(_WIN32) && defined(VEL_MODE_DERIVED_DOPPLER)
  #undef VEL_MODE_DERIVED_DOPPLER
#endif
#if defined(_WIN32) && defined(VEL_MODE_DEAD_RECKONING)
  #undef VEL_MODE_DEAD_RECKONING
#endif

  enum {
    VEL_MODE_INVALID = 0u,
    VEL_MODE_MEAS_DOPPLER = 1u,
    VEL_MODE_DERIVED_DOPPLER = 2u,
    VEL_MODE_DEAD_RECKONING = 3u,
  };


  typedef boost::shared_ptr< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> const> ConstPtr;

}; // struct VelNedCov_

typedef ::piksi_rtk_msgs::VelNedCov_<std::allocator<void> > VelNedCov;

typedef boost::shared_ptr< ::piksi_rtk_msgs::VelNedCov > VelNedCovPtr;
typedef boost::shared_ptr< ::piksi_rtk_msgs::VelNedCov const> VelNedCovConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator2> & rhs)
{
  return lhs.tow == rhs.tow &&
    lhs.n == rhs.n &&
    lhs.e == rhs.e &&
    lhs.d == rhs.d &&
    lhs.cov_n_n == rhs.cov_n_n &&
    lhs.cov_n_e == rhs.cov_n_e &&
    lhs.cov_n_d == rhs.cov_n_d &&
    lhs.cov_e_e == rhs.cov_e_e &&
    lhs.cov_e_d == rhs.cov_e_d &&
    lhs.cov_d_d == rhs.cov_d_d &&
    lhs.n_sats == rhs.n_sats &&
    lhs.flags == rhs.flags;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator1> & lhs, const ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace piksi_rtk_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> >
{
  static const char* value()
  {
    return "41352a41b21545af6ecd73799c33bb68";
  }

  static const char* value(const ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x41352a41b21545afULL;
  static const uint64_t static_value2 = 0x6ecd73799c33bb68ULL;
};

template<class ContainerAllocator>
struct DataType< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> >
{
  static const char* value()
  {
    return "piksi_rtk_msgs/VelNedCov";
  }

  static const char* value(const ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message reports the velocity in local North East Down (NED) coordinates.\n"
"# The NED coordinate system is defined as the local WGS84 tangent plane centered\n"
"# at the current position. The full GPS time is given by the preceding MSG GPS\n"
"# TIME with the matching time-of-week (tow). This message is similar to the MSG\n"
"# VEL NED, but it includes the upper triangular portion of the 3x3 covariance\n"
"# matrix.\n"
"\n"
"uint32 tow          # GPS Time of Week.\n"
"int32 n             # Velocity North coordinate [mm/s].\n"
"int32 e             # Velocity East coordinate [mm/s].\n"
"int32 d             # Velocity Down coordinate [mm/s].\n"
"float32 cov_n_n     # Estimated variance of northward measurement [m^2/s^2].\n"
"float32 cov_n_e     # Covariance of northward and eastward measurement [m^2/s^2].\n"
"float32 cov_n_d     # Covariance of northward and downward measurement [m^2/s^2].\n"
"float32 cov_e_e     # Estimated variance of eastward measurement [m^2/s^2].\n"
"float32 cov_e_d     # Covariance of eastward and downward measurement [m^2/s^2].\n"
"float32 cov_d_d     # Estimated variance of downard measurement [m^2/s^2].\n"
"uint8 n_sats        # Number of satellites used in solution.\n"
"uint8 flags         # Status flags\n"
"\n"
"uint8 VEL_MODE_INVALID = 0\n"
"uint8 VEL_MODE_MEAS_DOPPLER = 1\n"
"uint8 VEL_MODE_DERIVED_DOPPLER = 2\n"
"uint8 VEL_MODE_DEAD_RECKONING = 3\n"
;
  }

  static const char* value(const ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.tow);
      stream.next(m.n);
      stream.next(m.e);
      stream.next(m.d);
      stream.next(m.cov_n_n);
      stream.next(m.cov_n_e);
      stream.next(m.cov_n_d);
      stream.next(m.cov_e_e);
      stream.next(m.cov_e_d);
      stream.next(m.cov_d_d);
      stream.next(m.n_sats);
      stream.next(m.flags);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VelNedCov_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::piksi_rtk_msgs::VelNedCov_<ContainerAllocator>& v)
  {
    s << indent << "tow: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.tow);
    s << indent << "n: ";
    Printer<int32_t>::stream(s, indent + "  ", v.n);
    s << indent << "e: ";
    Printer<int32_t>::stream(s, indent + "  ", v.e);
    s << indent << "d: ";
    Printer<int32_t>::stream(s, indent + "  ", v.d);
    s << indent << "cov_n_n: ";
    Printer<float>::stream(s, indent + "  ", v.cov_n_n);
    s << indent << "cov_n_e: ";
    Printer<float>::stream(s, indent + "  ", v.cov_n_e);
    s << indent << "cov_n_d: ";
    Printer<float>::stream(s, indent + "  ", v.cov_n_d);
    s << indent << "cov_e_e: ";
    Printer<float>::stream(s, indent + "  ", v.cov_e_e);
    s << indent << "cov_e_d: ";
    Printer<float>::stream(s, indent + "  ", v.cov_e_d);
    s << indent << "cov_d_d: ";
    Printer<float>::stream(s, indent + "  ", v.cov_d_d);
    s << indent << "n_sats: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.n_sats);
    s << indent << "flags: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flags);
  }
};

} // namespace message_operations
} // namespace ros

#endif // PIKSI_RTK_MSGS_MESSAGE_VELNEDCOV_H
