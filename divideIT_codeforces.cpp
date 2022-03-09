#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long cnt2(0), cnt3(0), cnt5(0);
        while (n % 2 == 0)
        {
            n /= 2;
            cnt2++;
        }
        while (n % 3 == 0)
        {
            n /= 3;
            cnt3++;
        }
        while (n % 5 == 0)
        {
            n /= 5;
            cnt5++;
        }
        if (n != 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt2 + (cnt3 * 2) + (cnt5 * 3) << endl;
        }
    }
    return 0;
}
