#include "ros/ros.h"
#include "std_msgs/String.h"

using namespace std;

int main(int argc, char **argv)
{
  ros::init(argc, argv, "publisher");
  ros::NodeHandle node;
  ros::Publisher pub = node.advertise <std_msgs::String> ("pub_reply", 1000);
  
  //ros::ServiceServer service = node.advertiseService("calculate_equation", calculate);
  ROS_INFO("Publisher is ready!");
  std_msgs::String reply;
  reply.data = "aboba";
  while (1)
  	pub.publish(reply);
  ros::spin(); 
}
