#include "ros/ros.h"

// ROS 日志：
//              演示不同级别的日志的基本使用
int main(int argc, char **argv) {
    setlocale(LC_ALL, "zh_CN.UTF-8");
    ros::init(argc, argv, "hello_log");
    ros::NodeHandle nh;

    // 日志输出
    ROS_DEBUG("This is a DEBUG message"); //  不会在控制台输出
    ROS_INFO("This is a INFO message");
    ROS_WARN("This is a WARN message");
    ROS_ERROR("This is a ERROR message");   
    ROS_FATAL("This is a FATAL message");

    return 0;
}