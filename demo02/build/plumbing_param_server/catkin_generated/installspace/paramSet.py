#!/usr/bin/env python2
#coding=utf-8

# 需要实现参数的新增与修改
# 需求：首先设置机器人的共享参数，类型、半径（0.15m）
#             再修改半径为0.25m
# 实现：
#             rospy.set_param("键名", 值)


import rospy

if __name__ == "__main__":
    rospy.init_node("set_update_paramter_p")

    # 设置各种类型参数
    rospy.set_param("p_int",10)
    rospy.set_param("p_double",3.14)
    rospy.set_param("p_bool",True)
    rospy.set_param("p_string","hello python")
    rospy.set_param("p_list",["hello","haha","xixi"])
    rospy.set_param("p_dict",{"name":"hulu","age":8})

    # 修改
    rospy.set_param("p_int",100)
