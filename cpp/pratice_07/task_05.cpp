/* Napisz program, który wypełni 10 elementów tablicy losowymi liczbami od 1 do 10. 
Jeśli tablica zawiera liczbę 7, drukuj "Świetnie! Wygrałeś!". */

#include <iostream>
#include <iomanip>

using namespace std;

void generator(int[], int);

void print(int[], int);

void winner(int[], int);

int main()
{
    int n = 10;
    int tab[n];
    generator (tab, n);
    print (tab, n);
    winner (tab, n);

    return 0;
}

void generator (int t[], int x)
{
    srand(time(0));
    for (int i = 0; i < x; i++)
    {
        t[i] = rand() % 10;
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

void winner (int t[], int z)
{
    for (int i = 0; i < z; i++)
    {
        if (t[i] == 7)
        {
            cout << "Swietnie! Wygrales!" << endl;
        }
    }
}