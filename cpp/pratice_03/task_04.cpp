/* Napisz program, który sprawdzi, czy dla trzech długosci a, b, c wprowadzonych przez użytkownika,
może zbudować trójkąt.
𝑎+𝑏>𝑐
𝑏+𝑐>𝑎
𝑐+𝑎>𝑏   */

#include <iostream>
using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter three segments a, b and c: " << endl;
    cin >> a >> b >> c;
    cout << "a =" << a << "  b = " << b << "  c = " << c << endl;

    if (a>0 && b>0 && c>0)
    {
        if (a+b>c && a+c>b && b+c>a)
        {
            cout << "From legth segments " << a << " " << b << " " << c << " triangle could be build" << endl;
        }
        else
        {
            cout << "From legth segments " << a << " " << b << " " << c << " triangle couldn't be build" << endl;
        }
    }
    else
    {
        cout << "Lenth segments must be possitive" << endl;
    }
    
    return 0;
}