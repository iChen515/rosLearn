#include <ros/ros.h>
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"

/*
    订阅方实现：
                1 计算son1与son2的相对关系
                2 计算son1当中某个坐标点在son2中的坐标值
    流程：
                1 包含头文件
                2 编码、初始化、NodeHandle
                3 创建订阅对象
                4 编写解析逻辑
                5 spinOnce()
*/
int main(int argc, char ** argv){
    // 2 编码、初始化、NodeHandle
    setlocale(LC_ALL,"");
    ros::init(argc, argv, "tfs_sub");
    ros::NodeHandle nh;
    // 3 创建订阅对象
    tf2_ros::Buffer buffer;
    tf2_ros::TransformListener sub(buffer);

    // 4 编写解析逻辑
    //创建坐标点
    geometry_msgs::PointStamped psAtSon1;
    psAtSon1.header.stamp = ros::Time::now();
    psAtSon1.header.frame_id = "son1";
    psAtSon1.point.x = 1.0;
    psAtSon1.point.y = 2.0;
    psAtSon1.point.z = 3.0;

    ros::Rate rate(10);
    while(ros::ok()){
        try{    
                // 1 计算son1与son2的相对关系

                // 2 计算son1当中某个坐标点在son2中的坐标值
                geometry_msgs::PointStamped paAtSon2 = buffer.transform(psAtSon1, "son2");

        } catch(const std::exception& e){
            ROS_INFO("tf2 错误提示内容: %s", e.what());
        }
    }

    // 5 spinOnce()
    return 0;
}