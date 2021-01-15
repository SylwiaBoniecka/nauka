/* Napisz funkcję, która przyjmuje trzy argumenty całkowite. Niech trzeci argument funkcji
bedzie wynikiem pomnożenia pierwszych dwóch argumentów. Wyślij argumenty funkcji w trzech
sposoby: według wartości, przez odniesienie i przez wskaźnik. */

#include <iostream>
 
using namespace std;
 
int mnozenie(int, int, int);
void mnozenie2(int, int, int &);
void mnozenie3(int, int, int *);
 
int main()
{
    int a = 10;    int b = 20;    int c = 0;
    mnozenie(a, b, c);
    cout << "a=" << a << ", b=" << b << ", c=" << mnozenie(a,b,c) << endl;
    c = 0;
    mnozenie2(a, b, c);
    cout << "a=" << a << ", b=" << b << ", c=" << c << endl;
    c = 0;
    int *wsk_c = &c;
    mnozenie3(a, b, wsk_c);
    cout << "a=" << a << ", b=" << b << ", c=" << c << endl;
    
}
int mnozenie(int x, int y, int m)
{
    m = x * y;
    return m;
}
 
void mnozenie2(int x, int y, int &m)
{
    m = x * y;
}
 
void mnozenie3(int x, int y, int *m)
{
    *m = x * y;
}