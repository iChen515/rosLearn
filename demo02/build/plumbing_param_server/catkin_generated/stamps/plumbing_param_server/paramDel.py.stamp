#! /usr/bin/env python
#coding=utf-8

# 演示参数删除：
#    rospy.delete_param("键")
#           键存在时，可以删除成功，键不存在时，会抛出异常

import rospy

if __name__ == "__main__":
    rospy.init_node("delete_param_p")

    #try catch
    try:
        rospy.delete_param("p_int") #如果已经删除了或者本就不存在该键，则会报出异常
    except Exception as e: 
        rospy.loginfo("删除失败")
    
    pass
