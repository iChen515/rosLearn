#include "ros/ros.h"
#include "plumbing_head/hello.h"

namespace hello_ns{
    void MyHello::run() {
        ROS_INFO("run函数执行------- ");
    }
}

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "zh_CN.UTF-8");
    ros::init(argc, argv, "hello_head");

    // 函数调用
    hello_ns::MyHello myHello;
    myHello.run();

    return 0;
}