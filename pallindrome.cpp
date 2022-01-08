#include <iostream>
using namespace std;

int main()
{
    int number, reversenumber = 0, remainder;
    cout << "Enter a number to check if it is a Pallindromic Number: ";
    cin >> number;

    int n = number;

    do
    {
        remainder = number % 10;
        reversenumber = (reversenumber * 10) + remainder;
        number = number / 10;
    }
    while (number != 0);
    
    cout << "The reverse of the number is: " << reversenumber << endl;
    
    if (n == reversenumber)
    {
        cout << "Number is Pallindromic ";
    }
    else
    {
        cout << "Number is not Pallindromic. ";
    }
    return 0;
}