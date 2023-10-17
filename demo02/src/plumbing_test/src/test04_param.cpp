#include"ros/ros.h"

// 需求：修改参数服务器中 turtlesim背景颜色相关的参数
//      1 初始化ros节点
//      2 不一定要创建节点句柄！！！（和后续API 有关）
//      3 修改参数

int main(int argc, char* argv[]){
//      1 初始化ros节点
    ros::init(argc, argv, "change_bgColor");
//      2 不一定要创建节点句柄！！！（和后续API 有关）

    // 方式1
    ros::NodeHandle nh("turtlesim"); //设置命名空间，即参数名称的前半部分
    nh.setParam("background_r",255); //nh会将参数名和自己的命名空间组合在一起，组合成/turtlesim/background_r
    nh.setParam("background_g",255);
    nh.setParam("background_b",255);

    // 方式2
    // ros::NodeHandle nh；
    // nh.setParam("/turtlesim/background_r",255);
    // nh.setParam("/turtlesim/background_g",255);
    // nh.setParam("/turtlesim/background_b",255);

//      3 修改参数
//      如果调用    ros::param  则不需要创建节点句柄

    // 方式3
    // ros::param::set("/turtlesim/background_r", 0);
    // ros::param::set("/turtlesim/background_g", 0);
    // ros::param::set("/turtlesim/background_b", 0);

    return 0;
}