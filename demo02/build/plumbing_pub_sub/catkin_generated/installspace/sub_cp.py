#!/usr/bin/env python2
#coding=utf-8

import rospy
from std_msgs.msg import String

# 1 导包
# 2 初始化ros节点
# 3 创建订阅者对象
# 4 编写订阅逻辑并订阅数据
# 5 spin()

def doMsg(msg):
    rospy.loginfo("cp data is : %s", msg.data)

if __name__ == "__main__":
    # 2 初始化ros节点
    rospy.init_node("cp_sub")
    # 3 创建订阅者对象
    sub = rospy.Subscriber("CP", String, doMsg, queue_size=10)
    # 4 编写订阅逻辑并订阅数据
    # 5 spin()
    rospy.spin()
    
    pass