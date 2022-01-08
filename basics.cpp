#include <iostream>
using namespace std;

int main()
{
    int n, m = 0, flag = 0;
    cout << "Enter a number to check if it's a Prime number or not: ";
    cin >> n;
    m = n / 2;
    for (int i = 2; i <= m; i++)
    {
        if(n % i == 0)
        {
            cout << n <<" is not a Prime Number" << endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << n << " is a Prime Number" << endl;
    }
    return 0;
}
