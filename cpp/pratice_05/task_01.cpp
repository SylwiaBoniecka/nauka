/* Napisz program, który na trzy sposoby zdefiniuje tablicę dowolnych 5 liczb całkowitych
• określając rozmiar
• określone przez użytkownika
• inicjalizując elementy.
Pokaz wszystkie elementy tablicy. */

#include <iostream>
using namespace std;

int main()
{
    int tab_1[5] = {13, 69, 6, 85, 90};
    for (int i = 0; i < 5; i++)
    {
        cout << "tab_1[" << i << "] = " << tab_1[i] << endl;
    
    }
    cout << endl;

    int n;
    cout << "Podaj rozmiar tablicy: ";
    cin >> n;
    int tab_2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> tab_2[i];
        cout << "tab_2[" << i << "] = " << tab_2[i] << endl;
    }
    cout << endl;

    int tab_3[] = {13, 17};
    cout << "tab_3[0] = " << tab_3[0] << endl;
    cout << "tab_3[1] = " << tab_3[1] << endl;
    cout << "Rozmiar tab_3 wynosi: " << sizeof(tab_3) / sizeof(tab_3[0]) << endl;

    return 0;
 }