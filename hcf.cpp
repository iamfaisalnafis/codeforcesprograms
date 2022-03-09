<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, hcf, lcm;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << endl;

    cout << "Enter the second number: ";
    cin >> num2;

    if(num1 == 0 || num2 == 0)
    {
        cout << "Please enter non zero values";
        return 0;
    }

    if (num1 > num2)
    {
        int temp = num1;
        num2 =  num1;
        num1 = temp;
    }

    for (int i = 1; i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    cout << "HCF or GCD is: " << hcf;
    lcm = (num1 * num2)/hcf;
    cout << endl;
    cout << "Least Common Divisor is: " << lcm;

    return 0;
=======
#include <iostream>
using namespace std;

int main()
{
    int num1, num2, hcf, lcm;
    
    cout << "Enter the first number: ";
    cin >> num1;
    
    cout << endl;

    cout << "Enter the second number: ";
    cin >> num2;

    if(num1 == 0 || num2 == 0)
    {
        cout << "Please enter non zero values";
        return 0;
    }

    if (num1 > num2)
    {
        int temp = num1;
        num2 =  num1;
        num1 = temp;
    }

    for (int i = 1; i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    cout << "HCF or GCD is: " << hcf;
    lcm = (num1 * num2)/hcf;
    cout << endl;
    cout << "Least Common Divisor is: " << lcm;

    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}