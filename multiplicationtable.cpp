<<<<<<< HEAD
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
=======
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
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}