#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, maxvalue(0), minvalue(1000), maxindex(0), minindex(0);
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > maxvalue)
        {
            maxindex = i;
            maxvalue = x;
        }
        if (x <= minvalue)
        {
            minindex = i;
            minvalue = x;
        }
    }
    if (maxindex > minindex)
    {
        cout << (maxindex - 1) + (n - minindex) - 1 << endl;
    }
    else
    {
        cout << (maxindex - 1) + ( n - minindex);
    }
    return 0;
}