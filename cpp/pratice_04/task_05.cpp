/* Napisz program, który odwraca kolejność cyfr liczby całkowitej */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int liczba;
    cout << "Podaj dowolna liczbe: ";
    cin >> liczba;

    int odwrotna=0;
    int potega=0;
    int dziesiatka=0;
    int kopia=liczba;                     
                                     // liczba=123   kopia=123
    while( ((kopia%10)>0))           
    {                                // KROK 1               KROK 2                KROK 3
        kopia=kopia/10;              // kopia=123/10=12      kopia=12/10=2         kopia=2/10=0
        dziesiatka=pow(10,potega);   // dziesiatka=10^0=1    dziesiatka=10^1=10    dziesiatka=10^2=100
        potega=potega+1;             // potega=0+1=1         potega=1+1=2          potega=2+1=3
    }

    kopia=liczba;                                   // dziesiatka=100   kopia=123
    while( ((kopia%10)>0))
    {                                              // KROK 1                            KROK 2                            KROK 3
        odwrotna=odwrotna+(kopia%10)*dziesiatka;   // odwrotna=0+(123%10=3)*100=300     odwrotna=300+(12%10=2)*10=320     odwrotna=320+(1%10=1)*1=321
        dziesiatka=dziesiatka/10;                  // dziesiatka=100/10=10              dziesiatka=10/10=1                dziesiatka=1/10=0
        kopia=kopia/10;                            // kopia=123/10=12                   kopia=12/10=1                     kopia=1/10=0
    }

    /* alternative soultion
    while (liczba) {
		odwrotna = 10 * odwrotna + liczba % 10;
		liczba /= 10;
	}*/

    cout << "Liczba " << liczba << " po odwroceniu kolejnosci cyfr ma postac: " << odwrotna << endl;

    return 0;
}