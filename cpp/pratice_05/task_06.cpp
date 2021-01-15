/* Napisz program, który zdefiniuje tablicę 4 elementów typu string. 
Wypełnij tablicę nazwami i wyświetl wszystkie jej elementy na ekranie. */

#include <iostream>
using namespace std;

int main()
{
    string tab[4] = {"Diego", "Tosia", "Sylwia", "Andrzej"};

    for (int i=0; i < 4; i++)
    cout << "tab[" << i << "] = " << tab[i] << endl;

    return 0;
}