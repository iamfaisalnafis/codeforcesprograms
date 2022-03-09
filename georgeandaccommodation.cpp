<<<<<<< HEAD
#include <iostream>

using namespace std;

int main()
{
    int n, ans(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;
        if(q - p >= 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
=======
#include <iostream>

using namespace std;

int main()
{
    int n, ans(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;
        if(q - p >= 2)
        {
            ans++;
        }
    }
    cout << ans << endl;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}