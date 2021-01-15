/* Napisz proram, który dla wczytanej z klawiatury liczby naturalnej 
wypisuje sumę nieparzystych cyfr tej liczby. */


#include <iostream>
using namespace std;

int main()
{
    int liczba;

    cout << "Podaj dowolna liczbe naturalna: ";
    cin >> liczba;

    while (liczba<0)
    {
        cout << "Podana liczba nie jest liczba naturalna. " << endl;
        cout << "Podaj dowolna liczbe naturalna: ";
        cin >> liczba;
    }

    int suma=0;
    int x;
    x=liczba;                    
    while (x>0)             
    {
        if (((x%10)%2)!=0)
        {
            suma=suma+(x%10);
        }
        x=x/10;
    }

    cout << "Suma nieparzystych cyfr liczby " << liczba << " wynosi " << suma << endl;

    return 0;
}