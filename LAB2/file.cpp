#include <iostream>
using namespace std;
class Student{
 private:
    string m_name;
    string m_parentage;
    float m_age;
    float m_attendance;
    float m_percentage;
 public:
 void getData()
 {
    cout << "Enter Name: ";
    cin >> m_name;
    cout << "Enter Parentage: ";
    cin >> m_parentage;
    cout << "Enter Age: ";
    cin >> m_age;
    cout << "Enter Attendance: ";
    cin >> m_attendance;
    cout << "Enter Percentage: ";
    cin >> m_percentage;
    printLines();
 }
 void printData(){
    cout << "Name: " << m_name << endl;
    cout << "Parentage: " << m_parentage << endl;
    cout << "Age: " << m_age << endl;
    cout << "Attendance: " << m_attendance << endl;
    cout << "Percentage: " << m_percentage << endl;
    printLines();
 }
 void printLines()
 {
    for (int i = 0; i <= 30; i++)
        cout << "-";
        cout << endl;
 }
};
int main()
{
 Student s1;
    s1.getData();
    s1.printData();
}
