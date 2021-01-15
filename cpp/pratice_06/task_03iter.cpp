/* Napisać funkcje, która znajduje największy wspólny dzielnik 
dwóch liczb całkowitych większych niż 0.
Posłużyć się Algorytmem Euclidesa z podziałem modulo. 
Napisz program przy użyciu metody iteracyjnej i rekurencyjnej.
Posłużyć się schematem blokowym przedstawionym na slajdzie */

// METODA ITERACYJNA

#include <iostream>
using namespace std;

int gcd(int, int);

int main()
{
    int a, b;
    cout << "Podaj liczbe a = ";
    cin >> a;
    cout << "Podaj liczbe b = ";
    cin >> b;

    if (a<0 || b<0)
    {
       cout << "ERROR. Numbers are not great than 0" << endl; 
    }
    else
    {
        cout << "GCD = " << gcd(a,b) << endl;
    }

    return 0;
}

int gcd(int a, int b)
{
    while (a != 0 && b != 0 )
    {
        if(a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    return a+b;
}
