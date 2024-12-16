#include<iostream>
using namespace std;

class student{
    public:
    string name;
    int rollno;

    student(): name(""), rollno(0){}
    student(string n, int r): name(n), rollno(r){}

    void display(){
        
    }
};

int main(){
    student obj1("arpit", 5);
    student *ptr = new student("abhishek", 10);
    cout<<obj1.name;
    cout<<ptr->name;
    cout<<ptr->rollno;
    // student *ptr2= new student[;
    // ptr2[0].name="ankit";
    // ptr2[0].rollno=1;
    // ptr2[1].name="abhay";
    // ptr2[1].rollno=2;

}