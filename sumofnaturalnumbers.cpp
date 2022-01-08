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
}