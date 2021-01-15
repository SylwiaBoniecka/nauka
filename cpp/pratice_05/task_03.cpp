/* Napisz taki program, który zdefiniuje tablicę 5 liczb całkowitych 
ustawionych przez użytkownika. Obliczy średnią wszystkich wartości w tablicy 
i wyświetl ją na ekranie */

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

    int suma = 0;
    double srednia = 0;
    for (int i=0; i<5; i++)
    {
        suma = suma + tab[i];
    }
    srednia = suma / 5.0;
    cout << "Srednia elementow tablicy wynosi: " << srednia << endl;

    return 0;
}