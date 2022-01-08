#include <iostream>

using namespace std;

int main()
{
    int n, ans(0);
    cin >> n;
    int a[] = {5, 4, 3, 2, 1};
    for(int i = 0; i < 5; i++)
    {
        ans = ans + n / a[i];
        n = n % a[i];
    }
    cout << ans << endl;
    return 0;
}