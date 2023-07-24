#include "ros/ros.h"
#include "plumbing_server_client/Addints.h"

// 服务端实现：解析客户端提交的数据，并运算在产生响应
// 1 包含头文件
// 2 初始化ros节点
// 3 创建节点句柄
// 4 创建一个服务对象
// 5 处理请求并产生响应
// 6 spin() 不管需不需要spin最好都添加一下spin 如果是循环就使用spinonce
bool doNums(plumbing_server_client::Addints::Request &request,
                                plumbing_server_client::Addints::Response &response){
    //1 处理请求
    int num1 = request.num1;
    int num2 = request.num2;
    ROS_INFO("add num is %d and %d", num1, num2);
    //逻辑处理
    if(num1 < 0 || num2 < 0){
        ROS_ERROR("提交的数据异常:数据不可以为负数");
        return false;
    }
    //2 组织响应
    int sum = num1 + num2;
    response.sum = sum;
    ROS_INFO("answer is %d", sum);

    return true;
}

int main(int argc, char *argv[]){
    setlocale(LC_ALL, ""); //防止中文输出时乱码

    // 2 初始化ros节点
    ros::init(argc, argv,"sc_s");
    ROS_INFO("server already start!");
    // 3 创建节点句柄
    ros::NodeHandle nh;
    // 4 创建一个服务对象
    ros::ServiceServer server = nh.advertiseService("addInts", doNums);
    // 5 处理请求并产生响应

    // 6 spin() 不管需不需要spin最好都添加一下spin 如果是循环就使用spinonce
    ros::spin();

    return 0;
}