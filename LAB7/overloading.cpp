#include<iostream>
using namespace std;

//Function to add two integers
int add(int a, int b){
    return a+b;
}

//Function to add three integers(Overloaded Function)
int add(int a, int b, int c){
    return a+b+c;
}

//Function to add two floating point numbers(Overloaded Function)
float add(float a,float b){
    return a+b;
}

int main(){
    int x=5,y=10,z=15;
    float p=2.5,q=3.5;
    cout<<"Practical No. 7"<<endl;
    //Calling different overloaded functions
    cout<<"sum of two integers: "<<add(x,y)<<endl;
    cout<<"sum of three integers: "<<add(x,y,z)<<endl;
    cout<<"sum of two floating point numbers: "<<add(p,q)<<endl;
    return 0;
}