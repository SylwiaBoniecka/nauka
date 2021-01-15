/* Napisz program do sprawdzania, czy liczba całkowita wprowadzona przez użytkownika
jest parzysta lub nieparzysta. Użyj operacji modulo, aby to zrobić. */

#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba%2==0)
    {
        cout << " Liczba " << liczba << " jest liczba parzysta" << endl;
    }
    else
    {
        cout << "Liczba " << liczba << " jest liczba nieparzysta" << endl;
    }

    return 0;
}