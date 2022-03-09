<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter a first number: ";
    cin >> a;
    cout << endl;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "Before Swapping: " << endl << "a = " << a << endl << "b = " << b;

    temp = a;
    a = b;
    b = temp;
    cout << endl;

    cout << "After Swapping: " << endl << "a = " << a << endl << "b = " << b;
    return 0;
=======
#include <iostream>
using namespace std;

int main()
{
    int a, b, temp;
    cout << "Enter a first number: ";
    cin >> a;
    cout << endl;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "Before Swapping: " << endl << "a = " << a << endl << "b = " << b;

    temp = a;
    a = b;
    b = temp;
    cout << endl;

    cout << "After Swapping: " << endl << "a = " << a << endl << "b = " << b;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}