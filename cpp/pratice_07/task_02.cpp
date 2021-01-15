/* Napisz program, który zdefiniuje tablicę 20 losowo wybranych liczb od 0 do 999.
Napisz funkcję, która wskaże minimalne i maksymalne wartości w tablicy. 
Wyświetl całą tablicę, maksimum i minimum na ekranie */

#include <iostream>
#include <iomanip>

using namespace std;

void generator(int[], int);

void print(int[], int);

int min(int[], int);

int max(int[], int);

int main()
{
    int n = 20;
    int tab[n];
    generator (tab, n);
    print (tab, n);
    cout << "Minimum = " << min(tab, n) << endl;
    cout << "Maksimum = " << max(tab,n) << endl;

    return 0;
}

void generator (int t[], int x)
{
    srand(time(0));
    for (int i = 0; i < x; i++)
    {
        t[i] = rand() % 1000;
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

int min (int t[], int a)
{
    int minimum = t[0];
    for (int i = 0; i < a; i++)
    {
        if (minimum > t[i])
            {
                minimum = t[i];
            }
    }
    return minimum;
}

int max (int t[], int b)
{
    int maximum =t[0];
    for (int i = 0; i < b; i++)
    {
        if (maximum < t[i])
        {
            maximum = t[i];
        }
    }
    return maximum;
}