/* Napisz program, który dla podanej liczby całkowitej nieujemnej n, obliczy sumę 
wszystkich jej cyfr i wyświetli otrzymany wynik, a następnie powtórzy te dwie czynności
dla obliczonej sumy, itd. Ten proces winien być zakończony, gdy obliczona suma cyfr 
będzie liczbą jednocyfrową, np. dla n=7895, należy wyświetlić liczby: 29, 11, 2. */

#include <iostream>
using namespace std;

int suma_cyfr(int n)
{
    int s=0;
    while (n>0)
    {
        s=s+(n%10);
        n=n/10;
    }
    return s;
}

int main()
{
    int n;
    cout << "Podaj liczbe nieujemna: ";
    cin >> n;

    while (n<0)
    {
        cout << "Podales liczbe nie jest liczba nieujemna. " << endl;
        cout << "Podaj dowolna liczbe naturalna: ";
        cin >> n;
    }

    while (n > 9)
    {
        cout << suma_cyfr(n) << " ";
        n=suma_cyfr(n);
    }
    
    cout << endl;

    return 0;
}