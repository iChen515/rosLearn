#include "ros/ros.h"
#include "std_msgs/String.h"

// 订阅方实现：
    // 1  包含头文件
        // ROS中的文本类型 std_msgs/String.h
    // 2 初始化ROS节点
    //3  创建节点句柄
    // 4 创建订阅者对象
    // 5 编写订阅逻辑并订阅数据

void doMsg(const std_msgs::String::ConstPtr &msg){ //const std_msgs::String类型的 常量指针的引用
    //通过msg获取并操作订阅到的数据
    ROS_INFO("订阅到的数据：%s", msg->data.c_str());
}

int main(int argc, char *argv []){
    setlocale(LC_ALL, ""); //防止中文输出时乱码
    
    // 2 初始化ROS节点
    ros::init(argc, argv, "sub1");
    //3  创建节点句柄
    ros::NodeHandle nh;
     //4 创建订阅者对象 话题名称为topicName（和发布者的话题一样） 同时设置一个缓存队列 存放十条消息
    //  还需要设置一个回调函数
    //回调函数和一般函数最大的区别是：回调函数需要等待订阅的话题发布消息之后才会被调用，而且程序中每订阅到一条消息都会执行一次
    ros::Subscriber sub = nh.subscribe("topicName", 10, doMsg);
    // 5 编写订阅逻辑并订阅数据
    ros::spin();
    return 0;
}