/* Zdefiniuj trzy zmienne typu int, float, double 
i przypisz im dowolne wartości. Wyświetl ich wartości i adresy. */

#include <iostream>
using namespace std;

int main()
{
    int my_int = 13;
    float my_float = 123.4;
    double my_double = -987.675;

    cout << "my_int = " << my_int << " \t address: " << &my_int << endl;
    cout << "my_float = " << my_float << " \t address: " << &my_float << endl;
    cout << "my_double = " << my_double << " \t address: " << &my_double << endl;

    return 0;
}