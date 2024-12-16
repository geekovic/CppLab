#include<iostream>
using namespace std;

class counter {
    public:
        static int count;

        void increment(){
            count++;
        }

        void displaycount(){
            cout<<"count: " <<count <<endl;
        }
};

int counter::count=0 ;
       int main(){
        counter ob1,ob2;
            ob1.increment();
            ob2.increment();
            ob1.increment();
            ob1.displaycount();
            ob2.displaycount();
            ob1.displaycount();
    return 0;
}
