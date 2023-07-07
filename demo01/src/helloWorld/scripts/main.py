#! /usr/bin/env python
# coding=utf-8 
#这行得加上 否则注释会影响文件运行

# 1 导包
import rospy 

# 2 初始化ros节点
# 3 输出

if __name__ == "__main__":
    rospy.init_node("hello_xxc_py") #2.初始化 ROS 节点:命名(唯一)
    rospy.loginfo("HELLO WORLD PY!!!!") 
