#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream myfile("filesample.txt");
    if(myfile.is_open()){
        string line;
        while(getline(myfile,line)){
            cout<<line;
        }
        myfile.close();
    }
    else{
        cout<<"the file couldnt be opened";
    }
}