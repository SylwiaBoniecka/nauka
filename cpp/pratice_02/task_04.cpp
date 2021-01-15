/* Napisz program do obliczania sinus i consinus kąta wprowadzonego przez użytkownika.
Kat powinien być wprowadzony w stopniach. Zmień stopnie na radiany. Użyj funkcji sin () i cos ().
Pamiętaj aby dołączyć bibliotekę cmath. */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double stopien, radian;
    cout << "Podaj stopien dla ktorego ma byc wyliczony sinus i cosinus ";
    cin >> stopien;
    
    radian=(stopien/180)*M_PI;
    cout << "sin " << stopien << " = " << sin(radian) << endl;
    cout << "cos " << stopien << " = " << cos(radian) << endl;
    return 0;
}