#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream myfile("filesample.txt");
    if(myfile.is_open()){
        myfile<<"data succesfully entered"<<endl;
        myfile.close();
    }
    else{
        cout<<"the file could not be opened";
    }


}