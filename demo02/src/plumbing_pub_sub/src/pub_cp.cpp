#include<ros/ros.h>
#include<std_msgs/String.h>
#include "sstream"

int main(int argc, char *argv[]){
    setlocale(LC_ALL, ""); 

    // 2 初始化ROS节点
    ros::init(argc, argv, "cp_pub");
    //3  创建节点句柄
    ros::NodeHandle nh; 
    // 4 创建发布者对象
    ros::Publisher pub = nh.advertise<std_msgs::String>("CP", 10);
    // 5 编写发布逻辑并发布数据
    std_msgs::String msg;
    ros::Rate rate(1);
    int count = 0;

    ros::Duration(3).sleep();
    while(ros::ok){
        count++;
        std::stringstream ss;
        ss<<"CP this is "<<count;
        msg.data = ss.str();

        pub.publish(msg);

        ROS_INFO("ths message that published is: %s", ss.str().c_str());
        rate.sleep();

        ros::spinOnce();
    }
    return 0;
}