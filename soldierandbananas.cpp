<<<<<<< HEAD
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long int k, n, w, ans(0);
    cin >> k >> n >> w;
    for(int i = 0; i <= w; i++)
    {
        ans += i * k;
    }
    ans -= n;
    if(ans < 0)
    {
        ans = 0;
    }
    cout << ans << endl;
    return 0; 
=======
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long int k, n, w, ans(0);
    cin >> k >> n >> w;
    for(int i = 0; i <= w; i++)
    {
        ans += i * k;
    }
    ans -= n;
    if(ans < 0)
    {
        ans = 0;
    }
    cout << ans << endl;
    return 0; 
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}