#!/usr/bin/env python2
#coding=utf-8
import rospy
from plumbing_server_client.srv import Addints, AddintsRequest, AddintsResponse
from plumbing_server_client.srv import *

# 客户端：组织并提交请求，处理服务端响应
# 1. 导包
# 2. 初始化ROS节点
# 3. 创建客户端对象
# 4. 组织请求数据，并发送请求
# 5. 处理响应

#  优化实现：
#       可以在执行节点时，动态传入参数

#   问题：
#       客户端先于服务端启动，会抛出异常
#   需要：
#       客户端先于服务端启动，不要抛出异常而是挂起，等待服务启动后，再次发送请求
#   实现L
#       ROS 中内置了相关函数，可以判断服务器的状态，如果服务没有启动，那么就让客户端挂起


if __name__ == "__main__":

    # 判断参数长度
    if len(sys.argv) != 3:
        rospy.loginfo("传入的参数个数不对")
        sys.exit(1)


    # 2. 初始化ROS节点
    rospy.init_node("scp_c")
    # 3. 创建客户端对象
    client = rospy.ServiceProxy("addInts", Addints)
    rospy.loginfo("客户端对象已创建")
    # 4. 组织请求数据，并发送请求
    #优化项： 解析传入的参数
    num1 = int(sys.argv[1])
    num2 = int(sys.argv[2])

    # 等待服务启动，未启动就挂起（两种方法）
    # client.wait_for_service() #方法1
    rospy.wait_for_service("addInts") #方法2

    response = client.call(num1, num2)
    # 5. 处理响应
    rospy.loginfo("响应的数据：%d", response.sum)
    pass