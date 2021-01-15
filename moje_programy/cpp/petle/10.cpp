/* Napisz program, który dla wczytanej z klawiatury liczby naturalnej 
wypisuje ilość cyfr tej liczby. */

#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj dowolna liczbe naturalna: ";
    cin >> liczba;

    while (liczba<0)
    {
        cout << "Podales liczbe, ktora nie jest liczba naturalna." << endl;
        cout << "Podaj dowolna liczbe naturalna: ";
        cin >> liczba;
    }

    int x;
    int y;
    int kroki=0;
    y=liczba;
    
    if (y>0)
    {
        while (y>0)
        {       
            y=y/10;
            kroki=kroki+1;
        }
    }
    else
    {
        kroki=1;
    }

    cout << "Ilosc cyfr liczby " << liczba << " wynosi " << kroki << endl;

    return 0;
}