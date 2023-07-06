#include "ros/ros.h"

int main(int argc, char* argv[]){
	//执行ros节点的初始化
	ros::init(argc, argv, "hello_xxc");
	//创建ros节点句柄
	ros::NodeHandle n;
	//控制台输出
	ROS_INFO("HELLO WORLD!!!");

	return 0;
}
