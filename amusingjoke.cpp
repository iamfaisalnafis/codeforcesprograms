#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a, b, ab, sum;
    cin >> a >> b >> ab;
    sum = a + b;
    sort(sum.begin(), sum.end());
    sort(ab.begin(), ab.end());
    if(sum == ab)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}