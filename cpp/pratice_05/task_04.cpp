/* Napisz program, który zdefiniuje tablicę 5 liczb ustawianych przez użytkownika. 
Zapytaj użytkownika o mnożnik dla wszystkich elementów w tablicy. 
Wyświetl obie tablice na ekranie: przed i po modyfikacji */

#include <iostream>
using namespace std;

int main()
{
    int tab[5];
    for (int i=0; i<5; i++)
    {
        cout << "tab[" << i << "] = ";
        cin >> tab[i];
    }

    int n;
    cout << "Podaj liczbe calkowita przez ktora maja byc pomonozone elemnty tablicy " ;
    cin >> n;

    for (int i=0; i<5; i++)
    {
        tab[i] = tab[i] * n;
        cout << "tab[" << i << "] = " << tab [i] << endl;
    }
    return 0;
}