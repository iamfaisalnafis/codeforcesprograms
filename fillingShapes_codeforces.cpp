#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        long long result = pow(2, (n/2));
        cout << result << endl;
    }
    return 0;
}
