/* Wykorzystując pętlę zaporową napisz program, wyznaczający pole kwadratu.
Program jako dane (długość boku) powinien przyjmować wyłącznie liczby dodatnie. */

#include <iostream>
using namespace std;

int main()
{
    double a;
    cout << "Podaj dlugosc boku kwadratu: ";
    cin >> a;

    while (a<=0)
    {
        cout << "Bok kwadratu musi byc liczba dodatnia." << endl;
        cout << "Podaj dlugosc boku kwadratu: ";
        cin >> a;
    }

    double P;
    P=a*a;
    cout << "Pole kwadratu o boku " << a << " wynosi " << P << endl;
    
    return 0;
}