#include<iostream>
using namespace std;

class Employee {
    public:
    int empid;
    string name;
    float salary;

    Employee(): empid(0), name(""), salary(0.00)
    {}
    Employee(int e, string n, float s): empid(e), name(n), salary(s)
    {}

    void getdetails() {
        cout << "Enter the employee id: " << endl;
        cin >> empid;
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter the salary: " << endl;
        cin >> salary;
    }

    void showdetails() {
        cout << "The employee id is: " << empid << endl;
        cout << "The name is: " << name << endl;
        cout << "The salary is: " << salary << endl;
    }
};

int main() {
    Employee emparr[5];
    int i = 0;

    
    do {
        emparr[i].getdetails();
        i++;
    } while (i < 5);

    cout << "The details are: " << endl;
    i = 0;

    
    do {
        emparr[i].showdetails();
        i++;
    } while (i < 5);

    cout << "Calculating total salary" << endl;
    float sum = 0;
    i = 0;

    
    do {
        sum += emparr[i].salary;
        i++;
    } while (i < 5);

    cout << "Total cost to company is: " << sum << endl;
    
    return 0;
}