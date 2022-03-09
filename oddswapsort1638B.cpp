#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, a, n;
    cin >> t;
    while (t--)
    {
        vector<int> odd, even, ve, vo;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a % 2 == 0)
            {
                even.push_back(a);
                ve.push_back(a);
            }
            else
            {
                odd.push_back(a);
                vo.push_back(a);
            }
        }
        sort(ve.begin(), ve.end());
        sort(vo.begin(), vo.end());

        if (odd == vo && even == ve)
        {
            cout << "Yes" << "\n";
        }
        else
        {
            cout << "No" << "\n";
        }
    }
    return 0;
}
