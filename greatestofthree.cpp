<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << endl;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << endl;
    cout << "Enter number 3: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " is greater than " << num2 << " & " << num3;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << num2 << " is greater than " << num1 << " & " << num3;
    }
    else
    {
        cout << num3 << " is greater than " << num1 << " & " << num2;
    }
    cout << endl;
    return 0;
=======
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;
    cout << "Enter number 1: ";
    cin >> num1;
    cout << endl;
    cout << "Enter number 2: ";
    cin >> num2;
    cout << endl;
    cout << "Enter number 3: ";
    cin >> num3;

    if (num1 > num2 && num1 > num3)
    {
        cout << num1 << " is greater than " << num2 << " & " << num3;
    }
    else if (num2 > num1 && num2 > num3)
    {
        cout << num2 << " is greater than " << num1 << " & " << num3;
    }
    else
    {
        cout << num3 << " is greater than " << num1 << " & " << num2;
    }
    cout << endl;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}