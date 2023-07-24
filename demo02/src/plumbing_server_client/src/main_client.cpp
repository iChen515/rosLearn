#include "ros/ros.h"
#include "plumbing_server_client/Addints.h"

// 客户端实现：提交两个数据，处理响应结果
// 1 包含头文件
// 2 初始化ros节点
// 3 创建节点句柄
// 4 创建一个服务对象
// 5 提交请求并处理响应
// 6 spin() 不管需不需要spin最好都添加一下spin 如果是循环就使用spinonce

int main(int argc, char *argv[]){
    setlocale(LC_ALL, ""); //防止中文输出时乱码

    // 2 初始化ros节点
    ros::init(argc, argv, "sc_c");
    // 3 创建节点句柄
    ros::NodeHandle nh;
    // 4 创建一个服务对象
    ros::ServiceClient client = nh.serviceClient<plumbing_server_client::Addints>("addInts");
    // 5 提交请求并处理响应
    ros::service::waitForService("addInts"); //等待响应成功再处理
    plumbing_server_client::Addints ai;
    //5.1 组织请求
    ai.request.num1 = 100;
    ai.request.num2 = 200;
    //5.2 处理响应
    bool flag =  client.call(ai);
    if(flag){
        ROS_INFO("响应成功  --------   %d", ai.response.sum);
    } else {
        ROS_INFO("响应失败 ");
    }

    return 0;
}