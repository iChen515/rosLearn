#include  "ros/ros.h"
/*
    发布方：需要订阅乌龟的位姿信息，转换成相对于窗体的坐标关系，并发布
    准备：
                话题：/turtle1/pose
                消息：turtlesim/Pose 

    流程：
                1 包含头文件
                2 设置编码、初始化、NodeHandle
                3 创建订阅对象，订阅    /turtle1/pose
                4 回调函数处理订阅的消息：将位姿信息转换成坐标小队关系并发布（关注）
                5 spin()
*/

int main(int argc, char *argv[]) {
    // 2 设置编码、初始化、NodeHandle
    setlocale(LC_ALL, "");
    ros::init(argc, argv, "demo01_dynamic_pub");
    ros::NodeHandle nh;

    // 3 创建订阅对象，订阅    /turtle1/pose
    ros::Subscriber sub = nh.subscribe("/turtle1/pose", 100, doPose);
    // 4 回调函数处理订阅的消息：将位姿信息转换成坐标小队关系并发布（关注）
    // 5 spin()
    

    return 0;
}
