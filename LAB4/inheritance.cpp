#include<iostream>
using namespace std;

class Human
{
protected:
    string m_name;
    string m_parentage;
    int m_age;
public:
Human(): m_name("Default"), m_parentage("Default"), m_age(0.0){}
Human(string name, string parentage, int age):m_name(name), m_parentage(parentage), m_age(age){}
};

class student:public Human{

private:
    float m_attendence;
    float m_percentage;
public:
    student(): Human(), m_attendence(0.0), m_percentage(0.0){}
    student(string name, string parentage, int age, float attendence, float percentage): Human(name,parentage,age), m_attendence(attendence), m_percentage(percentage){}

    void printDetails(){
        cout << "Name: " << m_name << endl;
        cout << "Parentage: " << m_parentage << endl;
        cout << "Age: " << m_age << endl;
        cout << "Attendance: " << m_attendence << endl;
        cout << "Percentage: " << m_percentage << endl;
        printLines();
    }
    void printLines(){
        for (int i = 0; i<=30; i++)
        {
            cout<<"-";
        }
        cout<<endl;
    }
};

int main(){
    student s1("Vivek", "Pardeep Kumar", 19, 81.0, 91.0);
    student s2("Gunveer", "JS", 19, 87.0, 95.0);
    s1.printDetails();
    s2.printDetails();
}
