#include "ros/ros.h"
/*
    需求1：演示时间相关的操作（获取当前时间 + 设置指定时间）
    实现：
                1 准备 （头文件、节点初始化、NodeHandle）
                2 获取当前时间
                3 设置指定时间
    
    需求2：程序执行中停顿 5 秒
    实现：
                1 创建持续时间对象
                2 休眠
    
    需求3：已经知道程序开始运行的时刻 和 程序运行持续的时间 ， 求运行结束的时刻
    实现：
                1 获取开始执行的时刻
                2 模拟运行时间（N秒）
                3 计算结束时刻 = 开始 + 持续

    注意：
                1 时刻与持续时间之间可以执行加减
                2 持续时间之间也可以进行加减
                3 时刻之间可以相减，不可以相加

*/

int main(int argc, char * argv[]){
    setlocale(LC_ALL,"");
    // 1 准备 （头文件、节点初始化、NodeHandle）
    ros::init(argc, argv, "hello_time");
    ros::NodeHandle nh;         //注意：该步骤是必需的，否则会导致时间API 调用失效（因为在NodeHandle中会初始化时间操作）

    // ————————————————————————需求1：获取、设定时间——————————————————————————————
    // 2 获取当前时间
    // now函数会选择当前时刻并返回
    // 当前时刻 ——> now被调用执行的时刻
    // 参考系：1970年1月1日 00:00:00
    ros::Time right_now = ros::Time::now();
    ROS_INFO("当前时刻：%.2f", right_now.toSec());  //获取距离 1970年01月01日 00:00:00 的秒数
    ROS_INFO("当前时刻：%d", right_now.sec);            //获取距离 1970年01月01日 00:00:00 的秒数

    // 3 设置指定时间
    ros::Time t1(20, 314159265358);     // 参数1:秒数  参数2:纳秒   //设置距离 1970年01月01日 00:00:00   20秒314159265358纳秒
    ROS_INFO("t1 = %.5f", t1.toSec());
    ros::Time t2(100.36);
    ROS_INFO("t2 = %.5f", t2.toSec());

    // ————————————————————————需求2：持续时间——————————————————————————————
    ROS_INFO("开始休眠！");
    ROS_INFO("当前时刻:%.2f",ros::Time::now().toSec());
    ros::Duration du(4.5);
    du.sleep();
    ROS_INFO("结束休眠！");
    ROS_INFO("当前时刻:%.2f",ros::Time::now().toSec());

    // ————————————————————————需求3：时间计算——————————————————————————————
    
    //      1    Time 与 Duration 进行运算
    ROS_INFO("Time 与 Duration 进行运算");

    // 1 获取开始执行的时刻
    ros::Time begin = ros::Time::now();
    // 2 模拟运行时间（N秒）
    ros::Duration du1(5);
    // 3 计算结束时刻 = 开始 + 持续
    ros::Time stop = begin + du1;       // 也可以减法
    ROS_INFO("开始时刻：%.2f", begin.toSec());
    ROS_INFO("结束时刻：%.2f", stop.toSec());

    //      2    Time 与 Time 进行运算 （不可+  可-）
    ROS_INFO("Time 与 Time 进行运算 （不可+  可-）");

    // ros::Time sum = begin + stop;   // 从+处注释就可以看出，不可以相加
    ros::Duration du2 = begin - stop;       // 减法可以 但是类型就变成duration了
    ROS_INFO("时刻相减：%.2f", du2.toSec());


    //      3    Duration 与 Duration 进行运算
    ROS_INFO("Duration 与 Duration 进行运算");
    ros::Duration du3 = du1 + du2;
    ROS_INFO("时间相加：%.2f", du3.toSec());
    ros::Duration du4 = du1 - du2;
    ROS_INFO("时间相减：%.2f", du4.toSec());

    



    return 0;
}