#include <iostream>
using namespace std;

int main()
{
    int multiNumber, length;
    cout << "Enter the number for which you want to generate the table: ";
    cin >> multiNumber;

    cout << endl;
    
    cout << "Enter the number until which you want the table to be generated: ";
    cin >> length;

    for (int i = 1; i <= length; i++)
    {
        cout << multiNumber << " * " << i << " = " << multiNumber * i << endl;
    }
    return 0;
}