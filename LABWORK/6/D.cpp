#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream myfile("filesample.txt",ios::app);
    if(myfile.is_open()){
        myfile<<"appended data";
        myfile.close();
    }
    else{
        cout<<"no data appended";
    }
}
