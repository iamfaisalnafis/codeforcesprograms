#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c(0), d(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        d -= a;
        d += b;
        c = max(c, d);
    }
    cout << c;
    return 0;
}