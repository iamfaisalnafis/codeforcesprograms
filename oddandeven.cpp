#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Enter the starting range: ";
    cin >> num1;
    cout << endl;
    cout << "Enter the ending range: ";
    cin >> num2;

    for (int i = num1; i <= num2; i++)
    {
        if (i % 2 == 0)
        {
            cout << "[" << i << "]";
        }
    }
    return 0;
}