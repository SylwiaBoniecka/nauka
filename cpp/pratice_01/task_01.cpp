/* Napisz program, który poprosi użytkownika o podanie dwóch liczb calkowitych. 
Wyświetlaj je na ekranie. Obserwuj co się stanie, jeśli wpiszesz liczbę ujemną 
i liczbę zmiennoprzecinkową. */

#include <iostream>
using namespace std;

int main()
{
    int liczba1, liczba2;
    
    cout << "Podaj dwie liczby calkowite" << endl;
    cin >> liczba1 >> liczba2;

    cout << "Pierwsza liczba to: " << liczba1 << endl;
    cout << "Druga liczba to: " << liczba2 << endl;

    return 0;
}