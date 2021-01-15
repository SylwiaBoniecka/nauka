/* Zdefiniuj zmienną x typu float i przypisz jej dowolną wartość. 
Zdefiniuj wskaźnik do zmiennej x. Wyświetl wartość wskaźnika i jego adres. */

#include <iostream>
using namespace std;

int main()
{
    float x = 123.4;
    cout << "x = " << x << " \t address: " << &x << endl;

    float *p = &x;
    cout << "p = " << *p << " \t address: " << p << endl;

    return 0;
}