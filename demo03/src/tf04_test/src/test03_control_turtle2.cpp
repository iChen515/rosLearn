#include <ros/ros.h>
#include "tf2_ros/transform_listener.h"
#include "tf2_ros/buffer.h"
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"
#include "geometry_msgs/TransformStamped.h"

/*
    需求1：换算出turtle1相对于 turtle2的关系
    需求2：计算角速度和线速度并发布
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

    ros::Rate rate(10);
    while(ros::ok()){
        try{    
                // 1 计算son1与son2的相对关系
                /*
                    A 相对于 B 的坐标系关系

                    参数1：目标坐标系 B
                    参数2：源坐标系      A
                    参数3：ros::Time(0) 取间隔最短的两个坐标关系帧计算相对关系
                    返回值：geometry_msgs::TransformStamped 源相对于目标坐标系的相对关系
                */
                geometry_msgs::TransformStamped son12Son2 = buffer.lookupTransform("turtle2", "turtle1", ros::Time(0));
                ROS_INFO("son1 与 son2 的相对关系：父级：%s， 子级：%s， 偏移量（%.2f, %.2f, %.2f）", 
                            son12Son2.header.frame_id.c_str(),  //turtle2
                            son12Son2.child_frame_id.c_str(),    //turtle1
                            son12Son2.transform.translation.x,
                            son12Son2.transform.translation.y,
                            son12Son2.transform.translation.z);

        } catch(const std::exception& e){
            ROS_INFO("tf2 错误提示内容: %s", e.what());
        }
    }

    // 5 spinOnce()
    return 0;
}