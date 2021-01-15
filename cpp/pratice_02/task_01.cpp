/* Napisz program, który będzie prostym kalkulatorem: +, -, *, /. 
Załaduj dwie liczby rzeczywiste i zzrób dla nich operacje matematyczne */

#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cout << "Podaj pierwsza liczbe: ";
    cin >> a;
    cout << "Podaj druga liczbe: ";
    cin >> b;

    cout << a << " + " << b << " = " << a+b << endl;
    cout << a << " - " << b << " = " << a-b << endl;
    cout << a << " * " << b << " = " << a*b << endl;
    cout << a << " / " << b << " = " << a/b << endl;
    
    return 0;
}
