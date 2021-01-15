/* Napisz program, który prosi o podanie danych studenta: imię, nazwisko, numer indeksu,
rok i semestr. Wyświetl dane w przedstawionym formacie:
Hi (first_name) (last_name)! Your index number is (index_number). You are on (term) 
term on (field_of_study) */

#include <iostream>
#include <string> 
using namespace std;

int main()
{
    string name, surname, field;
    int index, term; 

    cout << "First name: ";
    cin >> name;

    cout << "Last name: ";
    cin >> surname;

    cout << "Index number: ";
    cin >> index;

    cout << "Term: ";
    cin >> term;

    cout << "Field of study: ";
    cin >> field;  //what if field will consist of two words, eg. information technology
    
    cout << "Hi " << name << " " << surname << "! Your index number is " << index << ". You are on " << term << " term on " << field << endl;

    return 0;
}