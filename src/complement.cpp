#include <ros/ros.h>
#include "complement/odom_publisher.h"

using namespace std;

int main(int argc, char** argv)
{
	ros::init(argc, argv, "complement_pub_tf");

	complement::odomPublisher<nav_msgs::Odometry, sensor_msgs::Imu> op;

	if(argc == 2){
		op.setRate(atof(argv[1]));
	}

	ros::spin();

	return 0;
}

