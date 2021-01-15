/* Napisz program, który zdefiniuje tablicę dowolnych 10 liczb całkowitych. 
Wyświetlaj pierwszy, czwarty i ostatni element tablicy. W następnym kroku wyświetli 
wszystkie elementy na ekranie na dwa sposoby: w kolejności i w odwrotnej kolejności. */

#include <iostream>
using namespace std;

int main()
{
    int tab[10] = {2, 6, 9, 17, 15, 60, 34, 45, 39, 61};
    cout << "tab[0] = " << tab[0] << endl;
    cout << "tab[3] = " << tab[3] << endl;
    cout << "tab[9] = " << tab[9] << endl;
    cout << endl;

    for (int i=0; i<10; i++)
    cout << "tab[" << i << "] = " << tab[i] << endl; 
    cout << endl;

    for (int i=9; i>=0; i--)
    cout << "tab[" << i << "] = " << tab[i] << endl;

    return 0;
}