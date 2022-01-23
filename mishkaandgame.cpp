#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, m(0), c(0), d(0);
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a > b)
        {
            m++;
        }
        else if (a < b)
        {
            c++;
        }
        else
        {
            d++;
        }
    }

    if(m > c)
    {
        cout << "Mishka" << endl;
    }
    else if (m < c)
    {
        cout << "Chris";
    }
    else if (m == c)
    {
        cout << "Friendship is magic!^^" << endl;
    }
    return 0;
}
