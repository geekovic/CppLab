#include <iostream>
using namespace std;
void swap(int* ptr_a, int* ptr_b)
{
 int temp = *ptr_a;
 *ptr_a = *ptr_b;
 *ptr_b = temp;
}
int main(){
 int a = 10, b = 20;
 int* ptr_a = &a;
 int* ptr_b = &b;
 cout << "Before Swapping: a => " << a << " b => " << b << endl;
 swap(ptr_a,ptr_b);
 cout << "After Swapping: a => " << a << " b => " << b << endl;
}
