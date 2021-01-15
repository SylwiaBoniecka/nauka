/* Napisz program,który wczytuje z klawiatury liczbę całkowitą 
i wyświetla ją w odwrotnej kolejności. */
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

    cout << " Liczba " << liczba << " po odwroceniu kolejnosci cyfr ma postać: " << odwrotna << endl;

    return 0;
}