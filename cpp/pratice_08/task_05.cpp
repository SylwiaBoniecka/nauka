/* Zdefiniuj tablice 10-elementową. Wyświetl elementy tablicy ze wskaźnikami 
i adres każdego elementu tablicy przy użyciu pętli for. */

#include <iostream>
using namespace std;

int main()
{
    int tab[10] = {13, 56, 99, 7, 101, 36, 45, 57, 0, 9};

    for (int i = 0; i < 10; i++)
    {
        cout << "tab[" << i << "] = " << *(tab+i) << "\t address: " << tab + i << endl;
    }

    return 0;
}