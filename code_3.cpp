#include <iostream>
using namespace std;

class Employee {
    private:
        int emp_id;
        string name;
        static int emp_total;   // static data member (declaration only)

    public:
        // regular member function to input employee details
        void input() {
            cout << "Enter ID & Name= ";
            cin >> emp_id >> name;
            emp_total++;         // increment count each time an employee is created/entered
        }

        // regular member function to display one employee's details
        void display() {
        	
            cout << "ID= " << emp_id <<" "<< "Name= " << name << endl;
        }

        // static member function to show total employees
        static void count() {
            cout << "Total Employees= " << emp_total << endl;
        }
};

// static members MUST be defined outside the class
int Employee::emp_total = 0;

int main() {
    Employee e1, e2, e3;

    e1.input();
    e2.input();
    e3.input();

    e1.display();
    e2.display();
    e3.display();

    // calling static function using class name, no object needed
    Employee::count();

    return 0;
}