/* Napisz program wczytujący z klawiatury liczbę całkowitą. Program powinien przyjmować
jedynie liczbę dodatnią. Jeśli użytkownik poda liczbę ujemną, to powinien zostać 
poinformowany, że wymagana jest liczba dodatnia i poproszony o kolejną liczbę. 
Próbę wczytywania liczby powtarzamy dopóty, dopóki użytkownik nie poda liczby poprawnej 
(dodatniej). */
// z uzyciem petli while

#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe dodatnia: ";
    cin >> liczba;

    while (liczba<=0)
    {
        cout << "Podales liczbe ujemna." << endl;
        cout << "Podaj liczbe dodatnia: ";
        cin >> liczba;
    }
    
    cout << "Liczba dodatnia wynosi: " << liczba << endl;

    return 0;
}