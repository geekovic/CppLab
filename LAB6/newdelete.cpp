#include <iostream>
using namespace std;

class Distance{
 private:
 int m_feet;
 int m_inches;

 public:
 Distance(): m_feet(0), m_inches(0) {}
 Distance(int feet, int inches): m_feet(feet), m_inches(inches) {}

 void getDistance()
 {
    cout << "Enter feet: ";
    cin >> m_feet;
    cout << "Enter inches: ";
    cin >> m_inches;
    printLines();
 }
 void showDistance()
 {
    cout << "Feet => " << m_feet << " | Inches => " << m_inches << endl;
    printLines();
 }
 void printLines()
 {
    for (int i = 0; i <= 30; i++)
        cout << "-";
        cout << endl;
 }
};

int main()
{
    Distance* ptr_d1 = new Distance(8,9);
    Distance* ptr_d2 = new Distance();
    ptr_d1->showDistance();
    ptr_d2->getDistance();
    ptr_d2->showDistance();
}
