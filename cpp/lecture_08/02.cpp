#include <iostream>

using namespace std;

int main()
{
    int a = 5, b = 10;
    cout << "a = " << a << "\t address: " << &a << endl;
    cout << "b = " << b << "\t address: " << &b << endl;

    int &ref = a;
    cout << "ref = " << ref << "\t address: " << &ref << endl;

    return 0;
}