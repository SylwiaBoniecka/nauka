/* Napisz program, który będzie symulował 1000 rzutów kostką sześcienną do gry, 
a następnie umieść liczbę rzutów w tabeli o rozmiarze 6 dla każdej liczby oczek */

#include <iostream>
#include <iomanip>

using namespace std;

void generator(int[], int);

void print(int[], int);

int six (int[], int);

int main()
{
    int n = 100;
    int tab[n];
    generator (tab, n);
    print (tab, n);
    cout << " '6' wyrzucono " << six (tab, n) << " razy" << endl;

    return 0;
}

void generator (int t[], int x)
{
    srand(time(0));
    for (int i = 0; i < x; i++)
    {
        t[i] = (rand() % 6) + 1;
    }
}

void print (int t[], int y)
{
    for (int i = 0; i < y; i++)
    {
        cout << setw(4) << t[i];
    }
    cout << endl;
}

int six (int t[], int z)
{
    int suma = 0;
    for (int i = 0; i < z; i++)
    {
        if (t[i] == 6)
        {
            suma = suma +1;
        }
    }
    return suma;
}