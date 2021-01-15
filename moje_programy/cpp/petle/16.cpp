/* Napisz program, który wczytuje z klawiatury liczbę całkowitą i oblicza 
iloczyn niezerowych cyfr tej liczby. */

#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe ";
    cin >> liczba;

    int kopia;
    int iloczyn = 1;
    kopia=liczba;
    do
    {
        if ( (kopia % 10) != 0)
        {
            iloczyn = iloczyn * (kopia % 10);
        }
        kopia = kopia / 10;
    } while ( ( (kopia % 10) > 0 ) || ( (kopia != 0) ) );

    if ( liczba > 0 )
    {
        cout << "Iloczyn niezerowych cyfr tej liczby " << liczba << " wynosi " << iloczyn << endl;
    }
    else
    {
        cout << "Iloczyn niezerowych cyfr tej liczby " << liczba << " wynosi -" << iloczyn << endl;
    }
    
    return 0;
}