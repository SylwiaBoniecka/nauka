/* Użyj pętli do while w poprzednim programie, aby przeliczyć średnią arytmetyczną, 
jeśli użytkownik wpisuje literę T. */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    double suma = 0;
    double liczba;
    double srednia = 0;

    char znak = 'T';
    do
    {
        cout << "Dla ilu liczb bedzie liczona srednia arytmetyczna? ";
        cin >> n;

        if (n>0)
        {
            for (int i = 1; i <= n; i++)
            {
                cout << " Podaj " << i << " liczbe: ";
                cin >> liczba;
                suma = suma + liczba;
            }
            srednia = suma / n;
            cout << "Srednia arytmetyczna " << n << " liczb wynosi " << srednia << endl;
        } 
        else 
        {
            cout << "Ilosc liczb musi byc dodatnia" << endl;   
        }
        cout << "Jesli chcesz ponownie policzyc srednia wcisnij T ";
        getchar();
        cin >> znak;
    }
    while(znak=='T');

    return 0;
}