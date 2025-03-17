#pragma once
#include <iostream>
#include <fstream>
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"
#define FILENAME "empFile.txt"
using namespace std;

class WorkerManager{//类声明
public:

    WorkerManager();

    void showMenu();

    void exitSystem();

    void addEmp();

    void save();

    int get_EmpNum();

    void init_Emp();

    void showEmp();

    void delEmp();

    int isExist(int id);

    void modEmp();

    void findEmp();

    bool m_FileIsEmpty;

    void sortEmp();

    void cleanFile();

    ~WorkerManager();

    int m_EmpNum;

    Worker **m_EmpArray;
};