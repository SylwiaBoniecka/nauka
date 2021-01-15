#include <iostream>
#include <string>
using namespace std;
int main()
{
    string PIN = "1234";
    int proby = 0;
    string pass;
        
    while ((pass != PIN) && (proby < 5))
    {
        cout << "Podaj kod PIN: ";
        cin >> pass;
        proby=proby+1;
    }  //there is no information about the correct input of the PIN code

    cout << "Liczba prob wpisania kodu PIN przez uzytkownika to: " << proby << endl;

    return 0;
}