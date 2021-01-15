/* Napisz program, który dla wczytanej z klawiatury liczby całkowitej 
wypisuje sumę cyfr tej liczby. */

#include <iostream>
using namespace std;

int main()
{
    int liczba;
    int x;

    cout << "Podaj dowolna liczbe calkowita: ";
    cin >> liczba;

    if (liczba>=0)
    {
        x=liczba;
    }
    else
    {
        x=-liczba;
    }

    int suma=0;
    int y;
    y=x;                    //x=1234;
    while (y>0)             //KROK 1               //KROK 2              //KROK3             //KROK 4
    {                       //y=1234               //y=123               //y=12              //y=1
        suma=suma+(y%10);   //suma=0+(1234%10)=4   //suma=4+(123%10)=7   //suma=7+(12%10)=9  //suma=9+(1%10)=10
        y=y/10;             //y=1234/10=123        //y=123/10=12         //y=12/10=1         //y=1/10=0
    }

    cout << "Suma cyfr liczby " << liczba << " wynosi " << suma << endl;

    return 0;
}