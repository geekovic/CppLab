#include<iostream>
using namespace std;

class student{
    public:
       int rollno;
       string name;
       float marks;
    student(): rollno(0), name("default"), marks(0.0){}
    student(int r,string n,float m): rollno(r), name(n), marks(m){}

    void getdata(){
        cout<<"roll no: "<<endl;
        cin>>rollno;
        cout<<"name: "<<endl;
        cin>>name;
        cout<<"marks: "<<endl;
        cin>>marks;
    }
    void showdata(){
        cout<<"rollno is: "<<rollno<<endl;
        cout<<"name is: "<<name<<endl;
        cout<<"marks is: "<<marks<<endl;
    }
};

int main(){
    int size;
    cout<<"enter the value of size"<<endl;
    cin>>size;
    student *ptr= new student[size];

    cout<<"enter the values"<<endl;
    for(int i=0;i<size;i++){
        ptr[i].getdata();
    }
    cout<<"the details are: "<<endl;
    for(int j=0; j<size;j++){
        ptr[j].showdata();
    }
}
