/* Write a program that display Christmas tree consist of asterisk like on pattern below
      *
    * * *
  * * * * *
* * * * * * *                                                                           */


#include <iostream>
using namespace std;

int main()
{
    /*
    cout << "      *" <<endl; 
    cout << "    * * *" <<endl;
    cout << "  * * * * *" <<endl;
    cout << "* * * * * * *" << endl;
    */

    uint height = 4;
    for(uint h=1; h<=height; h++)
    {
        //spaces
        for(uint spaces=(height-h); spaces>0; spaces-- )
        {
            cout << "  ";
        }

        //stars left
        for(uint starts=1; starts<=h; starts++)
        {
            cout <<"* ";
        }

        //start rigt
        for(uint starts=1; starts<=h-1; starts++)
        {
            cout <<"* ";
        }

        // next lvl
        cout << endl;
    }

    return 0;
}