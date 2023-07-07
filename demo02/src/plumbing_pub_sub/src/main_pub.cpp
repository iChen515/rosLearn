#include "ros/ros.h"
#include "std_msgs/String.h"
// #include "std_msgs/Int32.h"
#include "sstream"

// 发布方实现：
    // 1  包含头文件
        // ROS中的文本类型 std_msgs/String.h
    // 2 初始化ROS节点
    //3  创建节点句柄
    // 4 创建发布者对象
    // 5 编写发布逻辑并发布数据


int main(int argc, char *argv[]){
    setlocale(LC_ALL, ""); //防止中文输出时乱码

    ros::init(argc, argv, "pub1");  // 2 初始化ROS节点
    ros::NodeHandle nh; //3  创建节点句柄

    // 4 创建发布者对象 话题名称为topicName 同时设置一个缓存队列 存放十条消息
    ros::Publisher pub = nh.advertise<std_msgs::String>("topicName", 10);

    // 5 编写发布逻辑并发布数据
    // 要求以10hz的频率发布数据，文本后添加编号
    std_msgs::String msg; //先创建消息对象
    // 发布频率
    ros::Rate rate(1);
    // 设置编号
    int count = 0;
    //订阅的时候会发现第一条数据可能会丢失，因为此时publisher 还未在 roscore 注册完毕
    ros::Duration(3).sleep(); //休眠3秒  延迟第一条数据的发送

    while (ros::ok()){
        count++;
        std::stringstream ss;
        ss<< "hello No." <<count;
        msg.data = ss.str();

        // msg.data = "hello No."; //设置 字符串类型消息对象 的 消息内容
        pub.publish(msg); //发布消息

        // 添加日志
        //ss.str()是字符串类型，但是输出的时候使用的是%s，需要类型转换一下.c_str()
        ROS_INFO("发布的数据是：%s", ss.str().c_str()); 
        rate.sleep();

        // ros::spinOnce(); //官方建议，处理回调函数（这里没用到回调函数）
    }
 

    return 0;
}