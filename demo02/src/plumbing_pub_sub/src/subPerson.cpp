// 订阅方：订阅人的消息
// 1 包含头文件
// 2 初始化ros节点
// 3 创建节点句柄
// 4 创建订阅者对象
// 5 处理订阅逻辑，订阅数据
// 6 调用spin()函数

// 1 包含头文件
#include <ros/ros.h>
#include <plumbing_pub_sub/Person.h>

void doMsg(const plumbing_pub_sub::Person::ConstPtr& person){
    ROS_INFO("订阅的人的信息是：%s %d %.2f", person->name.c_str(), person->age, person->height);
}

int main(int argc, char *argv[]){
    setlocale(LC_ALL, ""); //防止中文输出时乱码
    // 2 初始化ros节点
    ros::init(argc, argv, "sub_person");
    // 3 创建节点句柄
    ros::NodeHandle nh;
    // 订阅者对象
    ros::Subscriber sub = nh.subscribe<plumbing_pub_sub::Person>("PersonTopic", 10, doMsg);
    // 5 处理订阅逻辑，订阅数据    doMsg

    // 6 调用spin()函数
    ros::spin();

    return 0;
}