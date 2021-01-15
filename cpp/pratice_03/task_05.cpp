/* Napisz program, który rozwiązują równanie kwadratowe. */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c;
    double delta;

    cout << "Program oblicza rozwiazania rownania kwadratowego ax^2+bx+c=0" << endl;
    cout << "Podaj wspolczynniki a, b, c : ";
    cin >> a >> b >> c;
    cout << " a = " << a << "  b = " << b << "  c = " << c << endl;
    
    if (a!=0)
    {
        delta = b*b-4*a*c;
        cout << "delta = " << delta << endl;
        if (delta>0)
        {
            double x1, x2;
            x1=(-b-sqrt(delta))/(2*a);
            x2=(-b+sqrt(delta))/(2*a);
            cout << "Równanie kwadratowe ma dwa rozwiazania" << endl;
            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
        else if (delta==0)
        {
            double x0;
            x0=-b/(2*a);
            cout << "Równanie kwadratowe ma jedno rozwiazanie" << endl;
            cout << "x0 = " << x0 << endl;
        }
        else
        {
            cout << "Równanie kwadratowe ma rozwiazania zespolone" << endl;
            double n;   //sqrt(delta)=sqrt(-n)
            n=abs(delta);
            cout << "x1 = " << -b/2*a << " + " << sqrt(n)/2*a << "i" << endl;
            cout << "x2 = " << -b/2*a << " - " << sqrt(n)/2*a << "i" << endl;
        }
    }
    else
    {
        cout << "To nie jest rownanie kwadatowe. Program obliczy rozwiazania rownania liniowego bx+c=0 " << endl;
        if (b!=0)
        {
            double x=0;
            x=-c/b;
            cout << "Rownanie liniowe ma jedno rozwiazanie" << endl;
            cout << "x = " << x << endl;
        }
        else if (b==0 && c==0)
        {
            cout << "Rownanie liniowe nie ma rozwiazan" << endl;
        }
        else
        {
            cout << "Rownanie liniowe ma nieskonczenie wiele rozwiazan" << endl;
        }
    }

    
    return 0;
}
