<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int exponent;
    float base, result = 1;
    cout << "Enter the base value: ";
    cin >> base;

    cout << "Enter the exponential value: ";
    cin >> exponent;

    cout << base << " ^ " << exponent << " = ";

    while (exponent != 0)
    {
        result = result * base;
        exponent--;
    }
    cout << result;

    return 0;
=======
#include <iostream>
using namespace std;

int main()
{
    int exponent;
    float base, result = 1;
    cout << "Enter the base value: ";
    cin >> base;

    cout << "Enter the exponential value: ";
    cin >> exponent;

    cout << base << " ^ " << exponent << " = ";

    while (exponent != 0)
    {
        result = result * base;
        exponent--;
    }
    cout << result;

    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}