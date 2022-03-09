<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;
    cout << "Enter the number to find the sum of previous Natural Numbers: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        cout << i << " + ";
        sum = sum + i;
    }
    cout << "The total sum is: " << sum;
    return 0;
=======
#include <iostream>
using namespace std;

int main()
{
    int number, sum = 0;
    cout << "Enter the number to find the sum of previous Natural Numbers: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        cout << i << " + ";
        sum = sum + i;
    }
    cout << "The total sum is: " << sum;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}