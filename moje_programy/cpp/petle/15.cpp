/* Napisz program, który zamienia podana liczbe na liczbe w systemie binarnym 
oraz znajduje ilość jedynek w dwójkowym rozwinięciu podanej przez użytkownika liczby naturalnej*/

#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Podana liczba po zamianie z postaci dziesietnej na binarna ma postac: ";

    int n;
    int suma = 0;
    n = liczba;
    int ilosc = 0;

    while (n != 0)
    {
        if (n % 2 == 0)
        {
            cout <<"0";
        }
        else
        {
            cout <<"1";
            ilosc = ilosc +1;
        }
        n = n / 2;
    }
    
    cout << endl;
    cout << "Ilosc jedynek w dwojkowym rozwinieciu podanej liczby wynosi " << ilosc << endl;
    return 0;
}
