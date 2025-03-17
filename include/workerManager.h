#pragma once
#include <iostream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
using namespace std;

class WorkerManager{//类声明
public:

    WorkerManager();

    void showMenu();

    void exitSystem();

    void addEmp();

    ~WorkerManager();

    int m_EmpNum;

    Worker **m_EmpArray;
};