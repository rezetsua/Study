#include "ros/ros.h"
#include "std_msgs/String.h"
#include "service_generator/DinoFactGenerator.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char **argv)
{
  ros::init(argc, argv, "dino_fact_generator_publisher");
  ros::NodeHandle node;
  
  ros::ServiceClient client = node.serviceClient<service_generator::DinoFactGenerator>("dino_fact_generator");
  service_generator::DinoFactGenerator srv;
  
  while (ros::ok()){
    string user_word;
    cout << "Enter your word: ";
    cin >> user_word;

    srv.request.user_word = user_word;

    if (client.call(srv))
    {
        cout << srv.response.dino_fact << endl;
    }
    else
    {
        cout << "Failed to call service dino_fact_generator" << endl;
        return 1;
    }
  }
  return 0;
}
