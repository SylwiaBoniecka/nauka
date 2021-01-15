/* Napisz program, który wczytuje z klawiatury liczbę całkowitą i wyświetla informację, 
czy wśród cyfr tej liczby jest 1. */

#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe ";
    cin >> liczba;

    int kopia;
    int jedynki = 0;
    kopia = liczba;
    
    while (kopia > 0)
    {
        if ( (kopia % 10) == 1 )
        {
            jedynki = jedynki + 1;
        }
        kopia = kopia / 10;
    }

    cout << "Wsrod cyfr liczby " << liczba << " jest " << jedynki << " jedynek." << endl;
    return 0;
}