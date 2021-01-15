#include <iostream>
#include <string>

using namespace std;

int main()
{
    string firstName;
    string lastName;
    firstName = "Sylwia";
    lastName = "Boniecka";
    cout << "firstName = " << firstName << endl;
    cout << "lastName = " << lastName << endl;

    string fullName;
    fullName = firstName + " " + lastName;
    cout << "fullName = firstName + " " + lastName \t" << fullName << endl; 

    string fullName2 = firstName + " " + lastName;
    cout << "string fullName2 = firstName + " " + lastName \t" << fullName2 << endl;

    return 0;
}