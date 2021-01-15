/* Napisz program do obliczania potęgi 2 dla wykładnika z zakresu 
od 0 do 16. Użyj funkcji pow ()  */

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    for (int i = 0; i <= 16; i++)
    {
        cout << "2 to the power of " << i << " is " << pow(2,i) << endl;
    }
    return 0;
}