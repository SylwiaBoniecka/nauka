#include <iostream>

using namespace std;

int main()
{
    int arr[6];
    arr[0] = 3;

    cout << "arr[0] = " << *arr << " \t address arr: " << arr << endl;
    cout << "arr[0] = " << *arr << " \t address &arr[0]: " << &arr[0] << endl;

    return 0;
}