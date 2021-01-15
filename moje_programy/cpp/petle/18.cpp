/* Napisz program, który sprawdza czy więcej jest cyfr parzystych, 
czy nieparzystych we wczytanej liczbie */

#include <iostream>
using namespace std;

int main()
{
    int liczba;
    cout << "Podaj liczbe ";
    cin >> liczba;

    int kopia;
    int parzyste = 0;
    int nieparzyste = 0;
    kopia = liczba;
    
    while (kopia > 0)
    {
        if ( ((kopia % 10) % 2) == 0 )
        {
            parzyste = parzyste + 1;
        }
        else
        {
            nieparzyste = nieparzyste + 1;
        }
        kopia = kopia / 10;
    }

    cout << "Ilosc cyfr parzystych liczby " << liczba << " wynosi " << parzyste << endl;
    cout << "Ilosc cyfr nieparzystych liczby " << liczba << " wynosi " << nieparzyste << endl;

    if ( parzyste < nieparzyste)
    {
        cout << "Cyfr parzystych jest mniej niż nieparzystych." << endl;
    }
    else if ( parzyste > nieparzyste)
    {
        cout << "Cyfr parzystych jest wiecej niz nieparzystych." << endl;
    }
    else
    {
        cout << "Cyfr parzytych jest tyle samo co nieparzystych." <<endl;
    }

    return 0;
}