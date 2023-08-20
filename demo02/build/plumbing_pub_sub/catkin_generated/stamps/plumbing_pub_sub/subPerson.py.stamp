#! /usr/bin/env python
#coding=utf-8

import rospy
from plumbing_pub_sub.msg import Person

# 1 导包
# 2 初始化ros节点
# 3 创建订阅者对象
# 4 编写订阅逻辑并订阅数据
# 5 spin()

def doMsg(p):
    rospy.loginfo("INFO of Person: %s, %d, %.2f", p.name, p.age, p.height)
    pass

if __name__ == "__main__":
    # 2 初始化ros节点
    rospy.init_node("selfs")
    # 3 创建订阅者对象
    sub = rospy.Subscriber("selfPerson", Person, doMsg)
    rospy.spin()
    
    pass