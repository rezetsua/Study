// Generated by gencpp from file service_generator/DinoFactGeneratorRequest.msg
// DO NOT EDIT!


#ifndef SERVICE_GENERATOR_MESSAGE_DINOFACTGENERATORREQUEST_H
#define SERVICE_GENERATOR_MESSAGE_DINOFACTGENERATORREQUEST_H


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
struct DinoFactGeneratorRequest_
{
  typedef DinoFactGeneratorRequest_<ContainerAllocator> Type;

  DinoFactGeneratorRequest_()
    : user_word()  {
    }
  DinoFactGeneratorRequest_(const ContainerAllocator& _alloc)
    : user_word(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _user_word_type;
  _user_word_type user_word;





  typedef boost::shared_ptr< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct DinoFactGeneratorRequest_

typedef ::service_generator::DinoFactGeneratorRequest_<std::allocator<void> > DinoFactGeneratorRequest;

typedef boost::shared_ptr< ::service_generator::DinoFactGeneratorRequest > DinoFactGeneratorRequestPtr;
typedef boost::shared_ptr< ::service_generator::DinoFactGeneratorRequest const> DinoFactGeneratorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator1> & lhs, const ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator2> & rhs)
{
  return lhs.user_word == rhs.user_word;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator1> & lhs, const ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace service_generator

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "67652868f1dd38aa10dc946553e6b9f4";
  }

  static const char* value(const ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x67652868f1dd38aaULL;
  static const uint64_t static_value2 = 0x10dc946553e6b9f4ULL;
};

template<class ContainerAllocator>
struct DataType< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "service_generator/DinoFactGeneratorRequest";
  }

  static const char* value(const ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string user_word\n"
;
  }

  static const char* value(const ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.user_word);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DinoFactGeneratorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::service_generator::DinoFactGeneratorRequest_<ContainerAllocator>& v)
  {
    s << indent << "user_word: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.user_word);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SERVICE_GENERATOR_MESSAGE_DINOFACTGENERATORREQUEST_H
