/* Napisz program obliczający średnią arytmetyczną n liczb wprowadzonych przez użytkownika
używanie pętli for i while.  */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double suma = 0;
    double liczba;
    double srednia = 0;

    cout << "Dla ilu liczb bedzie liczona srednia arytmetyczna? ";
    cin >> n;

    if (n<=0)
    {
        cout << "Ilosc liczb dla ktorych ma byc liczona srednia arytmetyczna musi byc liczba dodatnia" << endl;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            cout << " Podaj " << i << " liczbe: ";  //please do the same code using also a while loop
            cin >> liczba;
            suma = suma + liczba;
        }
        srednia = suma / n;
        cout << "Srednia arytmetyczna " << n << " liczb wynosi " << srednia << endl;
    }
    
    return 0;
}