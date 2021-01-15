#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int liczba;
    int jednosci;
    int dziesiatki;
    int setki;

    cout << "Liczby Armstronga" << endl;
    for (int liczba=100; liczba<=999; liczba++)
    {
        jednosci=liczba%10;
        dziesiatki=(liczba%100)/10;
        setki=liczba/100;
        if ((pow(setki,3)+pow(dziesiatki,3)+pow(jednosci,3))==liczba) 
        {
            cout << liczba << "     ";
        }
    }

    cout << endl;

    return 0;
}