#include "ros/ros.h"
#include "turtlesim/Pose.h"

/*
    需求：订阅乌龟的位姿信息，并输出到控制台

    1 包含头文件
    2 初始化ros节点
    3 创建节点句柄
    4 创建订阅对象
    5 处理订阅到的数据（回调函数）
    6 spin()
*/
// 处理订阅到的数据
void doPose(const turtlesim::Pose::ConstPtr &pose){
    ROS_INFO("乌龟的位姿信息：坐标（%.2f , %.2f），朝向（%.2f），线速度（%.2f），角速度（%.2f）", pose->x, pose->y, pose->theta, pose->linear_velocity, pose->angular_velocity);

}

int main(int argc, char *argv[]){
    setlocale(LC_ALL, ""); //防止中文输出时乱码

    // 2 初始化ros节点
    ros::init(argc, argv, "sub_pose");
    // 3 创建节点句柄
    ros::NodeHandle nh;
    // 4 创建订阅对象
    ros::Subscriber sub = nh.subscribe("/turtle1/Pose", 100, doPose);
    // 5 处理订阅到的数据（回调函数）
    // 6 spin()
    return 0;
}