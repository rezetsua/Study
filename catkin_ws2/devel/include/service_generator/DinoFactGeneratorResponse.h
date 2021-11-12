// Generated by gencpp from file service_generator/DinoFactGeneratorResponse.msg
// DO NOT EDIT!


#ifndef SERVICE_GENERATOR_MESSAGE_DINOFACTGENERATORRESPONSE_H
#define SERVICE_GENERATOR_MESSAGE_DINOFACTGENERATORRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace service_generator
{
template <class ContainerAllocator>
struct DinoFactGeneratorResponse_
{
  typedef DinoFactGeneratorResponse_<ContainerAllocator> Type;

  DinoFactGeneratorResponse_()
    : dino_fact()  {
    }
  DinoFactGeneratorResponse_(const ContainerAllocator& _alloc)
    : dino_fact(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _dino_fact_type;
  _dino_fact_type dino_fact;





  typedef boost::shared_ptr< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> const> ConstPtr;

}; // struct DinoFactGeneratorResponse_

typedef ::service_generator::DinoFactGeneratorResponse_<std::allocator<void> > DinoFactGeneratorResponse;

typedef boost::shared_ptr< ::service_generator::DinoFactGeneratorResponse > DinoFactGeneratorResponsePtr;
typedef boost::shared_ptr< ::service_generator::DinoFactGeneratorResponse const> DinoFactGeneratorResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator1> & lhs, const ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator2> & rhs)
{
  return lhs.dino_fact == rhs.dino_fact;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator1> & lhs, const ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace service_generator

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a3b479ce65926041d6c97ef1ab24beaf";
  }

  static const char* value(const ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa3b479ce65926041ULL;
  static const uint64_t static_value2 = 0xd6c97ef1ab24beafULL;
};

template<class ContainerAllocator>
struct DataType< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "service_generator/DinoFactGeneratorResponse";
  }

  static const char* value(const ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string dino_fact\n"
"\n"
;
  }

  static const char* value(const ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.dino_fact);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DinoFactGeneratorResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::service_generator::DinoFactGeneratorResponse_<ContainerAllocator>& v)
  {
    s << indent << "dino_fact: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.dino_fact);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVICE_GENERATOR_MESSAGE_DINOFACTGENERATORRESPONSE_H