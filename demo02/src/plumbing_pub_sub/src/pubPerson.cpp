#include <ros/ros.h>
// 1 包含头文件
// #include <Person.h>
#include <plumbing_pub_sub/Person.h>

// 发布方：发布人的消息
// 1 包含头文件
// 2 初始化ros节点
// 3 创建节点句柄
// 4 创建发布者对象
// 5 编写发布逻辑，发布数据

int main(int argc, char *argv[]){
     setlocale(LC_ALL, ""); //防止中文输出时乱码
     // 2 初始化ros节点
     ros::init(argc, argv, "pub_person");
    // 3 创建节点句柄
    ros::NodeHandle nh;
    // 4 创建发布者对象
    ros::Publisher pub = nh.advertise<plumbing_pub_sub::Person>("PersonTopic", 10);
    // 5 编写发布逻辑，发布数据
    // 创建被发布的数据
    plumbing_pub_sub::Person msg;
    msg.name = "Luvr";
    msg.age = 18;
    msg.height =1.80;
    int count = 0;
    // 设置发布频率
    ros::Rate rate(1);
    //休眠3秒  延迟第一条数据的发送
    ros::Duration(3).sleep(); 
     // 循环发布数据
     while(ros::ok){
        ROS_INFO("发布的数据是：%d", msg.age);
        // 核心：发布数据
        pub.publish(msg);
        //休眠
        rate.sleep();
        //修改数据
        msg.age++;
        ros::spinOnce();
     }
     
    return 0;
}