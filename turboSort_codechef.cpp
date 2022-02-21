#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    vector<int> n;
    while (t--)
    {
        int a;
        cin >> a;
        n.push_back(a);
    }
    sort(n.begin(), n.end());
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i] << "\n";
    }

    return 0;
}
