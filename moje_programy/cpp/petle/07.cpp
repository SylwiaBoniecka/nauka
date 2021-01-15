/*Napisz program, który wczytuje z klawiatury poprawny numer miesiąca, 
tzn. liczbę z przedziału <1,12> . Zakładamy, że możliwe są tylko 3 próby podania
poprawnego numeru. */

#include <iostream>
using namespace std;

int main()
{
    int miesiac;
    int proba=0;

    do
    {
        cout << "Podaj numer miesiaca: ";
        cin >> miesiac;
        proba=proba+1;  
    } while (((miesiac<1 || miesiac>12) && proba<5));

    cout << "Liczba prob wpisania poprawnie numeru miesiaca: " << proba << endl;

    return 0;
}