/*Napisz program do obliczania przekątnej kwadratu. Wprowadź długość jednego boku (a) i użyj
sqrt () do obliczania pierwiastka kwadratowego z 2. Dodaj bibliotekę cmath */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    cout << "Podaj dlugosc boku kwadratu ";
    cin >> a;
    cout << "Przekatna kwadratu o dlugosci boku " << a << " wynosi " << a*sqrt(2) << endl;

    return 0;
}