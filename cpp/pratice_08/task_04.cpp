/* Zdefiniuj tablica 3 elementową. Wyświetl elementy tablicy za pomocą wskaźników 
i adres każdego elementu tablicy. */

#include <iostream>
using namespace std;

int main()
{
    int tab[3] = {13, 56, 99};
    cout << "tab[0] = " << *tab << "\t address" << tab <<endl;
    cout << "tab[1] = " << *(tab + 1) << "\t address" << tab + 1 << endl;
    cout << "tab[2] = " << *(tab + 2) << "\t address" << tab + 2 << endl;

    return 0;
}