/* Napisz program wyznaczający wartość pierwiastka kwadratowego z liczby.
Wprowadzane dane zabezpiecz pętlą zaporową. */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double liczba;
    cout << "Podaj liczbe z ktorej ma byc obliczony pierwiastek kwadratowy: ";
    cin >> liczba;

    while (liczba<0)
    {
        cout << "Podana liczba musi byc dodatnia." << endl;
        cout << "Podaj liczbe z ktorej ma byc obliczony pierwiastek kwadratowy: ";
        cin >> liczba;
    }

    double pierwiastek;
    pierwiastek=sqrt(liczba);
    cout << "Pierwiastek kwadratowy z liczby " << liczba << " wynosi " << pierwiastek << endl;

    return 0;
}