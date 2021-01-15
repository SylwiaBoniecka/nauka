/* Napisz program, który sprawdza, czy wczytana z klawiatury liczba jest palindromem,
tzn. czytana od końca jest taka sama np. 12321,234432,3445.*/

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    int x;
    x=abs(liczba);

    int potega = 0;
    int dziesiatka = 0;

    while ((x % 10) > 0)
    {
        x = x / 10;
        dziesiatka = pow(10,potega);
        potega = potega + 1;
    }

    x=abs(liczba);
    int odwrotna = 0;
    while( (x % 10) > 0)
    {
        odwrotna = odwrotna + (x % 10) * dziesiatka;
        dziesiatka = dziesiatka /10;
        x = x /10;
    }

    if (liczba == odwrotna)
    {
        cout << "Podana liczba jest palindromem, tzn. czytana od konca jest taka sama." << endl;
    }
    else
    {
        cout << "Podana liczba nie jest palindromem, tzn. czytana od konca jest taka sama." << endl;
    }

    return 0;
}