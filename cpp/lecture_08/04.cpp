#include <iostream>

using namespace std;

int main()
{
    int a = 7;
    int *p = &a;
    cout << "a = " << a << "\t address: " << &a << endl;
    cout << "p = " << *p << "\t address: " << p << endl;
    
    return 0;
}