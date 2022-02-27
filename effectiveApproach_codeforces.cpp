#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[100005], num;
    for (int i = 1; i <= n; i++)
    {
        cin >> num;
        nums[num] = i;
    }
    int m, q;
    long long vasya(0), petya(0);
    cin >> m;
    while (m--)
    {
        cin >> q;
        vasya += nums[q];
        petya += n - nums[q] + 1;
    }
    cout << vasya << " " << petya;
    return 0;
}
