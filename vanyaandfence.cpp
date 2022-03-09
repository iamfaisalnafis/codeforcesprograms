<<<<<<< HEAD
# include <iostream>

using namespace std;

int main()
{
    int n, h, ans(0);
    cin >> n >> h;
    int a[n+10];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > h)
        {
            ans += 2;
        }
        else
        {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
=======
# include <iostream>

using namespace std;

int main()
{
    int n, h, ans(0);
    cin >> n >> h;
    int a[n+10];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > h)
        {
            ans += 2;
        }
        else
        {
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}