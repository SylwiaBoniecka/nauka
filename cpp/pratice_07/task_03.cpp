/* Napisz program, który wypełni 20 elementową tablice elementami z liczb losowymi od -10 do 10
(wskazówka rand ()% 21-10). Zapisuj tylko liczby parzyste na ekranie. */

#include <iostream>
#include <iomanip>

using namespace std;

void generator(int[], int);

void print(int[], int);

int main()
{
    int n = 20;
    int tab[n];
    generator (tab, n);
    print (tab, n);
    cout << "Liczby parzyste z tablicy";
    for (int i = 0; i < n; i++)
    {
        if (tab[i] % 2 == 0)
        {
            cout << setw(4) << tab[i];
        }
    }
    cout << endl;

    return 0;
}

void generator (int t[], int x)
{
    srand(time(0));
    for (int i = 0; i < x; i++)
    {
        t[i] = rand() % 21 - 10;
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
