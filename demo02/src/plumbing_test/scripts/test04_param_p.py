#!/usr/bin/env python
#coding=utf-8
import rospy

#  需求：修改参数服务器中 turtlesim背景颜色相关的参数
    #   1 初始化ros节点
    #   2 设置参数

if __name__ == "__main__":
    rospy.init_node("change_bgColor_p")
    # 修改背景颜色
    rospy.set_param("/turtlesim/background_r", 100)
    rospy.set_param("/turtlesim/background_g", 100)
    rospy.set_param("/turtlesim/background_b", 100)

    # rospy.set_param("background_r",255)
    # rospy.set_param("background_g",255)
    # rospy.set_param("background_b",255)  # 调用时，需要传入 __ns:=xxx