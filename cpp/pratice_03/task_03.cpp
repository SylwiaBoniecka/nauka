/* Napisz program do przeliczania jednostki długości (mm, cm, m). Użyj funkcji swich,
aby zapytać, jaka stosowana jest jednostka długości.
Enter length: 500
What unit?
0 - mm
1 - cm
2 - m
500 mm = 50 cm = 0.5 m          */

#include <iostream>
using namespace std;

int main()
{
    double lenght;
    char unit;
    cout << "Enter length: ";
    cin >> lenght;

    if (lenght<0)
    {
        cout << "Length must be possitive";
    }
    else 
    {
        cout << "Define units: " << endl;
        cout << " 0 - mm" << endl;
        cout << " 1 - cm" << endl;
        cout << " 2 - m" << endl;
        cout << "What your unit? ";
        cin >> unit;

        switch (unit)
        {
            case '0':
                cout << lenght << " mm = " << lenght/10 << " cm = " << lenght/1000 << " m " << endl;
                break;
            case '1':
                cout << lenght << " cm = " << lenght*10 << " mm = " << lenght/100 << " m " << endl;
                break;
            case '2':
                cout << lenght << " m = " << lenght*100 << " cm = " << lenght*1000 << " mm " << endl;
                break; 
            default:
                cout << "You enter the wrong value" << endl;
                break; 
        }
    }
    return 0;
}