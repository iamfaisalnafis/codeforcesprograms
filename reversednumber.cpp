#include <iostream>
using namespace std;

int main()
{
    int number, remainder, revnum = 0;
    cout << "Enter the number to reverse it: ";
    cin >> number;

    while (number != 0)
    {
        remainder = number % 10;
        revnum = revnum * 10 + remainder;
        number = number / 10;
    }
    cout << "Reversed Number is " << revnum;

    return 0;
}