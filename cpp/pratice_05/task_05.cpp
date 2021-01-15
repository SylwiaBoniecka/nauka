/* Napisz program, który zdefiniuje tablicę n elementów ustawioną przez użytkownika.
Użyj funkcji do... while. Wyświetl tylko pierwszy i ostatni element tablicy oraz ich adresy. */

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Podaj rozmiar tablicy n = ";
    cin >> n;

    int i = 0;
    int tab[n];
    do
    {
        cout << "tab[" << i << "] = ";
        cin >> tab[i];
        i = i + 1;
    } while (i < n);
    cout << endl;
    
    cout << "tab[0] = " << tab[0] << endl;
    cout << "&tab[0] = " << &tab[0] << endl;
    cout << endl;

    cout << "tab[n] = " << tab[n-1] << endl;
    cout << "&tab[n] = " << &tab[n-1] << endl;

    return 0;
}