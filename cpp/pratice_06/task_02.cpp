/* Napisać funkcje mnożąca dwie liczby rzeczywiste wprowadzone przez użytkownika */

#include <iostream>
using namespace std;

double iloczyn(double, double);

int main()
{
    double a, b;
    cout << "Podaj liczbe a = ";
    cin >> a;
    cout << "Podaj liczbe b = ";
    cin >> b;

    cout << "Iloczyn liczb " << a << " i " << b << " wynosi " << iloczyn(a,b) << endl;
    return 0;
}

double iloczyn(double a, double b)
{
    return a * b;
}