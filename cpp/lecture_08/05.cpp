#include <iostream>

using namespace std;

void zero(int, int);

int main()
{
    int a = 7, b = 10;

    cout << "Before zero function" << endl;
    cout << "a = " << a << "\t address: " << &a << endl;
    cout << "b = " << b << "\t address: " << &b << endl;

    zero(a,b);

    cout << "After zero function" << endl;
    cout << "a = " << a << "\t address: " << &a << endl;
    cout << "b = " << b << "\t address: " << &b << endl;
    
    return 0;
}

void zero(int x, int y)
{
    x = 0;
    y = 0;
    cout << "In zero function" << endl;
    cout << "x = " << x << "\t address: " << &x << endl;
    cout << "y = " << y << "\t address: " << &y << endl;
}