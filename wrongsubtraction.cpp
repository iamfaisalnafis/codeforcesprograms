#include <iostream>

using namespace std;

int main()
{
    int n(0), k(0), digit, result;
    cin >> n >> k;

    for (int i = 1; i <= k; i++)
    {
        digit = n % 10;
        if (digit == 0)
        {
            n = n / 10;
        }
        else
        {
            n = n - 1;
        }
    }
    cout << n << endl;
    return 0; 
}