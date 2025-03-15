#pragma once
#include<iostream>
#include<string>
using namespace std;

class Worker{
public:
    virtual void showInfo() = 0; //显示个人信息

    virtual string getDeptName() = 0; //显示部门名称

    virtual string getMission() = 0; //显示岗位职责

    int m_Id; //职工编号
    string m_Name; //职工姓名
    int m_DeptId; //所在部门
};