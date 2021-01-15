/* Napisz funkcję, która oblicza sume wszystkich wartości w tablicy. 
Wypełnij tablicę losowo liczbami całkowitymi od 0 do 99. 
Ustaw rozmiar tablicy na 20. Niech zmieniają się liczby losowe za każdym razem, 
gdy uruchamiasz program. Wyświetl wartości tabeli i obliczoną sumę na ekranie. */

#include <iostream>
#include <iomanip>

using namespace std;

void generator(int[], int);

void print(int[], int);

int sum(int[], int);

int main()
{
    int n = 20;
    int tab[n];
    generator (tab, n);
    print (tab, n);
    cout << "Suma liczb w tablicy wynosi: " << sum (tab, n) << endl;

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

int sum (int t[], int z)
{
    int suma=0;
    for (int i = 0; i < z; i++)
    {
        suma = suma + t[i];
    }
    return suma;
}