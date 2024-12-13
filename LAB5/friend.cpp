#include<iostream>
using namespace std;

class box;
void printVolume(box &b);

class box{
    private:
        double length;
        double width;
        double height;
    public:
        //constructor to initialize the box's dimensions
        box(double l, double w, double h){
            length=l;
            width=w;
            height=h;
        }
        //declaring the printVolume function as a friend
        friend void printVolume(box &b);
};
//friend function definition
void printVolume(box &b){
    double volume= b.length*b.width*b.height;
    cout<<"volume of box: "<<volume<<endl;
}
int main(){
    cout<<"Practical no.5"<<endl;
    //create an object of box class 
    box Box(5.0,3.0,2.0);
    //call the friend function
    printVolume(Box);
    return 0;
}
