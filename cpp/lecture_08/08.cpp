#include <iostream>

using namespace std;

int main()
{
    int arr[6] = { 3, 7, 10, 20, 6, 12 };

    cout << "arr[0] = " << *arr << "\t address " << arr << endl;
    cout << "arr[3] = " << *(arr + 3) << "\t address: " << arr + 3 << endl;
    cout << "arr[3] = " << *arr + 3 << "\t address: " << arr + 3 << endl;

    cout << "*** all elements *** \n";
    for (int i = 0; i < 6; i++)
    cout << "arr[" << i << "] = " << *(arr+i) << endl;
    // printf("arr[%d] = %d \n", i, *(arr+i));
    
    return 0;
}