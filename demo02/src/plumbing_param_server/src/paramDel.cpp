#include "ros/ros.h"


// 1 初始化ROS节点
// 2 创建ROS节点句柄

/*
        演示参数删除：
        实现：
            ros::NodeHandle
                deleteParam("键")
                    根据键删除参数，删除成功，返回 true，否则(参数不存在)，返回 false
            ros::param
                del("键")
                    根据键删除参数，删除成功，返回 true，否则(参数不存在)，返回 false

*/

int main(int argc, char* argv[]){
    //设置编码
    setlocale(LC_ALL, "");
    // 1 初始化ROS节点
    ros::init(argc, argv, "param_del_c");
    // 2 创建ROS节点句柄
    ros::NodeHandle nh;
    //删除： ros::NodeHandle--------------------------------
    bool flag1 = nh.deleteParam("radius");
    if(flag1){
        ROS_INFO("删除成功！");
    } else {
        ROS_INFO("删除失败！");
    }
    //删除： ros::param----------------------------------------
    bool flag2 = ros::param::del("radiusxxx");
    if(flag2){
        ROS_INFO("删除成功！");
    } else {
        ROS_INFO("删除失败！");
    }
    
    return 0;
}