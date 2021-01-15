/* Napisz program wczytujący z klawiatury liczbę całkowitą. Program powinien przyjmować
jedynie liczbę dodatnią. Jeśli użytkownik poda liczbę ujemną, to powinien zostać 
poinformowany, że wymagana jest liczba dodatnia i poproszony o kolejną liczbę. 
Próbę wczytywania liczby powtarzamy dopóty, dopóki użytkownik nie poda liczby poprawnej 
(dodatniej). */
// z uzyciem petli do... while

#include <iostream>
using namespace std;

int main()
{
    int liczba;

    do
    {
        cout << "Podaj liczbe dodatnia: ";
        cin >> liczba;
    } while (liczba<=0);

    cout << "Liczba dodatnia wynosi: " << liczba << endl;
    
    return 0;
}