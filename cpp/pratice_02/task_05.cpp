/* Napisz program do zweryfikowania praw de Morgana dla dwóch liczb całkowitych
wprowadzonych przez użytkownika. Równania:
!p&&q==!p||!q
!p||q==!p&&!q               */

#include <iostream>
using namespace std;

int main()
{
    bool p,q;  //it should be two integers
    cout << "Podaj wartosc logiczna p (0 lub 1): ";  //please remove (0 lub 1)
    cin >> p;
    cout << "Podaj wartosc logiczna q (0 lub 1): ";  //please remove (0 lub 1)
    cin >> q;

    cout << " !(p&&q) == !p||!q   " << (!(p && q) == (!p || !q)) << endl;
    cout << " !(p||q) == !p&&!q   " << (!(p || q) == (!p && !q)) << endl;

    return 0;
}