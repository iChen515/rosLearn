#! /usr/bin/env python
# coding=utf-8

import rospy
from std_msgs.msg import String

# 1 导包
# 2 初始化ros节点
# 3 创建订阅者对象
# 4 编写订阅逻辑并订阅数据
# 5 spin()

def doMsg(msg):
    rospy.loginfo("py订阅的数据: %s", msg.data)

if __name__ == "__main__":
    # 2 初始化ros节点 init ros node
    rospy.init_node("sub2")
    # 3 创建订阅者对象 create subscriber
    sub = rospy.Subscriber("topicName2", String,  doMsg, queue_size=10)
    # 4 编写订阅逻辑并订阅数据 write subscription logic and subscribe to data
    # 5 spin()
    rospy.spin()
    
    pass