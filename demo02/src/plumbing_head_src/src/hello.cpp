#include "ros/ros.h"
#include "plumbing_head_src/hello.h"

namespace hello_ns{
    void MyHello::run() {
        ROS_INFO("Hello, run!");
    }
}