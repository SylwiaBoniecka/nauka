#include <iostream>

using namespace std;

void add(int *, int *); 

int main()
{
    int a = 7, b = 0;
    int *point_a = &a;
    int *point_b = &b;

    cout << "Before add function" << endl;
    cout << "a = " << a << "\t address: " << &a << endl;
    cout << "b = " << b << "\t address: " << &b << endl;

    add (point_a, point_b);

    cout << "After add function" << endl;
    cout << "a = " << a << "\t address: " << &a << endl;
    cout << "b = " << b << "\t address: " << &b << endl;

    return 0;
}

void add(int *k, int *l)
{
    *k = *k + 100;
    *l = *l - 25;
}