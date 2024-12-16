#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream myfile("filesample.txt");
    if(myfile.is_open()){
        char ch;
        string word,line;
        ifstream myfile("filesample.txt");
        if(myfile.is_open()){
            myfile.get(ch);
            cout<<"first character is "<<ch<<endl;
            myfile>>word;
            cout<<"first word is "<<word<<endl;
            getline(myfile,line);
            cout<<"first line is "<<line;

        }
    }
}