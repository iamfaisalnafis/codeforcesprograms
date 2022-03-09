#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int i = 0, j = n - 1, turn(0);
    int s(0), d(0);
    while(i <= j)
    {
        int temp;
        if (arr[i] > arr[j])
        {
            temp = arr[i];
            i++;
        }
        else
        {
            temp = arr[j];
            j--;
        }
        if (turn == 0)
        {
            s = s + temp;
            turn = 1; 
        }
        else
        {
            d = d + temp;
            turn = 0;
        }
    }
    cout << s << " " << d << endl;
    return 0;
}
