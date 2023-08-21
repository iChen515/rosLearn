#include "ros/ros.h"

// 1 初始化ROS节点
// 2 创建ROS节点句柄
// 3 参数的增改

/*
    需要实现参数的新增与修改
    需求：首先设置机器人的共享参数，类型、半径（0.15m）
                再修改半径为0.25m
    实现：两套API皆可实现，修改和设置是一样的
                ros::NodeHandle
                        setParam("键名", 值)
                ros::param
                        set("键名", 值)
*/

int main(int argc, char* argv[]){
    // 1 初始化ROS节点
    ros::init(argc, argv, "set_param_c");
    // 2 创建ROS节点句柄
    ros::NodeHandle nh;

    // 3 参数的增改 
    // 增加 --------------------------------------------------
    // 方案1：nh
    nh.setParam("type", "xiaoHuang");
    nh.setParam("radius", 0.15);
    // 方案2：ros::param
    ros::param::set("tpye2", "xiaoBai");
    ros::param::set("radius2", 0.15);

    // 修改 --------------------------------------------------
     // 方案1：nh
    nh.setParam("radius", 0.25);
    // 方案2：ros::param
    ros::param::set("radius2", 0.35);

    return 0;
}