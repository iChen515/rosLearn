#!/usr/bin/env python2
#coding=utf-8
import rospy
from turtlesim.srv import Spawn, SpawnRequest, SpawnResponse

    # 需求：向服务器发送请求，生成一直新的乌龟
    #     话题：/spawn
    #     消息：turtlesim/Spawn

    # 1 导入包
    # 2 初始化ros节点
    # 3 创建服务器的客户端对象
    # 4 组织数据并发送请求
    # 5 处理响应结果

if __name__ == "__main__":
    # 2 初始化ros节点
    rospy.init_node("service_call_p")
    # 3 创建服务器的客户端对象
    client = rospy.ServiceProxy("/spawn", Spawn)
    # 4 组织数据并发送请求
    # 4.1 组织数据
    request = SpawnRequest()
    request.x = 4.5
    request.y = 2.0
    request.theta = -3
    request.name = "wwGou"
    #4.2 判断服务器状态并发送
    client.wait_for_service()
    try:
        response = client.call(request)
        # 5 处理响应结果
        rospy.loginfo("生成乌龟的名字：%s", response.name)
    except Exception as e:
        rospy.loginfo("请求处理异常")
    pass