#include "ros/ros.h"
#include "std_msgs/String.h"
#include <iostream>

using namespace std;

void pub_reader (const std_msgs::String& message)
{
  ROS_INFO("Subscriber is ready!");
  std::cout << message.data << endl;
  return;
}


int main(int argc, char **argv)
{
  ros::init(argc, argv, "subscriber");
  ros::NodeHandle node;
  ros::Subscriber sub = node.subscribe("pub_reply", 1000, pub_reader);
  ros::spin();
  return 0;
}
