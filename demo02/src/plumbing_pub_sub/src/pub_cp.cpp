#include<ros/ros.h>
#include<std_msgs/String.h>
#include "sstream"

int main(int argc, char *argv[]){
    setlocale(LC_ALL, ""); 

    // 2 初始化ROS节点
    ros::init(argc, argv, "pc_pub");
    
    //3  创建节点句柄
    // 4 创建发布者对象
    // 5 编写发布逻辑并发布数据

    return 0;
}