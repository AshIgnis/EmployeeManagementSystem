# Employee Management System

This is a simple Employee Management System that supports adding, displaying, deleting, modifying, searching, sorting, and clearing employee information. This project is suitable for practicing C++ programming.（(For simple project practice.Learn form https://www.bilibili.com/video/BV1et411b73Z?spm_id_from=333.788.videopod.episodes&vd_source=cfd41efb9ad31bbd65dff5da1d47978a&p=72)

## Features

1. Add Employee
2. Display Employees
3. Delete Employee
4. Modify Employee
5. Search Employee
6. Sort Employees
7. Clear All Data
0. Exit System

## File Structure
EmployeeManagementSystem/ ├── include/ │ ├── workerManager.h │ ├── worker.h │ ├── employee.h │ ├── manager.h │ └── boss.h ├── src/ │ ├── main.cpp │ ├── workerManager.cpp │ ├── worker.cpp │ ├── employee.cpp │ ├── manager.cpp │ └── boss.cpp └── README.md

## Compilation and Execution

### Compilation

Run the following commands in the project root directory to compile the project:

```bash
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c [workerManager.cpp](http://_vscodecontentref_/1) -o [workerManager.o](http://_vscodecontentref_/2)
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c src/worker.cpp -o src/worker.o
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c [employee.cpp](http://_vscodecontentref_/3) -o [employee.o](http://_vscodecontentref_/4)
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c [manager.cpp](http://_vscodecontentref_/5) -o [manager.o](http://_vscodecontentref_/6)
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c [boss.cpp](http://_vscodecontentref_/7) -o [boss.o](http://_vscodecontentref_/8)
g++ -std=c++17 -Wall -Wextra -g -Iinclude -c [main.cpp](http://_vscodecontentref_/9) -o [main.o](http://_vscodecontentref_/10)
g++ -std=c++17 -Wall -Wextra -g -o [main.exe](http://_vscodecontentref_/11) [workerManager.o](http://_vscodecontentref_/12) src/worker.o [employee.o](http://_vscodecontentref_/13) [manager.o](http://_vscodecontentref_/14) [boss.o](http://_vscodecontentref_/15) [main.o](http://_vscodecontentref_/16)

Execution
After successful compilation, run the following command to start the program:
[main.exe](http://_vscodecontentref_/17)

Usage Instructions
After starting the program, the main menu will be displayed.
Enter the corresponding number based on the prompt to select a function:
Enter 1 to add an employee.
Enter 2 to display employees.
Enter 3 to delete an employee.
Enter 4 to modify an employee.
Enter 5 to search for an employee.
Enter 6 to sort employees.
Enter 7 to clear all data.
Enter 0 to exit the system.

Contribution
Feel free to submit issues or contribute code to improve this project.

License
This project is for learning and reference purposes only. ``