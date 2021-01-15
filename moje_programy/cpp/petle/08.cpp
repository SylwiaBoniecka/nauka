/* Napisz instrukcję iteracyjną, która pobiera od użytkownika znak typu char 
do momentu, gdy jest on literą 't', 'T', 'n', lub 'N'. */

#include <iostream>
using namespace std;

int main()
{
    char znak;
    cout << "Podaj znak typu char: ";
    cin >> znak;

    while (znak!='t' && znak!='T' && znak!='n' && znak!='N')
    {
        cout << "Podaj znak typu char: ";
        cin >> znak;
    }

    return 0;
}
