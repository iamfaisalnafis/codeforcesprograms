#include <iostream>
using namespace std;

int main()
{
    int ly;
    cout << "Enter the year to check: ";
    cin >> ly;

    if (ly % 4 == 0)
    {
        if(ly % 100 == 0) 
        {
            if (ly % 400 == 0)
            {
                cout << ly <<" is a Leap Year.";
            }
            else
            {
                cout << ly << " is not a Leap Year.";
            }
        }      
        else
            {
                cout << ly << " is a Leap Year.";
            }
    }
    else
    {
        cout << ly << " is not a Leap Year..";
    }

}