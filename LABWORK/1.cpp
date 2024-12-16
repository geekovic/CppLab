#include <iostream>
using namespace std;

struct length {
    int feet;
    int inches;
};
length addlength(length length1,length length2){
    length l3;
    l3.inches = length1.inches + length2.inches ;
    l3.feet = length1.feet+length2.feet ;
    if(l3.inches >= 12){
        l3.inches=l3.inches-12 ;
        l3.feet=l3.feet+1;
    }
    return l3;
}
int main()
{
    length len1,len2,len3;
    len1.feet=5;
    len1.inches=6;
    len2.feet=4;
    len2.inches=9;
len3=addlength(len1, len2);
cout<<"The sum is "<<len3.feet<<"'"<<len3.inches << "\"" ;

return 0;
}