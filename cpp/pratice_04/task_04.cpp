/* Napisz program, który obliczy liczbę wprowadzonych cyfr i ich sumę dla dowolnej liczby
n. Użyj dzielenia modulo, np. (123% 10 = 3). Na przykład w przypadku liczby 123 liczba
cyfry to 3, a ich suma to 6. */

#include <iostream>                      // KROK 1             KROK 2              KROK 3
#include <cmath>                         // kopia=123          kopia=12            kopia=1
using namespace std;                     // kopia%10=3         kopia%10=2          kopia%10=1
int main()                               // suma=0+3=3         suma=3+2=5          suma=5+1=6
{                                        // kopia=12           kopia=1             kopia=0
    int liczba;                          // cyfry=0+1=1        cyfry=1+1=2         cyfry=2+1=3
    cout << "Podaj dowolna liczbe: ";
    cin >> liczba;

    int suma=0;
    int cyfry=0;
    int kopia=liczba;

    if (liczba==0)
    {
        cout << "Suma cyfr liczby 0 wynosi: 0 " << endl;
        cout << "Liczba 0 sklada się z 1 cyfry" << endl;
    }
    else
    {
        while( (kopia%10)>0 )
        {
            suma = suma + (kopia%10);
            kopia = kopia / 10;
            cyfry=cyfry+1;
        }
        cout << "Suma cyfr liczby " << liczba << " wynosi: " << suma << endl;
        cout << "Liczba " << liczba << " sklada się z " << cyfry << " cyfr" << endl;
    }

    return 0;
}