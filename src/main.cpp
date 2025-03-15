#include <iostream>
using namespace std;
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
    WorkerManager wm;//创造wm类

    int choice = 0;
    while(1){
        wm.showMenu();//菜单显示

        cout << "请输入你的选择" << endl;
        cin >> choice;

        switch(choice){
            case 0: //退出系统
                wm.exitSystem();
                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            default:
                system("cls");
                break;
        }
    }

    system("pause");

    return 0;
    
}
