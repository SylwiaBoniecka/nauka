/* Napisz program do sprawdzania, czy wpisana liczba x jest mniejsza, większa lub równa 
wpisanej liczba y. */

#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout << "Podaj liczbe x: ";
    cin >> x;
    cout << "Podaj liczbe y: ";
    cin >> y;

    if (x < y)
    {
        cout << x << " < " << y << endl;
    }
    else if (x == y)
    {
        cout << x << " = " << y << endl;
    }
    else
    {
         cout << x << " > " << y << endl;
    }   
    
    return 0;
}