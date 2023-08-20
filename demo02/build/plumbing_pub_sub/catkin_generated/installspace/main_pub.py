#!/usr/bin/env python2
# coding=utf-8

import rospy
from std_msgs.msg import String
# 1 导包
# 2 初始化ros节点
# 3 创建发布者对象
# 4 编写发布逻辑并发布数据

if __name__ == "__main__":
    # 2 初始化ros节点
    rospy.init_node("pub2")  #设置节点名称 set Node name 
    # 3 创建发布者对象
    pub = rospy.Publisher("topicName2", String, queue_size=10)

    # 因为刚开始发布消息的时候 publisher还在master中注册。所以前几条会丢失导致订阅不到前几条
    rospy.sleep(3) 
    
    # 4 编写发布逻辑并发布数据
    # 创建消息对象
    msg = String()
    # 制定发布频率 set pub rate
    rate = rospy.Rate(1)
    # 设置一个定时器 set a timer
    count = 0
    # 使用循环发布
    while not rospy.is_shutdown(): 
    # 这里要注意的是 判断条件 观察的是 该程序有没有结束，前面加了not表示程序不shutdown就不停的发
    # difference with program in cpp is: in cpp file we use ros::ok to judge here set as is_shutdown

        count += 1
        # 类型转换为字符串型再加在hello的后面
        # convert the type of int to string then append to "hello"
        msg.data = "hello" + str(count) 
        # publish data
        pub.publish(msg)

        rospy.loginfo("py发布的数据是:%s", msg.data) #check the data, output from program
        rate.sleep() 

    pass