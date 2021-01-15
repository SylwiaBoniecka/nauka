#include <iostream>
#include <string>
using namespace std;
int main()
{
    string PIN = "1234";
    int proby = 0;
    int pozostalo = 5;
    string pass;
        
    while ((pass != PIN) && (proby < 5))
    {
        cout << "Podaj kod PIN: ";
        cin >> pass;
        proby=proby+1;
        pozostalo=pozostalo-1;
        cout << "Pozostalo " << pozostalo << " prob wpisania PINu." << endl;
    }
    //there is no information about the correct input of the PIN code

    cout << "Liczba prob wpisania kodu PIN przez urzytkownika to: " << proby << endl;

    return 0;
}