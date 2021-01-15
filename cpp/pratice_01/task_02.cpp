/* Zadeklaruj po jednej zmiennej dla każdego typu: bool, int, float, char i double. 
Przydziel im dowolnie możliwą wartość. Wyświetl dane na ekranie w prezentowanym formacie:
Data type (data_type) has value equals (value_of_data) and size equals (size_of_data)
Do określenia rozmiaru zmiennej użyj funkcji: sizeof (), np. sizeof int). */

#include <iostream>
using namespace std;

int main()
{
    bool my_bool;
    my_bool = true;
    int my_int = 5;
    float my_float = -4.5;
    char my_char = 'S';
    double my_double = -56689.457;

    cout << "Dara type boolean has value equals " << my_bool << " and size " << sizeof(bool) << endl; //sizeof(my_bool)
    cout << "Dara type character has value equals " << my_char << " and size " << sizeof(char) << endl;
    cout << "Dara type integer has value equals " << my_int << " and size " << sizeof(int) << endl;
    cout << "Dara type floating has value equals " << my_float << " and size " << sizeof(float) << endl;   
    cout << "Dara type double floating has value equals " << my_double << " and size " << sizeof(double) << endl;

    return 0;
}