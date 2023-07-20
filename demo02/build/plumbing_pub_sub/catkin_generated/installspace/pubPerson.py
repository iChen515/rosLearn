#!/usr/bin/env python2
#coding=utf-8

import rospy
from plumbing_pub_sub.msg import Person

# 1 导包
# 2 初始化ros节点
# 3 创建发布者对象
# 4 编写发布逻辑并发布数据


if __name__ == "__main__":
    # 2 初始化ros节点
    rospy.init_node("self")
    # 3 创建发布者对象
    pub = rospy.Publisher("selfPerson", Person, queue_size=10)
    # 4 编写发布逻辑并发布数据
    # 4.1 创建Person数据
    P = Person()
    P.name = "WWG"
    P.age = 0
    P.height = 1.1
    # 4.2 创建Rate对象
    rate = rospy.Rate(1)
    # 4.3 循环发布
    while not rospy.is_shutdown():
        pub.publish(P)
        rospy.loginfo("发布的消息：%s, %d, %.2f", P.name, P.age, P.height)
        rate.sleep()
    

    pass