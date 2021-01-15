/* Napisz program, który wypełnia tablicę n elementów (zdefiniowanych przez użytkownika) 
losowymi liczbami od 0 do 99. Sortuj tablicę za pomocą wybranego algorytmu sortowania. 
Wpisz medianę (wartość środkowa) na ekranie. */

#include <iostream>
#include <iomanip>

using namespace std;

void generator(int[], int);

void print(int[], int);

void bubble(int[], int);

double mediana (int[], int);

int main()
{
    int n;
    cout << "Podaj rozmiar tablicy ";
    cin >> n;
    int tab[n];
    generator (tab, n);
    print (tab, n);
    bubble (tab, n);
    print (tab,n);
    cout << "Mediana zestawu liczb wynosi " << mediana (tab, n) << endl;

    return 0;
}

void generator (int t[], int x)
{
    srand(time(0));
    for (int i = 0; i < x; i++)
    {
        t[i] = rand() % 100;
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

void bubble (int t[], int z)
{
    int a;
    for (int i = 1; i <= z; i++)
    {
        for (int j = 0; j < z - i; j++)
        {
            if (t[j] > t[j+1])
            {
                a = t[j];
                t[j] = t[j+1];
                t[j+1] = a;
            }
        }
    }
}

double mediana(int t[], int k)
{
    double med = 0;
    if (k % 2 == 0)
    {
        med = (t[k/2] + t[k/2-1]) / 2.0;
    }
    else
    {
        med = t[(k-1)/2];
    }
    return med;
}