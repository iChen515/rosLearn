#!/usr/bin/env python2
#coding=utf-8

import rospy
from geometry_msgs.msg import Twist

# 发布方实现：发布速度消息
    # 话题：/turtle1/cmd_vel
    # 消息：geometry_msgs/Twist

    # 1  导包
    # 2  初始化ROS节点
    # 3  创建发布者对象
    # 4  组织数据并发布数据

if __name__ == "__main__":
    # 2  初始化ROS节点
    rospy.init_node("my_control_p")
    # 3  创建发布者对象
    pub = rospy.Publisher("/turtle1/cmd_vel", Twist, queue_size=10)
    # 4  组织数据并发布数据
    # 设置发布频率
    rate = rospy.Rate(10)
    # 创建速度消息
    twist = Twist()
    twist.linear.x  = 0.5
    twist.linear.y  = 0.0
    twist.linear.z  = 0.0
    twist.angular.x = 0.0
    twist.angular.y = 0.0
    twist.angular.z = 0.5
    # 循环发布
    while not rospy.is_shutdown():
        pub.publish(twist)
        rate.sleep()

    pass