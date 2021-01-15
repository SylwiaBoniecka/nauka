/* Napisz program, który oblicza pole koła. Załaduj promień okręgu (r) i wyświetl 
wynik na ekran. Aby użyć liczby PI, użyj instrukcji M_PI i dodaj dyrektywy przed główną funkcją
#define _USE_MATH_DEFINES
#includ <cmath>         */

#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;

int main()
{
    int r;
    cout << "Podaj promien kola: ";
    cin >> r;
    cout << "Pole kola o promieniu " << r << " wynosi " << M_PI*r*r << endl;

    return 0;
}