/* Zdefiniuj dwie zmienne a i b typu int. Przypisz dowolne wartości do nich. 
Zdefiniuj referencje zmiennej dla zmiennej a. Zmodyfikuj wartości zmiennych a i b. 
Wyświetl wszystkie wartości zmiennych a, b i ref. 
Jeśli adresy ref i a są takie same, wyświetl komunikat „Great, you got the reference right.” */

#include <iostream>
using namespace std;

int main()
{
    int a = 13;
    int b = 7;

    cout << "a = " << a << "\t adress: " << &a << endl;
    cout << "b = " << b << "\t adress: " << &b << endl;

    int &ref = a;   //referencja
    cout << "ref = " << ref << "\t adress: " << &ref << endl;
    cout << endl;

    a = 69;
    b = 25;

    cout << "a = " << a << "\t adress: " << &a << endl;
    cout << "b = " << b << "\t adress: " << &b << endl;
    cout << "ref = " << ref << "\t adress: " << &ref << endl;

    if (&a == &ref)
    {
        cout << "Great, you got the reference right.!" << endl;
    }

    return 0;
}