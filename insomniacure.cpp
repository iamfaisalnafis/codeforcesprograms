<<<<<<< HEAD
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    bool arr[d];
    for (int i = 0; i < d; i++)
    {
        if(!((i + 1) % k) || !((i + 1) % l) || !((i + 1) % m) || !((i + 1) % n))arr[i] = 1;
        else
        {
            arr[i] = 0;
        }    
    } 
    cout << count(arr, arr+d, 1);
    return 0;
=======
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    bool arr[d];
    for (int i = 0; i < d; i++)
    {
        if(!((i + 1) % k) || !((i + 1) % l) || !((i + 1) % m) || !((i + 1) % n))arr[i] = 1;
        else
        {
            arr[i] = 0;
        }    
    } 
    cout << count(arr, arr+d, 1);
    return 0;
>>>>>>> b9f7f5e043190485111f18651093313dd6b4ade8
}