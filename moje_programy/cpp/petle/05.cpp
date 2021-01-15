/*Napisz program, który wczytuje z klawiatury liczbę, aż do chwili gdy będzie ona 
należała do przedziału <0,100> */

#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    while (liczba>=0 && liczba <=100)
    {
        cout << "Podaj liczbe: ";
        cin >> liczba;
    }

    return 0;
}