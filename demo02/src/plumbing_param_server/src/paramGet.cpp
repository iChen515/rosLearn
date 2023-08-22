#include "ros/ros.h"

// 1 初始化ROS节点
// 2 创建ROS节点句柄


/*
        演示参数查询
        实现：
                ros::NodeHandle------------------------------------------------------------------
                        1 param(键,默认值) 
                                存在，返回对应结果，否则返回默认值

                        2 getParam(键,存储结果的变量)
                                存在,返回 true,且将值赋值给参数2
                                若果键不存在，那么返回值为 false，且不为参数2赋值

                        3 getParamCached(键,存储结果的变量)--提高变量获取效率
                                存在,返回 true,且将值赋值给参数2
                                若果键不存在，那么返回值为 false，且不为参数2赋值

                        4 getParamNames(std::vector<std::string>)
                                获取所有的键,并存储在参数 vector 中 

                        5 hasParam(键)
                                是否包含某个键，存在返回 true，否则返回 false

                        6 searchParam(参数1，参数2)
                                搜索键，参数1是被搜索的键，参数2存储搜索结果的变量
                
                ros::param---------------------------------------------------------------------------
                        
*/


int main(int argc, char * argv[]){
    //设置编码
    setlocale(LC_ALL, "");
    // 1 初始化ROS节点
    ros::init(argc, argv,"get_param_c");
    // 2 创建ROS节点句柄
    ros::NodeHandle nh;

// ros::NodeHandle------------------------------------------------------------------
        // 1 param("键",默认值) 
        double radius = nh.param("radius", 0.5);
        ROS_INFO("radius = %.2f", radius);
        // 2 getParam("键",存储结果的变量)
        double radius2 = 0.0;
        // bool result = nh.getParam("radius",radius2);
        // 3 getParamCached("键",存储结果的变量)--与getParam类似 只是性能提升
        bool result = nh.getParamCached("radius",radius2);
        if(result){
        ROS_INFO("获取的半径为：%.2f", radius2);
        } else {
        ROS_INFO("被查询的变量不存在");
        }
        // 4 getParamNames(std::vector<std::string>)
        std::vector<std::string> names; //首先创建一个vector用于保存这些名称
        nh.getParamNames(names);
        for(auto &&i : names){
        ROS_INFO("遍历到的名称：%s", i.c_str());
        }
        //  5 hasParam("键")
        bool flag1 = nh.hasParam("radius");
        bool flag2 = nh.hasParam("radiusxxxxx");
        ROS_INFO("radius 存在吗？%d",flag1);
        ROS_INFO("radiusxxxxxx 存在吗？%d",flag2);
        // 6 searchParam(参数1，参数2)
        std::string key;
        nh.searchParam("radius", key);
        ROS_INFO("搜索的结果为：%s", key.c_str());
        // 若存在该键则返回 /键名  否则返回空串

// ros::param---------------------------------------------------------------------------
        ros::param::param("radius", 0.3);
        ROS_INFO("radius in param way = %.2f", radius);

    return 0;
}